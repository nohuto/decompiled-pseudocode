/*
 * XREFs of sub_18000DB4C @ 0x18000DB4C
 * Callers:
 *     sub_18000D790 @ 0x18000D790 (sub_18000D790.c)
 *     sub_18000FDB4 @ 0x18000FDB4 (sub_18000FDB4.c)
 * Callees:
 *     sub_18000FC7C @ 0x18000FC7C (sub_18000FC7C.c)
 */

BOOL __fastcall sub_18000DB4C(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = CloseHandle(a1);
  if ( !result )
    sub_18000FC7C(retaddr, 2525LL);
  return result;
}
