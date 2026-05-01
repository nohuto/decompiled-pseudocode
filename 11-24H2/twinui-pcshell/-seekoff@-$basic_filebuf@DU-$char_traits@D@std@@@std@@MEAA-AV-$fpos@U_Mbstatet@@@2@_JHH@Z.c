/*
 * XREFs of ?seekoff@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@_JHH@Z @ 0x180616F30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Reset_back@?$basic_filebuf@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1802CAB94 (-_Reset_back@-$basic_filebuf@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?_Endwrite@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAA_NXZ @ 0x180615C7C (-_Endwrite@-$basic_filebuf@DU-$char_traits@D@std@@@std@@IEAA_NXZ.c)
 */

fpos_t *__fastcall std::filebuf::seekoff(__int64 a1, fpos_t *a2, __int64 a3, int a4)
{
  fpos_t v8; // rax
  fpos_t v9; // rcx
  fpos_t Position; // [rsp+30h] [rbp+8h] BYREF

  Position = 0LL;
  if ( std::streambuf::gptr(a1) == a1 + 112 && a4 == 1 && !*(_QWORD *)(a1 + 104) )
    --a3;
  if ( !*(_QWORD *)(a1 + 128)
    || !std::filebuf::_Endwrite(a1)
    || (a3 || a4 != 1) && _fseeki64(*(FILE **)(a1 + 128), a3, a4)
    || fgetpos(*(FILE **)(a1 + 128), &Position) )
  {
    *a2 = -1LL;
    a2[1] = 0LL;
    v8 = 0LL;
  }
  else
  {
    std::filebuf::_Reset_back(a1);
    v8 = *(_QWORD *)(a1 + 116);
    v9 = Position;
    a2[1] = 0LL;
    *a2 = v9;
  }
  a2[2] = v8;
  return a2;
}
