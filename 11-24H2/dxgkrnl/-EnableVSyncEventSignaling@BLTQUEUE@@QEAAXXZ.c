/*
 * XREFs of ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x14030D2F4
 * Callers:
 *     ?EnableVSyncEventSignaling@REMOTE_VSYNC@@QEAAJXZ @ 0x1401F3A9C (-EnableVSyncEventSignaling@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEBD@Z @ 0x14030C830 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEBD@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14030D2BC (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline @ 0x14009430C (Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408 (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?LogWaitForVsyncCalls@BLTQUEUE@@AEAAXXZ @ 0x1403BC20C (-LogWaitForVsyncCalls@BLTQUEUE@@AEAAXXZ.c)
 */

void __fastcall BLTQUEUE::EnableVSyncEventSignaling(BLTQUEUE *this)
{
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
    _InterlockedExchange64((volatile __int64 *)this + 120, KeQueryPerformanceCounter(0LL).QuadPart);
  else
    *((LARGE_INTEGER *)this + 120) = KeQueryPerformanceCounter(0LL);
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
    *((_DWORD *)this + 169) |= 8u;
    KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
  }
  else if ( (unsigned int)Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline() )
  {
    _InterlockedExchange((volatile __int32 *)this + 168, 1);
  }
  else
  {
    *((_BYTE *)this + 659) = 1;
  }
  KeSetEvent((PRKEVENT)this + 23, 0, 0);
  BLTQUEUE::LogWaitForVsyncCalls(this);
}
