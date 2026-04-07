/*
 * XREFs of ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800D9960
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18000E778 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800B7214 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 * Callees:
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18001066C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180015BD0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800D9AE0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CTetherVisual::SnapToAnchor(CTetherVisual *this)
{
  CTimelineBase *v2; // rcx
  CBaseObject *v3; // rax
  _QWORD *v4; // rax
  int v5; // esi
  unsigned int v6; // eax

  v2 = (CTimelineBase *)*((_QWORD *)this + 44);
  if ( v2 )
    CTimelineBase::Release(v2);
  v3 = (CBaseObject *)DefaultHeap::AllocClear(0x78uLL);
  if ( !v3 )
  {
    *((_QWORD *)this + 44) = 0LL;
    goto LABEL_8;
  }
  v4 = CTimeline<float>::CTimeline<float>(v3, *((float *)this + 92), 1.0, 0.0, 2);
  *((_QWORD *)this + 44) = v4;
  if ( !v4 )
  {
LABEL_8:
    v5 = -2147024882;
    v6 = 316;
    goto LABEL_9;
  }
  v5 = CTouchVisual::RegisterGlobalTimer(this);
  if ( v5 < 0 )
  {
    v6 = 318;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v6, 0LL);
    CTetherVisual::Stop(this);
  }
  return (unsigned int)v5;
}
