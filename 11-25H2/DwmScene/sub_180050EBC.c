/*
 * XREFs of sub_180050EBC @ 0x180050EBC
 * Callers:
 *     sub_180051658 @ 0x180051658 (sub_180051658.c)
 *     sub_1800BFB4C @ 0x1800BFB4C (sub_1800BFB4C.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 */

__int64 *__fastcall sub_180050EBC(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax

  v4 = sub_18001B098(28LL);
  if ( v4 )
  {
    *(_OWORD *)v4 = *(_OWORD *)a2;
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(v4 + 24) = *(_DWORD *)(a2 + 24);
  }
  *a1 = v4;
  return a1;
}
