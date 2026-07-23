/*
 * XREFs of MiRemoveDecayClusterTimer @ 0x14033BBF8
 * Callers:
 *     MiDecayNodeNowEmpty @ 0x140225138 (MiDecayNodeNowEmpty.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkDecayClusterTimer @ 0x140446934 (MiUnlinkDecayClusterTimer.c)
 */

__int64 __fastcall MiRemoveDecayClusterTimer(__int64 a1)
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35C60);
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
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E35C60, retaddr);
  }
  dword_140E35C60 = 0;
  return result;
}
