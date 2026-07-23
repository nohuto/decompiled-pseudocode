/*
 * XREFs of IopFindPassiveInterruptBlock @ 0x14044C81C
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x1403AE864 (IoProcessPassiveInterrupts.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1406F9CE4 (IopDestroyPassiveInterruptBlock.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140AA6280 (IopAllocatePassiveInterruptBlock.c)
 * Callees:
 *     IopFindPassiveInterruptBlockLocked @ 0x14044C858 (IopFindPassiveInterruptBlockLocked.c)
 *     IopReleaseGlobalPassiveInterruptListLock @ 0x14044C950 (IopReleaseGlobalPassiveInterruptListLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14044C9C4 (IopAcquireGlobalPassiveInterruptListLock.c)
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
