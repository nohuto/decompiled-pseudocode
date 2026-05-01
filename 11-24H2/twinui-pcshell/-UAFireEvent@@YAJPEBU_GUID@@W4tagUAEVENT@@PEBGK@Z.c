/*
 * XREFs of ?UAFireEvent@@YAJPEBU_GUID@@W4tagUAEVENT@@PEBGK@Z @ 0x1802A1200
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18022CAE0 (-Run@-$CTaskWrapper@V_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedUserAssist@UserAssistImpl@@YAJPEAPEAUIShellUserAssist@@@Z @ 0x1802A12CC (-GetCachedUserAssist@UserAssistImpl@@YAJPEAPEAUIShellUserAssist@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall UAFireEvent(__int64 a1, __int64 a2, __int64 a3)
{
  struct IShellUserAssist **v4; // rdx
  int CachedUserAssist; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  CachedUserAssist = UserAssistImpl::GetCachedUserAssist((UserAssistImpl *)&v11, v4);
  v6 = CachedUserAssist;
  if ( CachedUserAssist >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD, __int64, _DWORD))(*(_QWORD *)v11 + 24LL))(
           v11,
           &GUID_cebff5cd_ace2_4f4f_9178_9926f41749ea,
           0LL,
           a3,
           0);
    v6 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (int)"onecoreuap\\internal\\shell\\inc\\private\\uem.h",
        (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89,
      (int)"onecoreuap\\internal\\shell\\inc\\private\\uem.h",
      (const char *)(unsigned int)CachedUserAssist);
    v7 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return v6;
}
