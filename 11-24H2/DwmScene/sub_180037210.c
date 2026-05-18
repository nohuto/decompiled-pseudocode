/*
 * XREFs of sub_180037210 @ 0x180037210
 * Callers:
 *     sub_1800372A0 @ 0x1800372A0 (sub_1800372A0.c)
 *     sub_1800C27B8 @ 0x1800C27B8 (sub_1800C27B8.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 *     sub_180037600 @ 0x180037600 (sub_180037600.c)
 */

__int64 __fastcall sub_180037210(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::CommandList::`vftable';
  if ( a1[12] )
    sub_180037600();
  v2 = (volatile signed __int32 *)a1[17];
  if ( v2 )
    sub_180010644(v2);
  v3 = (volatile signed __int32 *)a1[15];
  if ( v3 )
    sub_180010644(v3);
  sub_1800371F0(a1 + 12);
  return sub_1800266BC((__int64)a1);
}
