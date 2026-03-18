/*
 * XREFs of SSHSupportAllocatePaged @ 0x140A4D3C8
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x1403E4390 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x1403E4470 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     SshpWriteBlocker @ 0x14048ABA0 (SshpWriteBlocker.c)
 *     SshpCopyDataEntry @ 0x1405E44A0 (SshpCopyDataEntry.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 SSHSupportAllocatePaged()
{
  return ExAllocatePool2(0x100uLL);
}
