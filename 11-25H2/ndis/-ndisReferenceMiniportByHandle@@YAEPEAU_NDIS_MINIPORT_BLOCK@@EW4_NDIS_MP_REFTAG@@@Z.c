/*
 * XREFs of ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1400653B0
 * Callers:
 *     ndisDispatchRequest @ 0x140029830 (ndisDispatchRequest.c)
 *     ?ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140063560 (-ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140064C80 (-ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x140093540 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z @ 0x1401607E0 (-ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z.c)
 *     ndisFindRootDevice @ 0x140183630 (ndisFindRootDevice.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1401893D0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14018BD20 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x14018BFF0 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x14000E770 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x14000F5C0 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 */

__int64 __fastcall ndisReferenceMiniportByHandle(struct _NDIS_MINIPORT_BLOCK *a1, char a2, unsigned __int8 a3)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // r12
  unsigned __int8 v4; // r14
  char v5; // bp
  KIRQL v7; // al
  struct _NDIS_M_DRIVER_BLOCK *v8; // rdi
  KIRQL v9; // si
  KIRQL v10; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v12; // r15
  KIRQL v13; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rbx
  _ULONG_REFERENCE *p_Ref; // rsi
  char v17; // r14
  KIRQL v18; // r12
  struct _NDIS_MINIPORT_BLOCK *v19; // rdx
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  unsigned int ReferenceCount; // ecx
  __int64 v22; // [rsp+30h] [rbp-58h]
  int v23[18]; // [rsp+40h] [rbp-48h] BYREF
  char v26; // [rsp+A8h] [rbp+20h]

  v3 = a1;
  v4 = 0;
  v26 = 0;
  v5 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v8 = ndisMiniDriverList;
  v9 = v7;
  do
  {
    if ( !v8 )
      break;
    if ( a2 )
    {
      v23[0] = 0;
      if ( !ndisReferenceRefEx(&v8->Ref.SpinLock, 6u, (enum _NDIS_REFERENCE_STATUS *)v23) )
      {
        NextDriver = v8->NextDriver;
        goto LABEL_7;
      }
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
    v10 = KeAcquireSpinLockRaiseToDpc(&v8->Ref.SpinLock);
    MiniportQueue = v8->MiniportQueue;
    v12 = v10;
    while ( 1 )
    {
      if ( !MiniportQueue )
      {
LABEL_12:
        v4 = v26;
        goto LABEL_5;
      }
      if ( MiniportQueue == v3 )
        break;
LABEL_11:
      MiniportQueue = MiniportQueue->NextMiniport;
      if ( v5 )
        goto LABEL_12;
    }
    v5 = 1;
    if ( a2 )
      goto LABEL_26;
    p_Ref = &v3->Ref;
    v17 = 1;
    v18 = KeAcquireSpinLockRaiseToDpc(&v3->Ref.SpinLock);
    v19 = a1;
    if ( !p_Ref->Closing )
    {
      RefCountTracker = a1->RefCountTracker;
      if ( RefCountTracker )
      {
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, a3);
        v19 = a1;
      }
      ReferenceCount = p_Ref->ReferenceCount;
      p_Ref->ReferenceCount = ReferenceCount + 1;
      if ( ReferenceCount != -1 )
        goto LABEL_20;
      p_Ref->ReferenceCount = -1;
    }
    v17 = 0;
LABEL_20:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v22) = v19->Ref.ReferenceCount;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0xCu,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        (char)v19,
        v22);
    }
    KeReleaseSpinLock(&p_Ref->SpinLock, v18);
    if ( v17 )
    {
      v4 = 1;
      KeReleaseSpinLock(&v8->Ref.SpinLock, v12);
      v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      break;
    }
    v3 = a1;
LABEL_26:
    if ( (v3->Flags & 0x80200020) != 0
      || (v3->PnPFlags & 0x1084110) != 0
      || v3->PnPDeviceState != NdisPnPDeviceStarted
      || v3->CurrentDevicePowerState != PowerDeviceD0
      || !(unsigned __int8)ndisReferenceMiniport(v3, a3) )
    {
      goto LABEL_11;
    }
    v4 = 1;
    v26 = 1;
LABEL_5:
    KeReleaseSpinLock(&v8->Ref.SpinLock, v12);
    v13 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v8->NextDriver;
    v9 = v13;
    if ( a2 )
      ndisDereferenceDriver(v8, 1, 6u);
LABEL_7:
    v8 = NextDriver;
  }
  while ( !v5 );
  KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
  return v4;
}
