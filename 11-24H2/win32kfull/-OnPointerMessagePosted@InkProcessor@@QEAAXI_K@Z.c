/*
 * XREFs of ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x140198A64
 * Callers:
 *     InkProcessorOnPointerMessagePosted @ 0x140198A20 (InkProcessorOnPointerMessagePosted.c)
 * Callees:
 *     ?OnPointerMessagePosted@InkFeedbackServer@@QEAAXIPEBUtagPOINTER_INFO@@@Z @ 0x140198B1C (-OnPointerMessagePosted@InkFeedbackServer@@QEAAXIPEBUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerInfoByPointerMsgId@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z @ 0x140198B80 (-GetPointerInfoByPointerMsgId@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

void __fastcall InkProcessor::OnPointerMessagePosted(InkProcessor *this, unsigned int a2, unsigned __int64 a3)
{
  struct tagPOINTER_INFO *v5; // rdi
  int PointerInfoByPointerMsgId; // eax
  struct tagPOINTER_INFO *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = 0LL;
  if ( a2 == 583 || a2 == 594 )
  {
    PointerInfoByPointerMsgId = GetPointerInfoByPointerMsgId(a3, &v7);
    v5 = v7;
    if ( PointerInfoByPointerMsgId < 0 )
      v5 = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  if ( *((_BYTE *)this + 8) )
    InkFeedbackServer::OnPointerMessagePosted((InkProcessor *)((char *)this + 96), a2, v5);
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
