/*
 * XREFs of EtwpReleaseStackLookasideListEntry @ 0x140411780
 * Callers:
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall EtwpReleaseStackLookasideListEntry(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // r8
  unsigned int v2; // edx
  __int64 v3; // rax
  _SLIST_ENTRY *v4; // rdx
  _SLIST_HEADER *v5; // rcx

  v1 = *(_QWORD *)(BugCheckParameter3 + 24);
  if ( v1 && (*(_BYTE *)(v1 + 7) & 2) != 0 )
    KeBugCheckEx(0x11Du, 0xAuLL, v1, BugCheckParameter3, 0LL);
  v2 = *(_DWORD *)(BugCheckParameter3 + 16);
  if ( v2 == -1 )
  {
    _InterlockedDecrement(&dword_140E28FDC);
    v4 = (_SLIST_ENTRY *)BugCheckParameter3;
    v5 = &EtwpStackLookAsideList;
  }
  else
  {
    if ( v2 >= (unsigned int)KeNumberProcessors_0 )
    {
      v3 = 0LL;
    }
    else
    {
      _mm_lfence();
      v3 = KiProcessorBlock[v2];
    }
    v4 = (_SLIST_ENTRY *)BugCheckParameter3;
    v5 = (_SLIST_HEADER *)(*(_QWORD *)(v3 + 35752) + 384LL);
  }
  return RtlpInterlockedPushEntrySList(v5, v4);
}
