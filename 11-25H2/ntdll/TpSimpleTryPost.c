/*
 * XREFs of TpSimpleTryPost @ 0x1800EB150
 * Callers:
 *     <none>
 * Callees:
 *     TppWorkPost @ 0x180011780 (TppWorkPost.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppWorkpFree @ 0x180042630 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     TppAlpcpFree @ 0x180044340 (TppAlpcpFree.c)
 *     TppCleanupGroupAddMember @ 0x1800469E0 (TppCleanupGroupAddMember.c)
 *     TppWorkInitialize @ 0x180047FD0 (TppWorkInitialize.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl TpSimpleTryPost(PTP_SIMPLE_CALLBACK Callback, PVOID Context, PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v4; // r15d
  unsigned int Flags; // edi
  _RTL_SRWLOCK *Heap; // rax
  _RTL_SRWLOCK *v8; // rsi
  NTSTATUS v9; // edi
  int v11; // [rsp+34h] [rbp-24h]
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h]
  _RTL_SRWLOCK *BaseAddress; // [rsp+70h] [rbp+18h]

  v4 = (int)Context;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( !Callback || (Flags & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return -1073741811;
  }
  else
  {
    Heap = (_RTL_SRWLOCK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8, 0xF0uLL);
    v8 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      Heap[22].Value = retaddr;
      v9 = TppWorkInitialize(
             (__int64)Heap,
             v4,
             (int)CallbackEnviron,
             Flags,
             (__int64)TppSimplepCleanupGroupMemberVFuncs,
             (__int64)&TppSimplepTaskVFuncs);
      v11 = v9;
      if ( v9 >= 0 )
      {
        v9 = 0;
        v11 = 0;
        v8[10].Value = (unsigned __int64)Callback;
        if ( CallbackEnviron )
          v8[4].0 = ($2F38BEDF952D5DA5F266621B11247D04)CallbackEnviron->FinalizationCallback;
        if ( v8[2].Value )
          TppCleanupGroupAddMember((__int64)v8);
      }
    }
    else
    {
      v9 = -1073741801;
      v11 = -1073741801;
    }
    if ( v9 >= 0 )
      goto LABEL_15;
    if ( v8 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
      v8 = 0LL;
      v9 = v11;
    }
    if ( v9 >= 0 )
LABEL_15:
      TppWorkPost(v8);
    return v9;
  }
}
