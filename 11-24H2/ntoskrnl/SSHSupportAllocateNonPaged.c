/*
 * XREFs of SSHSupportAllocateNonPaged @ 0x14049BAC4
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x140A24F30 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperCreateBlockerData @ 0x140ABB280 (SleepstudyHelperCreateBlockerData.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 SSHSupportAllocateNonPaged()
{
  return ExAllocatePool2(0x40uLL);
}
