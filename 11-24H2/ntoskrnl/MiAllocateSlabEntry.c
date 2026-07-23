/*
 * XREFs of MiAllocateSlabEntry @ 0x14049F108
 * Callers:
 *     MiCreateSlabEntry @ 0x140217C8C (MiCreateSlabEntry.c)
 *     MiCreateBootSlabEntries @ 0x140C5B16C (MiCreateBootSlabEntries.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     KcsanMarkAddressIgnored @ 0x14049F1A0 (KcsanMarkAddressIgnored.c)
 */

__int64 __fastcall MiAllocateSlabEntry(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 result; // rax
  __int64 v4; // rbx

  v2 = LODWORD(MiPageSizes[(*(_DWORD *)(a1 + 136) >> 4) & 3]);
  result = MiAllocatePool(0x40uLL, (v2 >> 3) + 96, 1699965261);
  v4 = result;
  if ( result )
  {
    *(_QWORD *)(result + 56) = a1;
    *(_QWORD *)(result + 72) = result + 96;
    *(_DWORD *)(result + 64) = v2;
    KcsanMarkAddressIgnored(result + 96, v2 >> 3);
    return v4;
  }
  return result;
}
