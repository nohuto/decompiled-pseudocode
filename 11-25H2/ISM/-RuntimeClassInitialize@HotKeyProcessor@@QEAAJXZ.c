/*
 * XREFs of ?RuntimeClassInitialize@HotKeyProcessor@@QEAAJXZ @ 0x1801C51D8
 * Callers:
 *     ??$MakeAndInitialize@VHotKeyProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyProcessor@@@Z @ 0x1801A8EAC (--$MakeAndInitialize@VHotKeyProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyProcessor@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x180033C58 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801975D8 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1801C59D0 (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HotKeyProcessor::RuntimeClassInitialize(HotKeyProcessor *this)
{
  _QWORD *v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  ULONG_PTR v5; // r8
  int v6; // eax
  int v7; // eax
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, HotKeyProcessor *, _QWORD, _QWORD, wchar_t *, _QWORD, char *); // rdi
  int v10; // eax
  _DWORD v12[4]; // [rsp+40h] [rbp-238h] BYREF
  wchar_t v13[264]; // [rsp+50h] [rbp-228h] BYREF
  ULONG_PTR retaddr; // [rsp+278h] [rbp+0h]

  v12[0] = 0;
  v1 = (_QWORD *)((char *)this + 360);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 45);
  v3 = CoreUIFactoryCreate(v1);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    v5 = 73LL;
LABEL_17:
    FailFastWithHR(v4, retaddr, v5);
    return v4;
  }
  v6 = SharedMessagePortRefPtr::Initialize((char *)this + 376);
  v4 = v6;
  if ( v6 < 0 )
  {
    if ( v6 == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    v5 = 74LL;
    goto LABEL_17;
  }
  memset_0(v13, 0, 0x208uLL);
  GetDesktopUniqueName(L"System\\RemoteHotKeyProcessor", v13);
  v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, _DWORD *))(*(_QWORD *)*v1 + 24LL))(
         *v1,
         &GUID_647859d8_5046_411b_bd66_e49c8745ad3d,
         v12);
  v4 = v7;
  if ( v7 < 0 )
  {
    if ( v7 == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    v5 = 83LL;
    goto LABEL_17;
  }
  v8 = *v1;
  v9 = *(__int64 (__fastcall **)(__int64, HotKeyProcessor *, _QWORD, _QWORD, wchar_t *, _QWORD, char *))(*(_QWORD *)v8 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 46);
  v10 = v9(v8, this, 0LL, v12[0], v13, *((_QWORD *)this + 48), (char *)this + 368);
  v4 = v10;
  if ( v10 < 0 )
  {
    if ( v10 == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    v5 = 91LL;
    goto LABEL_17;
  }
  return v4;
}
