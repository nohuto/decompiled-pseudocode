/*
 * XREFs of sub_18000FCF0 @ 0x18000FCF0
 * Callers:
 *     sub_18000D4DC @ 0x18000D4DC (sub_18000D4DC.c)
 *     sub_18000F3AC @ 0x18000F3AC (sub_18000F3AC.c)
 *     sub_18000FE70 @ 0x18000FE70 (sub_18000FE70.c)
 * Callees:
 *     sub_18000FE08 @ 0x18000FE08 (sub_18000FE08.c)
 */

__int64 __fastcall sub_18000FCF0(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2,
        volatile signed __int32 *a3)
{
  __int64 result; // rax

  result = sub_18000FE08(a1);
  if ( a2 )
  {
    *a1 = a2;
    a1[1] = a3;
    _InterlockedIncrement(a2);
  }
  return result;
}
