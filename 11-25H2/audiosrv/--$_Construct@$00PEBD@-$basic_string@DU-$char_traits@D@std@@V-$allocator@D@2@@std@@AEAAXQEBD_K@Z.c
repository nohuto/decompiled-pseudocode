/*
 * XREFs of ??$_Construct@$00PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXQEBD_K@Z @ 0x180139EF8
 * Callers:
 *     ?name@locale@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180140CB8 (-name@locale@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002203C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1800C14AC (-_Xlen_string@std@@YAXXZ.c)
 */

void *__fastcall std::string::_Construct<1,char const *>(_QWORD *a1, const void *a2, size_t a3)
{
  __int64 v3; // rbp
  void *result; // rax
  _BYTE *v8; // rax
  _BYTE *v9; // rbx

  v3 = 0x7FFFFFFFFFFFFFFFLL;
  if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlen_string();
  a1[3] = 15LL;
  if ( a3 > 0xF )
  {
    if ( (a3 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      v3 = a3 | 0xF;
      if ( (a3 | 0xF) < 0x16 )
        v3 = 22LL;
    }
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v3 + 1);
    *a1 = v8;
    a1[2] = a3;
    a1[3] = v3;
    v9 = v8;
    result = memcpy_0(v8, a2, a3);
    v9[a3] = 0;
  }
  else
  {
    a1[2] = a3;
    result = memcpy_0(a1, a2, a3);
    *((_BYTE *)a1 + a3) = 0;
  }
  return result;
}
