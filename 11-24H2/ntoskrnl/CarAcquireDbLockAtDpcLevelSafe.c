/*
 * XREFs of CarAcquireDbLockAtDpcLevelSafe @ 0x1406175BC
 * Callers:
 *     CarAddUniqueViolation @ 0x14061763C (CarAddUniqueViolation.c)
 *     CarDeleteDriverRuleViolations @ 0x14061793C (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x1406179F0 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x140617A80 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x140617BD8 (CarWriteEarlyRuleViolationEvents.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

char __fastcall CarAcquireDbLockAtDpcLevelSafe(__int64 a1)
{
  PRTL_AVL_TABLE v2; // rax
  struct _KTHREAD *CurrentThread; // rdi
  volatile LONG *p_Balance; // rcx

  LOBYTE(v2) = (_BYTE)CarDb;
  if ( CarDb[1].OrderedPointer != KeGetCurrentThread() )
  {
    LOBYTE(v2) = *(_BYTE *)(a1 + 9);
    if ( ((unsigned __int8)v2 & 2) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      p_Balance = (volatile LONG *)&CarDb[1].BalancedRoot.Balance;
      if ( ((unsigned __int8)v2 & 4) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(p_Balance);
        CarDb[1].OrderedPointer = CurrentThread;
      }
      else
      {
        ExAcquireSpinLockSharedAtDpcLevel(p_Balance);
      }
      v2 = CarDb;
      *(_BYTE *)(a1 + 9) |= 2u;
      *(_QWORD *)a1 = v2;
    }
  }
  return (char)v2;
}
