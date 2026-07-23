/*
 * XREFs of MiObtainFreePages @ 0x1402616B4
 * Callers:
 *     MiUnlinkStandbyPage @ 0x140225CF0 (MiUnlinkStandbyPage.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MiDecreaseAvailablePages @ 0x140261500 (MiDecreaseAvailablePages.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MiWakeModifiedPageWriter @ 0x140261468 (MiWakeModifiedPageWriter.c)
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     CcNotifyWriteBehindEx @ 0x140262B14 (CcNotifyWriteBehindEx.c)
 */

void __fastcall MiObtainFreePages(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi

  v1 = *(_QWORD *)(a1 + 17600);
  if ( v1 && !*(_BYTE *)(v1 + 52) )
  {
    v3 = *(_QWORD *)(a1 + 184);
    if ( (unsigned __int8)PsReferencePartitionSafe(v3) )
    {
      CcNotifyWriteBehindEx(1LL, v3);
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
