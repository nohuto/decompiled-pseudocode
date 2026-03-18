/*
 * XREFs of VidSchiProcessIsrSchedulingLogFull @ 0x140041E8C
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x140006B60 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

PSLIST_ENTRY __fastcall VidSchiProcessIsrSchedulingLogFull(__int64 a1)
{
  union _SLIST_HEADER *v1; // rdi
  PSLIST_ENTRY v3; // rax
  __int64 v5; // rcx

  v1 = *(union _SLIST_HEADER **)(a1 + 24);
  v3 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 11296));
  if ( v3 )
  {
    v3[2].Next = (struct _SLIST_ENTRY *)a1;
    LODWORD(v3->Next) = 15;
    return ExpInterlockedPushEntrySList(v1 + 127, v3 + 1);
  }
  else
  {
    WdLogSingleEntry1(1LL, *(unsigned __int16 *)(a1 + 4));
    WdLogGlobalForLineNumber = 381;
    return (PSLIST_ENTRY)DxgkLogInternalTriageEvent(v5, 0x40000LL);
  }
}
