/*
 * XREFs of ?OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@@Z @ 0x1800801B4
 * Callers:
 *     ?OnDisconnected@PenEventsClientCustomProxy@@MEAAJXZ @ 0x180076160 (-OnDisconnected@PenEventsClientCustomProxy@@MEAAJXZ.c)
 * Callees:
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18003AF78 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?OnPenEventsClientProxyDisconnected@PenEvents@InputTraceLogging@@SAXXZ @ 0x180080338 (-OnPenEventsClientProxyDisconnected@PenEvents@InputTraceLogging@@SAXXZ.c)
 *     ??$_Erase@I@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@AEAA_KAEBI@Z @ 0x1800809D4 (--$_Erase@I@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$.c)
 *     ??$equal_range@X@?$_Hash@V?$_Umap_traits@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$00@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@V12@@1@AEBI@Z @ 0x180081878 (--$equal_range@X@-$_Hash@V-$_Umap_traits@IV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_excepti.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$00@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@V21@@Z @ 0x18018ECC4 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIV-$com_ptr_t@VPenEven.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PenEventsDispatcherPrincipal::OnPenEventsClientProxyDisconnected(
        PenEventsDispatcherPrincipal *this,
        struct BamoPenEventsClientProxy *a2)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  int v6; // ebp
  unsigned __int64 i; // r9
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 *v13; // r8
  char *v14; // rdi
  unsigned __int64 j; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *k; // rbx
  _QWORD v21[7]; // [rsp+20h] [rbp-38h] BYREF
  int ProcessId; // [rsp+60h] [rbp+8h] BYREF
  char v23; // [rsp+68h] [rbp+10h] BYREF

  InputTraceLogging::PenEvents::OnPenEventsClientProxyDisconnected();
  v4 = 0xCBF29CE484222325uLL;
  ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 4) + 16LL));
  v5 = 0xCBF29CE484222325uLL;
  v6 = ProcessId;
  for ( i = 0LL; i < 4; ++i )
  {
    v8 = *((unsigned __int8 *)&ProcessId + i);
    v5 = 0x100000001B3LL * (v8 ^ v5);
  }
  v9 = *((_QWORD *)this + 11);
  v10 = (__int64 *)*((_QWORD *)this + 9);
  v11 = 2 * (v5 & *((_QWORD *)this + 14));
  v12 = *(__int64 **)(v9 + 16 * (v5 & *((_QWORD *)this + 14)));
  if ( v12 == v10 )
  {
LABEL_4:
    v13 = (__int64 *)*((_QWORD *)this + 9);
    goto LABEL_11;
  }
  while ( *((_DWORD *)v12 + 4) != ProcessId )
  {
    if ( v12 == *(__int64 **)(v9 + 16 * (v5 & *((_QWORD *)this + 14)) + 8) )
      goto LABEL_4;
    v12 = (__int64 *)*v12;
  }
  v13 = v12;
  do
  {
    v10 = (__int64 *)*v12;
    if ( v12 == *(__int64 **)(v9 + 8 * v11 + 8) )
      break;
    v12 = (__int64 *)*v12;
  }
  while ( ProcessId == *((_DWORD *)v10 + 4) );
LABEL_11:
  while ( v13 != v10 )
  {
    if ( (struct BamoPenEventsClientProxy *)v13[3] == a2 )
    {
      std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>>>,0>(
        (char *)this + 64,
        &v23);
      break;
    }
    v13 = (__int64 *)*v13;
  }
  v14 = (char *)this + 128;
  for ( j = 0LL; j < 4; ++j )
  {
    v16 = *((unsigned __int8 *)&ProcessId + j);
    v4 = 0x100000001B3LL * (v16 ^ v4);
  }
  v17 = *((_QWORD *)this + 19);
  v18 = *(_QWORD *)(v17 + 16 * (v4 & *((_QWORD *)this + 22)) + 8);
  if ( v18 == *((_QWORD *)this + 17) )
  {
LABEL_21:
    v18 = 0LL;
  }
  else
  {
    while ( v6 != *(_DWORD *)(v18 + 16) )
    {
      if ( v18 == *(_QWORD *)(v17 + 16 * (v4 & *((_QWORD *)this + 22))) )
        goto LABEL_21;
      v18 = *(_QWORD *)(v18 + 8);
    }
  }
  if ( v18 )
  {
    std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::equal_range<void>(
      (char *)this + 64,
      v21,
      &ProcessId);
    for ( k = (_QWORD *)v21[0]; k != (_QWORD *)v21[1]; k = (_QWORD *)*k )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(k[3] + 8LL) + 128LL))(k[3] + 8LL) )
        return 0LL;
    }
    std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Erase<unsigned int>(
      v14,
      &ProcessId);
  }
  return 0LL;
}
