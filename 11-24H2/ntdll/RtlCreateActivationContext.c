/*
 * XREFs of RtlCreateActivationContext @ 0x180002A30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpValidateActivationContextData @ 0x180002BC4 (RtlpValidateActivationContextData.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180003224 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     DbgPrintEx @ 0x180074670 (DbgPrintEx.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x18011B240 (RtlpPlaceActivationContextOnLiveList.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlCreateActivationContext(
        ULONG Flags,
        PACTIVATION_CONTEXT_DATA ActivationContextData,
        ULONG ExtraBytes,
        PACTIVATION_CONTEXT_NOTIFY_ROUTINE NotificationRoutine,
        PVOID NotificationContext,
        PACTIVATION_CONTEXT *ActivationContext)
{
  __int64 v6; // rdi
  NTSTATUS v9; // ebx
  _QWORD *Heap; // rax
  void *v11; // r14
  _ACTIVATION_CONTEXT *v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // rax

  v6 = ExtraBytes;
  if ( ActivationContextData == (PACTIVATION_CONTEXT_DATA)"Actx " )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() passed the empty activation context data\n", "RtlCreateActivationContext");
    return -1073741811;
  }
  if ( ActivationContext )
    *ActivationContext = 0LL;
  if ( Flags || !ActivationContextData || ExtraBytes > 0x10000 || !ActivationContext )
    return -1073741811;
  v9 = RtlpValidateActivationContextData();
  if ( v9 >= 0 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v6 + 528);
    v11 = Heap;
    if ( Heap )
    {
      v12 = (_ACTIVATION_CONTEXT *)(Heap + 1);
      *Heap = 1733124929LL;
      v13 = Heap + 15;
      v14 = 0LL;
      v15 = *(unsigned int *)((char *)&ActivationContextData->FormatVersion + ActivationContextData->AssemblyRosterOffset);
      v16 = Heap + 17;
      if ( (unsigned int)v15 <= 0x20 )
        v14 = v16;
      v9 = RtlpInitializeAssemblyStorageMap(v13, v15, v14);
      if ( v9 < 0 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
      }
      else
      {
        v12->Flags = 0;
        *(_QWORD *)&v12->SentNotifications[2] = NotificationContext;
        v12->RefCount = 1;
        v12->NotificationContext = (PVOID)ActivationContextData;
        *(_QWORD *)v12->SentNotifications = NotificationRoutine;
        *(_OWORD *)&v12->SentNotifications[4] = 0LL;
        *(_OWORD *)v12->DisabledNotifications = 0LL;
        *(_OWORD *)&v12->DisabledNotifications[4] = 0LL;
        v12->StorageMap = 0LL;
        memset_thunk_772440563353939046(&v12[1].NotificationContext, 0, 0x80uLL);
        LODWORD(v12[1].NotificationRoutine) = 0;
        if ( g_SxsKeepActivationContextsAlive )
          RtlpPlaceActivationContextOnLiveList(v12);
        *ActivationContext = v12;
        return 0;
      }
    }
    else
    {
      return -1073741801;
    }
  }
  return v9;
}
