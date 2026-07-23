/*
 * XREFs of WdipSemEnableDisableTrace @ 0x140A3E4E0
 * Callers:
 *     WdipSemCaptureState @ 0x1404AAA5C (WdipSemCaptureState.c)
 *     WdipSemDisableAllProviders @ 0x1407A32A8 (WdipSemDisableAllProviders.c)
 *     WdipSemEnableAllProviders @ 0x1407A335C (WdipSemEnableAllProviders.c)
 *     WdipSemEnableSemProvider @ 0x1407A3494 (WdipSemEnableSemProvider.c)
 *     WdipSemDisableContextProvider @ 0x140A3DEDC (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140A3E354 (WdipSemEnableContextProvider.c)
 * Callees:
 *     EtwEnableTrace @ 0x140A3E540 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
