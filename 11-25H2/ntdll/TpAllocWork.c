/*
 * XREFs of TpAllocWork @ 0x180046F70
 * Callers:
 *     RtlpFcAllocateChangeRegistration @ 0x180003278 (RtlpFcAllocateChangeRegistration.c)
 *     LdrpEnableParallelLoading @ 0x18003A1C4 (LdrpEnableParallelLoading.c)
 *     RtlpCtContextInit @ 0x180148F94 (RtlpCtContextInit.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCleanupGroupAddMember @ 0x1800469E0 (TppCleanupGroupAddMember.c)
 *     TppWorkInitialize @ 0x180047FD0 (TppWorkInitialize.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
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
              (_DWORD)Heap,
              v5,
              (_DWORD)CallbackEnviron,
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
          TppCleanupGroupAddMember((__int64)v10);
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
