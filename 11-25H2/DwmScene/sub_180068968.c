/*
 * XREFs of sub_180068968 @ 0x180068968
 * Callers:
 *     sub_18004F450 @ 0x18004F450 (sub_18004F450.c)
 *     sub_1800689E0 @ 0x1800689E0 (sub_1800689E0.c)
 *     sub_1800C8048 @ 0x1800C8048 (sub_1800C8048.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_180068968(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::DeviceDepthBuffer::`vftable';
  v2 = a1[13];
  if ( v2 )
    sub_18001050C(v2);
  return sub_18002655C((__int64)a1);
}
