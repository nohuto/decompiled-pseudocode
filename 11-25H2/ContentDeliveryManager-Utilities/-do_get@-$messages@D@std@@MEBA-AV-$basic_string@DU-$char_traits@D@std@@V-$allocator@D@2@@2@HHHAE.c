/*
 * XREFs of ?do_get@?$messages@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@HHHAEBV32@@Z @ 0x18001F8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18003DE28 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 */

_QWORD *__fastcall std::messages<char>::do_get(__int64 a1, _QWORD *a2)
{
  a2[3] = 15LL;
  a2[2] = 0LL;
  *(_BYTE *)a2 = 0;
  std::string::assign(a2);
  return a2;
}
