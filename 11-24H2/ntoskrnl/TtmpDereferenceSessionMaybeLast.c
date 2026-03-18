/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x14076A638
 * Callers:
 *     TtmpSessionWorker @ 0x14076AD00 (TtmpSessionWorker.c)
 *     TtmiSessionTerminalListWorker @ 0x14076FBB4 (TtmiSessionTerminalListWorker.c)
 *     TtmpDeleteQueue @ 0x140770D60 (TtmpDeleteQueue.c)
 *     TtmCleanupCurrentSession @ 0x140AAD48C (TtmCleanupCurrentSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
