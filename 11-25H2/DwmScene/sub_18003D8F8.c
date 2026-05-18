/*
 * XREFs of sub_18003D8F8 @ 0x18003D8F8
 * Callers:
 *     sub_1800D7DF9 @ 0x1800D7DF9 (sub_1800D7DF9.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

__int64 __fastcall sub_18003D8F8(__int64 a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 16);
  if ( v1 )
    return sub_180010544(v1);
  return result;
}
