/*
 * XREFs of ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x1802A8C20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800320D0 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x18003AD20 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18003CE98 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResetTime@KeyframeSequence@@QEAAXI@Z @ 0x1801D67DC (-ResetTime@KeyframeSequence@@QEAAXI@Z.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x1801EB39C (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ @ 0x1802AAE50 (-StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ.c)
 */

__int64 __fastcall CKeyframeAnimation::StartAsTriggeredAnimation(KeyframeSequence **this)
{
  int started; // eax
  unsigned int v3; // ebx
  CComposition *v4; // rcx
  __int64 FrameTargetTime; // rax
  int updated; // eax
  int v7; // eax

  started = CBaseExpression::StartAsTriggeredAnimation((CBaseExpression *)this);
  v3 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, started, 0xD07u, 0LL);
  }
  else if ( ((_BYTE)this[28] & 4) == 0 )
  {
    v4 = this[3];
    *((_DWORD *)this + 129) = 0;
    FrameTargetTime = CComposition::GetFrameTargetTime(v4);
    updated = CKeyframeAnimation::UpdatePlaybackState((__int64)this, 1u, 0, FrameTargetTime);
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0xD1Eu, 0LL);
    }
    else if ( ((_BYTE)this[28] & 0x10) != 0 )
    {
      v7 = CKeyframeAnimation::Reset((CKeyframeAnimation *)this, 0, 0LL);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xD27u, 0LL);
      }
      else
      {
        CKeyframeAnimation::PrepareSequenceForIteration((CKeyframeAnimation *)this, 0);
        KeyframeSequence::ResetTime(this[44], 0);
      }
    }
  }
  return v3;
}
