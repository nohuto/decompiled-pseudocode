/*
 * XREFs of sub_18000F124 @ 0x18000F124
 * Callers:
 *     sub_18000D7B0 @ 0x18000D7B0 (sub_18000D7B0.c)
 *     sub_18000F044 @ 0x18000F044 (sub_18000F044.c)
 * Callees:
 *     sub_18000FC7C @ 0x18000FC7C (sub_18000FC7C.c)
 */

BOOL __fastcall sub_18000F124(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = ReleaseMutex(a1);
  if ( !result )
    sub_18000FC7C(retaddr, 2535LL);
  return result;
}
