/*
 * XREFs of ?ndisWdfReturnNbl@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x14003E770
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EB50 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x14003F7E0 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14003FBC0 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140040330 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x1400990A0 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisWdfReturnNbl(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  struct _NDIS_SELECTIVE_SUSPEND **p_SelectiveSuspend; // rdi
  char busy; // r14
  unsigned int v6; // esi
  struct _NET_BUFFER_LIST *Alignment; // rax
  int v11; // r14d
  char v12; // di
  KIRQL v13; // r12
  __int64 v14; // rax
  struct _NDIS_SELECTIVE_SUSPEND *v15; // rdi
  unsigned int Flags; // ebx
  KIRQL v17; // al
  KIRQL v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  struct _LIST_ENTRY v21; // [rsp+30h] [rbp-38h] BYREF

  SelectiveSuspend = a1->SelectiveSuspend;
  p_SelectiveSuspend = &a1->SelectiveSuspend;
  busy = 0;
  v6 = 0;
  if ( SelectiveSuspend )
  {
    p_SelectiveSuspend = &a1->SelectiveSuspend;
    if ( ndisIdleCondition == NdisIdleConditionAnyLowLatency )
    {
      p_SelectiveSuspend = &a1->SelectiveSuspend;
      Alignment = a2;
      if ( a2 )
      {
        do
        {
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          ++v6;
        }
        while ( Alignment );
        p_SelectiveSuspend = &a1->SelectiveSuspend;
      }
      if ( (a1->Flags & 0x80u) == 0 )
      {
        busy = ndisWdmSetBusyAsync(a1, v6, 54LL, a2, 0);
      }
      else
      {
        v21.Blink = &v21;
        v11 = 0;
        v21.Flink = &v21;
        v12 = 0;
        v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
        if ( (*((_DWORD *)SelectiveSuspend + 128)
           || *((_DWORD *)SelectiveSuspend + 129)
           || *((_DWORD *)SelectiveSuspend + 132)
           || *((_DWORD *)SelectiveSuspend + 133)
           || *((_DWORD *)SelectiveSuspend + 130)
           || *((_DWORD *)SelectiveSuspend + 131)
           || *((_DWORD *)SelectiveSuspend + 144)
           || *((_DWORD *)SelectiveSuspend + 127))
          && KeReadStateEvent((PRKEVENT)((char *)SelectiveSuspend + 272)) )
        {
          v14 = *((_QWORD *)SelectiveSuspend + 75);
          *((_DWORD *)SelectiveSuspend + 36) = 0;
          *(_BYTE *)(v14 + 20) = 0;
          *(_BYTE *)(*((_QWORD *)SelectiveSuspend + 75) + 44LL) = 0;
          *(_BYTE *)(*((_QWORD *)SelectiveSuspend + 75) + 68LL) = 0;
          *(_BYTE *)(*((_QWORD *)SelectiveSuspend + 75) + 92LL) = 0;
          *(_BYTE *)(*((_QWORD *)SelectiveSuspend + 75) + 116LL) = 0;
          *((_DWORD *)SelectiveSuspend + 144) += v6;
          ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, 0LL, 54LL, 0LL);
          KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v13);
        }
        else
        {
          if ( !*((_DWORD *)SelectiveSuspend + 128)
            && !*((_DWORD *)SelectiveSuspend + 129)
            && !*((_DWORD *)SelectiveSuspend + 132)
            && !*((_DWORD *)SelectiveSuspend + 133)
            && !*((_DWORD *)SelectiveSuspend + 130)
            && !*((_DWORD *)SelectiveSuspend + 131)
            && !*((_DWORD *)SelectiveSuspend + 144)
            && !*((_DWORD *)SelectiveSuspend + 127) )
          {
            v12 = 1;
            KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 272));
            v11 = 54;
          }
          v19 = *((_QWORD *)SelectiveSuspend + 75);
          *((_DWORD *)SelectiveSuspend + 36) = 0;
          *(_BYTE *)(v19 + 20) = 0;
          *(_BYTE *)(*((_QWORD *)SelectiveSuspend + 75) + 44LL) = 0;
          *(_BYTE *)(*((_QWORD *)SelectiveSuspend + 75) + 68LL) = 0;
          *(_BYTE *)(*((_QWORD *)SelectiveSuspend + 75) + 92LL) = 0;
          *(_BYTE *)(*((_QWORD *)SelectiveSuspend + 75) + 116LL) = 0;
          *((_DWORD *)SelectiveSuspend + 144) += v6;
          KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v13);
          if ( v12 )
            ndisWdfAcquirePowerReferenceHelper(a1, 0, 1u);
          if ( v21.Flink != &v21 )
            ndisCancelDequeuedDirectOidRequests(a1, &v21);
          if ( v11 && (byte_140125101 & 8) != 0 )
            McTemplateK0qq_EtwWriteTransfer(
              v20,
              &SSResumeRequested,
              &a1->InterfaceGuid,
              (a1->NetLuid.Value >> 24) & 0xFFFFFF);
        }
        p_SelectiveSuspend = &a1->SelectiveSuspend;
        busy = 1;
      }
    }
  }
  a1->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler(a1->MiniportAdapterContext, a2, a3);
  if ( busy )
  {
    v15 = *p_SelectiveSuspend;
    Flags = a1->Flags;
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v15);
    *((_DWORD *)v15 + 144) -= v6;
    v18 = v17;
    if ( (Flags & 0x80u) != 0
      && !*((_DWORD *)v15 + 128)
      && !*((_DWORD *)v15 + 129)
      && !*((_DWORD *)v15 + 132)
      && !*((_DWORD *)v15 + 133)
      && !*((_DWORD *)v15 + 130)
      && !*((_DWORD *)v15 + 131)
      && !*((_DWORD *)v15 + 144)
      && !*((_DWORD *)v15 + 127) )
    {
      if ( (a1->Flags & 0x80u) == 0 )
        NT_ASSERT("((((Miniport)->Flags & (0x00000080)) != 0))");
      a1->DriverHandle->CxBlock->Chars.EvtCxPowerDereference(a1->MiniportAdapterContext);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v15, v18);
  }
}
