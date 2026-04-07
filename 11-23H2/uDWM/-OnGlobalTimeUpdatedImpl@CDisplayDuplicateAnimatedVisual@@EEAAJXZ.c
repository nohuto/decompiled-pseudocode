/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B9060
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B7BD4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B7DC0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B7EA4 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 */

__int64 __fastcall CDisplayDuplicateAnimatedVisual::OnGlobalTimeUpdatedImpl(CDisplayDuplicateAnimatedVisual *this)
{
  __int64 v1; // rax
  int v3; // esi
  bool v4; // zf
  char v5; // al
  int v6; // edx
  __int64 v7; // r9
  unsigned int v8; // eax

  v1 = *((_QWORD *)this + 59);
  v3 = 0;
  if ( v1 && *(_BYTE *)(v1 + 72) )
  {
    *((_QWORD *)this + 59) = 0LL;
    v4 = (*(_DWORD *)(v1 + 8))-- == 1;
    v5 = CDesktopManager::s_fTimelineDirty;
    v6 = *((_DWORD *)this + 94);
    if ( v4 )
      v5 = 1;
    v7 = *((unsigned int *)this + 93);
    CDesktopManager::s_fTimelineDirty = v5;
    v3 = CDisplayAnimatedVisual::ScheduleAnimation(
           (CDisplayDuplicateAnimatedVisual *)((char *)this + 288),
           *((struct CAnimatedTransitionVisual **)this + 55),
           (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
           v7,
           v6,
           (unsigned int *)this + 121);
    if ( v3 < 0 )
    {
      v8 = 177;
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v8);
      CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
      return (unsigned int)v3;
    }
    v3 = CDisplayAnimatedVisual::ScheduleAnimation(
           (struct IAnimatedVisual *)*((unsigned int *)this + 94),
           (_QWORD *)this + 56,
           (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
           *((_DWORD *)this + 93),
           *((_DWORD *)this + 94),
           (unsigned int *)this + 123);
    if ( v3 < 0 )
    {
      v8 = 185;
      goto LABEL_9;
    }
  }
  return (unsigned int)v3;
}
