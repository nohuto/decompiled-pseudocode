/*
 * XREFs of RtlpGetBlockInfo @ 0x180094070
 * Callers:
 *     RtlpPushPageDescriptor @ 0x180092F14 (RtlpPushPageDescriptor.c)
 *     RtlpScanHeapAllocBlocks @ 0x180093C84 (RtlpScanHeapAllocBlocks.c)
 *     RtlpGetHeapBlock @ 0x180093FC0 (RtlpGetHeapBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetBlockInfo(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax
  _QWORD *v4; // rax

  while ( 1 )
  {
    v2 = a1[1];
    if ( a2 < v2 || a2 > a1[2] )
      return 0LL;
    v3 = a2 > v2 ? (a2 - v2) / *a1 : 0LL;
    v4 = &a1[v3];
    if ( *a1 == 4096LL )
      break;
    a1 = (_QWORD *)v4[7];
    if ( !a1 )
      return 0LL;
  }
  return v4[7];
}
