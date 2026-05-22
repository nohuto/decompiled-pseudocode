/*
 * XREFs of ?OnDisconnected@DragManagerClientProxy@@MEAAJXZ @ 0x180027B70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?clear@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAXXZ @ 0x180027BE0 (-clear@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$alloc.c)
 *     ?ClearAnimationDataForAllSources@DragManagerClientProxy@@AEAAXXZ @ 0x180027C5C (-ClearAnimationDataForAllSources@DragManagerClientProxy@@AEAAXXZ.c)
 *     ?IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z @ 0x180027F2C (-IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ?OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z @ 0x1800286D0 (-OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DragManagerClientProxy::OnDisconnected(DragManagerClientProxy *this)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  ShellGesturesProcessor **v3; // rdi

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v3 = (ShellGesturesProcessor **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31)
                                                                                 + 8LL)
                                                                     + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  DragManagerClientProxy::ClearAnimationDataForAllSources(this);
  ShellGesturesProcessor::OnClientDisconnected(v3[10], this);
  if ( GestureServices::IsShellClient((GestureServices *)v3, this) )
    std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::clear(v3 + 17);
  return 0LL;
}
