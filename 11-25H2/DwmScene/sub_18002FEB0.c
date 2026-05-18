/*
 * XREFs of sub_18002FEB0 @ 0x18002FEB0
 * Callers:
 *     sub_18003001C @ 0x18003001C (sub_18003001C.c)
 *     sub_1800D6C3C @ 0x1800D6C3C (sub_1800D6C3C.c)
 *     sub_1800D6F3F @ 0x1800D6F3F (sub_1800D6F3F.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18002FB7C @ 0x18002FB7C (sub_18002FB7C.c)
 */

__int64 __fastcall sub_18002FEB0(void ***a1)
{
  void **v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    sub_18002FB7C(v1 + 2);
    return sub_18000B77C(v1);
  }
  return result;
}
