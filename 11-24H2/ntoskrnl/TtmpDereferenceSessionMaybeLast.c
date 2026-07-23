/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x14076A858
 * Callers:
 *     TtmpSessionWorker @ 0x14076AF20 (TtmpSessionWorker.c)
 *     TtmiSessionTerminalListWorker @ 0x14076FDD4 (TtmiSessionTerminalListWorker.c)
 *     TtmpDeleteQueue @ 0x140770F80 (TtmpDeleteQueue.c)
 *     TtmCleanupCurrentSession @ 0x140AA850C (TtmCleanupCurrentSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
