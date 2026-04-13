/*
 * XREFs of ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K@Z @ 0x18003E2A4
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18003DE28 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180004800 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 */

_QWORD *__fastcall std::string::erase(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax

  if ( a1[2] < a2 )
    std::_Xout_of_range("invalid string position");
  if ( a1[3] < 0x10uLL )
    v2 = a1;
  else
    v2 = (_QWORD *)*a1;
  a1[2] = a2;
  *((_BYTE *)v2 + a2) = 0;
  return a1;
}
