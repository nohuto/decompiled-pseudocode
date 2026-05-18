/*
 * XREFs of sub_180068AC8 @ 0x180068AC8
 * Callers:
 *     sub_18004F5B0 @ 0x18004F5B0 (sub_18004F5B0.c)
 *     sub_180068B40 @ 0x180068B40 (sub_180068B40.c)
 *     sub_1800C81A8 @ 0x1800C81A8 (sub_1800C81A8.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_180068AC8(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::DeviceDepthBuffer::`vftable';
  v2 = a1[13];
  if ( v2 )
    sub_18001060C(v2);
  return sub_1800266BC((__int64)a1);
}
