/*
 * XREFs of HsaGrowPasidTable @ 0x14056FFC0
 * Callers:
 *     <none>
 * Callees:
 *     HsaAllocatePasidTables @ 0x14056EF5C (HsaAllocatePasidTables.c)
 */

__int64 __fastcall HsaGrowPasidTable(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5, int a6)
{
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  return HsaAllocatePasidTables(a1, a2, a3, a4, a5, a6, &v7);
}
