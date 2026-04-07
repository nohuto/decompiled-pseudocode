/*
 * XREFs of ?StopDelayTimer@CTetherVisual@@IEAAXXZ @ 0x1800D9B5C
 * Callers:
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x1800D9F00 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180012188 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

void __fastcall CTetherVisual::StopDelayTimer(CTimelineBase **this)
{
  CTetherVisual *v1; // rdx
  CTimelineBase *v2; // rcx

  v1 = (CTetherVisual *)this;
  v2 = this[45];
  if ( v2 )
  {
    CTimelineBase::Release(v2);
    *((_QWORD *)v1 + 45) = 0LL;
  }
  if ( !*((_QWORD *)v1 + 44) )
    CTouchVisual::UnRegisterGlobalTimer(v1);
}
