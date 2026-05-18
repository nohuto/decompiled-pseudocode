/*
 * XREFs of sub_18008C49C @ 0x18008C49C
 * Callers:
 *     sub_18008C99C @ 0x18008C99C (sub_18008C99C.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180011820 @ 0x180011820 (sub_180011820.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180013178 @ 0x180013178 (sub_180013178.c)
 *     sub_180075760 @ 0x180075760 (sub_180075760.c)
 *     sub_18008C6CC @ 0x18008C6CC (sub_18008C6CC.c)
 */

__int64 __fastcall sub_18008C49C(__int64 **a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 *v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v7; // r14
  __int64 *v8; // r8
  unsigned __int64 v9; // r14
  __int64 i; // r14
  __int64 result; // rax

  v3 = *a1;
  v4 = a3;
  if ( a3 > ((char *)a1[2] - (char *)*a1) >> 4 )
  {
    if ( a3 > 0xFFFFFFFFFFFFFFFLL )
      sub_180013178();
    v7 = sub_180011820(a1, a3);
    if ( v3 )
    {
      sub_180012040((__int64)v3, (__int64)a1[1]);
      sub_180010134(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF0uLL);
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    sub_180075760((__int64 *)a1, v7);
    v8 = *a1;
    goto LABEL_14;
  }
  v8 = a1[1];
  v9 = ((char *)v8 - (char *)v3) >> 4;
  if ( v4 > v9 )
  {
    while ( v3 != v8 )
    {
      sub_18001244C(v3, a2);
      v8 = a1[1];
      v3 += 2;
      a2 += 2;
    }
    v4 -= v9;
LABEL_14:
    result = sub_18008C6CC(a2, v4, v8);
    a1[1] = (__int64 *)result;
    return result;
  }
  for ( i = (__int64)&v3[2 * v4]; v4; --v4 )
  {
    sub_18001244C(v3, a2);
    v3 += 2;
    a2 += 2;
  }
  result = sub_180012040(i, (__int64)a1[1]);
  a1[1] = (__int64 *)i;
  return result;
}
