/*
 * XREFs of ?ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x14007B350
 * Callers:
 *     ?ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@_N@Z @ 0x14009BB88 (-ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@_N@Z.c)
 *     ?ndisMiniportRevokeOpenHandles@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A0FB4 (-ndisMiniportRevokeOpenHandles@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140092F04 (Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisCleanupUserOpenContext(struct _NDIS_MINIPORT_BLOCK *a1, char *P)
{
  KIRQL v4; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  KIRQL v9; // al
  struct _KTHREAD *CurrentThread; // rcx
  KIRQL v11; // bp
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char **v15; // rdx
  PVOID *v16; // rcx
  void (__fastcall **BusInterface)(_QWORD); // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  if ( P[24] )
    --a1->NumAdminOpens;
  else
    --a1->NumUserOpens;
  KeReleaseSpinLock(&a1->Ref.SpinLock, v4);
  if ( (unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline(v6, v5, v7, v8) )
  {
    if ( (a1->Flags & 0x80u) != 0 )
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)P + 11);
  }
  else
  {
    ExFreePoolWithTag(P, 0);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v9 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  CurrentThread = KeGetCurrentThread();
  v11 = v9;
  --a1->UserModeOpenReferences;
  a1->MiniportThread = CurrentThread;
  if ( (unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline(CurrentThread, v12, v13, v14)
    && (a1->Flags & 0x80u) != 0 )
  {
    v15 = (char **)*((_QWORD *)P + 9);
    if ( v15[1] != P + 72 || (v16 = (PVOID *)*((_QWORD *)P + 10), *v16 != P + 72) )
      __fastfail(3u);
    *v16 = v15;
    v15[1] = (char *)v16;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v11);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  ndisDereferenceMiniport(a1, 0x56u);
  if ( (a1->PnPFlags & 0x2000) != 0 )
  {
    BusInterface = (void (__fastcall **)(_QWORD))a1->BusInterface;
    if ( BusInterface )
      BusInterface[5](BusInterface[1]);
  }
}
