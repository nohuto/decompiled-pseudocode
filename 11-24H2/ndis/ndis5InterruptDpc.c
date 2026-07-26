/*
 * XREFs of ndis5InterruptDpc @ 0x1400D72D0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035310 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14004A050 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisCheckWatchdogTimer@@YAEXZ @ 0x14004D9D0 (-ndisCheckWatchdogTimer@@YAEXZ.c)
 *     ndisMDpc @ 0x1400D7410 (ndisMDpc.c)
 *     ndisMDpcX @ 0x1400D75DC (ndisMDpcX.c)
 */

void __fastcall ndis5InterruptDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  __int64 v6; // rcx

  v4 = (struct _NDIS_MINIPORT_BLOCK *)DeferredContext[13];
  if ( ndisCheckWatchdogTimer() )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(v4);
    if ( (v4->Flags & 0x2000000) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&v4->Flags, 0x2000000u);
      ndisReferenceMiniportNoCheck(v4, 0x4Eu);
      ExQueueWorkItem(&v4->MiniportDpcWorkItem, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    }
    v4->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&v4->Lock);
  }
  else if ( (v4->Flags & 0x40000) != 0 )
  {
    ndisMDpcX(v6, DeferredContext);
  }
  else
  {
    ndisMDpc(v6, DeferredContext);
  }
}
