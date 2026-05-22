/*
 * XREFs of ??1?$vector@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180064010
 * Callers:
 *     _PenEventsDispatcherPrincipal::NotifyTipToGlass_::_1_::dtor$0 @ 0x1801CA7BE (_PenEventsDispatcherPrincipal--NotifyTipToGlass_--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::GetShellClients_::_1_::dtor$0 @ 0x1801CB863 (_PenEventsDispatcherPrincipal--GetShellClients_--_1_--dtor$0.c)
 *     _SystemContextManager::ProcessInputConfigMessage_::_1_::dtor$0 @ 0x1801CC717 (_SystemContextManager--ProcessInputConfigMessage_--_1_--dtor$0.c)
 *     _DeviceDockServer::DeviceDockServer_::_1_::dtor$1 @ 0x1801CC976 (_DeviceDockServer--DeviceDockServer_--_1_--dtor$1.c)
 *     _PenEventsDispatcherPrincipal::FireEvents_::_1_::dtor$4 @ 0x1801D128C (_PenEventsDispatcherPrincipal--FireEvents_--_1_--dtor$4.c)
 *     _PenEventsDispatcherPrincipal::GetClientsForProcess_::_1_::dtor$0 @ 0x1801D129E (_PenEventsDispatcherPrincipal--GetClientsForProcess_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180064370 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@w.c)
 */

void __fastcall std::vector<wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>>::~vector<wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>>(
        __int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
      v2,
      *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(
      *(char **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
