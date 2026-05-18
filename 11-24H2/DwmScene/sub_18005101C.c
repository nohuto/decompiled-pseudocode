/*
 * XREFs of sub_18005101C @ 0x18005101C
 * Callers:
 *     sub_1800517B8 @ 0x1800517B8 (sub_1800517B8.c)
 *     sub_1800BFCAC @ 0x1800BFCAC (sub_1800BFCAC.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 */

__int64 *__fastcall sub_18005101C(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax

  v4 = sub_18001B1F8(28LL);
  if ( v4 )
  {
    *(_OWORD *)v4 = *(_OWORD *)a2;
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(v4 + 24) = *(_DWORD *)(a2 + 24);
  }
  *a1 = v4;
  return a1;
}
