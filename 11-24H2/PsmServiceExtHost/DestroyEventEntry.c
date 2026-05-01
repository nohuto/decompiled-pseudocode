/*
 * XREFs of DestroyEventEntry @ 0x180064598
 * Callers:
 *     CrmLogSrvActivityStopStop @ 0x180033BA0 (CrmLogSrvActivityStopStop.c)
 *     FlushEventEntryList @ 0x1800644F8 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  void *v1; // rbx
  HANDLE ProcessHeap; // rax

  if ( a1 )
  {
    v1 = *(void **)(a1 + 16);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v1);
  }
}
