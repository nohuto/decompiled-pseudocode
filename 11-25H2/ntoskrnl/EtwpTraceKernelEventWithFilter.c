/*
 * XREFs of EtwpTraceKernelEventWithFilter @ 0x14048CC34
 * Callers:
 *     EtwTraceObjectOperation @ 0x1403F8ED4 (EtwTraceObjectOperation.c)
 *     EtwTraceObject @ 0x14079A4F4 (EtwTraceObject.c)
 *     EtwpTraceHandle @ 0x140850E08 (EtwpTraceHandle.c)
 *     EtwTraceDuplicateHandle @ 0x140A422FC (EtwTraceDuplicateHandle.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 */

int __fastcall EtwpTraceKernelEventWithFilter(
        struct _KTHREAD *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned int a5)
{
  int result; // eax
  unsigned int v9; // ebx
  bool i; // zf

  result = EtwpHostSiloState;
  v9 = a3 & *(_DWORD *)(EtwpHostSiloState + 4248);
  for ( i = !_BitScanForward((unsigned int *)&a3, v9); !i; i = !_BitScanForward((unsigned int *)&a3, v9) )
  {
    v9 &= v9 - 1;
    result = EtwpLogKernelEvent(
               a1,
               EtwpHostSiloState,
               *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4232),
               a2,
               a4,
               a5);
  }
  return result;
}
