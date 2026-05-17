/*
 * XREFs of RtlHeapZero @ 0x180168590
 * Callers:
 *     RtlpHpSegAlloc @ 0x18000D080 (RtlpHpSegAlloc.c)
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     RtlpHpTagAllocateHeap @ 0x18002E060 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpHpSegMgrCommit @ 0x1800BADA0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpAllocVA @ 0x1800BB510 (RtlpHpAllocVA.c)
 *     RtlpHpLargeAlloc @ 0x1800BD0E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpVsContextAllocateFinalize @ 0x18011D40C (RtlpHpVsContextAllocateFinalize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlHeapZero(_OWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  _OWORD *v3; // r8
  unsigned __int64 v4; // rdx

  if ( a2 < 0x40 )
  {
    if ( a2 )
    {
      *a1 = 0LL;
      *(_OWORD *)((char *)a1 + a2 - 16) = 0LL;
      *(_OWORD *)((char *)a1 + ((a2 & 0x20) >> 1)) = 0LL;
    }
  }
  else if ( (qword_1801CFEE8 & 2) != 0 && a2 >= 0x320 )
  {
    return RtlpHeapZeroFastString();
  }
  else
  {
    v3 = (_OWORD *)((char *)a1 + a2 - 48);
    v4 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) >> 6;
    do
    {
      *a1 = 0LL;
      a1[1] = 0LL;
      a1 += 4;
      --v4;
      *(a1 - 2) = 0LL;
      *(a1 - 1) = 0LL;
    }
    while ( v4 );
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
  }
  return result;
}
