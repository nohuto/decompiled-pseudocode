/*
 * XREFs of sub_18002FE28 @ 0x18002FE28
 * Callers:
 *     sub_18002D52C @ 0x18002D52C (sub_18002D52C.c)
 *     sub_18002FC0C @ 0x18002FC0C (sub_18002FC0C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

__int64 __fastcall sub_18002FE28(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    result = sub_18001050C(v2);
  v4 = *(volatile signed __int32 **)(a1 + 8);
  if ( v4 )
    return sub_180010544(v4);
  return result;
}
