/*
 * XREFs of sub_180081968 @ 0x180081968
 * Callers:
 *     sub_18004F530 @ 0x18004F530 (sub_18004F530.c)
 *     sub_1800819A0 @ 0x1800819A0 (sub_1800819A0.c)
 *     sub_1800C735C @ 0x1800C735C (sub_1800C735C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_180081968(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::DeviceRenderState::`vftable';
  v2 = a1[13];
  if ( v2 )
    sub_18001050C(v2);
  return sub_18002655C((__int64)a1);
}
