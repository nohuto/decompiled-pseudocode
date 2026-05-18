/*
 * XREFs of sub_18000DA6C @ 0x18000DA6C
 * Callers:
 *     sub_18000D6B0 @ 0x18000D6B0 (sub_18000D6B0.c)
 *     sub_18000FCB4 @ 0x18000FCB4 (sub_18000FCB4.c)
 * Callees:
 *     sub_18000FB7C @ 0x18000FB7C (sub_18000FB7C.c)
 */

BOOL __fastcall sub_18000DA6C(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = CloseHandle(a1);
  if ( !result )
    sub_18000FB7C(retaddr, 2509LL);
  return result;
}
