/*
 * XREFs of ?NotifyInvalidHelper@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@PEAUMsgCallState@@@Z @ 0x14023F0E4
 * Callers:
 *     CoreUICallSendVaList @ 0x1400FD348 (CoreUICallSendVaList.c)
 *     ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1400FDA10 (-PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBE.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::NotifyInvalidHelper(
        CoreMessaging::Calling::SendProcessor *this,
        struct IMessageCallSendHost *a2,
        struct MsgCallState *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(struct IMessageCallSendHost *, struct MsgCallState *))(*(_QWORD *)a2 + 48LL))(
             a2,
             a3);
  if ( (int)result >= 0 )
    return 2147942487LL;
  return result;
}
