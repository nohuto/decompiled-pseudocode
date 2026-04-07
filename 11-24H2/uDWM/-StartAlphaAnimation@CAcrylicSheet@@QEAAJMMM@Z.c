/*
 * XREFs of ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z @ 0x1800A230C
 * Callers:
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV?$function@$$A6AXXZ@std@@@Z @ 0x1800A2408 (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?StartShowAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800EBA0C (-StartShowAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800F0910 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180015BD0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x180069040 (-RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x1800690A0 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CAcrylicSheet::StartAlphaAnimation(CAcrylicSheet *this, float a2, float a3, float a4)
{
  CTimelineBase *v5; // rcx
  CBaseObject *v6; // rax
  _QWORD *v7; // rax
  int v8; // esi
  unsigned int v9; // eax

  v5 = (CTimelineBase *)*((_QWORD *)this + 63);
  if ( v5 )
    CTimelineBase::Release(v5);
  v6 = (CBaseObject *)DefaultHeap::AllocClear(0x78uLL);
  if ( !v6 )
  {
    *((_QWORD *)this + 63) = 0LL;
    goto LABEL_8;
  }
  v7 = CTimeline<float>::CTimeline<float>(v6, a4, a2, a3, 0);
  *((_QWORD *)this + 63) = v7;
  if ( !v7 )
  {
LABEL_8:
    v8 = -2147024882;
    v9 = 726;
    goto LABEL_9;
  }
  *((float *)this + 124) = a2;
  *((float *)this + 125) = a3;
  v8 = CAcrylicSheet::RegisterGlobalTimer(this);
  if ( v8 < 0 )
  {
    v9 = 731;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v9, 0LL);
    CAcrylicSheet::StopAnimations(this);
  }
  return (unsigned int)v8;
}
