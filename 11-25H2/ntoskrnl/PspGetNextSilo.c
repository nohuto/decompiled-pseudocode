/*
 * XREFs of PspGetNextSilo @ 0x1408DC664
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14048EF90 (EtwpAdjustTraceBuffers.c)
 *     PsFreeSiloContextSlot @ 0x140762740 (PsFreeSiloContextSlot.c)
 *     PsRootSiloInformation @ 0x1407628F0 (PsRootSiloInformation.c)
 *     PsShutdownSystem @ 0x140768C94 (PsShutdownSystem.c)
 *     PsStartSiloMonitor @ 0x1407695C0 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x140769800 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PsIsServerSilo @ 0x1403104CC (PsIsServerSilo.c)
 *     PspGetNextJob @ 0x1408DC790 (PspGetNextJob.c)
 */

__int64 __fastcall PspGetNextSilo(void *a1, char a2)
{
  __int64 result; // rax
  void *v4; // r8

  while ( 1 )
  {
    result = PspGetNextJob(a1);
    v4 = (void *)result;
    if ( !result )
      break;
    if ( (*(_DWORD *)(result + 1552) & 0x40000000) != 0 && (!a2 || PsIsServerSilo(result)) )
      return (__int64)v4;
    a1 = v4;
  }
  return result;
}
