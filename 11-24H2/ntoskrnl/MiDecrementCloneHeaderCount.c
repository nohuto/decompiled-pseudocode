/*
 * XREFs of MiDecrementCloneHeaderCount @ 0x1404F2BD0
 * Callers:
 *     MiDeleteCloneDescriptor @ 0x1404F6498 (MiDeleteCloneDescriptor.c)
 *     MiDrainCrossPartitionUsage @ 0x14068B1E4 (MiDrainCrossPartitionUsage.c)
 *     MiFreeCloneDescriptor @ 0x140A6D78C (MiFreeCloneDescriptor.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 */

int __fastcall MiDecrementCloneHeaderCount(__int64 a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 v3; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1752), 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 )
      __fastfail(0xEu);
    LODWORD(v3) = KeSetEvent(*(PRKEVENT *)(a1 + 2776), 0, 0);
  }
  return v3;
}
