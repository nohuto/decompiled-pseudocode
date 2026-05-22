/*
 * XREFs of ?GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ @ 0x18002F540
 * Callers:
 *     ?CheckCapability@ShellGesturesClientProxy@@AEAAJXZ @ 0x18002E440 (-CheckCapability@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?GetDesktop@ShellGesturesClientProxy@@AEAAJXZ @ 0x18002EAD0 (-GetDesktop@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA?AVImpersonationReverter@123@XZ @ 0x18002EECC (-ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA-AVImpersonationReverter@123@XZ.c)
 *     ?CheckCapability@DragManagerClientProxy@@AEAAJXZ @ 0x18002EFDC (-CheckCapability@DragManagerClientProxy@@AEAAJXZ.c)
 *     ?GetDesktop@DragManagerClientProxy@@AEAAJXZ @ 0x18002F26C (-GetDesktop@DragManagerClientProxy@@AEAAJXZ.c)
 *     ??0WindowsMessageDeliveryProxy@@QEAA@PEAVBamoPeer@ISMBamos_AutoBamos@@@Z @ 0x18002F418 (--0WindowsMessageDeliveryProxy@@QEAA@PEAVBamoPeer@ISMBamos_AutoBamos@@@Z.c)
 *     ?ISMShutDown@InputProcessManager@@AEAAXXZ @ 0x18019B560 (-ISMShutDown@InputProcessManager@@AEAAXXZ.c)
 *     ?StartProcess@InputProcessManager@@QEAAXXZ @ 0x18019BF04 (-StartProcess@InputProcessManager@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IMessageSession *__fastcall Microsoft::Bamo::BaseBamoConnection::GetSession(
        Microsoft::Bamo::BaseBamoConnection *this)
{
  return *(struct IMessageSession **)((*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 56LL))(this)
                                    + 48);
}
