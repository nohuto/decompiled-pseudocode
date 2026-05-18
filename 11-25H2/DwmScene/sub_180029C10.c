/*
 * XREFs of sub_180029C10 @ 0x180029C10
 * Callers:
 *     sub_180029C48 @ 0x180029C48 (sub_180029C48.c)
 *     sub_180029EB0 @ 0x180029EB0 (sub_180029EB0.c)
 *     ?dtor$27@?0??_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_0 @ 0x1800D659D (-dtor$27@-0--_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_0.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

__int64 __fastcall sub_180029C10(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::IRenderOutput::`vftable';
  v2 = (volatile signed __int32 *)a1[9];
  if ( v2 )
    sub_180010544(v2);
  return sub_180024650((__int64)(a1 + 1));
}
