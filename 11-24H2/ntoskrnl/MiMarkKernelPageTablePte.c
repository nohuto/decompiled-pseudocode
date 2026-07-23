/*
 * XREFs of MiMarkKernelPageTablePte @ 0x140673E20
 * Callers:
 *     <none>
 * Callees:
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 */

__int64 __fastcall MiMarkKernelPageTablePte(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8

  v2 = *a2;
  if ( (*a2 & 1) != 0 && (v2 & 0x80u) == 0LL )
    PoSetHiberRange(0LL, 0x14000u, (PVOID)((v2 >> 12) & 0xFFFFFFFFFFLL), 1uLL, 0x706B6D4Du);
  return 0LL;
}
