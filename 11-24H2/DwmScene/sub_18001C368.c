/*
 * XREFs of sub_18001C368 @ 0x18001C368
 * Callers:
 *     sub_18001C7D4 @ 0x18001C7D4 (sub_18001C7D4.c)
 *     sub_1800D5F45 @ 0x1800D5F45 (sub_1800D5F45.c)
 * Callees:
 *     sub_18001B8C0 @ 0x18001B8C0 (sub_18001B8C0.c)
 */

__int64 __fastcall sub_18001C368(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18001B8C0(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
