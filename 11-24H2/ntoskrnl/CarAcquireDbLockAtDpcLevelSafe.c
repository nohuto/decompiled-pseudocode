/*
 * XREFs of CarAcquireDbLockAtDpcLevelSafe @ 0x140618FFC
 * Callers:
 *     CarAddUniqueViolation @ 0x14061907C (CarAddUniqueViolation.c)
 *     CarDeleteDriverRuleViolations @ 0x14061937C (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x140619430 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x1406194C0 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x140619618 (CarWriteEarlyRuleViolationEvents.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
