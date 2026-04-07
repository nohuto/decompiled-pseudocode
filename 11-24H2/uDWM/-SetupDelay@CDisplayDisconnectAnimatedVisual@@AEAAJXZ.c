/*
 * XREFs of ?SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ @ 0x180094B48
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ @ 0x180086E40 (-OnGlobalTimeUpdatedImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180015A64 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ??4?$com_ptr_t@V?$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV?$CTimeline@M@@@Z @ 0x180094BF0 (--4-$com_ptr_t@V-$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV-$CTimeline@M@@@.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ @ 0x18009B314 (-RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CDisplayDisconnectAnimatedVisual::SetupDelay(CDisplayDisconnectAnimatedVisual *this)
{
  CBaseObject *v2; // rax
  _QWORD *v3; // r9
  _QWORD *v4; // r10
  int v5; // ebx
  __int64 v6; // rdx
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (CBaseObject *)DefaultHeap::AllocClear(0x78uLL);
  if ( v2 )
  {
    CTimelineBase::CTimelineBase(v2, 1.0, 0.0, 1.0, 0);
    *v3 = &CTimeline<float>::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  wil::com_ptr_t<CTimeline<float>,wil::err_returncode_policy>::operator=((char *)this + 400, v3);
  if ( !*v4 )
  {
    v5 = -2147024882;
    v6 = 116LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaydisconnectanimatedvisual.cpp",
      (const char *)(unsigned int)v5,
      v8);
    return (unsigned int)v5;
  }
  v5 = CDisplayAnimatedVisual::RegisterGlobalTimeChangeNotification(this);
  if ( v5 < 0 )
  {
    v6 = 117LL;
    goto LABEL_6;
  }
  return 0LL;
}
