/*
 * XREFs of sub_18003DA58 @ 0x18003DA58
 * Callers:
 *     sub_1800D7F59 @ 0x1800D7F59 (sub_1800D7F59.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

__int64 __fastcall sub_18003DA58(__int64 a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 16);
  if ( v1 )
    return sub_180010644(v1);
  return result;
}
