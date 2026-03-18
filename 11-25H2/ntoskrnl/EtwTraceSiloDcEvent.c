/*
 * XREFs of EtwTraceSiloDcEvent @ 0x14047F4D4
 * Callers:
 *     PsPerfLogSessionRundown @ 0x14076BDE0 (PsPerfLogSessionRundown.c)
 *     CmpLogHiveRundownEvent @ 0x1407C6D28 (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x1407DBCA8 (MmIdentifyPhysicalMemory.c)
 *     CmEtwRunDown @ 0x140A6CC98 (CmEtwRunDown.c)
 *     MmLogQueryCombineStats @ 0x140AB1EB4 (MmLogQueryCombineStats.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 */

int __fastcall EtwTraceSiloDcEvent(
        struct _KTHREAD *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  return EtwpLogKernelEvent(a1, a3, a4, a2, a5, a6);
}
