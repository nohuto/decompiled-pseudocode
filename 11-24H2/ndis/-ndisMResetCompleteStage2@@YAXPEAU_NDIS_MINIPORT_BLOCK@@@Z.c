/*
 * XREFs of ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007EA60
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140016530 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009D670 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMResetComplete @ 0x14009FE80 (NdisMResetComplete.c)
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006BB0 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140033A10 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMResetCompleteStage2(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_OPEN_BLOCK *ResetOpen; // rdi
  _SINGLE_LIST_ENTRY *Next; // rcx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__ *HookAdapterHandle; // rdx
  struct _KEVENT *ResetCompletedEvent; // rcx
  _QWORD v7[2]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v8; // [rsp+40h] [rbp-78h]
  __int128 v9; // [rsp+50h] [rbp-68h]
  int *p_ResetStatus; // [rsp+60h] [rbp-58h]
  __int64 v11; // [rsp+68h] [rbp-50h]
  __int128 v12; // [rsp+70h] [rbp-48h]
  __int128 v13; // [rsp+80h] [rbp-38h]
  __int128 v14; // [rsp+90h] [rbp-28h]

  ResetOpen = 0LL;
  if ( (a1->Flags & 0x40000) != 0 )
  {
    ResetOpen = a1->ResetOpen;
    a1->ResetOpen = 0LL;
  }
  else
  {
    Next = a1->WorkQueue[4].Next;
    if ( Next )
    {
      a1->WorkQueue[4] = (_SINGLE_LIST_ENTRY)Next->Next;
      ResetOpen = (_NDIS_OPEN_BLOCK *)Next[2].Next;
      Next->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[3];
      a1->SingleWorkItems[3].Next = Next;
    }
  }
  _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFDFFFFF);
  ndisMRestoreOpenHandlers(a1, 1u);
  a1->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  DriverHandle = a1->DriverHandle;
  HookAdapterHandle = a1->HookAdapterHandle;
  v7[0] = 7340440LL;
  v7[1] = a1;
  v8 = 0LL;
  DWORD1(v8) = 1073807365;
  v9 = 0LL;
  p_ResetStatus = &a1->ResetStatus;
  v12 = 0LL;
  v11 = 4LL;
  v13 = 0LL;
  v14 = 0LL;
  (*((void (__fastcall **)(_QWORD, NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__ *, struct _NDIS_MINIPORT_BLOCK *, _QWORD *))g_MiniportHookDrivers
   + 16 * (__int64)(int)DriverHandle->HookType
   + 8))(
    *((_QWORD *)g_MiniportHookDrivers + 16 * (__int64)(int)DriverHandle->HookType + 3),
    HookAdapterHandle,
    a1,
    v7);
  KeAcquireSpinLockAtDpcLevel(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  if ( ResetOpen )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    ResetOpen->ResetCompleteHandler(ResetOpen->ProtocolBindingContext, a1->ResetStatus);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    ndisMDereferenceOpenLocked(ResetOpen, 8u);
  }
  ResetCompletedEvent = a1->ResetCompletedEvent;
  if ( ResetCompletedEvent )
    KeSetEvent(ResetCompletedEvent, 0, 0);
}
