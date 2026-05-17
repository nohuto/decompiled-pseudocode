/*
 * XREFs of UcpUnInitializeListHead @ 0x180159120
 * Callers:
 *     LdrShutdownProcess @ 0x1800FDE80 (LdrShutdownProcess.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

void __fastcall UcpUnInitializeListHead(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // rax

  if ( g_isUcpListInitialized )
  {
    while ( 1 )
    {
      v4 = UcpTriggeredList;
      if ( (__int64 *)UcpTriggeredList == &UcpTriggeredList )
        break;
      if ( *(__int64 **)(UcpTriggeredList + 8) != &UcpTriggeredList
        || (v5 = *(_QWORD *)UcpTriggeredList, *(_QWORD *)(*(_QWORD *)UcpTriggeredList + 8LL) != UcpTriggeredList) )
      {
        __fastfail(3u);
      }
      UcpTriggeredList = *(_QWORD *)UcpTriggeredList;
      *(_QWORD *)(v5 + 8) = &UcpTriggeredList;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4 - 32, a4);
    }
    g_isUcpListInitialized = 0;
  }
}
