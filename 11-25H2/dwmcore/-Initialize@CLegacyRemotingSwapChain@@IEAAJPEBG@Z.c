/*
 * XREFs of ?Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z @ 0x1802D55A8
 * Callers:
 *     ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802D4E90 (-Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetB.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1802D4FB8 (-EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::Initialize(CLegacyRemotingSwapChain *this, const unsigned __int16 *a2)
{
  FARPROC ProcAddress; // rsi
  int v5; // eax
  signed int v6; // ebx
  HANDLE CurrentProcess; // rax
  void *v8; // rdi
  void *v9; // rbx
  HANDLE v10; // rax
  signed int LastError; // eax
  char *v12; // rdi
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 (__fastcall *v14)(_QWORD, GUID *, char *); // rdi
  int v15; // r9d
  unsigned int v17; // [rsp+20h] [rbp-60h]
  HANDLE TargetHandle[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v19; // [rsp+50h] [rbp-30h]
  _OWORD v20[2]; // [rsp+60h] [rbp-20h] BYREF
  int v21; // [rsp+A0h] [rbp+20h] BYREF
  int v22; // [rsp+A4h] [rbp+24h]

  ProcAddress = GetProcAddress(*((HMODULE *)this + 10), "DwmIndirectCreate");
  if ( !ProcAddress )
  {
    v6 = -2147024809;
    v17 = 90;
LABEL_16:
    v15 = v6;
    goto LABEL_17;
  }
  *(_OWORD *)TargetHandle = 0LL;
  v19 = 0LL;
  v5 = CLegacyRemotingSwapChain::EnsureBitmapDest(this);
  v6 = v5;
  if ( v5 < 0 )
  {
    v17 = 60;
    goto LABEL_12;
  }
  SetLastError(0);
  CurrentProcess = GetCurrentProcess();
  v8 = (void *)*((_QWORD *)this + 23);
  v9 = CurrentProcess;
  v10 = GetCurrentProcess();
  if ( !DuplicateHandle(v10, v8, v9, TargetHandle, 0, 0, 2u) )
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( v6 >= 0 )
      v6 = -2003304445;
    v17 = 71;
    goto LABEL_16;
  }
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(*((_QWORD *)this + 8) + 8LL) + 32LL))(
    *((_QWORD *)this + 8) + 8LL,
    &v21);
  v12 = (char *)this + 88;
  DWORD2(v19) = v21;
  *(_QWORD *)&v19 = a2;
  HIDWORD(v19) = -v22;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 11);
  v20[0] = *(_OWORD *)TargetHandle;
  v20[1] = v19;
  v5 = ((__int64 (__fastcall *)(_OWORD *, char *))ProcAddress)(v20, (char *)this + 88);
  v6 = v5;
  if ( v5 < 0 )
  {
    v17 = 83;
    goto LABEL_12;
  }
  v13 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v12;
  v14 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v12;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 12);
  v5 = v14(v13, &IID_IDWMRemotingIndirectEx, (char *)this + 96);
  v6 = v5;
  if ( v5 < 0 )
  {
    v17 = 86;
LABEL_12:
    v15 = v5;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, v17, 0LL);
  }
  return (unsigned int)v6;
}
