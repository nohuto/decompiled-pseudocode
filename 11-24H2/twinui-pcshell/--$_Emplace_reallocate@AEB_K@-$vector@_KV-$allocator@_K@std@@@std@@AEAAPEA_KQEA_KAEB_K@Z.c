/*
 * XREFs of ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z @ 0x1802B09C8
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x1806506A4 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18001D4AC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXQEAPEAX_K1@Z @ 0x1801D3354 (-_Change_array@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXQEAPEAX_K1@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802AFF8C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(
        const void **a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  __int64 v14; // rsi
  char *v15; // r14
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8
  char *result; // rax
  void *v21; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v7 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (__int64)v13;
  v21 = v13;
  try
  {
    v15 = &v13[8 * v6];
    *(_QWORD *)v15 = *a3;
    v16 = a1[1];
    v17 = *a1;
    v18 = v13;
    if ( a2 == v16 )
    {
      v19 = v16 - v17;
    }
    else
    {
      memmove_0(v13, v17, a2 - (_BYTE *)*a1);
      v18 = v15 + 8;
      v19 = (_BYTE *)a1[1] - a2;
      v17 = a2;
    }
    memmove_0(v18, v17, v19);
    std::vector<void *>::_Change_array((__int64)a1, v14, v9, v8);
    result = v15;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(8 * v8));
    throw;
  }
  return result;
}
