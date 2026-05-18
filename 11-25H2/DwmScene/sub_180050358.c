/*
 * XREFs of sub_180050358 @ 0x180050358
 * Callers:
 *     sub_18004F580 @ 0x18004F580 (sub_18004F580.c)
 *     sub_180050440 @ 0x180050440 (sub_180050440.c)
 *     sub_1800C7050 @ 0x1800C7050 (sub_1800C7050.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

__int64 __fastcall sub_180050358(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx

  *a1 = &Spectre::Engine::DeviceSampler::`vftable';
  v2 = (volatile signed __int32 *)a1[15];
  if ( v2 )
    sub_180010544(v2);
  v3 = a1[13];
  if ( v3 )
    sub_18001050C(v3);
  return sub_18002655C((__int64)a1);
}
