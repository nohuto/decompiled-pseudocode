/*
 * XREFs of RtlpAllocateAtom @ 0x14091C628
 * Callers:
 *     RtlpAllocateAtomTableEntry @ 0x1404359FC (RtlpAllocateAtomTableEntry.c)
 *     RtlpLookupOrCreateLowBox @ 0x140435B70 (RtlpLookupOrCreateLowBox.c)
 *     RtlCreateAtomTableEx @ 0x1404969B0 (RtlCreateAtomTableEx.c)
 * Callees:
 *     PsChargeSharedPoolQuota @ 0x14091C6C0 (PsChargeSharedPoolQuota.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall RtlpAllocateAtom(unsigned __int64 a1, ULONG a2)
{
  unsigned __int64 v2; // rdi
  __int64 *Pool2; // rbx
  __int64 v5; // rax

  v2 = a1 + 16;
  if ( a1 + 16 < a1 )
    return 0LL;
  Pool2 = (__int64 *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, v2, 0LL);
    *Pool2 = v5;
    if ( v5 )
    {
      Pool2[1] = v2;
      Pool2 += 2;
    }
    else
    {
      ExFreePoolWithTag(Pool2, a2);
      return 0LL;
    }
  }
  return Pool2;
}
