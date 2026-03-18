/*
 * XREFs of VmpFaultEntryRemove @ 0x1403AB51C
 * Callers:
 *     VmpAccessFaultBatch @ 0x1403AB20C (VmpAccessFaultBatch.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall VmpFaultEntryRemove(__int64 a1, unsigned __int64 *a2, unsigned int a3)
{
  unsigned __int64 *v3; // rbx
  __int64 v4; // r14
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rdx
  __int64 result; // rax

  v3 = a2;
  v4 = a1;
  v5 = (unsigned __int64)&a2[6 * a3];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 15LL);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 96));
  while ( (unsigned __int64)v3 < v5 )
  {
    RtlRbRemoveNode((unsigned __int64 *)(v4 + 80), v3);
    v3 += 6;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 96));
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
