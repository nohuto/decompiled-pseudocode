/*
 * XREFs of sub_1800513D4 @ 0x1800513D4
 * Callers:
 *     ??_G__ExceptionPtr@@QEAAPEAXI@Z_0 @ 0x18004F5D0 (--_G__ExceptionPtr@@QEAAPEAXI@Z_0.c)
 *     sub_1800BFC30 @ 0x1800BFC30 (sub_1800BFC30.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180051390 @ 0x180051390 (sub_180051390.c)
 */

__int64 __fastcall sub_1800513D4(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceTexture::`vftable';
  sub_180011A5C((__int64)(a1 + 15));
  sub_180051390(a1 + 14);
  v2 = (volatile signed __int32 *)a1[13];
  if ( v2 )
    sub_180010544(v2);
  return sub_18002655C((__int64)a1);
}
