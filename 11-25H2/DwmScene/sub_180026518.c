/*
 * XREFs of sub_180026518 @ 0x180026518
 * Callers:
 *     sub_180026610 @ 0x180026610 (sub_180026610.c)
 *     sub_1800BEC18 @ 0x1800BEC18 (sub_1800BEC18.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_180026518(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *a1 = &Spectre::Engine::DeviceFrameBuffer::`vftable';
  v2 = a1[15];
  if ( v2 )
    sub_18001050C(v2);
  v3 = a1[13];
  if ( v3 )
    sub_18001050C(v3);
  return sub_18002655C(a1);
}
