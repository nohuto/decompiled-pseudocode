/*
 * XREFs of ?Initialize@InputConfigContextProvider@@AEAAJXZ @ 0x18000A744
 * Callers:
 *     ?Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z @ 0x18010A4B0 (-Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z@std@@@Z @ 0x18000AFD8 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSes.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputConfigContextProvider::Initialize(
        InputConfigContextProvider *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // eax
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v9; // rcx
  _QWORD v10[8]; // [rsp+20h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v12; // [rsp+78h] [rbp+18h] BYREF

  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      a4);
  if ( !*(_DWORD *)ISMScenarios::s_instance )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    v5 = CoreUICreate(&v12);
    v7 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
        (const char *)(unsigned int)v5,
        v10[0]);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
      return v7;
    }
    v10[0] = off_1801E1788;
    v10[1] = this;
    v10[7] = v10;
    ((void (__fastcall *)(char *, __int64 *, __int64, _QWORD *))KernelInputConnection<_MIT_INPUT_CONFIG_MESSAGE>::Initialize)(
      (char *)this + 88,
      &v12,
      v6,
      v10);
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return 0LL;
}
