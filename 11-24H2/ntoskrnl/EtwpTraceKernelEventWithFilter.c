/*
 * XREFs of EtwpTraceKernelEventWithFilter @ 0x140487710
 * Callers:
 *     EtwTraceObjectOperation @ 0x1403FBD80 (EtwTraceObjectOperation.c)
 *     EtwTraceObject @ 0x1407A9A04 (EtwTraceObject.c)
 *     EtwpTraceHandle @ 0x140848E7C (EtwpTraceHandle.c)
 *     EtwTraceDuplicateHandle @ 0x140A3C190 (EtwTraceDuplicateHandle.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 */

int __fastcall EtwpTraceKernelEventWithFilter(__int64 a1, unsigned int a2, __int64 a3, __int16 a4, unsigned int a5)
{
  int result; // eax
  unsigned int v9; // ebx
  bool i; // zf

  result = EtwpHostSiloState;
  v9 = a3 & *(_DWORD *)(EtwpHostSiloState + 4520);
  for ( i = !_BitScanForward((unsigned int *)&a3, v9); !i; i = !_BitScanForward((unsigned int *)&a3, v9) )
  {
    v9 &= v9 - 1;
    result = EtwpLogKernelEvent(
               a1,
               EtwpHostSiloState,
               *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4504),
               a2,
               a4,
               a5);
  }
  return result;
}
