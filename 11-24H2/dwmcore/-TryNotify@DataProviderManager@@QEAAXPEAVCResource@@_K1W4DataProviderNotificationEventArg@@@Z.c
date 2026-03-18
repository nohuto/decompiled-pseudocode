/*
 * XREFs of ?TryNotify@DataProviderManager@@QEAAXPEAVCResource@@_K1W4DataProviderNotificationEventArg@@@Z @ 0x1801A8EC8
 * Callers:
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x180220F3C (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 *     ?OnChanged@CAnimationTrigger@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1802211B0 (-OnChanged@CAnimationTrigger@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@1@AEBQEAVCInteractionTracker@@@Z @ 0x1800DF7B8 (--$find@X@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@.c)
 *     ?DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z @ 0x1801A8270 (-DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z.c)
 *     ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x18024EA60 (-GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall DataProviderManager::TryNotify(
        DataProviderManager *a1,
        struct CResource *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  DataSourceProxy *DataSourceProxy; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  DataSourceProxy = DataProviderManager::GetDataSourceProxy(a1, a3, a4);
  if ( DataSourceProxy )
  {
    LOBYTE(DataSourceProxy) = DataSourceProxy::DoesResourceHaveAccess(DataSourceProxy, a2);
    if ( (_BYTE)DataSourceProxy )
    {
      std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
        (_QWORD *)a1 + 5,
        v10,
        &v11);
      LOBYTE(DataSourceProxy) = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v10[0] + 24LL) + 8LL)
                                                                                             + 64LL))(
                                  *(_QWORD *)(v10[0] + 24LL) + 8LL,
                                  a4,
                                  a5);
    }
  }
  return (char)DataSourceProxy;
}
