/*
 * XREFs of TpSimpleTryPost @ 0x180086E30
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     TppWorkInitialize @ 0x1800470B0 (TppWorkInitialize.c)
 *     TppCleanupGroupAddMember @ 0x1800491C0 (TppCleanupGroupAddMember.c)
 *     TppWorkpFree @ 0x18004D620 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     TppWorkPost @ 0x18006B720 (TppWorkPost.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     TppAlpcpFree @ 0x180089250 (TppAlpcpFree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl TpSimpleTryPost(PTP_SIMPLE_CALLBACK Callback, PVOID Context, PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v4; // r15d
  PTP_SIMPLE_CALLBACK v5; // r14
  unsigned int Flags; // edi
  _RTL_SRWLOCK *Heap; // rax
  char **v8; // rdx
  __int64 v9; // r8
  char *v10; // r9
  _RTL_SRWLOCK *v11; // rsi
  NTSTATUS v12; // edi
  int v14; // [rsp+34h] [rbp-24h]
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h]
  _RTL_SRWLOCK *BaseAddress; // [rsp+70h] [rbp+18h]

  v4 = (int)Context;
  v5 = Callback;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( !Callback
    || (Flags & 0xFFFFFFFC) != 0
    || (Callback = (PTP_SIMPLE_CALLBACK)NtCurrentPeb()->Ldr, *((_BYTE *)Callback + 72)) )
  {
    TppRaiseInvalidParameter(Callback);
    return -1073741811;
  }
  else
  {
    Heap = (_RTL_SRWLOCK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8, 0xF0uLL);
    v11 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      Heap[22].Value = retaddr;
      v12 = TppWorkInitialize(
              (__int64)Heap,
              v4,
              (int)CallbackEnviron,
              Flags,
              (__int64)TppSimplepCleanupGroupMemberVFuncs,
              (__int64)&TppSimplepTaskVFuncs);
      v14 = v12;
      if ( v12 >= 0 )
      {
        v12 = 0;
        v14 = 0;
        v11[10].Value = (unsigned __int64)v5;
        if ( CallbackEnviron )
          v11[4].0 = ($2F38BEDF952D5DA5F266621B11247D04)CallbackEnviron->FinalizationCallback;
        if ( v11[2].Value )
          TppCleanupGroupAddMember((__int64)v11);
      }
    }
    else
    {
      v12 = -1073741801;
      v14 = -1073741801;
    }
    if ( v12 >= 0 )
      goto LABEL_15;
    if ( v11 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
      v11 = 0LL;
      v12 = v14;
    }
    if ( v12 >= 0 )
LABEL_15:
      TppWorkPost(v11, v8, v9, v10);
    return v12;
  }
}
