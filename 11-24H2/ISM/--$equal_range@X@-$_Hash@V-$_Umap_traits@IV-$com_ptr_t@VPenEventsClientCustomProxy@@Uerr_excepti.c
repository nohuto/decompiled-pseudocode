/*
 * XREFs of ??$equal_range@X@?$_Hash@V?$_Umap_traits@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$00@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@V12@@1@AEBI@Z @ 0x180081918
 * Callers:
 *     ?OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@@Z @ 0x1800801C8 (-OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientPr.c)
 *     ?GetClientsForProcess@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@I@Z @ 0x180194EF8 (-GetClientsForProcess@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClien.c)
 * Callees:
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180027528 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::equal_range<void>(
        __int64 a1,
        __int64 a2,
        int *a3)
{
  __int64 v4; // rax
  _QWORD *v5; // r10
  _QWORD *v6; // r11
  __int64 v7; // rdi
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 *v10; // r9
  __int64 *v11; // rax
  int v12; // r8d
  _QWORD *result; // rax

  v4 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
         a1,
         (__int64)a3);
  v7 = v5[3];
  v8 = (__int64 *)v5[1];
  v9 = 2 * (v5[6] & v4);
  v10 = *(__int64 **)(v7 + 16 * (v5[6] & v4));
  if ( v10 == v8 )
  {
LABEL_2:
    v11 = (__int64 *)v5[1];
  }
  else
  {
    v12 = *a3;
    while ( *((_DWORD *)v10 + 4) != v12 )
    {
      if ( v10 == *(__int64 **)(v7 + 16 * (v5[6] & v4) + 8) )
        goto LABEL_2;
      v10 = (__int64 *)*v10;
    }
    v11 = v10;
    do
    {
      v8 = (__int64 *)*v10;
      if ( v10 == *(__int64 **)(v7 + 8 * v9 + 8) )
        break;
      v10 = (__int64 *)*v10;
    }
    while ( v12 == *((_DWORD *)v8 + 4) );
  }
  *v6 = v11;
  result = v6;
  v6[1] = v8;
  return result;
}
