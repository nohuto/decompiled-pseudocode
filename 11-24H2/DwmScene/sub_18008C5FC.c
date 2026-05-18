/*
 * XREFs of sub_18008C5FC @ 0x18008C5FC
 * Callers:
 *     sub_18008CAFC @ 0x18008CAFC (sub_18008CAFC.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180011920 @ 0x180011920 (sub_180011920.c)
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180013278 @ 0x180013278 (sub_180013278.c)
 *     sub_1800758C0 @ 0x1800758C0 (sub_1800758C0.c)
 *     sub_18008C82C @ 0x18008C82C (sub_18008C82C.c)
 */

__int64 __fastcall sub_18008C5FC(__int64 **a1, _QWORD *a2, unsigned __int64 a3)
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
      sub_180013278();
    v7 = sub_180011920(a1, a3);
    if ( v3 )
    {
      sub_180012140((__int64)v3, (__int64)a1[1]);
      sub_180010234(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF0uLL);
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    sub_1800758C0((__int64 *)a1, v7);
    v8 = *a1;
    goto LABEL_14;
  }
  v8 = a1[1];
  v9 = ((char *)v8 - (char *)v3) >> 4;
  if ( v4 > v9 )
  {
    while ( v3 != v8 )
    {
      sub_18001254C(v3, a2);
      v8 = a1[1];
      v3 += 2;
      a2 += 2;
    }
    v4 -= v9;
LABEL_14:
    result = sub_18008C82C(a2, v4, v8);
    a1[1] = (__int64 *)result;
    return result;
  }
  for ( i = (__int64)&v3[2 * v4]; v4; --v4 )
  {
    sub_18001254C(v3, a2);
    v3 += 2;
    a2 += 2;
  }
  result = sub_180012140(i, (__int64)a1[1]);
  a1[1] = (__int64 *)i;
  return result;
}
