/*
 * XREFs of TpAllocIoCompletion @ 0x1800B7460
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     TppCleanupGroupMemberInitialize @ 0x180047230 (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupAddMember @ 0x1800491C0 (TppCleanupGroupAddMember.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     TppGetCurrentThreadNumaNode @ 0x18008B710 (TppGetCurrentThreadNumaNode.c)
 *     TpBindFileToDirect @ 0x1800B7690 (TpBindFileToDirect.c)
 */

NTSTATUS __cdecl TpAllocIoCompletion(
        PTP_IO *IoReturn,
        HANDLE File,
        PTP_IO_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  unsigned int Flags; // edi
  _TP_IO *Heap; // rax
  _TP_IO *v11; // rbx
  NTSTATUS v12; // edi
  __int64 Pool; // rcx
  unsigned int *p_NumaNode; // r14
  unsigned __int8 *p_IdealProcessor; // r15
  int v17; // [rsp+30h] [rbp-38h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  _TP_IO *BaseAddress; // [rsp+70h] [rbp+8h]

  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( IoReturn && File && Callback && (Flags & 0xFFFFFFFC) == 0 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    *IoReturn = 0LL;
    Heap = (_TP_IO *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x40000) | 8, 0x120uLL);
    v11 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      Heap->CleanupGroupMember.AllocCaller.ReturnAddress = retaddr;
      v12 = TppCleanupGroupMemberInitialize(
              (__int64)Heap,
              (__int64)Context,
              (__int64)CallbackEnviron,
              Flags,
              (__int64)&TppIopCleanupGroupMemberVFuncs);
      v17 = v12;
      if ( v12 >= 0 )
      {
        v11->CleanupGroupMember.Callback = Callback;
        v11->File = File;
        v11->PendingIrpCount = 0;
        Pool = (__int64)v11->CleanupGroupMember.Pool;
        v11->Direct.Callback = (void (__fastcall *)(_TP_CALLBACK_INSTANCE *, _TP_DIRECT *, void *, _IO_STATUS_BLOCK *))TppIopExecuteCallback;
        p_NumaNode = &v11->Direct.NumaNode;
        p_IdealProcessor = &v11->Direct.IdealProcessor;
        if ( Pool )
        {
          TppGetCurrentThreadNumaNode(Pool, (int *)&v11->Direct.NumaNode, &v11->Direct.IdealProcessor, 0LL);
        }
        else
        {
          *p_NumaNode = 0;
          *p_IdealProcessor = 0;
        }
        v11->Direct.Lock = 0LL;
        v11->Direct.IoCompletionInformationList.Blink = &v11->Direct.IoCompletionInformationList;
        v11->Direct.IoCompletionInformationList.Flink = &v11->Direct.IoCompletionInformationList;
        v11->Direct.Task.Callbacks = (const _TP_TASK_CALLBACKS *)&TppDirectTaskVFuncs;
        v11->Direct.Task.NumaNode = *p_NumaNode;
        v11->Direct.Task.IdealProcessor = *p_IdealProcessor;
        v12 = TpBindFileToDirect(File);
        v17 = v12;
        if ( v12 >= 0 )
        {
          v12 = 0;
          v17 = 0;
          if ( CallbackEnviron )
            v11->CleanupGroupMember.FinalizationCallback = CallbackEnviron->FinalizationCallback;
          if ( v11->CleanupGroupMember.CleanupGroup )
            TppCleanupGroupAddMember((__int64)v11);
        }
        if ( v12 < 0 )
          TppCleanupGroupMemberDestroy(v11);
      }
    }
    else
    {
      v12 = -1073741801;
      v17 = -1073741801;
    }
    if ( v12 >= 0 )
      goto LABEL_22;
    if ( v11 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, BaseAddress);
      v11 = 0LL;
      v12 = v17;
    }
    if ( v12 >= 0 )
LABEL_22:
      *IoReturn = v11;
    return v12;
  }
  else
  {
    TppRaiseInvalidParameter();
    return -1073741811;
  }
}
