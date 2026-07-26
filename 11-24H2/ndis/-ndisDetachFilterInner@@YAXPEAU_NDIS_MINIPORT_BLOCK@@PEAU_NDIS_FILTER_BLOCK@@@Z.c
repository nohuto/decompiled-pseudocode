/*
 * XREFs of ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140176CB0
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015FFE0 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140017B10 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140019660 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisMSleep @ 0x140032800 (NdisMSleep.c)
 *     ?FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140034770 (-FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x140037940 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x14003B520 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1400482F0 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14004EAC0 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x14004EC40 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004F3F0 (-ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1400523E0 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x1400555E0 (WPP_RECORDER_SF_qqZZ.c)
 *     ?ndisReferenceFilterByHandle@@YAEPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x14005F770 (-ndisReferenceFilterByHandle@@YAEPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     PktMonClientComponentUnregister @ 0x14005F810 (PktMonClientComponentUnregister.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x14006A450 (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14006D030 (-ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14007A690 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140092FAC (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?EthFreeFilterBuffers@@YAXPEAU_X_FILTER@@_N@Z @ 0x140095D84 (-EthFreeFilterBuffers@@YAXPEAU_X_FILTER@@_N@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x140152920 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140153320 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisFInvokeDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140165230 (-ndisFInvokeDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140166870 (-ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisDetachFilterInner(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_FILTER_BLOCK *a2)
{
  struct _NDIS_FILTER_BLOCK *v2; // rbx
  char v4; // di
  char v5; // bp
  enum _NDIS_LWF_REFTAG v6; // dl
  _NDIS_BIND_PATHS *BindPaths; // rax
  PVOID v8; // r14
  char *v9; // rdi
  int v10; // edx
  __int64 v11; // rcx
  NTSTATUS v12; // edi
  KIRQL v13; // dl
  __int64 v14; // rdx
  __int64 v15; // r8
  _NDIS_FILTER_BLOCK *LowerFilter; // rax
  _NDIS_PHYSICAL_MEDIUM PhysicalMediaType; // ecx
  struct _NDIS_FILTER_BLOCK *v18; // rcx
  struct _NDIS_FILTER_BLOCK *v19; // rcx
  KIRQL v20; // dl
  __int64 v21; // rdx
  _NDIS_FILTER_BLOCK *v22; // rcx
  int v23; // edx
  char v24; // [rsp+28h] [rbp-60h]
  unsigned __int8 v25; // [rsp+A0h] [rbp+18h] BYREF
  PVOID WnodeEventItem; // [rsp+A8h] [rbp+20h] BYREF

  v2 = a2;
  v4 = 0;
  v5 = 0;
  v25 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      35,
      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
      v24);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( ndisReferenceFilterByHandle(v2, v6) && (v4 = 1, (unsigned __int8)ndisReferenceMiniportByHandle(a1, 0, 0x29u)) )
  {
    v5 = 1;
    ndisFNotifyDetach(v2);
    ndisCloseRef(&v2->PnPRef.SpinLock);
    BindPaths = a1->BindPaths;
    WnodeEventItem = 0LL;
    ndisSetupWmiNode(
      a1,
      v2->FilterFriendlyName,
      BindPaths->Paths[0].Length + 4 + v2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length,
      (__int128 *)&GUID_NDIS_NOTIFY_FILTER_REMOVAL,
      (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
    v8 = WnodeEventItem;
    if ( WnodeEventItem )
    {
      v9 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
      memmove(
        v9,
        v2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Buffer,
        v2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length);
      memmove(
        &v9[v2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length + 2],
        a1->BindPaths->Paths[0].Buffer,
        a1->BindPaths->Paths[0].Length);
      v12 = IoWMIWriteEvent(v8);
      if ( v12 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v10,
            1,
            36,
            (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids);
        }
        if ( (byte_14011B101 & 1) != 0 )
          McTemplateK0qqq_EtwWriteTransfer(v11, &FilterRemovalIndicationFailed, &v2->InterfaceGuid, v12, 1, 0);
        ExFreePoolWithTag(v8, 0);
      }
    }
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(v2, &v25);
    FILTER_SET_FLAG(v2, 256);
    v13 = v25;
    v2->LockThread = 0LL;
    KeReleaseSpinLock(&v2->Lock, v13);
    v2->State = NdisFilterDetaching;
    if ( (byte_14011B103 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&v2->Miniport->InterfaceGuid,
        (__int64)v2->FilterInstanceName.__ptr_.__value_,
        (__int64)&v2->InterfaceGuid,
        (__int64)&v2->InterfaceGuid,
        6,
        8,
        (__int64)&v2->Miniport->InterfaceGuid,
        v2->Miniport->pAdapterInstanceName->Buffer,
        v2->FilterInstanceName.__ptr_.__value_->Buffer,
        v2->FilterFriendlyName->Buffer);
    ndisFilterWaitForPnPComplete(v2);
    PktMonClientComponentUnregister((__int64 *)&v2->PktMonComp);
    ndisMakeWatchdog(
      (struct NDISWATCHDOG__ **)&WnodeEventItem,
      v2,
      0x14u,
      v2->FilterDriver->DefaultFilterCharacteristics.DetachHandler,
      ndisWatchdogPnPTimeout,
      0LL);
    ndisFInvokeDetach(v2);
    if ( WnodeEventItem != (PVOID)-1LL )
      ndisFreeWatchdog((struct NDISWATCHDOG__ *)WnodeEventItem);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqZZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        v15,
        0x25u,
        (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
        (char)a1,
        (char)v2,
        &v2->FilterDriver->DefaultFilterCharacteristics.FriendlyName.Length,
        &a1->pAdapterInstanceName->Length);
    while ( v2->StatusIndicationsQueued )
      NdisMSleep(0x3E8u);
    if ( FILTER_TEST_FLAG(v2, 0x8000) )
    {
      LowerFilter = v2->LowerFilter;
      if ( LowerFilter )
      {
        a1->MediaType = LowerFilter->MediaType;
        PhysicalMediaType = v2->LowerFilter->PhysicalMediaType;
      }
      else
      {
        PhysicalMediaType = a1->MiniportPhysicalMediumType;
        a1->MediaType = a1->MiniportMediaType;
      }
      a1->PhysicalMediumType = PhysicalMediaType;
      if ( a1->HasConversionFilter )
      {
        EthFreeFilterBuffers(a1->EthDB, 0);
        a1->HasConversionFilter = 0;
      }
    }
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(v2, &v25);
    FILTER_CLEAR_FLAG(v2, 256);
    FILTER_CLEAR_ALL_STATE_FLAGS(v18);
    FILTER_SET_FLAG(v19, 8);
    v20 = v25;
    v2->LockThread = 0LL;
    KeReleaseSpinLock(&v2->Lock, v20);
    v2->State = NdisFilterDetached;
    if ( (byte_14011B103 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&v2->Miniport->InterfaceGuid,
        v21,
        (__int64)&v2->InterfaceGuid,
        (__int64)&v2->InterfaceGuid,
        0,
        9,
        (__int64)&v2->Miniport->InterfaceGuid,
        v2->Miniport->pAdapterInstanceName->Buffer,
        v2->FilterInstanceName.__ptr_.__value_->Buffer,
        v2->FilterFriendlyName->Buffer);
    if ( FILTER_TEST_FLAG(v2, 0x8000) )
      --a1->MediaChangeFilters;
    ndisFilterAttachCleanUp(v22, a1, 1);
    ndisDereferenceMiniport(a1, 0x28u);
    ndisHandleFilterHandlersChange(a1);
  }
  else
  {
    ndisHandleFilterHandlersChange(a1);
    if ( !v4 )
      goto LABEL_34;
  }
  v2->Miniport = 0LL;
  ndisDereferenceFilter(v2, 0);
  if ( v5 )
    ndisDereferenceMiniport(a1, 0x29u);
LABEL_34:
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v23,
      1,
      38,
      (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
      (char)v2);
  }
}
