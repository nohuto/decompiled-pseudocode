/*
 * XREFs of EtwTraceSiloDcEvent @ 0x14047AF60
 * Callers:
 *     PsPerfLogSessionRundown @ 0x14077B830 (PsPerfLogSessionRundown.c)
 *     CmpLogHiveRundownEvent @ 0x1407D69FC (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x1407EC118 (MmIdentifyPhysicalMemory.c)
 *     MmLogQueryCombineStats @ 0x1408F78D4 (MmLogQueryCombineStats.c)
 *     CmEtwRunDown @ 0x140A6836C (CmEtwRunDown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 */

int __fastcall EtwTraceSiloDcEvent(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int16 a5,
        unsigned int a6)
{
  return EtwpLogKernelEvent(a1, a3, a4, a2, a5, a6);
}
