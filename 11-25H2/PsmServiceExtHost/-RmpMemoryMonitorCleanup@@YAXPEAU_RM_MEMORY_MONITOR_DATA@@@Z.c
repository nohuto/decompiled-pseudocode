/*
 * XREFs of ?RmpMemoryMonitorCleanup@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x18006E0C8
 * Callers:
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x18001F300 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpMemoryMonitorCleanup(struct _RM_MEMORY_MONITOR_DATA *a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  void **v5; // rdi
  void *v6; // rcx

  v2 = (void *)*((_QWORD *)a1 + 7);
  if ( v2 )
    CloseHandle(v2);
  v3 = *((_QWORD *)a1 + 8);
  if ( v3 )
    TpReleaseTimer(v3);
  v4 = 0;
  v5 = (void **)((char *)a1 + 8);
  do
  {
    v6 = *v5;
    if ( *v5 )
    {
      if ( v4 )
        CloseHandle(v6);
      else
        NtClose(v6);
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 6 );
}
