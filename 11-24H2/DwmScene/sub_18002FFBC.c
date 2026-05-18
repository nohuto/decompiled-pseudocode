/*
 * XREFs of sub_18002FFBC @ 0x18002FFBC
 * Callers:
 *     sub_18002D6B8 @ 0x18002D6B8 (sub_18002D6B8.c)
 *     sub_18002FD9C @ 0x18002FD9C (sub_18002FD9C.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180036868 @ 0x180036868 (sub_180036868.c)
 */

__int64 __fastcall sub_18002FFBC(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx

  result = sub_180036868(a1 + 16);
  v3 = *(volatile signed __int32 **)(a1 + 8);
  if ( v3 )
    return sub_180010644(v3);
  return result;
}
