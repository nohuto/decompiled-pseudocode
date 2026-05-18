/*
 * XREFs of sub_18001B6DC @ 0x18001B6DC
 * Callers:
 *     sub_18004BC6C @ 0x18004BC6C (sub_18004BC6C.c)
 *     sub_18004C1A0 @ 0x18004C1A0 (sub_18004C1A0.c)
 *     sub_18004C3C8 @ 0x18004C3C8 (sub_18004C3C8.c)
 *     sub_18004C7A4 @ 0x18004C7A4 (sub_18004C7A4.c)
 *     sub_18004CF50 @ 0x18004CF50 (sub_18004CF50.c)
 *     sub_18005C134 @ 0x18005C134 (sub_18005C134.c)
 *     sub_180078380 @ 0x180078380 (sub_180078380.c)
 *     sub_180079324 @ 0x180079324 (sub_180079324.c)
 *     sub_1800797BC @ 0x1800797BC (sub_1800797BC.c)
 *     sub_18007A010 @ 0x18007A010 (sub_18007A010.c)
 *     sub_18007A434 @ 0x18007A434 (sub_18007A434.c)
 * Callees:
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_1800132FC @ 0x1800132FC (sub_1800132FC.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 */

__int64 *__fastcall sub_18001B6DC(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r9
  void *Src; // rax
  size_t v6; // rdx
  unsigned __int64 v7; // r8
  size_t Size; // r9
  const void *v9; // r10

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a2 + v4) );
  if ( 0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a3 + 16) < v4 )
    sub_180011BA0();
  Src = (void *)sub_1800138F8(a3);
  sub_1800132FC(a1, v6, v7, v9, Size, Src, v6);
  return a1;
}
