/*
 * XREFs of sub_180020740 @ 0x180020740
 * Callers:
 *     sub_180003660 @ 0x180003660 (sub_180003660.c)
 *     sub_180020FC0 @ 0x180020FC0 (sub_180020FC0.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 */

__int64 *__fastcall sub_180020740(__int64 *a1)
{
  __int64 v2; // rax

  v2 = sub_18001B098(56LL);
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_OWORD *)(v2 + 16) = 0LL;
    *(_OWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 48) = 0LL;
  }
  *a1 = v2;
  return a1;
}
