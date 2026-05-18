/*
 * XREFs of sub_180092C10 @ 0x180092C10
 * Callers:
 *     sub_180094230 @ 0x180094230 (sub_180094230.c)
 * Callees:
 *     sub_18000CBBC @ 0x18000CBBC (sub_18000CBBC.c)
 *     sub_180092D88 @ 0x180092D88 (sub_180092D88.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180092C10(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // eax

  *(_QWORD *)a1 = &Spectre::Engine::ConstantBufferState::`vftable';
  sub_18000CBBC(a1 + 8, 192LL, 6LL, sub_180054AC0);
  sub_18000CBBC(a1 + 1160, 192LL, 6LL, sub_180054AC0);
  sub_18000CBBC(a1 + 2312, 192LL, 6LL, sub_180054AC0);
  *(_DWORD *)(a1 + 3464) = a2;
  *(_BYTE *)(a1 + 3468) = 1;
  v6 = 0LL;
  do
  {
    v7 = *(_DWORD *)(a1 + 3464);
    if ( _bittest(&v7, v6) )
      sub_180092D88(a1 + 192 * v6 + 2312, a3);
    v6 = (unsigned int)(v6 + 1);
  }
  while ( (unsigned int)v6 < 6 );
  return a1;
}
