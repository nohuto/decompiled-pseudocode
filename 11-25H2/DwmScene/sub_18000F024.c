/*
 * XREFs of sub_18000F024 @ 0x18000F024
 * Callers:
 *     sub_18000D6D0 @ 0x18000D6D0 (sub_18000D6D0.c)
 *     sub_18000EF44 @ 0x18000EF44 (sub_18000EF44.c)
 * Callees:
 *     sub_18000FB7C @ 0x18000FB7C (sub_18000FB7C.c)
 */

BOOL __fastcall sub_18000F024(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = ReleaseMutex(a1);
  if ( !result )
    sub_18000FB7C(retaddr, 2519LL);
  return result;
}
