/*
 * XREFs of ?CloseHeapPointer@@YAXPEAX@Z @ 0x1800029C4
 * Callers:
 *     TelGetRegionalSettingsValue @ 0x180003FD0 (TelGetRegionalSettingsValue.c)
 *     TelIsOsInProcessorMode @ 0x1800044C0 (TelIsOsInProcessorMode.c)
 * Callees:
 *     <none>
 */

void __fastcall CloseHeapPointer(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a1);
}
