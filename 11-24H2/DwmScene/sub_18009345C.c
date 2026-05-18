/*
 * XREFs of sub_18009345C @ 0x18009345C
 * Callers:
 *     sub_180094390 @ 0x180094390 (sub_180094390.c)
 * Callees:
 *     sub_18000CD2C @ 0x18000CD2C (sub_18000CD2C.c)
 *     sub_180093250 @ 0x180093250 (sub_180093250.c)
 */

__int64 __fastcall sub_18009345C(__int64 a1, int a2, __int64 a3)
{
  unsigned int i; // ebx
  int v7; // eax

  *(_QWORD *)a1 = &Spectre::Engine::SamplerState::`vftable';
  sub_18000CD2C(a1 + 8, 256LL, 6LL, sub_180054C60);
  sub_18000CD2C(a1 + 1544, 256LL, 6LL, sub_180054C60);
  sub_18000CD2C(a1 + 3080, 256LL, 6LL, sub_180054C60);
  *(_DWORD *)(a1 + 4616) = a2;
  *(_BYTE *)(a1 + 4620) = 1;
  for ( i = 0; i < 6; ++i )
  {
    v7 = *(_DWORD *)(a1 + 4616);
    if ( _bittest(&v7, i) )
      sub_180093250((__int64 *)(a1 + ((unsigned __int64)i << 8) + 3080), a3 + 448);
  }
  return a1;
}
