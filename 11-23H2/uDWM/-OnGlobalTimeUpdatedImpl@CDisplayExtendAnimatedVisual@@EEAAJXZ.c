/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800BA970
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B7EA4 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?CaptureForExtendedDisplay@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BA680 (-CaptureForExtendedDisplay@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BAA38 (-ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::OnGlobalTimeUpdatedImpl(CDisplayExtendAnimatedVisual *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // r9d
  unsigned int v5; // eax
  __int64 v6; // rax
  bool v7; // zf
  char v8; // al

  v2 = 0;
  if ( !*((_BYTE *)this + 508) )
  {
    v3 = CDisplayExtendAnimatedVisual::CaptureForExtendedDisplay(this);
    v2 = v3;
    if ( v3 < 0 )
    {
      v4 = v3;
      v5 = 220;
LABEL_11:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v5);
      CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
      return (unsigned int)v2;
    }
    *((_BYTE *)this + 508) = 1;
  }
  v6 = *((_QWORD *)this + 60);
  if ( v6 && *(_BYTE *)(v6 + 72) )
  {
    *((_QWORD *)this + 60) = 0LL;
    v7 = (*(_DWORD *)(v6 + 8))-- == 1;
    v8 = CDesktopManager::s_fTimelineDirty;
    if ( v7 )
      v8 = 1;
    CDesktopManager::s_fTimelineDirty = v8;
    v2 = CDisplayExtendAnimatedVisual::ScheduleEntranceAnimations(this);
    v4 = v2;
    if ( v2 < 0 )
    {
      v5 = 228;
      goto LABEL_11;
    }
  }
  return (unsigned int)v2;
}
