/*
 * XREFs of sub_180079E74 @ 0x180079E74
 * Callers:
 *     sub_180041634 @ 0x180041634 (sub_180041634.c)
 *     sub_180041B78 @ 0x180041B78 (sub_180041B78.c)
 *     sub_180043710 @ 0x180043710 (sub_180043710.c)
 *     sub_180043CA4 @ 0x180043CA4 (sub_180043CA4.c)
 *     sub_180076F14 @ 0x180076F14 (sub_180076F14.c)
 *     sub_18007965C @ 0x18007965C (sub_18007965C.c)
 *     sub_180079EB0 @ 0x180079EB0 (sub_180079EB0.c)
 *     sub_18007C5F8 @ 0x18007C5F8 (sub_18007C5F8.c)
 *     sub_180091DB0 @ 0x180091DB0 (sub_180091DB0.c)
 * Callees:
 *     sub_18004C518 @ 0x18004C518 (sub_18004C518.c)
 */

__int64 __fastcall sub_180079E74(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_18004C518(*(_QWORD *)(a1 + 1152), a2);
  if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)result + 128) == 0xFFFF )
    return 511LL;
  return result;
}
