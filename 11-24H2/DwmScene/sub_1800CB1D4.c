/*
 * XREFs of sub_1800CB1D4 @ 0x1800CB1D4
 * Callers:
 *     sub_1800E237D @ 0x1800E237D (sub_1800E237D.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_1800CB1D4(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 result; // rax

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    while ( v1 != v3 )
    {
      v4 = v1[1];
      if ( v4 )
        sub_18001060C(v4);
      v1 += 2;
    }
    result = sub_180010234(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
