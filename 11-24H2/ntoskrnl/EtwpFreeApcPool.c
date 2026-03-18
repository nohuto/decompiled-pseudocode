/*
 * XREFs of EtwpFreeApcPool @ 0x14049A610
 * Callers:
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x1409D77E0 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeBugCheck @ 0x1404FB970 (KeBugCheck.c)
 *     RtlpInterlockedFlushSList @ 0x1406B3910 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeApcPool(__int64 a1)
{
  PSLIST_ENTRY v2; // rdi
  struct _SLIST_ENTRY *v3; // rcx

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
