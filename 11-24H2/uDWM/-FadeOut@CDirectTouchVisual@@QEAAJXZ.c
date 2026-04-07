/*
 * XREFs of ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x180085D3C
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18000E778 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 * Callees:
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18001066C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x1800120B0 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 *     ?StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180012240 (-StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180015BD0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::FadeOut(CDirectTouchVisual *this)
{
  CBaseObject *v2; // rax
  _QWORD *v3; // rax
  int v4; // edi
  unsigned int v5; // eax

  CDirectTouchVisual::StopFadeTimeline(this);
  v2 = (CBaseObject *)DefaultHeap::AllocClear(0x78uLL);
  if ( v2 )
    v3 = CTimeline<float>::CTimeline<float>(v2, *((float *)this + 75), 1.0, 0.0, 0);
  else
    v3 = 0LL;
  *((_QWORD *)this + 43) = v3;
  if ( !v3 )
  {
    v4 = -2147024882;
    v5 = 357;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v5, 0LL);
    CDirectTouchVisual::Stop(this);
    return (unsigned int)v4;
  }
  v4 = CTouchVisual::RegisterGlobalTimer(this);
  if ( v4 < 0 )
  {
    v5 = 359;
    goto LABEL_8;
  }
  return (unsigned int)v4;
}
