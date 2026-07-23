/*
 * XREFs of TpAllocWork @ 0x180048850
 * Callers:
 *     RtlpFcAllocateChangeRegistration @ 0x18002CA58 (RtlpFcAllocateChangeRegistration.c)
 *     LdrpEnableParallelLoading @ 0x180085804 (LdrpEnableParallelLoading.c)
 *     RtlpCtContextInit @ 0x180145D94 (RtlpCtContextInit.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     TppWorkInitialize @ 0x1800470B0 (TppWorkInitialize.c)
 *     TppCleanupGroupAddMember @ 0x1800491C0 (TppCleanupGroupAddMember.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocWork(
        PTP_WORK *WorkReturn,
        PTP_WORK_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v5; // r12d
  unsigned int Flags; // edi
  _TP_WORK *Heap; // rax
  _TP_WORK *v10; // rsi
  NTSTATUS v11; // edi
  int v13; // [rsp+30h] [rbp-38h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  _TP_WORK *BaseAddress; // [rsp+88h] [rbp+20h]

  v5 = (int)Context;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( !WorkReturn || !Callback || (Flags & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return -1073741811;
  }
  else
  {
    *WorkReturn = 0LL;
    Heap = (_TP_WORK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8, 0xF0uLL);
    v10 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      Heap->CleanupGroupMember.AllocCaller.ReturnAddress = retaddr;
      v11 = TppWorkInitialize(
              (__int64)Heap,
              v5,
              (int)CallbackEnviron,
              Flags,
              (__int64)TppWorkpCleanupGroupMemberVFuncs,
              (__int64)&TppWorkpTaskVFuncs);
      v13 = v11;
      if ( v11 >= 0 )
      {
        v10->CleanupGroupMember.Callback = Callback;
        v11 = 0;
        v13 = 0;
        if ( CallbackEnviron )
          v10->CleanupGroupMember.FinalizationCallback = CallbackEnviron->FinalizationCallback;
        if ( v10->CleanupGroupMember.CleanupGroup )
          TppCleanupGroupAddMember(v10);
      }
    }
    else
    {
      v11 = -1073741801;
      v13 = -1073741801;
    }
    if ( v11 >= 0 )
      goto LABEL_15;
    if ( v10 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
      v10 = 0LL;
      v11 = v13;
    }
    if ( v11 >= 0 )
LABEL_15:
      *WorkReturn = v10;
    return v11;
  }
}
