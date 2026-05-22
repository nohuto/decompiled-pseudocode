/*
 * XREFs of ?RemoveRIMDevice@HapticDeviceManager@@QEAAXPEAX@Z @ 0x18018D4E8
 * Callers:
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x1800DF780 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnection@Bamo@Microsoft@@QEBAXXZ @ 0x180023654 (-VerifyLockHeldIfOffThread@BaseBamoConnection@Bamo@Microsoft@@QEBAXXZ.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x1800647E8 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006885C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006913C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$find@X@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@1@AEBQEAUIHeatSystemContextClient@@@Z @ 0x180099C4C (--$find@X@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSyste.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@V21@@Z @ 0x18018956C (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAXV-$com_ptr_t@VPenInter.c)
 *     ?RemoveInterface@PenDevice@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180191250 (-RemoveInterface@PenDevice@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall HapticDeviceManager::RemoveRIMDevice(HapticDeviceManager *this, void *a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  unsigned int v6; // r14d
  __int64 v7; // r15
  __int64 v8; // rcx
  Microsoft::Bamo::BaseBamoConnection *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  __int64 v13; // [rsp+70h] [rbp+38h] BYREF
  void *v14; // [rsp+78h] [rbp+40h] BYREF
  _QWORD *v15; // [rsp+80h] [rbp+48h] BYREF
  __int64 v16; // [rsp+88h] [rbp+50h] BYREF

  v14 = a2;
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::find<void>(
    (_QWORD *)this + 12,
    &v13,
    (__int64)&v14);
  v3 = v13;
  if ( v13 != *((_QWORD *)this + 13) )
  {
    wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
      &v16,
      *(_QWORD *)(v13 + 24));
    std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<PenInterface,wil::err_exception_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<PenInterface,wil::err_exception_policy>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<void * const,wil::com_ptr_t<PenInterface,wil::err_exception_policy>>>>>,0>(
      (_QWORD *)this + 12,
      &v13,
      v3);
    wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
      &v15,
      *((void (__fastcall ****)(_QWORD))this + 7));
    v4 = v15;
    if ( v15 )
    {
      v5 = (__int64)(v15[8] - v15[7]) >> 3;
      v6 = 0;
      if ( (_DWORD)v5 )
      {
        v7 = 0LL;
        do
        {
          v8 = *(_QWORD *)(v4[4] + 32LL);
          if ( *(int *)(v8 + 8) <= 0 )
            v9 = 0LL;
          else
            v9 = *(Microsoft::Bamo::BaseBamoConnection **)(v8 + 16);
          Microsoft::Bamo::BaseBamoConnection::VerifyLockHeldIfOffThread(v9);
          v10 = v4[7];
          if ( v6 >= (unsigned __int64)((v4[8] - v10) >> 3) )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x49,
              (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
              (const char *)retaddr);
          v11 = *(_QWORD *)(v7 + v10);
          wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v13, v16);
          PenDevice::RemoveInterface(v11, &v13);
          ++v6;
          v7 += 8LL;
        }
        while ( v6 < (unsigned int)v5 );
      }
    }
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v15);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v16);
  }
}
