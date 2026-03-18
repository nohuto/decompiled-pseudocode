/*
 * XREFs of ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x18029EE50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800F3A90 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?ResetTime@KeyframeSequence@@QEAAXI@Z @ 0x18015324C (-ResetTime@KeyframeSequence@@QEAAXI@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x180153C54 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x180153FF0 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x1801E0458 (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ @ 0x1802A12F0 (-StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ.c)
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
