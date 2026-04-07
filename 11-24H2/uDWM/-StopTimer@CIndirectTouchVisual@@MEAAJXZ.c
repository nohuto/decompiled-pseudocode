/*
 * XREFs of ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C76C0
 * Callers:
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x1800C75E0 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C77D0 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     ?StopTimer@CTouchVisual@@MEAAJXZ @ 0x180012170 (-StopTimer@CTouchVisual@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C7610 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::StopTimer(CIndirectTouchVisual *this)
{
  CTouchVisual *v1; // r9
  int v2; // eax
  unsigned int v3; // ebx

  CIndirectTouchVisual::StopAllTimelines(this);
  v2 = CTouchVisual::StopTimer(v1);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x13Au, 0LL);
  return v3;
}
