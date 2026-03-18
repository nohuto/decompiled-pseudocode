/*
 * XREFs of Isoch_Stage_FreeScatterGatherList @ 0x140025BC8
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x140006F00 (Isoch_Stage_MapIntoRing.c)
 *     Isoch_CompleteStaleTransfers @ 0x140016500 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140016B10 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_CompleteTransfers @ 0x140025880 (Isoch_CompleteTransfers.c)
 * Callees:
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x140025C8C (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     TR_SendCompleteStageRequest @ 0x14003C940 (TR_SendCompleteStageRequest.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

void __fastcall Isoch_Stage_FreeScatterGatherList(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  KIRQL v6; // si
  __int64 v7; // r8

  if ( *(_BYTE *)(a1 + 288) )
  {
    if ( *(_DWORD *)(a2 + 160) )
    {
      TR_SendCompleteStageRequest(a1);
      SecureDmaEnabler_ReleaseResourcesAfterDma(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL), a2 + 128);
    }
  }
  else if ( *(_QWORD *)(a2 + 72) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
    v6 = KfRaiseIrql(2u);
    LOBYTE(v7) = (*(_BYTE *)(v4 + 32) & 1) == 0;
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v5 + 8) + 96LL))(v5, *(_QWORD *)(a2 + 72), v7);
    KeLowerIrql(v6);
    *(_QWORD *)(a2 + 72) = 0LL;
  }
}
