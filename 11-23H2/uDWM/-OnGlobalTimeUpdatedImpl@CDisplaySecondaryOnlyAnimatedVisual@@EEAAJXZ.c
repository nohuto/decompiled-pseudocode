/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800BDC30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B7DC0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B7EA4 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x1800BD968 (-CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::OnGlobalTimeUpdatedImpl(
        CDisplaySecondaryOnlyAnimatedVisual *this)
{
  int v2; // edi
  unsigned int v3; // eax
  __int64 v4; // rax
  bool v5; // zf
  char v6; // al
  int v7; // r9d
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  if ( !*((_QWORD *)this + 55) )
  {
    v2 = CDisplaySecondaryOnlyAnimatedVisual::CaptureForSecondaryDisplay(this);
    if ( v2 < 0 )
    {
      v3 = 138;
LABEL_10:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v3);
      CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
      return (unsigned int)v2;
    }
  }
  v4 = *((_QWORD *)this + 56);
  if ( v4 && *(_BYTE *)(v4 + 72) )
  {
    *((_QWORD *)this + 56) = 0LL;
    v5 = (*(_DWORD *)(v4 + 8))-- == 1;
    v6 = CDesktopManager::s_fTimelineDirty;
    v7 = *((_DWORD *)this + 89);
    if ( v5 )
      v6 = 1;
    CDesktopManager::s_fTimelineDirty = v6;
    v8 = CDisplayAnimatedVisual::ScheduleAnimation(
           (CDisplaySecondaryOnlyAnimatedVisual *)((char *)this + 288),
           *((struct CAnimatedTransitionVisual **)this + 55),
           (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
           *((unsigned int *)this + 88),
           v7,
           (unsigned int *)this + 114);
    v2 = v8;
    if ( v8 >= 0 )
      return 0;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
      (const char *)(unsigned int)v8);
    v3 = 145;
    goto LABEL_10;
  }
  return (unsigned int)v2;
}
