/*
 * XREFs of sub_180092F74 @ 0x180092F74
 * Callers:
 *     sub_180094230 @ 0x180094230 (sub_180094230.c)
 * Callees:
 *     sub_18000CBBC @ 0x18000CBBC (sub_18000CBBC.c)
 *     sub_1800930F0 @ 0x1800930F0 (sub_1800930F0.c)
 */

__int64 __fastcall sub_180092F74(__int64 a1, int a2, __int64 a3)
{
  unsigned int i; // ebx
  int v7; // eax

  *(_QWORD *)a1 = &Spectre::Engine::TextureState::`vftable';
  sub_18000CBBC(a1 + 8, 256LL, 6LL, sub_180054B00);
  sub_18000CBBC(a1 + 1544, 256LL, 6LL, sub_180054B00);
  sub_18000CBBC(a1 + 3080, 256LL, 6LL, sub_180054B00);
  *(_DWORD *)(a1 + 4616) = a2;
  *(_BYTE *)(a1 + 4620) = 1;
  for ( i = 0; i < 6; ++i )
  {
    v7 = *(_DWORD *)(a1 + 4616);
    if ( _bittest(&v7, i) )
      sub_1800930F0(a1 + ((unsigned __int64)i << 8) + 3080, a3 + 192);
  }
  return a1;
}
