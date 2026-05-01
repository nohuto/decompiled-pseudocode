/*
 * XREFs of ?GenerateAppID@CPinnedList@@SAJPEBG00PEAPEAG@Z @ 0x18068DCD8
 * Callers:
 *     ?_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x1806889E0 (-_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z.c)
 *     ?_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z @ 0x18069792C (-_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPinnedList::GenerateAppID(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        unsigned __int16 **a4)
{
  HRESULT v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  LPVOID ppv; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a4 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v6 = CoCreateInstance(&stru_1807D2CB0, 0LL, 3u, &GUID_6c6c33ee_f1d4_1bdd_601d_0fa334303bc2, &ppv);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 4226LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_6;
  }
  v6 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, _QWORD, _QWORD, unsigned __int16 **))(*(_QWORD *)ppv + 24LL))(
         ppv,
         a1,
         0LL,
         0LL,
         a4);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 4227LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  return v7;
}
