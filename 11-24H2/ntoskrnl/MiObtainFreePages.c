/*
 * XREFs of MiObtainFreePages @ 0x1402D17D4
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402213E0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkStandbyPage @ 0x140270760 (MiUnlinkStandbyPage.c)
 *     MiWaitForFreePage @ 0x1402CF708 (MiWaitForFreePage.c)
 *     MiDecreaseAvailablePages @ 0x1402D1620 (MiDecreaseAvailablePages.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     CcNotifyWriteBehindEx @ 0x1402CF21C (CcNotifyWriteBehindEx.c)
 *     MiWakeModifiedPageWriter @ 0x1402D0460 (MiWakeModifiedPageWriter.c)
 *     PsReferencePartitionSafe @ 0x1403D4B60 (PsReferencePartitionSafe.c)
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
