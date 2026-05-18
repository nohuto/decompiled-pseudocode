/*
 * XREFs of sub_180026EC0 @ 0x180026EC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180027530 @ 0x180027530 (sub_180027530.c)
 *     sub_180027EDC @ 0x180027EDC (sub_180027EDC.c)
 *     sub_1800522C0 @ 0x1800522C0 (sub_1800522C0.c)
 */

__int64 __fastcall sub_180026EC0(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  sub_180027530(a1 + 120, &v7);
  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
    sub_1800522C0(v4, a2);
  v5 = *(_QWORD *)(a1 + 152);
  if ( v5 )
    sub_1800522C0(v5, a2);
  v7 = a2;
  return sub_180027EDC(a1 + 80, &v7);
}
