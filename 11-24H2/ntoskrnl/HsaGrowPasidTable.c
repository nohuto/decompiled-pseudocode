/*
 * XREFs of HsaGrowPasidTable @ 0x140570750
 * Callers:
 *     <none>
 * Callees:
 *     HsaAllocatePasidTables @ 0x14056F6EC (HsaAllocatePasidTables.c)
 */

__int64 __fastcall HsaGrowPasidTable(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5, int a6)
{
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  return HsaAllocatePasidTables(a1, a2, a3, a4, a5, a6, &v7);
}
