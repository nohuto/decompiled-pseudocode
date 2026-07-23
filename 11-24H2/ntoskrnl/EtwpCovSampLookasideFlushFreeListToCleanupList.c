/*
 * XREFs of EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1406505DC
 * Callers:
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1404B6A00 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140AB0FE4 (EtwpCovSampCaptureFreeLookasides.c)
 * Callees:
 *     EtwpCovSampPushListSList @ 0x140451AC4 (EtwpCovSampPushListSList.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall EtwpCovSampLookasideFlushFreeListToCleanupList(_SLIST_HEADER *a1)
{
  unsigned __int64 Alignment; // rdi
  unsigned int v2; // ebx
  _SLIST_ENTRY *v3; // rax
  ULONG v5; // [rsp+30h] [rbp+8h] BYREF

  Alignment = a1[2].Alignment;
  v2 = 0;
  v5 = 0;
  v3 = RtlpInterlockedFlushSList(a1);
  if ( v3 )
  {
    EtwpCovSampPushListSList((_SLIST_HEADER *)Alignment, v3, &v5);
    _InterlockedAdd((volatile signed __int32 *)(Alignment + 76), v5);
    return v5;
  }
  return v2;
}
