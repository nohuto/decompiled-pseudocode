/*
 * XREFs of TpAllocIoCompletion @ 0x18003B2C0
 * Callers:
 *     <none>
 * Callees:
 *     TpBindFileToDirect @ 0x18003B4F0 (TpBindFileToDirect.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003D250 (TppGetCurrentThreadNumaNode.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupAddMember @ 0x1800469E0 (TppCleanupGroupAddMember.c)
 *     TppCleanupGroupMemberInitialize @ 0x180048150 (TppCleanupGroupMemberInitialize.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl TpAllocIoCompletion(
        PTP_IO *IoReturn,
        HANDLE File,
        PTP_IO_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v5; // r15d
  PTP_IO *v8; // r12
  unsigned int Flags; // edi
  _TP_IO *Heap; // rax
  _TP_IO *v11; // rbx
  NTSTATUS v12; // edi
  _TP_POOL *Pool; // rcx
  unsigned int *p_NumaNode; // r14
  unsigned __int8 *p_IdealProcessor; // r15
  int v17; // [rsp+30h] [rbp-38h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  _TP_IO *BaseAddress; // [rsp+70h] [rbp+8h]

  v5 = (int)Context;
  v8 = IoReturn;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( IoReturn
    && File
    && Callback
    && (Flags & 0xFFFFFFFC) == 0
    && (IoReturn = (PTP_IO *)NtCurrentPeb()->Ldr, !*((_BYTE *)IoReturn + 72)) )
  {
    *v8 = 0LL;
    Heap = (_TP_IO *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x40000) | 8, 0x120uLL);
    v11 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      Heap->CleanupGroupMember.AllocCaller.ReturnAddress = retaddr;
      v12 = TppCleanupGroupMemberInitialize(
              (_DWORD)Heap,
              v5,
              (_DWORD)CallbackEnviron,
              Flags,
              (__int64)&TppIopCleanupGroupMemberVFuncs);
      v17 = v12;
      if ( v12 >= 0 )
      {
        v11->CleanupGroupMember.Callback = Callback;
        v11->File = File;
        v11->PendingIrpCount = 0;
        Pool = v11->CleanupGroupMember.Pool;
        v11->Direct.Callback = (void (__fastcall *)(_TP_CALLBACK_INSTANCE *, _TP_DIRECT *, void *, _IO_STATUS_BLOCK *))TppIopExecuteCallback;
        p_NumaNode = &v11->Direct.NumaNode;
        p_IdealProcessor = &v11->Direct.IdealProcessor;
        if ( Pool )
        {
          TppGetCurrentThreadNumaNode(Pool, &v11->Direct.NumaNode, &v11->Direct.IdealProcessor, 0LL);
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
            TppCleanupGroupAddMember(v11);
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
      *v8 = v11;
    return v12;
  }
  else
  {
    TppRaiseInvalidParameter(IoReturn, File, Callback);
    return -1073741811;
  }
}
