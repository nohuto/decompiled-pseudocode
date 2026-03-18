/*
 * XREFs of WdipSemEnableDisableTrace @ 0x140A48730
 * Callers:
 *     WdipSemCaptureState @ 0x1404B01CC (WdipSemCaptureState.c)
 *     WdipSemDisableAllProviders @ 0x1407A3198 (WdipSemDisableAllProviders.c)
 *     WdipSemEnableAllProviders @ 0x1407A324C (WdipSemEnableAllProviders.c)
 *     WdipSemEnableSemProvider @ 0x1407A3384 (WdipSemEnableSemProvider.c)
 *     WdipSemDisableContextProvider @ 0x140A480BC (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140A485A4 (WdipSemEnableContextProvider.c)
 * Callees:
 *     EtwEnableTrace @ 0x140A48790 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
