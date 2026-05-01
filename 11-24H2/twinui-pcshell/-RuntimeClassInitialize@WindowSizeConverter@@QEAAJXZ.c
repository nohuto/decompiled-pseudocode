/*
 * XREFs of ?RuntimeClassInitialize@WindowSizeConverter@@QEAAJXZ @ 0x1800799F8
 * Callers:
 *     ??$MakeAndInitialize@VWindowSizeConverter@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180079838 (--$MakeAndInitialize@VWindowSizeConverter@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1800460A4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowSizeConverter::RuntimeClassInitialize(WindowSizeConverter *this)
{
  LPVOID *ppv; // rdi
  HRESULT Instance; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ppv = (LPVOID *)((char *)this + 128);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 16);
  Instance = CoCreateInstance(
               &GUID_ddc05a5a_351a_4e06_8eaf_54ec1bc2dcea,
               0LL,
               1u,
               &GUID_a914f499_4633_4b26_a93e_707eb5bdc0b6,
               ppv);
  if ( Instance < 0 )
  {
    v4 = 234LL;
    goto LABEL_5;
  }
  Instance = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)*ppv + 72LL))(*ppv);
  if ( Instance < 0 )
  {
    v4 = 235LL;
    goto LABEL_5;
  }
  Instance = CImmersiveShellComponent::RegisterServiceInformation(
               (WindowSizeConverter *)((char *)this + 24),
               &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a);
  if ( Instance < 0 )
  {
    v4 = 236LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  return 0LL;
}
