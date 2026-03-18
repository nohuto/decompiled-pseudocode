/*
 * XREFs of SSHSupportAllocatePaged @ 0x140A4ACBC
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x1403DF2C0 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x1403DF3A0 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     SshpWriteBlocker @ 0x14048B408 (SshpWriteBlocker.c)
 *     SshpCopyDataEntry @ 0x1405D8548 (SshpCopyDataEntry.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 SSHSupportAllocatePaged()
{
  return ExAllocatePool2(0x100uLL);
}
