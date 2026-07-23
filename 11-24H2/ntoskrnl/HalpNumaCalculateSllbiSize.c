/*
 * XREFs of HalpNumaCalculateSllbiSize @ 0x1405556C0
 * Callers:
 *     HalpNumaGetHmatConfigSize @ 0x140555730 (HalpNumaGetHmatConfigSize.c)
 *     HalpNumaParseHmat @ 0x140C142A0 (HalpNumaParseHmat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpNumaCalculateSllbiSize(unsigned int a1, unsigned int a2, int *a3)
{
  __int64 v3; // r10
  int v4; // ecx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r9
  unsigned int v8; // r9d
  unsigned int v9; // edx
  __int64 result; // rax

  *a3 = 0;
  v3 = a1;
  v4 = -1;
  v5 = v3 * a2;
  if ( v5 > 0xFFFFFFFF )
    return 3221225621LL;
  v6 = 2LL * (unsigned int)v5;
  if ( v6 > 0xFFFFFFFF )
    return 3221225621LL;
  v7 = 4LL * a2;
  if ( v7 > 0xFFFFFFFF || (unsigned __int64)(4 * v3) > 0xFFFFFFFF )
    return 3221225621LL;
  v8 = v6 + v7;
  if ( v8 < (unsigned int)v6 || (v9 = v8 + 4 * v3, v9 < v8) )
  {
    *a3 = -1;
    return 3221225621LL;
  }
  if ( v9 + 40 >= v9 )
    v4 = v9 + 40;
  result = v9 + 40 < v9 ? 0xC0000095 : 0;
  *a3 = v4;
  return result;
}
