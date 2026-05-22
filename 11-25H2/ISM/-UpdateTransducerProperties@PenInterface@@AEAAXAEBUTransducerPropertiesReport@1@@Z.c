/*
 * XREFs of ?UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z @ 0x180188D28
 * Callers:
 *     ?Initialize@PenInterface@@QEAAJXZ @ 0x1801885DC (-Initialize@PenInterface@@QEAAJXZ.c)
 *     ?ProcessInputReport@PenInterface@@QEAAJPEADK@Z @ 0x180188B38 (-ProcessInputReport@PenInterface@@QEAAJPEADK@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180068A6C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ??1?$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B7FC0 (--1-$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVHapticDeviceManager@@@Z @ 0x1800DC384 (--0-$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVHapticDeviceMana.c)
 *     ?EnsureInterfaceAttached@HapticDeviceManager@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@AEBU_GUID@@@Z @ 0x1801868F8 (-EnsureInterfaceAttached@HapticDeviceManager@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_po.c)
 *     ??$_Emplace@AEBU_GUID@@@?$_Tree@V?$_Tset_traits@U_GUID@@UGUIDComparer@PenInterface@@V?$allocator@U_GUID@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U_GUID@@PEAX@std@@_N@1@AEBU_GUID@@@Z @ 0x180187ECC (--$_Emplace@AEBU_GUID@@@-$_Tree@V-$_Tset_traits@U_GUID@@UGUIDComparer@PenInterface@@V-$allocator.c)
 *     ??$_Eqrange@U_GUID@@@?$_Tree@V?$_Tset_traits@U_GUID@@UGUIDComparer@PenInterface@@V?$allocator@U_GUID@@@std@@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U_GUID@@PEAX@std@@PEAU12@@1@AEBU_GUID@@@Z @ 0x180188008 (--$_Eqrange@U_GUID@@@-$_Tree@V-$_Tset_traits@U_GUID@@UGUIDComparer@PenInterface@@V-$allocator@U_.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@U_GUID@@UGUIDComparer@PenInterface@@V?$allocator@U_GUID@@@std@@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U_GUID@@PEAX@std@@PEAU12@@2@@Z @ 0x180188DE8 (-_Erase@-$_Tree@V-$_Tset_traits@U_GUID@@UGUIDComparer@PenInterface@@V-$allocator@U_GUID@@@std@@$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PenInterface::UpdateTransducerProperties(PenInterface *this, struct _GUID *a2)
{
  char *v4; // rdi
  __int64 *v5; // rcx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v7; // rax
  __int64 *v8; // rax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = (char *)this + 152;
  v5 = (__int64 *)((char *)this + 152);
  if ( LOBYTE(a2[1].Data1) )
  {
    std::_Tree<std::_Tset_traits<_GUID,PenInterface::GUIDComparer,std::allocator<_GUID>,0>>::_Emplace<_GUID const &>(
      v5,
      (__int64)&v9,
      a2);
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 168LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
    wil::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>(
      &v11,
      v7);
    v8 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
           &v12,
           (__int64)this);
    HapticDeviceManager::EnsureInterfaceAttached(v11, v8, a2);
    wil::com_ptr_t<MPCManager,wil::err_exception_policy>::~com_ptr_t<MPCManager,wil::err_exception_policy>(&v11);
  }
  else
  {
    v9 = *(_OWORD *)std::_Tree<std::_Tset_traits<_GUID,PenInterface::GUIDComparer,std::allocator<_GUID>,0>>::_Eqrange<_GUID>(
                      v5,
                      v10,
                      a2);
    std::_Tree<std::_Tset_traits<_GUID,PenInterface::GUIDComparer,std::allocator<_GUID>,0>>::_Erase(v4, &v9);
  }
}
