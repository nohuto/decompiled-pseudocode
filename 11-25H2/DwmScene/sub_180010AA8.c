/*
 * XREFs of sub_180010AA8 @ 0x180010AA8
 * Callers:
 *     sub_180010C7C @ 0x180010C7C (sub_180010C7C.c)
 *     sub_18001185C @ 0x18001185C (sub_18001185C.c)
 *     sub_18002D5E0 @ 0x18002D5E0 (sub_18002D5E0.c)
 *     sub_18002E264 @ 0x18002E264 (sub_18002E264.c)
 *     sub_18002FEF0 @ 0x18002FEF0 (sub_18002FEF0.c)
 *     sub_18003001C @ 0x18003001C (sub_18003001C.c)
 *     sub_180033C94 @ 0x180033C94 (sub_180033C94.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_180033E24 @ 0x180033E24 (sub_180033E24.c)
 *     sub_1800527B4 @ 0x1800527B4 (sub_1800527B4.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

__int64 __fastcall sub_180010AA8(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  volatile signed __int32 *v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(volatile signed __int32 **)(v3 + 8);
      if ( v4 )
        result = sub_180010544(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
