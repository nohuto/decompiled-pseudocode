/*
 * XREFs of SSHSupportAllocateNonPaged @ 0x1404965F4
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x140A18F20 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperCreateBlockerData @ 0x140AB62A0 (SleepstudyHelperCreateBlockerData.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SSHSupportAllocateNonPaged(ULONG_PTR a1, ULONG a2)
{
  return ExAllocatePool2(0x40uLL, a1, a2);
}
