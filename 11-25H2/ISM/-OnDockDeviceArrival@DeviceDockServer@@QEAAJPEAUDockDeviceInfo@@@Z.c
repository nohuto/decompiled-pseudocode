/*
 * XREFs of ?OnDockDeviceArrival@DeviceDockServer@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x18017E188
 * Callers:
 *     ?Initialize@DockProcessor@@IEAAJXZ @ 0x1801B07B8 (-Initialize@DockProcessor@@IEAAJXZ.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E01C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1800B48F8 (-find@-$_Tree@V-$_Tmap_traits@IV-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil.c)
 *     ??$_Emplace@AEAKAEAV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEAKAEAV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18017CD58 (--$_Emplace@AEAKAEAV-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@-$_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DeviceDockServer::OnDockDeviceArrival(DeviceDockServer *this, struct DockDeviceInfo *a2)
{
  __int64 *v4; // r15
  const char *v5; // r9
  char *v6; // rdi
  struct Microsoft::Bamo::BaseBamoConnection *BamoServerConnection; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 i; // rbx
  int v11; // eax
  char v13[56]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char *v15; // [rsp+60h] [rbp+8h] BYREF
  char *v16; // [rsp+68h] [rbp+10h] BYREF

  v4 = (__int64 *)((char *)this + 104);
  LODWORD(v15) = *(_DWORD *)a2;
  if ( *std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::find(
          (__int64 *)this + 13,
          (__int64)&v16,
          &v15) != *((_QWORD *)this + 13) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x58,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
      v5);
  v15 = 0LL;
  v6 = (char *)operator new(0x58uLL);
  v16 = v6;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  *(_QWORD *)v6 = &BamoDockDevicePrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)v6 + 1) = &BamoDockDevicePrincipal::`vftable'{for `IDockDevicePrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl(
    (Microsoft::BamoImpl::BamoPrincipalImpl *)(v6 + 16),
    BamoServerConnection);
  *((_QWORD *)v6 + 2) = &BamoImpl::BamoDockDevicePrincipalImpl::`vftable';
  *((_QWORD *)v6 + 7) = 0LL;
  v6[64] = 0;
  *(_OWORD *)(v6 + 68) = 0LL;
  v15 = v6;
  (*(void (__fastcall **)(char *, char *))(*((_QWORD *)v6 + 1) + 32LL))(v6 + 8, (char *)a2 + 1548);
  LOBYTE(v8) = *((_BYTE *)a2 + 1663);
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)v6 + 1) + 48LL))(v6 + 8, v8);
  (*(void (__fastcall **)(char *, char *))(*((_QWORD *)v6 + 1) + 64LL))(v6 + 8, (char *)a2 + 1668);
  std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::_Emplace<unsigned long &,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy> &>(
    v4,
    (__int64)v13,
    a2,
    (__int64)&v15);
  v9 = *((_QWORD *)this + 8);
  for ( i = *((_QWORD *)this + 7); i != v9; i += 8LL )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)i + 8LL) + 24LL))(
            *(_QWORD *)i + 8LL,
            *(unsigned int *)a2,
            v15);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x68,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\server\\devicedockserver.cpp",
        (const char *)(unsigned int)v11);
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v15);
  return 0LL;
}
