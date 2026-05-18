/*
 * XREFs of sub_1800B87E8 @ 0x1800B87E8
 * Callers:
 *     sub_1800B8EB0 @ 0x1800B8EB0 (sub_1800B8EB0.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_1800B87E8(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = a1[16];
  if ( v2 )
    sub_18001060C(v2);
  v3 = a1[14];
  if ( v3 )
    sub_18001060C(v3);
  sub_18000E954(a1 + 12);
  *a1 = &Spectre::Engine::GpuQuery::`vftable';
  return sub_1800266BC((__int64)a1);
}
