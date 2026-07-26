/*
 * XREFs of ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1401893D0
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015EFE0 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140018400 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x140018580 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400189A0 (-ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140022000 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400241B0 (-FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x140024C70 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140055140 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x140062190 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1400653B0 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     NdisMSleep @ 0x140067890 (NdisMSleep.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x140070750 (WPP_RECORDER_SF_qqZZ.c)
 *     ?ndisReferenceFilterByHandle@@YAEPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x14007B1C0 (-ndisReferenceFilterByHandle@@YAEPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     PktMonClientComponentUnregister @ 0x14007B260 (PktMonClientComponentUnregister.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1400860B0 (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140089250 (-ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140092F80 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x14009CBC8 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?EthFreeFilterBuffers@@YAXPEAU_X_FILTER@@_N@Z @ 0x1400A0204 (-EthFreeFilterBuffers@@YAXPEAU_X_FILTER@@_N@Z.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x14015F620 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x14015FB90 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisFInvokeDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140171530 (-ndisFInvokeDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140173170 (-ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
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
  KIRQL v18; // dl
  __int64 v19; // rdx
  int v20; // edx
  char v21; // [rsp+28h] [rbp-60h]
  unsigned __int8 v22; // [rsp+A0h] [rbp+18h] BYREF
  PVOID WnodeEventItem; // [rsp+A8h] [rbp+20h] BYREF

  v2 = a2;
  v4 = 0;
  v5 = 0;
  v22 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v21 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      34,
      (struct _GUID *)&WPP_b6f031e119d53d3b975f13e0c06480b9_Traceguids,
      v21);
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
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v10,
            1,
            35,
            (struct _GUID *)&WPP_b6f031e119d53d3b975f13e0c06480b9_Traceguids);
        }
        if ( (byte_140125101 & 1) != 0 )
          McTemplateK0qqq_EtwWriteTransfer(v11, &FilterRemovalIndicationFailed, &v2->InterfaceGuid, v12, 1, 0);
        ExFreePoolWithTag(v8, 0);
      }
    }
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(v2, &v22);
    FILTER_SET_FLAG(v2, 256);
    v13 = v22;
    v2->LockThread = 0LL;
    KeReleaseSpinLock(&v2->Lock, v13);
    v2->State = NdisFilterDetaching;
    if ( (byte_140125103 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&v2->Miniport->InterfaceGuid,
        (__int64)v2->FilterInstanceName.__ptr_.__value_,
        &v2->InterfaceGuid,
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
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqZZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        v15,
        0x24u,
        (struct _GUID *)&WPP_b6f031e119d53d3b975f13e0c06480b9_Traceguids,
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
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(v2, &v22);
    FILTER_CLEAR_FLAG(v2, 256);
    FILTER_CLEAR_ALL_STATE_FLAGS(v2);
    FILTER_SET_FLAG(v2, 8);
    v18 = v22;
    v2->LockThread = 0LL;
    KeReleaseSpinLock(&v2->Lock, v18);
    v2->State = NdisFilterDetached;
    if ( (byte_140125103 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&v2->Miniport->InterfaceGuid,
        v19,
        &v2->InterfaceGuid,
        (__int64)&v2->InterfaceGuid,
        0,
        9,
        (__int64)&v2->Miniport->InterfaceGuid,
        v2->Miniport->pAdapterInstanceName->Buffer,
        v2->FilterInstanceName.__ptr_.__value_->Buffer,
        v2->FilterFriendlyName->Buffer);
    if ( FILTER_TEST_FLAG(v2, 0x8000) )
      --a1->MediaChangeFilters;
    ndisFilterAttachCleanUp(v2, a1, 1);
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
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v20,
      1,
      37,
      (struct _GUID *)&WPP_b6f031e119d53d3b975f13e0c06480b9_Traceguids,
      (char)v2);
  }
}
