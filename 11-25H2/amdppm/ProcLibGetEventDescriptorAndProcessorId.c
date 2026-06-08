/*
 * XREFs of ProcLibGetEventDescriptorAndProcessorId @ 0x140002EA8
 * Callers:
 *     ProcLibTraceProcessorSpecificEvent @ 0x140002DE0 (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceCap @ 0x140023378 (ProcLibTraceCap.c)
 *     ProcLibTraceProcessorRundown @ 0x14003DA74 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x14003DE14 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x14003E0A0 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x14003E360 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTracePerfStatesRundown @ 0x14003E5A4 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceSummary @ 0x14003E720 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x14003EA70 (ProcLibTraceSummary2.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x14003F3E4 (ProcLibTraceProcessorLpiRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcLibGetEventDescriptorAndProcessorId(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // eax
  __int64 v9; // rax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcNumber = 0;
  v6 = *(_DWORD *)(a1 + 80);
  if ( v6 == 1 )
  {
    *(_DWORD *)a4 = *(_DWORD *)(a1 + 72);
    v9 = a5;
    *(_DWORD *)(a5 + 8) = 4;
    goto LABEL_7;
  }
  if ( v6 != 2 && KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), &ProcNumber) >= 0 )
  {
    a3 = a2;
    *(_WORD *)a4 = ProcNumber.Group;
    *(_BYTE *)(a4 + 2) = ProcNumber.Number;
    v9 = a5;
    *(_DWORD *)(a5 + 8) = 3;
LABEL_7:
    *(_DWORD *)(v9 + 12) = 0;
    *(_QWORD *)v9 = a4;
    return a3;
  }
  return 0LL;
}
