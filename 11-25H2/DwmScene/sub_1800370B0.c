/*
 * XREFs of sub_1800370B0 @ 0x1800370B0
 * Callers:
 *     sub_180037140 @ 0x180037140 (sub_180037140.c)
 *     sub_1800C2658 @ 0x1800C2658 (sub_1800C2658.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180037090 @ 0x180037090 (sub_180037090.c)
 *     sub_1800374A0 @ 0x1800374A0 (sub_1800374A0.c)
 */

__int64 __fastcall sub_1800370B0(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::CommandList::`vftable';
  if ( a1[12] )
    sub_1800374A0();
  v2 = (volatile signed __int32 *)a1[17];
  if ( v2 )
    sub_180010544(v2);
  v3 = (volatile signed __int32 *)a1[15];
  if ( v3 )
    sub_180010544(v3);
  sub_180037090(a1 + 12);
  return sub_18002655C((__int64)a1);
}
