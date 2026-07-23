/*
 * XREFs of RtlCSparseBitmapLeaveLockingRegion @ 0x140472FAC
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x1402197E0 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall RtlCSparseBitmapLeaveLockingRegion(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int64 v2; // rbx

  if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 48LL) )
  {
    v2 = *a1;
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = *a1;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
    }
    __writecr8(v2);
  }
  else
  {
    KeLeaveGuardedRegion();
  }
}
