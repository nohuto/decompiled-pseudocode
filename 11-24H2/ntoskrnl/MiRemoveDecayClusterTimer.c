/*
 * XREFs of MiRemoveDecayClusterTimer @ 0x140212898
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiDecayNodeNowEmpty @ 0x14026FBA8 (MiDecayNodeNowEmpty.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiUnlinkDecayClusterTimer @ 0x140451888 (MiUnlinkDecayClusterTimer.c)
 */

__int64 __fastcall MiRemoveDecayClusterTimer(__int64 a1)
{
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35B20);
  result = *(_QWORD *)(a1 + 8);
  if ( (result & 0x100000000LL) == 0 )
  {
    *(_QWORD *)(a1 + 8) = result | 0x100000000LL;
    result = MiUnlinkDecayClusterTimer(a1);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = (unsigned int)PopHibernateInProgress;
    if ( !PopHibernateInProgress )
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E35B20, retaddr);
  }
  dword_140E35B20 = 0;
  return result;
}
