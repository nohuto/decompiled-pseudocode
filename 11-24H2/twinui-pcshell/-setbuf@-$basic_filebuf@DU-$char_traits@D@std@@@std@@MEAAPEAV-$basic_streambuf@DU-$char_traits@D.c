/*
 * XREFs of ?setbuf@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAPEAV?$basic_streambuf@DU?$char_traits@D@std@@@2@PEAD_J@Z @ 0x1806170C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Init@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z @ 0x1806162E0 (-_Init@-$basic_filebuf@DU-$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z.c)
 */

__int64 __fastcall std::filebuf::setbuf(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // rcx

  if ( a2 || a3 )
    v5 = 0LL;
  else
    v5 = 4LL;
  v6 = *(_QWORD *)(a1 + 128);
  if ( !v6 || (unsigned int)_o_setvbuf(v6, a2, v5, a3) )
    return 0LL;
  std::filebuf::_Init(a1, *(_QWORD *)(a1 + 128), 1);
  return a1;
}
