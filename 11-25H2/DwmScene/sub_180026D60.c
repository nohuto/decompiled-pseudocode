/*
 * XREFs of sub_180026D60 @ 0x180026D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800273D0 @ 0x1800273D0 (sub_1800273D0.c)
 *     sub_180027D7C @ 0x180027D7C (sub_180027D7C.c)
 *     sub_180052160 @ 0x180052160 (sub_180052160.c)
 */

__int64 __fastcall sub_180026D60(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  sub_1800273D0(a1 + 120, &v7);
  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
    sub_180052160(v4, a2);
  v5 = *(_QWORD *)(a1 + 152);
  if ( v5 )
    sub_180052160(v5, a2);
  v7 = a2;
  return sub_180027D7C(a1 + 80, &v7);
}
