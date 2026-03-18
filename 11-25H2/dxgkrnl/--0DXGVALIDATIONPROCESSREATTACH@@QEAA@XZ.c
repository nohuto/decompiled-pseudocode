/*
 * XREFs of ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140016D04
 * Callers:
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x140016A30 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgSetPowerComponentIdleCB @ 0x140016C10 (DxgSetPowerComponentIdleCB.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x14006C340 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x14006C3F0 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x14006C460 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x14006C4D0 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x14006C550 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkMitigatedRangeUpdateCB @ 0x14006C720 (DxgkMitigatedRangeUpdateCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x14006C780 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x14006C8D0 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x14006C940 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x14006C9B0 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1401B6A70 (DxgkUpdateContextAllocationCB.c)
 *     DxgEnumHandleChildrenCB @ 0x1401B9550 (DxgEnumHandleChildrenCB.c)
 *     DxgGetHandleParentCB @ 0x1401B9760 (DxgGetHandleParentCB.c)
 *     DxgkAcquireHandleDataCB @ 0x140330870 (DxgkAcquireHandleDataCB.c)
 *     DxgkReleaseHandleDataCB @ 0x1403495F0 (DxgkReleaseHandleDataCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x14038F5C0 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgCreateContextAllocationCB @ 0x1403B41D0 (DxgCreateContextAllocationCB.c)
 *     DxgDestroyContextAllocationCB @ 0x1403BB9F0 (DxgDestroyContextAllocationCB.c)
 *     DxgkMapContextAllocationCB @ 0x1403C7C70 (DxgkMapContextAllocationCB.c)
 *     DxgSetPowerComponentActiveCB @ 0x1403CB910 (DxgSetPowerComponentActiveCB.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1403DCE60 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     DxgGetCaptureAddressCB @ 0x1403FF220 (DxgGetCaptureAddressCB.c)
 *     DxgGetHandleDataCB @ 0x140414440 (DxgGetHandleDataCB.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
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
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 405) )
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
