/*
 * XREFs of sub_180069320 @ 0x180069320
 * Callers:
 *     <none>
 * Callees:
 *     sub_180027530 @ 0x180027530 (sub_180027530.c)
 *     sub_180027EDC @ 0x180027EDC (sub_180027EDC.c)
 *     sub_180050A10 @ 0x180050A10 (sub_180050A10.c)
 *     sub_1800522C0 @ 0x1800522C0 (sub_1800522C0.c)
 */

__int64 __fastcall sub_180069320(__int64 *a1, unsigned int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  sub_1800522C0(a1[14], a2);
  v4 = a1 + 24;
  v5 = 4LL;
  do
  {
    v6 = *(v4 - 8);
    if ( v6 )
      sub_1800522C0(v6, a2);
    if ( *v4 )
      sub_180050A10(*v4, a2);
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v8 = a2;
  sub_180027530(a1 + 32, &v8);
  v8 = a2;
  return sub_180027EDC(a1 + 10, &v8);
}
