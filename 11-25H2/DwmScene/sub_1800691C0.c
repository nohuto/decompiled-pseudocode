/*
 * XREFs of sub_1800691C0 @ 0x1800691C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800273D0 @ 0x1800273D0 (sub_1800273D0.c)
 *     sub_180027D7C @ 0x180027D7C (sub_180027D7C.c)
 *     sub_1800508B0 @ 0x1800508B0 (sub_1800508B0.c)
 *     sub_180052160 @ 0x180052160 (sub_180052160.c)
 */

__int64 __fastcall sub_1800691C0(__int64 *a1, unsigned int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  sub_180052160(a1[14], a2);
  v4 = a1 + 24;
  v5 = 4LL;
  do
  {
    v6 = *(v4 - 8);
    if ( v6 )
      sub_180052160(v6, a2);
    if ( *v4 )
      sub_1800508B0(*v4, a2);
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v8 = a2;
  sub_1800273D0(a1 + 32, &v8);
  v8 = a2;
  return sub_180027D7C(a1 + 10, &v8);
}
