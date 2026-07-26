/*
 * XREFs of ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x14000AD80
 * Callers:
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400070D0 (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14000AD50 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x14002FEF0 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x140035510 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3KPEAPEAXPEAI5@Z @ 0x140061230 (-ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140067C10 (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14006AB00 (-ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisQueryCustomGuids @ 0x140082F30 (ndisQueryCustomGuids.c)
 * Callees:
 *     NdisMCoOidRequestComplete @ 0x140006A10 (NdisMCoOidRequestComplete.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006B10 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140008A10 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     WPP_RECORDER_SF_qDqd @ 0x140015CC0 (WPP_RECORDER_SF_qDqd_ea_140015CC0.c)
 *     WPP_RECORDER_SF_qDq @ 0x140015E00 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisMCoOidRequestToRequest@@YAHPEAX0PEAU_NDIS_OID_REQUEST@@@Z @ 0x14004AF10 (-ndisMCoOidRequestToRequest@@YAHPEAX0PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140050D80 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x140073BD0 (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D05C0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisQuerySetMiniportEx(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_CO_VC_PTR_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3,
        char a4,
        struct _NDIS_FILTER_BLOCK *a5,
        struct _NDIS_FILTER_BLOCK *a6)
{
  NDIS_OID Oid; // eax
  bool v7; // r15
  void *MiniportContext; // rdi
  char v9; // bp
  _UNKNOWN **v13; // rdx
  unsigned int PnPFlags; // eax
  unsigned int v15; // edi
  int v16; // edx
  int v17; // r8d
  struct _NDIS_MINIPORT_AOAC *AoAc; // rax
  struct _NDIS_MINIPORT_AOAC *v19; // rdx
  unsigned __int64 v20; // rcx
  _DWORD *v22; // rax
  unsigned int v23; // ecx
  unsigned int i; // ebp
  NDIS_STATUS v25; // eax
  int v26; // eax
  struct _KTIMER Timer; // [rsp+50h] [rbp-78h] BYREF
  char v28; // [rsp+D0h] [rbp+8h]
  ULONGLONG UnbiasedInterruptTime; // [rsp+E0h] [rbp+18h]

  Oid = a3->DATA.QUERY_INFORMATION.Oid;
  v7 = 0;
  MiniportContext = 0LL;
  v28 = Oid;
  UnbiasedInterruptTime = 0LL;
  v9 = a4;
  v13 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v13,
      (int)a3,
      12,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      Oid,
      (char)a5);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( a1->AoAc && a3->RequestType == NdisRequestSetInformation && a3->DATA.QUERY_INFORMATION.Oid == -50265855 )
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  if ( (a1->DriverVerifyFlags & 0x400) == 0 )
    a3->SupportedRevision = 1;
  if ( *(_QWORD *)&a3->NdisReserved[32] )
    v7 = v9 != 0;
  PnPFlags = a1->PnPFlags;
  if ( (PnPFlags & 0x100) != 0 )
  {
    v15 = -1073676280;
LABEL_13:
    if ( v7 && v9 )
      ndisMDereferenceOpenUnlocked(*(_QWORD *)&a3->NdisReserved[32], 6u);
    goto LABEL_16;
  }
  if ( (PnPFlags & 0x4000) != 0 )
  {
    v15 = -1073741823;
    goto LABEL_13;
  }
  if ( a1->CurrentDevicePowerState > PowerDeviceD0 && a3->DATA.QUERY_INFORMATION.Oid != -50265855 )
  {
    v15 = -1071448017;
    goto LABEL_13;
  }
  *(_DWORD *)&a3->NdisReserved[16] |= 8u;
  KeInitializeEvent((PRKEVENT)&a3->NdisReserved[40], NotificationEvent, 0);
  v22 = ndisDirectOidRequestPathOids;
  v23 = 0;
  while ( a3->DATA.QUERY_INFORMATION.Oid != *v22 )
  {
    ++v23;
    ++v22;
    if ( v23 >= 0x19 )
      goto LABEL_35;
  }
  *(_DWORD *)&a3->NdisReserved[16] |= 0x200000u;
LABEL_35:
  if ( KeGetCurrentIrql() < 2u )
  {
    for ( i = 0; i < 0x1388; ++i )
    {
      if ( (a1->Flags & 0x300000) == 0 )
        break;
      memset(&Timer, 0, sizeof(Timer));
      KeInitializeTimerEx(&Timer, SynchronizationTimer);
      KeSetTimer(&Timer, (LARGE_INTEGER)-10000LL, 0LL);
      KeWaitForSingleObject(&Timer, Executive, 0, 0, 0LL);
    }
    v9 = a4;
  }
  if ( (a1->Flags & 0x300000) != 0 )
  {
    v15 = -1073676275;
    goto LABEL_13;
  }
  if ( (a1->Flags & 0x20000) == 0 )
  {
    if ( (*(_DWORD *)&a3->NdisReserved[16] & 0x200000) != 0 )
      v26 = ndisDoDirectOidRequest(a3, a1, a6, a5);
    else
      v26 = ndisQueueOidRequest(a3, a1, a6, (struct _NDIS_MINIPORT_BLOCK *)a5);
    v15 = v26;
    if ( v26 == 259 )
    {
      ndisWaitForKernelObject(&a3->NdisReserved[40]);
      v15 = *(_DWORD *)&a3->NdisReserved[8];
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  if ( a2 )
  {
    if ( !ndisReferenceVcPtr(a2) )
    {
      v15 = -1073676286;
      goto LABEL_13;
    }
    MiniportContext = a2->MiniportContext;
  }
  if ( a1->MajorNdisVersion < 6u )
    v25 = ndisMCoOidRequestToRequest(a1, MiniportContext, a3);
  else
    v25 = a1->DriverHandle->CoOidRequestHandler(a1->MiniportAdapterContext, MiniportContext, a3);
  if ( v25 == 259 )
    ndisWaitForKernelObject(&a3->NdisReserved[40]);
  else
    NdisMCoOidRequestComplete(a1, a2, a3, v25);
  v15 = *(_DWORD *)&a3->NdisReserved[8];
  if ( a2 )
    ndisDereferenceVcPtr(a2);
LABEL_16:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v16,
      v17,
      13,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      v28,
      (char)a5,
      v15);
  AoAc = a1->AoAc;
  if ( AoAc && a3->RequestType == NdisRequestSetInformation && a3->DATA.QUERY_INFORMATION.Oid == -50265855 )
  {
    ++*((_DWORD *)AoAc + 282);
    *((_QWORD *)a1->AoAc + 142) = (5000 - UnbiasedInterruptTime + KeQueryUnbiasedInterruptTime()) / 0x2710;
    v19 = a1->AoAc;
    v20 = *((_QWORD *)v19 + 143);
    if ( v20 <= *((_QWORD *)v19 + 142) )
      v20 = *((_QWORD *)v19 + 142);
    *((_QWORD *)v19 + 143) = v20;
    *((_QWORD *)a1->AoAc + 144) += *((_QWORD *)a1->AoAc + 142);
  }
  return v15;
}
