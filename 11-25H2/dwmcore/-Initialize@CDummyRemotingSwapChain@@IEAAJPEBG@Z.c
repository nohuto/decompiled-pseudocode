/*
 * XREFs of ?Initialize@CDummyRemotingSwapChain@@IEAAJPEBG@Z @ 0x1802D0124
 * Callers:
 *     ?Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1802CFB98 (-Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FFE90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDummyRemotingSwapChain::Initialize(CDummyRemotingSwapChain *this, const unsigned __int16 *a2)
{
  FARPROC ProcAddress; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, char *); // rdi
  _QWORD *v8; // r14
  __int64 (__fastcall *v9)(_QWORD, GUID *, char *); // rbx
  __int64 v10; // rcx
  HANDLE EventW; // rax
  HANDLE v12; // rax
  int v13; // r9d
  unsigned int v15; // [rsp+28h] [rbp-29h]
  __int128 v16; // [rsp+38h] [rbp-19h] BYREF
  const unsigned __int16 *v17; // [rsp+48h] [rbp-9h]
  int v18; // [rsp+50h] [rbp-1h]
  int v19; // [rsp+54h] [rbp+3h]
  __int64 v20; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v21[72]; // [rsp+60h] [rbp+Fh] BYREF

  ProcAddress = GetProcAddress(*((HMODULE *)this + 8), "DwmIndirectCreate");
  if ( !ProcAddress )
  {
    v6 = -2147024809;
    v13 = -2147024809;
    v15 = 92;
    goto LABEL_11;
  }
  v18 = 0;
  v19 = 0;
  v17 = a2;
  v16 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 9);
  v5 = ((__int64 (__fastcall *)(__int128 *, char *))ProcAddress)(&v16, (char *)this + 72);
  v6 = v5;
  if ( v5 < 0 )
  {
    v15 = 66;
    goto LABEL_8;
  }
  v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 9);
  v8 = (_QWORD *)((char *)this + 80);
  v9 = **v7;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 10);
  v5 = v9(v7, &IID_IDWMRemotingIndirectEx, (char *)this + 80);
  v6 = v5;
  if ( v5 < 0 )
  {
    v15 = 69;
LABEL_8:
    v13 = v5;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, v15, 0LL);
    return v6;
  }
  v20 = 7LL;
  memset_0(v21, 0, 0x40uLL);
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(*(_QWORD *)*v8 + 56LL))(*v8, &v20, 1LL);
  if ( *((_BYTE *)g_pComposition + 816) )
  {
    v10 = *v8;
    LODWORD(v20) = 11;
    v21[8] = 1;
    (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v10 + 56LL))(v10, &v20, 1LL);
  }
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 13,
    EventW);
  v12 = CreateEventW(0LL, 1, 0, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 25,
    v12);
  return v6;
}
