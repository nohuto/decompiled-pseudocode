/*
 * XREFs of ExpHpCompactHeapCallback @ 0x1402B3980
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpFreeHeap @ 0x1402B2660 (RtlpHpFreeHeap.c)
 *     ExGetHeapFromVA @ 0x1402B3750 (ExGetHeapFromVA.c)
 *     RtlpHpHeapCompact @ 0x1402B39E4 (RtlpHpHeapCompact.c)
 *     RtlpDynamicLookasideFlush @ 0x1402B4E68 (RtlpDynamicLookasideFlush.c)
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
