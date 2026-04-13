/*
 * XREFs of ?_Put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@2@_K@Z @ 0x180016B1C
 * Callers:
 *     ?_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z @ 0x180016C9C (-_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 *     ?_Putmfld@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_W1V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@3@Z @ 0x180017500 (-_Putmfld@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ost.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_OWORD *__fastcall std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Put(
        _OWORD *a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v8; // rdi
  unsigned __int16 v9; // r8
  int *v10; // rax
  unsigned __int16 **v11; // rcx
  unsigned __int16 *v12; // rdx
  _OWORD *result; // rax

  v4 = a4;
  if ( a4 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    do
    {
      if ( !v8
        || ((v9 = *a3, !**(_QWORD **)(v8 + 64)) || (v10 = *(int **)(v8 + 88), *v10 <= 0)
          ? (v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, v9))
          : (--*v10, v11 = *(unsigned __int16 ***)(v8 + 64), v12 = *v11, ++*v11, *v12 = v9),
            v9 == 0xFFFF) )
      {
        *(_BYTE *)a2 = 1;
      }
      ++a3;
      --v4;
    }
    while ( v4 );
  }
  result = a1;
  *a1 = *(_OWORD *)a2;
  return result;
}
