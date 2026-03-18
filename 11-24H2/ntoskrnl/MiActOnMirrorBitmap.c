/*
 * XREFs of MiActOnMirrorBitmap @ 0x140AA9E60
 * Callers:
 *     MiUpdateMirrorBitmaps @ 0x140AC0BC0 (MiUpdateMirrorBitmaps.c)
 *     MmDuplicateMemory @ 0x140B62998 (MmDuplicateMemory.c)
 *     MiMirrorBrownPhase @ 0x140B6CC0C (MiMirrorBrownPhase.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140261AD0 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x1403A4600 (RtlSetBitsEx.c)
 *     MiSplitMirrorBitMap @ 0x1407EBE54 (MiSplitMirrorBitMap.c)
 */

__int64 __fastcall MiActOnMirrorBitmap(unsigned __int64 *a1, int a2)
{
  unsigned int *v2; // r14
  unsigned int v5; // ebx
  unsigned int i; // edi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx

  v2 = (unsigned int *)MmPhysicalMemoryBlock;
  v5 = 1;
  for ( i = 0; i < *v2; ++i )
  {
    v7 = *(_QWORD *)&v2[4 * i + 6];
    v8 = *(_QWORD *)&v2[4 * i + 4];
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        RtlSetBitsEx((__int64)a1, v8, v7);
      }
      else if ( a2 == 2 )
      {
        RtlClearBitsEx((__int64)a1, v8, v7);
      }
    }
    else if ( !(unsigned int)MiSplitMirrorBitMap(a1, v8, v7) )
    {
      return 0;
    }
  }
  return v5;
}
