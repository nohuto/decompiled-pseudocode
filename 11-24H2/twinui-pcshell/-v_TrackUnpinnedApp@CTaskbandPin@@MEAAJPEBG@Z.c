/*
 * XREFs of ?v_TrackUnpinnedApp@CTaskbandPin@@MEAAJPEBG@Z @ 0x180689F60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$ActivateInstance@UITaskBarAppProperties@ContentManagement@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUITaskBarAppProperties@ContentManagement@@@Z @ 0x180687B08 (--$ActivateInstance@UITaskBarAppProperties@ContentManagement@@@Foundation@Windows@@YAJPEAUHSTRIN.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTaskbandPin::v_TrackUnpinnedApp(CTaskbandPin *this, const unsigned __int16 *a2)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, PVOID, __int64); // rdi
  HSTRING_HEADER *v8; // rax
  __int64 v9; // r8
  int v10; // eax
  HSTRING_HEADER v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  const WCHAR *v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v14 = a2;
  v15 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v12,
    L"ContentManagement.ContentManagementService",
    0x2Bu,
    0x2Au);
  v2 = v13;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  v3 = Windows::Foundation::ActivateInstance<ContentManagement::ITaskBarAppProperties>(v2, &v15);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v6 = v15;
    v7 = *(__int64 (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)v15 + 48LL);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v12, &v14, v4);
    LOBYTE(v9) = 1;
    v10 = v7(v6, v8[1].Reserved.Reserved1, v9);
    if ( v10 >= 0 )
      v5 = 0;
    else
      v5 = v10;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x223,
      (int)"pcshell\\shell\\pinninglib\\lib\\TaskbandPin.cpp",
      (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  return v5;
}
