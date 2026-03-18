/*
 * XREFs of FxLiveDump @ 0x1400837E4
 * Callers:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x140026CA0 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x140027830 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x140028E00 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x14002A6F0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?DetectExcessiveAllocation@FxObject@@AEAAXXZ @ 0x140037800 (-DetectExcessiveAllocation@FxObject@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxLiveDump(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_BUGCHECK_CODES BugCheckParameter2,
        unsigned __int64 BugCheckParameter3,
        unsigned __int64 a4)
{
  if ( !KeGetCurrentIrql() )
    DbgkWerCaptureLiveKernelDump(L"WDF", 269LL, 17LL, BugCheckParameter3, a4, FxDriverGlobals, 0LL, 0LL, 0);
}
