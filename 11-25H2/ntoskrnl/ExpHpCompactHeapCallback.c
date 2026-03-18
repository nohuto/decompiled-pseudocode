/*
 * XREFs of ExpHpCompactHeapCallback @ 0x1403C7C20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpFreeHeap @ 0x1402DE7F0 (RtlpHpFreeHeap.c)
 *     RtlpHpHeapCompact @ 0x1403C7C84 (RtlpHpHeapCompact.c)
 *     ExGetHeapFromVA @ 0x1403C7CD0 (ExGetHeapFromVA.c)
 *     RtlpDynamicLookasideFlush @ 0x140470094 (RtlpDynamicLookasideFlush.c)
 */

__int64 __fastcall ExpHpCompactHeapCallback(__int64 a1)
{
  _QWORD *v3; // rbx
  ULONG_PTR v4; // rsi
  __int64 HeapFromVA; // rax
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
