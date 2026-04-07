/*
 * XREFs of ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800C25C8
 * Callers:
 *     ?OnAnimationCompleteImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJI@Z @ 0x1800C2430 (-OnAnimationCompleteImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJI@Z.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180015BD0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ??4?$com_ptr_t@V?$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV?$CTimeline@M@@@Z @ 0x180094BF0 (--4-$com_ptr_t@V-$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV-$CTimeline@M@@@.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ @ 0x18009B314 (-RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::SetupDelayBeforeEntranceAnimation(CTimelineBase **this)
{
  CBaseObject *v2; // rax
  _QWORD *v3; // r10
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (CBaseObject *)DefaultHeap::AllocClear(0x78uLL);
  if ( v2 )
    v2 = (CBaseObject *)CTimeline<float>::CTimeline<float>(v2, 1.5, 0.0, 1.0, 0);
  wil::com_ptr_t<CTimeline<float>,wil::err_returncode_policy>::operator=(this + 52, v2);
  if ( !*v3 )
  {
    v4 = -2147024882;
    v5 = 336LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = CDisplayAnimatedVisual::RegisterGlobalTimeChangeNotification((CDisplayAnimatedVisual *)this);
  if ( v4 < 0 )
  {
    v5 = 337LL;
    goto LABEL_5;
  }
  return 0LL;
}
