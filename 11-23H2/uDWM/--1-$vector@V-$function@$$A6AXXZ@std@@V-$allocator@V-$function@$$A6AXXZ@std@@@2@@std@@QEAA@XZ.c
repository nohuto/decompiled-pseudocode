/*
 * XREFs of ??1?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@QEAA@XZ @ 0x1800F11E0
 * Callers:
 *     _cereal::OutputArchive_cereal::JSONOutputArchive_0_::OutputArchive_cereal::JSONOutputArchive_0__::_1_::dtor$1 @ 0x1800F04D2 (_cereal--OutputArchive_cereal--JSONOutputArchive_0_--OutputArchive_cereal--JSONOutp_ea_1800F04D2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18006B904 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::vector<std::function<void (void)>>::~vector<std::function<void (void)>>(void **a1, __int64 a2)
{
  char *v3; // rbx
  char *v4; // rsi
  __int64 result; // rax

  v3 = (char *)*a1;
  if ( *a1 )
  {
    v4 = (char *)a1[1];
    while ( v3 != v4 )
    {
      std::_Func_class<void,>::_Tidy((__int64)v3, a2);
      v3 += 64;
    }
    result = std::_Deallocate<16,0>(*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFC0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
