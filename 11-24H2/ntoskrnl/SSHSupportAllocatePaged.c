/*
 * XREFs of SSHSupportAllocatePaged @ 0x140A43F58
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x1403D1F30 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x1403D2010 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     SshpWriteBlocker @ 0x1404859D0 (SshpWriteBlocker.c)
 *     SshpCopyDataEntry @ 0x1405E1A2C (SshpCopyDataEntry.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SSHSupportAllocatePaged(ULONG_PTR a1, ULONG a2)
{
  return ExAllocatePool2(0x100uLL, a1, a2);
}
