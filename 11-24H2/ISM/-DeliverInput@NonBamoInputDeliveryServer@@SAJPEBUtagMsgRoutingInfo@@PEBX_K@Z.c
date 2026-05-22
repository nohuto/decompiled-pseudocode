/*
 * XREFs of ?DeliverInput@NonBamoInputDeliveryServer@@SAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x180031948
 * Callers:
 *     ?DeliverDeviceRemoval@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x180031850 (-DeliverDeviceRemoval@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ @ 0x180031980 (-DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ.c)
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180031D30 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverDeviceUpdate@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800F56D0 (-DeliverDeviceUpdate@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800F5C00 (-DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnKernelInputEvent@NonBamoInputDeliveryServer@@AEAAXPEBUtagQMSGINPUTREPORT@@@Z @ 0x18015DEC4 (-OnKernelInputEvent@NonBamoInputDeliveryServer@@AEAAXPEBUtagQMSGINPUTREPORT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::DeliverInput(
        const struct tagMsgRoutingInfo *a1,
        const void *a2,
        __int64 a3)
{
  return (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, const struct tagMsgRoutingInfo *, const void *, __int64))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer + 24LL))(
           NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
           a1,
           a2,
           a3);
}
