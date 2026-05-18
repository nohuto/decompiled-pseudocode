/*
 * XREFs of sub_1800306BC @ 0x1800306BC
 * Callers:
 *     sub_18003017C @ 0x18003017C (sub_18003017C.c)
 *     sub_1800351F4 @ 0x1800351F4 (sub_1800351F4.c)
 *     sub_180052F4C @ 0x180052F4C (sub_180052F4C.c)
 *     sub_180053410 @ 0x180053410 (sub_180053410.c)
 *     sub_1800D6DE7 @ 0x1800D6DE7 (sub_1800D6DE7.c)
 *     sub_1800D70EA @ 0x1800D70EA (sub_1800D70EA.c)
 *     sub_1800D8F8F @ 0x1800D8F8F (sub_1800D8F8F.c)
 *     sub_1800D904B @ 0x1800D904B (sub_1800D904B.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800306BC(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 8) )
  {
    result = o_abort();
    __debugbreak();
  }
  return result;
}
