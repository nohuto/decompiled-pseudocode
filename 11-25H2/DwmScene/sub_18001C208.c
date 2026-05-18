/*
 * XREFs of sub_18001C208 @ 0x18001C208
 * Callers:
 *     sub_18001C674 @ 0x18001C674 (sub_18001C674.c)
 *     sub_1800D5DE5 @ 0x1800D5DE5 (sub_1800D5DE5.c)
 * Callees:
 *     sub_18001B760 @ 0x18001B760 (sub_18001B760.c)
 */

__int64 __fastcall sub_18001C208(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18001B760(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
