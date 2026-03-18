/*
 * XREFs of EtwTraceSiloDcEvent @ 0x140480320
 * Callers:
 *     PsPerfLogSessionRundown @ 0x14077B980 (PsPerfLogSessionRundown.c)
 *     CmpLogHiveRundownEvent @ 0x1407D6488 (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x1407EBB48 (MmIdentifyPhysicalMemory.c)
 *     MmLogQueryCombineStats @ 0x140932778 (MmLogQueryCombineStats.c)
 *     CmEtwRunDown @ 0x140A6EEE8 (CmEtwRunDown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
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
