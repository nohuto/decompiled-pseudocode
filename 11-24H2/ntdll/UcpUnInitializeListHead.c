/*
 * XREFs of UcpUnInitializeListHead @ 0x180157B70
 * Callers:
 *     LdrShutdownProcess @ 0x180002B70 (LdrShutdownProcess.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 */

void UcpUnInitializeListHead()
{
  __int64 v0; // r8
  __int64 v1; // rax

  if ( g_isUcpListInitialized )
  {
    while ( 1 )
    {
      v0 = UcpTriggeredList;
      if ( (__int64 *)UcpTriggeredList == &UcpTriggeredList )
        break;
      if ( *(__int64 **)(UcpTriggeredList + 8) != &UcpTriggeredList
        || (v1 = *(_QWORD *)UcpTriggeredList, *(_QWORD *)(*(_QWORD *)UcpTriggeredList + 8LL) != UcpTriggeredList) )
      {
        __fastfail(3u);
      }
      UcpTriggeredList = *(_QWORD *)UcpTriggeredList;
      *(_QWORD *)(v1 + 8) = &UcpTriggeredList;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v0 - 32);
    }
    g_isUcpListInitialized = 0;
  }
}
