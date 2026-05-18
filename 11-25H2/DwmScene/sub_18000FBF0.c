/*
 * XREFs of sub_18000FBF0 @ 0x18000FBF0
 * Callers:
 *     sub_18000D3F4 @ 0x18000D3F4 (sub_18000D3F4.c)
 *     sub_18000F2AC @ 0x18000F2AC (sub_18000F2AC.c)
 *     sub_18000FD70 @ 0x18000FD70 (sub_18000FD70.c)
 * Callees:
 *     sub_18000FD08 @ 0x18000FD08 (sub_18000FD08.c)
 */

__int64 __fastcall sub_18000FBF0(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2,
        volatile signed __int32 *a3)
{
  __int64 result; // rax

  result = sub_18000FD08(a1);
  if ( a2 )
  {
    *a1 = a2;
    a1[1] = a3;
    _InterlockedIncrement(a2);
  }
  return result;
}
