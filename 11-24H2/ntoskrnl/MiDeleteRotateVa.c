/*
 * XREFs of MiDeleteRotateVa @ 0x1403CDA5C
 * Callers:
 *     MiDeleteVa @ 0x1402DB780 (MiDeleteVa.c)
 * Callees:
 *     MiRotatedToFrameBuffer @ 0x140238E74 (MiRotatedToFrameBuffer.c)
 *     MiReduceShareCount @ 0x14023EDC0 (MiReduceShareCount.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiUnmapFrameBuffer @ 0x1403CE530 (MiUnmapFrameBuffer.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1404F31F8 (MiCaptureWriteWatchDirtyBit.c)
 */

__int64 __fastcall MiDeleteRotateVa(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 *v3; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  int v8; // ecx
  __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  unsigned int v12; // edi

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
          HvlNotifyLongSpinWait(v12);
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
        MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, (__int64)(a2 << 25) >> 16, v7);
    }
    return 0LL;
  }
}
