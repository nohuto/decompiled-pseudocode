/*
 * XREFs of sub_1800877A8 @ 0x1800877A8
 * Callers:
 *     sub_180086F5C @ 0x180086F5C (sub_180086F5C.c)
 * Callees:
 *     sub_1800878DC @ 0x1800878DC (sub_1800878DC.c)
 */

__int64 __fastcall sub_1800877A8(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1800878DC(v1);
  return result;
}
