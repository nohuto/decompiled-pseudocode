/*
 * XREFs of ?OnDisconnected@SystemButtonEventController@@MEAAJXZ @ 0x180075720
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z @ 0x18007579C (-UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@.c)
 *     ?GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ @ 0x1800758B4 (-GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ.c)
 *     ?GetOldestEvent@SystemButtonEventBuffer@@QEAA_NAEAUSystemButtonEventInfo@@@Z @ 0x18009A158 (-GetOldestEvent@SystemButtonEventBuffer@@QEAA_NAEAUSystemButtonEventInfo@@@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z @ 0x18015C258 (-DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z.c)
 */

__int64 __fastcall SystemButtonEventController::OnDisconnected(SystemButtonEventController *this)
{
  SystemButtonEventBuffer *i; // rcx
  SystemButtonEventControllerManager *SystemButtonEventControllerManager; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  for ( i = (SystemButtonEventController *)((char *)this + 64);
        SystemButtonEventBuffer::GetOldestEvent(i, (struct SystemButtonEventInfo *)&v5);
        i = (SystemButtonEventController *)((char *)this + 64) )
  {
    SystemButtonEventController::DeliverToNextTarget(this, (const struct SystemButtonEventInfo *)&v5);
  }
  SystemButtonEventControllerManager = ISMStatics::GetSystemButtonEventControllerManager();
  SystemButtonEventControllerManager::UnregisterController(SystemButtonEventControllerManager, this);
  return 0LL;
}
