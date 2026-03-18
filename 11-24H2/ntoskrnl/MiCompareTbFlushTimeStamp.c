/*
 * XREFs of MiCompareTbFlushTimeStamp @ 0x14023E0A8
 * Callers:
 *     MiFlushTbAsNeeded @ 0x14023FA90 (MiFlushTbAsNeeded.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MiDeleteVadAwePtes @ 0x1404B9E8C (MiDeleteVadAwePtes.c)
 *     MiWriteAwePtes @ 0x1404BA130 (MiWriteAwePtes.c)
 *     MiReadyReservedView @ 0x1404C04A8 (MiReadyReservedView.c)
 *     MiDecrementAweMapCount @ 0x14068190C (MiDecrementAweMapCount.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x1406832CC (MiZeroAndFlushAweLazyPtes.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall MiCompareTbFlushTimeStamp(__int64 a1)
{
  int v1; // esi
  unsigned int v3; // ebx
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = a1;
  do
  {
    _InterlockedOr(v4, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - v1) > 2 || (v1 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v1) >= 2 )
      break;
    if ( (KiTbFlushTimeStamp & 1) == 0 )
      return 1;
    v3 = 0;
    _InterlockedOr(v4, 0);
    while ( _bittest(&KiTbFlushTimeStamp, 0) )
    {
      if ( (++v3 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v3);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  while ( (v1 & 1) != 0 );
  return 0;
}
