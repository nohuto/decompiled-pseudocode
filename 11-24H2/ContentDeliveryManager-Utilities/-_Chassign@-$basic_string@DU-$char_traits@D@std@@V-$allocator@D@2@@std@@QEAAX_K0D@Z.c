/*
 * XREFs of ?_Chassign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0D@Z @ 0x180059934
 * Callers:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18005BE70 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18005C0A4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::string::_Chassign(_QWORD *a1, void *a2, size_t a3, char a4)
{
  void *result; // rax

  result = a2;
  if ( a3 == 1 )
  {
    if ( a1[3] >= 0x10uLL )
      a1 = (_QWORD *)*a1;
    *((_BYTE *)a2 + (_QWORD)a1) = a4;
  }
  else
  {
    if ( a1[3] >= 0x10uLL )
      a1 = (_QWORD *)*a1;
    return memset_0((char *)a1 + (_QWORD)a2, a4, a3);
  }
  return result;
}
