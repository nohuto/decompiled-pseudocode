/*
 * XREFs of sub_18002FE5C @ 0x18002FE5C
 * Callers:
 *     sub_18002D558 @ 0x18002D558 (sub_18002D558.c)
 *     sub_18002FC3C @ 0x18002FC3C (sub_18002FC3C.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180036708 @ 0x180036708 (sub_180036708.c)
 */

__int64 __fastcall sub_18002FE5C(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx

  result = sub_180036708(a1 + 16);
  v3 = *(volatile signed __int32 **)(a1 + 8);
  if ( v3 )
    return sub_180010544(v3);
  return result;
}
