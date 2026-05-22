/*
 * XREFs of ?GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ @ 0x18002EF80
 * Callers:
 *     ?CheckCapability@ShellGesturesClientProxy@@AEAAJXZ @ 0x18002DE80 (-CheckCapability@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?GetDesktop@ShellGesturesClientProxy@@AEAAJXZ @ 0x18002E510 (-GetDesktop@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA?AVImpersonationReverter@123@XZ @ 0x18002E90C (-ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA-AVImpersonationReverter@123@XZ.c)
 *     ?CheckCapability@DragManagerClientProxy@@AEAAJXZ @ 0x18002EA1C (-CheckCapability@DragManagerClientProxy@@AEAAJXZ.c)
 *     ?GetDesktop@DragManagerClientProxy@@AEAAJXZ @ 0x18002ECAC (-GetDesktop@DragManagerClientProxy@@AEAAJXZ.c)
 *     ??0WindowsMessageDeliveryProxy@@QEAA@PEAVBamoPeer@ISMBamos_AutoBamos@@@Z @ 0x18002EE58 (--0WindowsMessageDeliveryProxy@@QEAA@PEAVBamoPeer@ISMBamos_AutoBamos@@@Z.c)
 *     ?ISMShutDown@InputProcessManager@@AEAAXXZ @ 0x180193A58 (-ISMShutDown@InputProcessManager@@AEAAXXZ.c)
 *     ?StartProcess@InputProcessManager@@QEAAXXZ @ 0x180194524 (-StartProcess@InputProcessManager@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IMessageSession *__fastcall Microsoft::Bamo::BaseBamoConnection::GetSession(
        Microsoft::Bamo::BaseBamoConnection *this)
{
  return *(struct IMessageSession **)((*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 56LL))(this)
                                    + 48);
}
