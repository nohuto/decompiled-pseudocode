/*
 * XREFs of GetObjectPath @ 0x140011F58
 * Callers:
 *     ProcessEvalObj @ 0x140002AF0 (ProcessEvalObj.c)
 *     GetFieldUnitRegionObj @ 0x14000C4A0 (GetFieldUnitRegionObj.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     SyncEvalObject @ 0x1400143C8 (SyncEvalObject.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140019BA0 (ACPIInterruptDispatchEventDpc.c)
 *     ResetSignal @ 0x140030AC0 (ResetSignal.c)
 *     Wait @ 0x140030C40 (Wait.c)
 *     ACPIAmliBuildObjectPathname @ 0x140039780 (ACPIAmliBuildObjectPathname.c)
 *     AMLIGetNameSpaceObjectPath @ 0x140039980 (AMLIGetNameSpaceObjectPath.c)
 *     Release @ 0x14003B700 (Release.c)
 *     Acquire @ 0x14003E2D0 (Acquire.c)
 *     AMLIFindNameSpaceObject @ 0x14004C134 (AMLIFindNameSpaceObject.c)
 *     AcpiDiagTraceDeviceReset @ 0x14004EDF0 (AcpiDiagTraceDeviceReset.c)
 *     CreateNativeNameSpaceObject @ 0x140052F04 (CreateNativeNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x14006AB98 (AMLIEvalPackageElement.c)
 *     Simulator_NotifyNamespaceCollision @ 0x14006B25C (Simulator_NotifyNamespaceCollision.c)
 *     DumpObject @ 0x14006BA88 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x14006D32C (NestAsyncEvalObject.c)
 *     DebugNotify @ 0x14006DE70 (DebugNotify.c)
 *     DebugRunMethod @ 0x14006E170 (DebugRunMethod.c)
 *     RunMethodCallBack @ 0x14006E600 (RunMethodCallBack.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x140012D50 (GetObjectPathNoLock.c)
 */

__int64 __fastcall GetObjectPath(__int64 a1)
{
  KIRQL v2; // bl
  __int64 ObjectPathNoLock; // rdi

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  ObjectPathNoLock = GetObjectPathNoLock(a1);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return ObjectPathNoLock;
}
