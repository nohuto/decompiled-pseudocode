/*
 * XREFs of ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1404300C8
 * Callers:
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x140094030 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?AcquireOwnershipWorker@BLTQUEUE@@AEAAJXZ @ 0x14028154C (-AcquireOwnershipWorker@BLTQUEUE@@AEAAJXZ.c)
 *     ?CleanupWorker@BLTQUEUE@@AEAAXXZ @ 0x14028189C (-CleanupWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1402822D0 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?GlobalVmBusStatusChangeWorker@BLTQUEUE@@AEAAXXZ @ 0x1402825D8 (-GlobalVmBusStatusChangeWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ @ 0x14028266C (-HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x140282E60 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?RestartQueueWorker@BLTQUEUE@@AEAAXXZ @ 0x140282F6C (-RestartQueueWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140430240 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408 (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall BLTQUEUE::FinishCommand(BLTQUEUE *this, int a2)
{
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
    *((_DWORD *)this + 176) = a2;
    KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
  }
  else
  {
    *((_DWORD *)this + 176) = a2;
  }
  *((LARGE_INTEGER *)this + 119) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)this + 24, 0, 0);
}
