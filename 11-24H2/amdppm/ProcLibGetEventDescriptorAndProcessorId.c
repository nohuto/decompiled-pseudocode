/*
 * XREFs of ProcLibGetEventDescriptorAndProcessorId @ 0x140002EA8
 * Callers:
 *     ProcLibTraceProcessorSpecificEvent @ 0x140002DE0 (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceCap @ 0x1400244C4 (ProcLibTraceCap.c)
 *     ProcLibTraceProcessorRundown @ 0x14003ECC4 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x14003F064 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x14003F2F0 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x14003F5B0 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTracePerfStatesRundown @ 0x14003F7F4 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceSummary @ 0x14003F970 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x14003FCC0 (ProcLibTraceSummary2.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x140040634 (ProcLibTraceProcessorLpiRundown.c)
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
