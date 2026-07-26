/*
 * XREFs of ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017FC80
 * Callers:
 *     NdisCloseAdapter @ 0x14017F9C0 (NdisCloseAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140025750 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A740 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x140079080 (-ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z.c)
 *     ?EthDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140085F90 (-EthDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?nullDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140087050 (-nullDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisMKillOpen(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  KIRQL v3; // r14
  struct _NDIS_OPEN_BLOCK *i; // rsi
  unsigned __int64 *p_SpinLock; // rcx
  struct _X_FILTER *EthDB; // rcx

  MiniportHandle = a1->MiniportHandle;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      10,
      (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
      (char)a1);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v3 = KfRaiseIrql(2u);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(MiniportHandle);
  for ( i = MiniportHandle->OpenQueue; i; i = i->MiniportNextOpen )
  {
    if ( i == a1 )
      break;
  }
  MiniportHandle->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&MiniportHandle->Lock);
  if ( i )
  {
    KeAcquireSpinLockAtDpcLevel(&a1->SpinLock);
    p_SpinLock = &a1->SpinLock;
    if ( (a1->OpenFlags & 0x8000) == 0 )
    {
      a1->OpenFlags |= 0x8000u;
      KeReleaseSpinLockFromDpcLevel(p_SpinLock);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(MiniportHandle);
      while ( MiniportHandle->LockAcquired )
      {
        MiniportHandle->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&MiniportHandle->Lock);
        KeStallExecutionProcessor(1u);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(MiniportHandle);
      }
      MiniportHandle->LockAcquired = 1;
      EthDB = MiniportHandle->EthDB;
      MiniportHandle->LockThread = KeGetCurrentThread();
      if ( MiniportHandle->MediaType )
        nullDeleteFilterOpenAdapter(EthDB, a1);
      else
        EthDeleteFilterOpenAdapter(EthDB, a1);
      if ( MiniportHandle->MediaType == NdisMedium802_3 && (MiniportHandle->PnPFlags & 0x4010) == 0 )
        ndisMRestoreFilterSettings(MiniportHandle, a1, 0);
      MiniportHandle->LockAcquired = 0;
      MiniportHandle->LockThread = 0LL;
      ndisMDereferenceOpenLocked(a1, 1u);
      p_SpinLock = &MiniportHandle->Lock;
      MiniportHandle->MiniportThread = 0LL;
    }
    KeReleaseSpinLockFromDpcLevel(p_SpinLock);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      11,
      (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
      (char)a1);
  KeLowerIrql(v3);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
}
