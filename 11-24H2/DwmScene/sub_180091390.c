/*
 * XREFs of sub_180091390 @ 0x180091390
 * Callers:
 *     sub_18009193C @ 0x18009193C (sub_18009193C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180091390(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r9

  v2 = (_DWORD *)(a1 + 4);
  v3 = a2 - a1;
  v4 = 16LL;
  do
  {
    *(v2 - 1) = *(_DWORD *)((char *)v2 + v3 - 4);
    *v2 = *(_DWORD *)((char *)v2 + v3);
    v2[1] = *(_DWORD *)((char *)v2 + v3 + 4);
    v2[2] = *(_DWORD *)((char *)v2 + v3 + 8);
    v2 += 4;
    --v4;
  }
  while ( v4 );
  return a1;
}
