/*
 * XREFs of PspGetNextSilo @ 0x1408EBA34
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14048EAC0 (EtwpAdjustTraceBuffers.c)
 *     PsFreeSiloContextSlot @ 0x140772100 (PsFreeSiloContextSlot.c)
 *     PsRootSiloInformation @ 0x1407722B0 (PsRootSiloInformation.c)
 *     PsShutdownSystem @ 0x140778944 (PsShutdownSystem.c)
 *     PsStartSiloMonitor @ 0x140779270 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407794B0 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PsIsServerSilo @ 0x140349B68 (PsIsServerSilo.c)
 *     PspGetNextJob @ 0x1408EBB60 (PspGetNextJob.c)
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
