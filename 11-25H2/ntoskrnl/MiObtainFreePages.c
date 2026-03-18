/*
 * XREFs of MiObtainFreePages @ 0x1403BF484
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiUnlinkStandbyPage @ 0x14024E2D0 (MiUnlinkStandbyPage.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140344B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiDecreaseAvailablePages @ 0x1403BF2D0 (MiDecreaseAvailablePages.c)
 *     MiWaitForFreePage @ 0x1403BFC64 (MiWaitForFreePage.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     CcNotifyWriteBehindEx @ 0x1403A7590 (CcNotifyWriteBehindEx.c)
 *     PsReferencePartitionSafe @ 0x1403BE990 (PsReferencePartitionSafe.c)
 *     MiWakeModifiedPageWriter @ 0x1403C1310 (MiWakeModifiedPageWriter.c)
 */

void __fastcall MiObtainFreePages(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi

  v1 = *(_QWORD *)(a1 + 17600);
  if ( v1 && !*(_BYTE *)(v1 + 52) )
  {
    v3 = *(_QWORD *)(a1 + 184);
    if ( PsReferencePartitionSafe(v3) )
    {
      CcNotifyWriteBehindEx(1, v3);
      PsDereferencePartition(v3);
    }
    if ( *(_QWORD *)(a1 + 19392) - *(_QWORD *)(a1 + 19616) >= 0x10uLL )
      KeSetEvent((PRKEVENT)(a1 + 840), 0, 0);
    if ( *(_QWORD *)(a1 + 19616) >= 0x10uLL )
      MiWakeModifiedPageWriter(a1, -1LL);
    if ( *(_BYTE *)(v1 + 98) )
      KeSetEvent((PRKEVENT)(v1 + 96), 0, 0);
  }
}
