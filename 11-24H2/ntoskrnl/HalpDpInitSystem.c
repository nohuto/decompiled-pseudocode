/*
 * XREFs of HalpDpInitSystem @ 0x140B4EFA0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x1403744A8 (HalpInterruptModel.c)
 *     HalpDpInitDiscard @ 0x140C110F0 (HalpDpInitDiscard.c)
 */

__int64 HalpDpInitSystem()
{
  int v0; // edx
  __int64 v1; // r8

  if ( (unsigned int)HalpInterruptModel() == 1 )
  {
    if ( v0 == 7 )
    {
      HalpDpInitDiscard(v1);
    }
    else if ( v0 == 17 )
    {
      off_140E008B8[0] = (__int64 (__fastcall *)())HalpDpReplaceBegin;
      off_140E008C0[0] = HalpDpReplaceTarget;
      off_140E008C8[0] = HalpDpReplaceControl;
      off_140E008D0[0] = (__int64 (__fastcall *)())HalpDpReplaceEnd;
      off_140E00918[0] = HalpInterruptMaskLevelTriggeredLines;
      off_140E00928[0] = HalpDpGetInterruptReplayState;
      off_140E00930[0] = HalpDpReplayInterrupts;
      off_140E00920[0] = HalpInterruptUnmaskLevelTriggeredLines;
    }
  }
  return 0LL;
}
