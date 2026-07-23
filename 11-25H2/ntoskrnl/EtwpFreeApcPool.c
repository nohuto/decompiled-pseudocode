/*
 * XREFs of EtwpFreeApcPool @ 0x14049A350
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14098EB6C (EtwpFreeLoggerContext.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 * Callees:
 *     KeBugCheck @ 0x1404F9260 (KeBugCheck.c)
 *     RtlpInterlockedFlushSList @ 0x1406A8640 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeApcPool(__int64 a1)
{
  PSLIST_ENTRY v2; // rdi
  _SLIST_ENTRY *v3; // rcx

  if ( *(int *)(a1 + 176) > 0 )
    KeBugCheck(0x11Du);
  v2 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 16));
  while ( v2 )
  {
    v3 = v2 - 6;
    v2 = v2->Next;
    ExFreePoolWithTag(v3, 0);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 164));
  }
}
