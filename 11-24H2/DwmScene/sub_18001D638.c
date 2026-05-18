/*
 * XREFs of sub_18001D638 @ 0x18001D638
 * Callers:
 *     sub_1800866B4 @ 0x1800866B4 (sub_1800866B4.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001CB38 @ 0x18001CB38 (sub_18001CB38.c)
 */

__int64 __fastcall sub_18001D638(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rbx
  char *v6; // rax
  unsigned __int64 v7; // rbx

  sub_18001CB38(a1, 0LL);
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 < a3 )
    a3 = *(_QWORD *)(a1 + 16);
  v6 = (char *)sub_1800138F8(a1);
  v7 = v5 - a3;
  memmove(v6, &v6[a3], v7 + 1);
  *(_QWORD *)(a1 + 16) = v7;
  return a1;
}
