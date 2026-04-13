/*
 * XREFs of ?_Inside@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_NPEBD@Z @ 0x18003D848
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18003DF2C (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x180069CF4 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::string::_Inside(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdx

  if ( !a2 )
    return 0;
  v3 = a1[3] < 0x10uLL ? a1 : (_QWORD *)*a1;
  if ( a2 < (unsigned __int64)v3 )
    return 0;
  if ( a1[3] < 0x10uLL )
    v4 = a1;
  else
    v4 = (_QWORD *)*a1;
  return (unsigned __int64)v4 + a1[2] > a2;
}
