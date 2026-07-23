/*
 * XREFs of MiCompareTbFlushTimeStamp @ 0x14044D95C
 * Callers:
 *     MiFlushTbAsNeeded @ 0x140207BE0 (MiFlushTbAsNeeded.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiReadyReservedView @ 0x14044D858 (MiReadyReservedView.c)
 *     MiDeleteVadAwePtes @ 0x1404B4D2C (MiDeleteVadAwePtes.c)
 *     MiWriteAwePtes @ 0x1404B4FD0 (MiWriteAwePtes.c)
 *     MiDecrementAweMapCount @ 0x140682AFC (MiDecrementAweMapCount.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x1406844BC (MiZeroAndFlushAweLazyPtes.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall MiCompareTbFlushTimeStamp(int a1)
{
  unsigned int v3; // ebx
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  do
  {
    _InterlockedOr(v4, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - a1) > 2 || (a1 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - a1) >= 2 )
      break;
    if ( (KiTbFlushTimeStamp & 1) == 0 )
      return 1;
    v3 = 0;
    _InterlockedOr(v4, 0);
    while ( _bittest(&KiTbFlushTimeStamp, 0) )
    {
      if ( (++v3 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v3);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  while ( (a1 & 1) != 0 );
  return 0;
}
