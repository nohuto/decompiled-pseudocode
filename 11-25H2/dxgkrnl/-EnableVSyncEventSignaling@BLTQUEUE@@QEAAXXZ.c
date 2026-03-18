/*
 * XREFs of ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x14032AC44
 * Callers:
 *     ?EnableVSyncEventSignaling@REMOTE_VSYNC@@QEAAJXZ @ 0x1401EE0F8 (-EnableVSyncEventSignaling@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEBD@Z @ 0x14032A180 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEBD@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14032AC0C (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline @ 0x140091EB0 (Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline.c)
 *     ?LogWaitForVsyncCalls@BLTQUEUE@@AEAAXXZ @ 0x1403C7BC0 (-LogWaitForVsyncCalls@BLTQUEUE@@AEAAXXZ.c)
 */

void __fastcall BLTQUEUE::EnableVSyncEventSignaling(BLTQUEUE *this)
{
  *((LARGE_INTEGER *)this + 111) = KeQueryPerformanceCounter(0LL);
  if ( (unsigned int)Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline() )
    _InterlockedExchange((volatile __int32 *)this + 154, 1);
  else
    *((_BYTE *)this + 603) = 1;
  KeSetEvent((PRKEVENT)this + 23, 0, 0);
  BLTQUEUE::LogWaitForVsyncCalls(this);
}
