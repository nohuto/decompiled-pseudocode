/*
 * XREFs of PfpPartitionInitialize @ 0x14074757C
 * Callers:
 *     PfpPartitionCreate @ 0x1405CC80C (PfpPartitionCreate.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PfTInitialize @ 0x1407468B4 (PfTInitialize.c)
 */

__int64 __fastcall PfpPartitionInitialize(_QWORD *a1, __int64 a2, __int64 a3)
{
  memset_0(a1 + 2, 0, 0x310uLL);
  *a1 = a2;
  a1[1] = a3;
  return PfTInitialize((__int64)a1, 0);
}
