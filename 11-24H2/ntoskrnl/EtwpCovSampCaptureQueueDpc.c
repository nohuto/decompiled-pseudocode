/*
 * XREFs of EtwpCovSampCaptureQueueDpc @ 0x14044E5D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 *     InterlockedPushListSList @ 0x1406B48E0 (InterlockedPushListSList.c)
 */

void __fastcall EtwpCovSampCaptureQueueDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  PSLIST_ENTRY v5; // rax
  _SLIST_ENTRY *Next; // rcx
  ULONG v7; // r9d
  _SLIST_ENTRY *i; // r8

  v5 = RtlpInterlockedFlushSList((PSLIST_HEADER)DeferredContext + 67);
  if ( v5 )
  {
    Next = v5->Next;
    v7 = 1;
    for ( i = v5; Next; Next = Next->Next )
    {
      ++v7;
      i = Next;
    }
    if ( !InterlockedPushListSList((PSLIST_HEADER)DeferredContext + 68, v5, i, v7) )
      KeSetEvent((PRKEVENT)DeferredContext + 46, *((_DWORD *)DeferredContext + 326), 0);
  }
}
