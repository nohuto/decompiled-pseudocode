/*
 * XREFs of ?StopTimer@CFlickVisual@@MEAAJXZ @ 0x1800C3140
 * Callers:
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x180094A30 (-Stop@CFlickVisual@@UEAAXXZ.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x1800C2F9C (--1CFlickVisual@@MEAA@XZ.c)
 * Callees:
 *     ?StopTimer@CTouchVisual@@MEAAJXZ @ 0x180012170 (-StopTimer@CTouchVisual@@MEAAJXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CFlickVisual::StopTimer(CTimelineBase **this)
{
  CFlickVisual *v1; // rdx
  CTimelineBase *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx

  v1 = (CFlickVisual *)this;
  v2 = this[39];
  if ( v2 )
  {
    CTimelineBase::Release(v2);
    *((_QWORD *)v1 + 39) = 0LL;
  }
  v3 = CTouchVisual::StopTimer(v1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0xDBu, 0LL);
  return v4;
}
