/*
 * XREFs of PopInvokeStateHandlerTargetProcessor @ 0x140B67E70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopHandleNextState @ 0x140B67F50 (PopHandleNextState.c)
 */

void __fastcall PopInvokeStateHandlerTargetProcessor(
        struct _KDPC *Dpc,
        _SLIST_HEADER *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v5; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v6[140]; // [rsp+24h] [rbp-B4h] BYREF
  _SLIST_ENTRY ListEntry; // [rsp+B0h] [rbp-28h] BYREF

  memset_0(v6, 0, 0x9CuLL);
  v5 = 0;
  RtlpInterlockedPushEntrySList(DeferredContext + 4, &ListEntry);
  do
    PopHandleNextState(DeferredContext, &v5);
  while ( v5 != 16 );
}
