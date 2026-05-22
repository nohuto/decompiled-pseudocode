/*
 * XREFs of ?AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEventsClientProxy@@@Z @ 0x180063C90
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace@AEBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@AEBI@Z @ 0x180027294 (--$emplace@AEBI@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18003AF78 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ??$emplace@AEAIAEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$00@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEAIAEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180063DC8 (--$emplace@AEAIAEAV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@-$.c)
 *     ?GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ @ 0x180063F10 (-GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x1800831F4 (--$count@X@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$a.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenEventsDispatcherPrincipal::AttachClient(
        PenEventsDispatcherPrincipal *this,
        struct BamoPenEventsDispatcherStub *a2,
        struct BamoPenEventsClientProxy *a3)
{
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(char *, __int64); // r8
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  struct BamoPenEventsClientProxy *v10; // rbx
  int v12[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int ProcessId; // [rsp+50h] [rbp+8h] BYREF
  struct BamoPenEventsClientProxy *v15; // [rsp+60h] [rbp+18h] BYREF
  char v16; // [rsp+68h] [rbp+20h] BYREF

  v15 = a3;
  if ( a3 )
    (**(void (__fastcall ***)(struct BamoPenEventsClientProxy *, struct BamoPenEventsDispatcherStub *))a3)(a3, a2);
  LOBYTE(v5) = PenEventsDispatcherPrincipal::GetButtonEventsSupportedFlag(this);
  v7 = v6((char *)a3 + 8, v5);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x96,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\penevent"
                    "sdispatcherprincipal.cpp",
      (const char *)(unsigned int)v7,
      v12[0]);
  LOBYTE(v8) = *((_DWORD *)this + 51) != 0;
  v9 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)a3 + 1) + 72LL))((char *)a3 + 8, v8);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x97,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\penevent"
                    "sdispatcherprincipal.cpp",
      (const char *)(unsigned int)v9,
      v12[0]);
  *((_QWORD *)a3 + 7) = this;
  ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a3 + 4) + 16LL));
  std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::emplace<unsigned int &,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy> &>(
    (char *)this + 64,
    &v16,
    &ProcessId,
    &v15);
  v10 = v15;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)v15 + 1) + 128LL))((__int64)v15 + 8)
    && !std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::count<void>(
          (char *)this + 128,
          &ProcessId) )
  {
    std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::emplace<unsigned int const &>(
      (__int64)this + 128,
      (__int64)v12,
      &ProcessId);
  }
  if ( v10 )
    (*(void (__fastcall **)(struct BamoPenEventsClientProxy *))(*(_QWORD *)v10 + 8LL))(v10);
  return 0LL;
}
