/*
 * XREFs of EtwpFreeApcPool @ 0x140495034
 * Callers:
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x140A48E90 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
