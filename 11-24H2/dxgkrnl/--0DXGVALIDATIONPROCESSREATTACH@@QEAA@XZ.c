/*
 * XREFs of ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140010864
 * Callers:
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x140010240 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgSetPowerComponentIdleCB @ 0x140010770 (DxgSetPowerComponentIdleCB.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x14006C060 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x14006C110 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x14006C180 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x14006C1F0 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x14006C270 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkMitigatedRangeUpdateCB @ 0x14006C440 (DxgkMitigatedRangeUpdateCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x14006C4A0 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x14006C5F0 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x14006C660 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x14006C6D0 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1401B9020 (DxgkUpdateContextAllocationCB.c)
 *     DxgEnumHandleChildrenCB @ 0x1401BBD10 (DxgEnumHandleChildrenCB.c)
 *     DxgGetHandleParentCB @ 0x1401BC0F0 (DxgGetHandleParentCB.c)
 *     DxgkAcquireHandleDataCB @ 0x1403284D0 (DxgkAcquireHandleDataCB.c)
 *     DxgkReleaseHandleDataCB @ 0x1403372E0 (DxgkReleaseHandleDataCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x140383170 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgCreateContextAllocationCB @ 0x1403A5DB0 (DxgCreateContextAllocationCB.c)
 *     DxgDestroyContextAllocationCB @ 0x1403AFB70 (DxgDestroyContextAllocationCB.c)
 *     DxgkMapContextAllocationCB @ 0x1403BC2C0 (DxgkMapContextAllocationCB.c)
 *     DxgSetPowerComponentActiveCB @ 0x1403BE700 (DxgSetPowerComponentActiveCB.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1403D6EB0 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     DxgGetCaptureAddressCB @ 0x1403F9210 (DxgGetCaptureAddressCB.c)
 *     DxgGetHandleDataCB @ 0x1404111E0 (DxgGetHandleDataCB.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

DXGVALIDATIONPROCESSREATTACH *__fastcall DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH(
        DXGVALIDATIONPROCESSREATTACH *this)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v5; // rbx
  struct _KPROCESS *ThreadProcess; // rax

  *(_BYTE *)this = 0;
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 413) )
      {
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(Global);
        if ( SessionData )
        {
          v5 = *((_QWORD *)SessionData + 2341);
          if ( v5 == PsGetCurrentProcess() )
          {
            ThreadProcess = PsGetThreadProcess(KeGetCurrentThread());
            if ( ThreadProcess )
            {
              KeStackAttachProcess(ThreadProcess, (PRKAPC_STATE)((char *)this + 8));
              *(_BYTE *)this = 1;
            }
          }
        }
      }
    }
  }
  return this;
}
