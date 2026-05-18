/*
 * XREFs of sub_180030C00 @ 0x180030C00
 * Callers:
 *     sub_18002C5D8 @ 0x18002C5D8 (sub_18002C5D8.c)
 *     sub_180037E8C @ 0x180037E8C (sub_180037E8C.c)
 *     sub_180037FCC @ 0x180037FCC (sub_180037FCC.c)
 *     sub_1800383AC @ 0x1800383AC (sub_1800383AC.c)
 *     sub_1800384C0 @ 0x1800384C0 (sub_1800384C0.c)
 *     sub_180039024 @ 0x180039024 (sub_180039024.c)
 *     sub_18003ADD0 @ 0x18003ADD0 (sub_18003ADD0.c)
 *     sub_18005355C @ 0x18005355C (sub_18005355C.c)
 *     sub_18005A58C @ 0x18005A58C (sub_18005A58C.c)
 *     sub_18005AD0C @ 0x18005AD0C (sub_18005AD0C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_180030C00(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18001060C(v2);
  return a1;
}
