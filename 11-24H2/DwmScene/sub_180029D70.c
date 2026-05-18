/*
 * XREFs of sub_180029D70 @ 0x180029D70
 * Callers:
 *     sub_180029DA8 @ 0x180029DA8 (sub_180029DA8.c)
 *     sub_18002A010 @ 0x18002A010 (sub_18002A010.c)
 *     ?dtor$27@?0??_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_0 @ 0x1800D66FD (-dtor$27@-0--_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_0.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

__int64 __fastcall sub_180029D70(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::IRenderOutput::`vftable';
  v2 = (volatile signed __int32 *)a1[9];
  if ( v2 )
    sub_180010644(v2);
  return sub_1800247B0((__int64)(a1 + 1));
}
