/*
 * XREFs of sub_18000D6B0 @ 0x18000D6B0
 * Callers:
 *     sub_18000D55C @ 0x18000D55C (sub_18000D55C.c)
 *     sub_18000D728 @ 0x18000D728 (sub_18000D728.c)
 *     sub_18000D7F4 @ 0x18000D7F4 (sub_18000D7F4.c)
 *     sub_18000F7EC @ 0x18000F7EC (sub_18000F7EC.c)
 * Callees:
 *     sub_18000DA6C @ 0x18000DA6C (sub_18000DA6C.c)
 */

__int64 __fastcall sub_18000D6B0(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return sub_18000DA6C();
  return result;
}
