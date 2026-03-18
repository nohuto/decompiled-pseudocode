/*
 * XREFs of IopFindPassiveInterruptBlock @ 0x140456BB4
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x140206710 (IoProcessPassiveInterrupts.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1406F02BC (IopDestroyPassiveInterruptBlock.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140AA5A90 (IopAllocatePassiveInterruptBlock.c)
 * Callees:
 *     IopFindPassiveInterruptBlockLocked @ 0x140456BF0 (IopFindPassiveInterruptBlockLocked.c)
 *     IopReleaseGlobalPassiveInterruptListLock @ 0x140456CE8 (IopReleaseGlobalPassiveInterruptListLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x140456D5C (IopAcquireGlobalPassiveInterruptListLock.c)
 */

__int64 __fastcall IopFindPassiveInterruptBlock(unsigned int a1)
{
  __int64 PassiveInterruptBlockLocked; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  IopAcquireGlobalPassiveInterruptListLock(&v6);
  PassiveInterruptBlockLocked = IopFindPassiveInterruptBlockLocked(a1);
  LOBYTE(v3) = v6;
  v4 = PassiveInterruptBlockLocked;
  IopReleaseGlobalPassiveInterruptListLock(v3);
  return v4;
}
