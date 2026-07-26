/*
 * XREFs of ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x140013110
 * Callers:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400130E0 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3KPEAPEAXPEAI5@Z @ 0x14002E720 (-ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_.c)
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14005BCC0 (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14005D410 (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140086710 (-ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140013AB0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     WPP_RECORDER_SF_qDq @ 0x140024890 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_qDqd @ 0x140025370 (WPP_RECORDER_SF_qDqd.c)
 *     ?ndisMCoOidRequestToRequest@@YAHPEAX0PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400276F0 (-ndisMCoOidRequestToRequest@@YAHPEAX0PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     NdisMOidRequestComplete @ 0x140027870 (NdisMOidRequestComplete.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x140027C30 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A6A0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMSleep @ 0x140067890 (NdisMSleep.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x14008F770 (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D7C00 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisQuerySetMiniportEx(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_CO_VC_PTR_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3,
        char a4,
        struct _NDIS_FILTER_BLOCK *a5,
        struct _NDIS_FILTER_BLOCK *a6)
{
  char v9; // r14
  void *MiniportContext; // rbp
  NDIS_OID Oid; // eax
  const struct _GUID *v13; // rdx
  signed __int32 v14; // eax
  __int64 v15; // rdx
  unsigned int PnPFlags; // eax
  unsigned int i; // eax
  unsigned int Flags; // eax
  unsigned int v19; // edi
  int v20; // edx
  int v21; // r8d
  struct _NDIS_MINIPORT_AOAC *AoAc; // rax
  unsigned int v24; // eax
  unsigned int j; // edi
  int v26; // eax
  __int64 v27; // rdx
  NDIS_STATUS v28; // ecx
  int v29; // eax
  struct _NDIS_MINIPORT_AOAC *v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rdi
  int v33; // eax
  struct _KTIMER Timer; // [rsp+50h] [rbp-78h] BYREF
  char v35; // [rsp+D0h] [rbp+8h]
  ULONGLONG UnbiasedInterruptTime; // [rsp+E0h] [rbp+18h]

  v9 = 0;
  MiniportContext = 0LL;
  Oid = a3->DATA.QUERY_INFORMATION.Oid;
  UnbiasedInterruptTime = 0LL;
  v35 = Oid;
  v13 = &WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v13,
      (int)a3,
      12,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1,
      Oid,
      (char)a5);
  }
  v14 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v14 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
      {
        memset(&Timer, 0, sizeof(Timer));
        KeInitializeTimerEx(&Timer, SynchronizationTimer);
        KeSetTimer(&Timer, (LARGE_INTEGER)-500LL, 0LL);
        KeWaitForSingleObject(&Timer, Executive, 0, 0, 0LL);
      }
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  if ( a1->AoAc && a3->RequestType == NdisRequestSetInformation && a3->DATA.QUERY_INFORMATION.Oid == -50265855 )
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  if ( (a1->DriverVerifyFlags & 0x400) == 0 )
    a3->SupportedRevision = 1;
  if ( *(_QWORD *)&a3->NdisReserved[32] && a4 )
    v9 = 1;
  PnPFlags = a1->PnPFlags;
  if ( (PnPFlags & 0x100) != 0 )
  {
    v19 = -1073676280;
    goto LABEL_19;
  }
  if ( (PnPFlags & 0x4000) != 0 )
  {
    v19 = -1073741823;
    goto LABEL_19;
  }
  if ( a1->CurrentDevicePowerState > PowerDeviceD0 && a3->DATA.QUERY_INFORMATION.Oid != -50265855 )
  {
    v19 = -1071448017;
    goto LABEL_19;
  }
  *(_DWORD *)&a3->NdisReserved[16] |= 8u;
  KeInitializeEvent((PRKEVENT)&a3->NdisReserved[40], NotificationEvent, 0);
  for ( i = 0; i < 0x19; ++i )
  {
    if ( a3->DATA.QUERY_INFORMATION.Oid == ndisDirectOidRequestPathOids[i] )
    {
      *(_DWORD *)&a3->NdisReserved[16] |= 0x200000u;
      break;
    }
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    for ( j = 0; j < 0x1388; ++j )
    {
      if ( (a1->Flags & 0x300000) == 0 )
        break;
      NdisMSleep(0x3E8u);
    }
  }
  Flags = a1->Flags;
  if ( (Flags & 0x300000) != 0 )
  {
    v19 = -1073676275;
LABEL_19:
    if ( v9 == 1 && a4 )
    {
      LOBYTE(v15) = 6;
      ndisMDereferenceOpenUnlocked(*(_QWORD *)&a3->NdisReserved[32], v15);
    }
    goto LABEL_20;
  }
  if ( (Flags & 0x20000) == 0 )
  {
    if ( (*(_DWORD *)&a3->NdisReserved[16] & 0x200000) != 0 )
      v24 = ndisDoDirectOidRequest(a3, a1, a6, a5);
    else
      v24 = ndisQueueOidRequest(a3, a1, a6, a5);
    v19 = v24;
    if ( v24 == 259 )
    {
      ndisWaitForKernelObject(&a3->NdisReserved[40]);
      v19 = *(_DWORD *)&a3->NdisReserved[8];
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  if ( a2 )
  {
    if ( !ndisReferenceVcPtr(a2) )
    {
      v19 = -1073676286;
      goto LABEL_19;
    }
    MiniportContext = a2->MiniportContext;
  }
  if ( a1->MajorNdisVersion < 6u )
    v26 = ndisMCoOidRequestToRequest(a1, MiniportContext, a3);
  else
    v26 = a1->DriverHandle->CoOidRequestHandler(a1->MiniportAdapterContext, MiniportContext, a3);
  v28 = v26;
  if ( v26 == 259 )
  {
    ndisWaitForKernelObject(&a3->NdisReserved[40]);
  }
  else
  {
    v29 = *(_DWORD *)&a3->NdisReserved[16];
    if ( (v29 & 0x220) != 0 )
    {
      v32 = *(_QWORD *)&a3->NdisReserved[32];
      if ( a3->RequestType == NdisRequestQueryInformation
        && a3->DATA.QUERY_INFORMATION.Oid == 65806
        && a3->DATA.QUERY_INFORMATION.InformationBufferLength
        && v32
        && (*(_DWORD *)(v32 + 224) & 4) != 0 )
      {
        *(_DWORD *)a3->DATA.QUERY_INFORMATION.InformationBuffer |= 0xA0u;
      }
      v33 = *(_DWORD *)&a3->NdisReserved[16];
      if ( (v33 & 0x2000) != 0 )
      {
        NdisMOidRequestComplete(a1, a1->PendingOidRequest, v28);
      }
      else
      {
        if ( (v33 & 0x200) != 0 )
        {
          if ( (v33 & 8) != 0 )
          {
            *(_DWORD *)&a3->NdisReserved[8] = v28;
            KeSetEvent((PRKEVENT)&a3->NdisReserved[40], 0, 0);
          }
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _NDIS_OID_REQUEST *, NDIS_STATUS))(v32 + 1152))(
            *(_QWORD *)(v32 + 32),
            *(_QWORD *)&a3->NdisReserved[56],
            0LL,
            a3,
            v28);
        }
        LOBYTE(v27) = 6;
        ndisMDereferenceOpenUnlocked(v32, v27);
      }
    }
    else if ( (v29 & 8) != 0 )
    {
      *(_DWORD *)&a3->NdisReserved[8] = v28;
      KeSetEvent((PRKEVENT)&a3->NdisReserved[40], 0, 0);
    }
  }
  v19 = *(_DWORD *)&a3->NdisReserved[8];
  if ( a2 )
    ndisDereferenceVcPtr(a2);
LABEL_20:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v20,
      v21,
      13,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1,
      v35,
      (char)a5,
      v19);
  AoAc = a1->AoAc;
  if ( AoAc && a3->RequestType == NdisRequestSetInformation && a3->DATA.QUERY_INFORMATION.Oid == -50265855 )
  {
    ++*((_DWORD *)AoAc + 282);
    *((_QWORD *)a1->AoAc + 142) = (KeQueryUnbiasedInterruptTime() - UnbiasedInterruptTime + 5000) / 0x2710;
    v30 = a1->AoAc;
    v31 = *((_QWORD *)v30 + 143);
    if ( v31 <= *((_QWORD *)v30 + 142) )
      v31 = *((_QWORD *)v30 + 142);
    *((_QWORD *)v30 + 143) = v31;
    *((_QWORD *)a1->AoAc + 144) += *((_QWORD *)a1->AoAc + 142);
  }
  return v19;
}
