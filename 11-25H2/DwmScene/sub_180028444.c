/*
 * XREFs of sub_180028444 @ 0x180028444
 * Callers:
 *     sub_180015898 @ 0x180015898 (sub_180015898.c)
 *     sub_18006B954 @ 0x18006B954 (sub_18006B954.c)
 *     sub_1800B617C @ 0x1800B617C (sub_1800B617C.c)
 *     sub_1800B6328 @ 0x1800B6328 (sub_1800B6328.c)
 *     sub_1800B64D4 @ 0x1800B64D4 (sub_1800B64D4.c)
 *     sub_1800B6680 @ 0x1800B6680 (sub_1800B6680.c)
 *     sub_1800B682C @ 0x1800B682C (sub_1800B682C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

__int64 __fastcall sub_180028444(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    result = sub_18001050C(v2);
  v5 = *(volatile signed __int32 **)(a2 + 8);
  if ( v5 )
    return sub_180010544(v5);
  return result;
}
