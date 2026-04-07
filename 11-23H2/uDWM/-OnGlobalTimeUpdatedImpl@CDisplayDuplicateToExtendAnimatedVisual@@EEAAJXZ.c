/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B9A50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B7EA4 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B9AD8 (-ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::OnGlobalTimeUpdatedImpl(
        CDisplayDuplicateToExtendAnimatedVisual *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  bool v4; // zf
  char v5; // al
  int v6; // eax

  v1 = *((_QWORD *)this + 63);
  v2 = 0;
  if ( v1 && *(_BYTE *)(v1 + 72) )
  {
    *((_QWORD *)this + 63) = 0LL;
    v4 = (*(_DWORD *)(v1 + 8))-- == 1;
    v5 = CDesktopManager::s_fTimelineDirty;
    if ( v4 )
      v5 = 1;
    CDesktopManager::s_fTimelineDirty = v5;
    v6 = CDisplayDuplicateToExtendAnimatedVisual::ScheduleEntranceAnimations(this);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x132u);
      CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
    }
  }
  return v2;
}
