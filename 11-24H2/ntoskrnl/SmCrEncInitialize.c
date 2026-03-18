/*
 * XREFs of SmCrEncInitialize @ 0x140A7F8E4
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14045F540 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall SmCrEncInitialize(_DWORD *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0x90uLL);
  result = 1LL;
  a1[14] = 88;
  a1[2] = 1;
  a1[15] = 1;
  return result;
}
