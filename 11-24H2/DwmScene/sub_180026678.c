/*
 * XREFs of sub_180026678 @ 0x180026678
 * Callers:
 *     sub_180026770 @ 0x180026770 (sub_180026770.c)
 *     sub_1800BED78 @ 0x1800BED78 (sub_1800BED78.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_180026678(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *a1 = &Spectre::Engine::DeviceFrameBuffer::`vftable';
  v2 = a1[15];
  if ( v2 )
    sub_18001060C(v2);
  v3 = a1[13];
  if ( v3 )
    sub_18001060C(v3);
  return sub_1800266BC(a1);
}
