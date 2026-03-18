/*
 * XREFs of SSHSupportAllocateNonPaged @ 0x14049C718
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x140A19C50 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperCreateBlockerData @ 0x140AB6F40 (SleepstudyHelperCreateBlockerData.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 SSHSupportAllocateNonPaged()
{
  return ExAllocatePool2(0x40uLL);
}
