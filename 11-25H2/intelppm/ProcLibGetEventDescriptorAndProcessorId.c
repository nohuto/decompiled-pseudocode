/*
 * XREFs of ProcLibGetEventDescriptorAndProcessorId @ 0x140003980
 * Callers:
 *     ProcLibTraceProcessorRundown @ 0x140041E34 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x140042204 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x14004249C (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x140042754 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTracePerfStatesRundown @ 0x1400429A0 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceSummary @ 0x140042B14 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x140042E48 (ProcLibTraceSummary2.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1400437BC (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceCap @ 0x140045130 (ProcLibTraceCap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcLibGetEventDescriptorAndProcessorId(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // eax
  __int64 v8; // rax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcNumber = 0;
  v6 = *(_DWORD *)(a1 + 80);
  if ( v6 == 1 )
  {
    *(_DWORD *)a4 = *(_DWORD *)(a1 + 72);
    v8 = a5;
    *(_DWORD *)(a5 + 8) = 4;
  }
  else
  {
    if ( v6 == 2 || KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), &ProcNumber) < 0 )
      return 0LL;
    a3 = a2;
    *(_WORD *)a4 = ProcNumber.Group;
    *(_BYTE *)(a4 + 2) = ProcNumber.Number;
    v8 = a5;
    *(_DWORD *)(a5 + 8) = 3;
  }
  *(_DWORD *)(v8 + 12) = 0;
  *(_QWORD *)v8 = a4;
  return a3;
}
