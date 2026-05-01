/*
 * XREFs of ??$MakeAndInitializeOrThrow@VVirtualDesktopSwitcherHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VVirtualDesktopSwitcherHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x18029D8F0
 * Callers:
 *     ?XamlVirtualDesktopSwitcherHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x18029D884 (-XamlVirtualDesktopSwitcherHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopSwitcherHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitcherHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x18029D958 (--$MakeAndInitialize@VVirtualDesktopSwitcherHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAndInitializeOrThrow<VirtualDesktopSwitcherHost,XamlViewHostInitializeArgs const &>(
        __int64 *a1,
        __int64 a2)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopSwitcherHost,VirtualDesktopSwitcherHost,XamlViewHostInitializeArgs const &>(
         a1,
         a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v4,
      1);
  return a1;
}
