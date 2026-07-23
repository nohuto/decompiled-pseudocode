/*
 * XREFs of ExpHpCompactHeapCallback @ 0x14035CAD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpFreeHeap @ 0x14035B220 (RtlpHpFreeHeap.c)
 *     ExGetHeapFromVA @ 0x14035C310 (ExGetHeapFromVA.c)
 *     RtlpHpHeapCompact @ 0x14035CB34 (RtlpHpHeapCompact.c)
 *     RtlpDynamicLookasideFlush @ 0x1404644CC (RtlpDynamicLookasideFlush.c)
 */

__int64 __fastcall ExpHpCompactHeapCallback(__int64 a1)
{
  _QWORD *v3; // rbx
  ULONG_PTR v4; // rsi
  ULONG_PTR HeapFromVA; // rax
  unsigned int v6; // r8d

  if ( *(_QWORD *)(a1 + 56) )
  {
    v3 = (_QWORD *)RtlpDynamicLookasideFlush();
    while ( 1 )
    {
      v4 = (ULONG_PTR)v3;
      if ( !v3 )
        break;
      v3 = (_QWORD *)*v3;
      HeapFromVA = ExGetHeapFromVA(v4);
      RtlpHpFreeHeap(HeapFromVA, v4, v6);
    }
  }
  RtlpHpHeapCompact(a1);
  return 0LL;
}
