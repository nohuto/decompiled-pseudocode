/*
 * XREFs of RtlQueryTagHeap @ 0x1801431D0
 * Callers:
 *     RtlDebugQueryTagHeap @ 0x180146088 (RtlDebugQueryTagHeap.c)
 *     TpDbgDumpHeapUsage @ 0x18015DC20 (TpDbgDumpHeapUsage.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlDebugQueryTagHeap @ 0x180146088 (RtlDebugQueryTagHeap.c)
 */

PWSTR __cdecl RtlQueryTagHeap(
        PVOID HeapHandle,
        ULONG Flags,
        USHORT TagIndex,
        BOOLEAN ResetCounters,
        PRTL_HEAP_TAG_INFO TagInfo)
{
  int v7; // ecx
  WCHAR *TagHeap; // rbx
  char v9; // dl
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v15; // [rsp+30h] [rbp-28h]

  v15 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0LL;
  v7 = *((_DWORD *)HeapHandle + 29);
  if ( (v7 & 0x1000000) != 0 || (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0LL;
  TagHeap = 0LL;
  v9 = v7 | Flags;
  if ( ((v7 | Flags) & 0x61000000) != 0 && ((v7 | Flags) & 0x10000000) == 0 )
  {
    TagHeap = (WCHAR *)RtlDebugQueryTagHeap((int)HeapHandle, TagInfo);
  }
  else
  {
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v15 = 1;
    }
    if ( TagIndex < *((_WORD *)HeapHandle + 112) && (v10 = *((_QWORD *)HeapHandle + 29)) != 0 )
    {
      v11 = v10 + 72LL * TagIndex;
      if ( TagInfo )
      {
        TagInfo->NumberOfAllocations = *(_DWORD *)(v10 + 72LL * TagIndex);
        TagInfo->NumberOfFrees = *(_DWORD *)(v11 + 4);
        TagInfo->BytesAllocated = 16LL * *(_QWORD *)(v11 + 8);
      }
      if ( ResetCounters )
      {
        *(_DWORD *)(v10 + 72LL * TagIndex) = 0;
        *(_DWORD *)(v11 + 4) = 0;
        *(_QWORD *)(v11 + 8) = 0LL;
      }
      TagHeap = (WCHAR *)(v10 + 20 + 72LL * TagIndex);
    }
    else if ( (TagIndex & 0x8000u) != 0 && (TagIndex ^ 0x8000u) < 0x81 )
    {
      v12 = *((_QWORD *)HeapHandle + 41);
      if ( v12 )
      {
        v13 = v12 + 16LL * (TagIndex ^ 0x8000u);
        if ( TagInfo )
        {
          TagInfo->NumberOfAllocations = *(_DWORD *)v13;
          TagInfo->NumberOfFrees = *(_DWORD *)(v13 + 4);
          TagInfo->BytesAllocated = 16LL * *(_QWORD *)(v13 + 8);
        }
        if ( ResetCounters )
        {
          *(_QWORD *)v13 = 0LL;
          *(_QWORD *)(v13 + 8) = 0LL;
        }
        TagHeap = (WCHAR *)&word_18017D3FC;
      }
    }
  }
  if ( v15 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return TagHeap;
}
