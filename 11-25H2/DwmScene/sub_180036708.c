/*
 * XREFs of sub_180036708 @ 0x180036708
 * Callers:
 *     sub_18002FE5C @ 0x18002FE5C (sub_18002FE5C.c)
 *     sub_18002FEE4 @ 0x18002FEE4 (sub_18002FEE4.c)
 *     sub_180052D2C @ 0x180052D2C (sub_180052D2C.c)
 *     sub_180052DEC @ 0x180052DEC (sub_180052DEC.c)
 *     sub_180062230 @ 0x180062230 (sub_180062230.c)
 *     sub_1800D788E @ 0x1800D788E (sub_1800D788E.c)
 *     sub_1800D9569 @ 0x1800D9569 (sub_1800D9569.c)
 *     sub_1800DA48F @ 0x1800DA48F (sub_1800DA48F.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18002C478 @ 0x18002C478 (sub_18002C478.c)
 */

__int64 __fastcall sub_180036708(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18002C478((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010134(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
