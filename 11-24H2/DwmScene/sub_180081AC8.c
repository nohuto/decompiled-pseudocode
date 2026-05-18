/*
 * XREFs of sub_180081AC8 @ 0x180081AC8
 * Callers:
 *     sub_18004F690 @ 0x18004F690 (sub_18004F690.c)
 *     sub_180081B00 @ 0x180081B00 (sub_180081B00.c)
 *     sub_1800C74BC @ 0x1800C74BC (sub_1800C74BC.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_180081AC8(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::DeviceRenderState::`vftable';
  v2 = a1[13];
  if ( v2 )
    sub_18001060C(v2);
  return sub_1800266BC((__int64)a1);
}
