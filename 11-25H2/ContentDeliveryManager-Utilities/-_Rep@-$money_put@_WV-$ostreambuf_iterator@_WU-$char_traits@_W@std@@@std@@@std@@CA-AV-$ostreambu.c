/*
 * XREFs of ?_Rep@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_W_K@Z @ 0x180017D64
 * Callers:
 *     ?_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z @ 0x180016C9C (-_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 *     ?_Putmfld@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_W1V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@3@Z @ 0x180017500 (-_Putmfld@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ost.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_OWORD *__fastcall std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Rep(
        _OWORD *a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v8; // rbx
  int *v9; // rax
  unsigned __int16 **v10; // rcx
  unsigned __int16 *v11; // rdx
  unsigned __int16 v12; // ax
  _OWORD *result; // rax

  v4 = a4;
  if ( a4 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    do
    {
      if ( !v8
        || (!**(_QWORD **)(v8 + 64) || (v9 = *(int **)(v8 + 88), *v9 <= 0)
          ? (v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, a3))
          : (--*v9, v10 = *(unsigned __int16 ***)(v8 + 64), v11 = *v10, ++*v10, v12 = a3, *v11 = a3),
            v12 == 0xFFFF) )
      {
        *(_BYTE *)a2 = 1;
      }
      --v4;
    }
    while ( v4 );
  }
  result = a1;
  *a1 = *(_OWORD *)a2;
  return result;
}
