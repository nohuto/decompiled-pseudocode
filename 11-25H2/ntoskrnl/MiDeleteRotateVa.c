/*
 * XREFs of MiDeleteRotateVa @ 0x14039106C
 * Callers:
 *     MiDeleteVa @ 0x1402B1A90 (MiDeleteVa.c)
 * Callees:
 *     MiCaptureWriteWatchDirtyBit @ 0x1402A3914 (MiCaptureWriteWatchDirtyBit.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReduceShareCount @ 0x140340D70 (MiReduceShareCount.c)
 *     MiRotatedToFrameBuffer @ 0x140387DA8 (MiRotatedToFrameBuffer.c)
 *     MiUnmapFrameBuffer @ 0x140391878 (MiUnmapFrameBuffer.c)
 */

__int64 __fastcall MiDeleteRotateVa(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 *v3; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  int v8; // ecx
  __int64 v10; // rbx
  __int64 v11; // rbx
  int v12; // edi

  v3 = *(__int64 **)(a1 + 184);
  v6 = *v3;
  v7 = *(_QWORD *)(v3[1] + 32);
  if ( (unsigned int)MiRotatedToFrameBuffer(a2) )
  {
    v10 = *(_QWORD *)(v6 + 16);
    MiUnmapFrameBuffer(v7, a2, 3LL);
    MiInsertTbFlushEntry(v10, (__int64)(a2 << 25) >> 16, 1LL, a3);
    v11 = 48 * MiGetContainingPageTable(a2) - 0x220000000000LL;
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
    MiReduceShareCount(v11, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 1LL;
  }
  else
  {
    if ( (*(_QWORD *)a2 & 0x42) != 0 )
    {
      v8 = *(_DWORD *)(v7 + 48);
      if ( (v8 & 0x600000) == 0x600000 && (v8 & 4) == 0 )
        MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)(a2 << 25) >> 16, v7);
    }
    return 0LL;
  }
}
