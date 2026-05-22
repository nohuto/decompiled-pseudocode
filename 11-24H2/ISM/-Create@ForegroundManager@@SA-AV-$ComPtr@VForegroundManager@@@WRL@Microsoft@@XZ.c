/*
 * XREFs of ?Create@ForegroundManager@@SA?AV?$ComPtr@VForegroundManager@@@WRL@Microsoft@@XZ @ 0x1800ACEF4
 * Callers:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18006D4C8 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VForegroundManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A76CC (-InternalRelease@-$ComPtr@VForegroundManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VForegroundManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVForegroundManager@@@Z @ 0x1800AC114 (--$MakeAndInitialize@VForegroundManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVForegroundManag.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int32 **__fastcall ForegroundManager::Create(volatile signed __int32 **a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<ForegroundManager>::InternalRelease(a1);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<ForegroundManager,ForegroundManager,>(a1);
  if ( v2 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x38,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      (const char *)(unsigned int)v2,
      1);
  return a1;
}
