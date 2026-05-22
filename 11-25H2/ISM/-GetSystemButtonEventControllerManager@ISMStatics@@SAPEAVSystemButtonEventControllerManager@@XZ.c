/*
 * XREFs of ?GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ @ 0x180075B14
 * Callers:
 *     ?OnDisconnected@SystemButtonEventController@@MEAAJXZ @ 0x180075980 (-OnDisconnected@SystemButtonEventController@@MEAAJXZ.c)
 *     ?OnConnected@SystemButtonEventController@@MEAAJXZ @ 0x180098F80 (-OnConnected@SystemButtonEventController@@MEAAJXZ.c)
 *     ?DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z @ 0x18015B428 (-DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z.c)
 *     ?OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18015B5C0 (-OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z.c)
 *     ?OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AB6F0 (-OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

struct SystemButtonEventControllerManager *ISMStatics::GetSystemButtonEventControllerManager(void)
{
  struct SystemButtonEventControllerManager *result; // rax

  result = ISMStatics::s_systemButtonControllerManager;
  if ( !ISMStatics::s_systemButtonControllerManager )
  {
    result = (struct SystemButtonEventControllerManager *)operator new(0x10uLL);
    ISMStatics::s_systemButtonControllerManager = result;
    *(_QWORD *)result = 0LL;
    *((_QWORD *)result + 1) = 0LL;
  }
  return result;
}
