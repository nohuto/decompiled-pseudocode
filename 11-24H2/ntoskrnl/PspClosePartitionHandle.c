/*
 * XREFs of PspClosePartitionHandle @ 0x14077AD40
 * Callers:
 *     PspAllocatePartition @ 0x14077AAAC (PspAllocatePartition.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 */

void __fastcall PspClosePartitionHandle(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 48), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    PsDereferencePartition(a2);
  }
}
