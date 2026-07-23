/*
 * XREFs of RtlQueueWorkItem @ 0x18008A2C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlQueryInformationActivationContext @ 0x1800475D0 (RtlQueryInformationActivationContext.c)
 *     TppPoolpReferenceGlobalPool @ 0x180047E60 (TppPoolpReferenceGlobalPool.c)
 *     LdrUnloadDll @ 0x1800480B0 (LdrUnloadDll.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseActivationContext @ 0x1800740B0 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18008A0B0 (TppPoolpDereferenceGlobalPool.c)
 *     RtlpTpETWCallbackEnqueue @ 0x18008A1F8 (RtlpTpETWCallbackEnqueue.c)
 *     RtlpTpResumeImpersonation @ 0x18008AD58 (RtlpTpResumeImpersonation.c)
 *     RtlpTpInitializeData @ 0x18008B5A0 (RtlpTpInitializeData.c)
 *     TppGetCurrentThreadNumaNode @ 0x18008B710 (TppGetCurrentThreadNumaNode.c)
 *     RtlPcToFileHeader @ 0x18008B820 (RtlPcToFileHeader.c)
 *     TpPostTask @ 0x18008B890 (TpPostTask.c)
 *     LdrAddRefDll @ 0x18008BAB0 (LdrAddRefDll.c)
 *     RtlpTpWorkUnposted @ 0x18008BF40 (RtlpTpWorkUnposted.c)
 *     TppPoolpFree @ 0x1800D9FB4 (TppPoolpFree.c)
 *     TpUnreserveTaskPost @ 0x1800E953C (TpUnreserveTaskPost.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenThreadToken @ 0x1801604D0 (NtOpenThreadToken.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlQueueWorkItem(WORKERCALLBACKFUNC Function, PVOID Context, ULONG Flags)
{
  __int16 v3; // bx
  NTSTATUS v6; // eax
  int v7; // esi
  HANDLE *Heap; // rax
  HANDLE *v9; // rdi
  NTSTATUS InformationActivationContext; // eax
  __int64 v11; // rax
  int v12; // eax
  _RTL_SRWLOCK *v13; // rdx
  volatile signed __int32 **v14; // rcx
  int v15; // ebx
  HANDLE v16; // rdx
  __int64 v17; // rcx
  _ACTIVATION_CONTEXT *v19; // rcx
  PVOID v20; // rcx
  HANDLE v21; // rcx
  char v22; // [rsp+40h] [rbp-D8h]
  char v23; // [rsp+41h] [rbp-D7h]
  char v24; // [rsp+42h] [rbp-D6h]
  char v25; // [rsp+43h] [rbp-D5h]
  int v26; // [rsp+44h] [rbp-D4h]
  HANDLE *BaseAddress; // [rsp+48h] [rbp-D0h]
  HANDLE TokenHandle; // [rsp+58h] [rbp-C0h] BYREF
  volatile signed __int32 *v29; // [rsp+60h] [rbp-B8h] BYREF
  __int64 ThreadInformation; // [rsp+68h] [rbp-B0h] BYREF
  PACTIVATION_CONTEXT ActivationContext[2]; // [rsp+70h] [rbp-A8h] BYREF
  _DWORD v32[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v33; // [rsp+88h] [rbp-90h]
  __int64 v34; // [rsp+90h] [rbp-88h]
  __int64 v35; // [rsp+98h] [rbp-80h]
  __int128 v36; // [rsp+A0h] [rbp-78h]
  __int64 v37; // [rsp+B0h] [rbp-68h]
  int v38; // [rsp+B8h] [rbp-60h]
  int v39; // [rsp+BCh] [rbp-5Ch]
  int v40; // [rsp+C0h] [rbp-58h]
  void *SubProcessTag; // [rsp+D0h] [rbp-48h]
  struct _TEB *v42; // [rsp+D8h] [rbp-40h]
  void *v43; // [rsp+E0h] [rbp-38h]

  v3 = Flags;
  *(_OWORD *)ActivationContext = 0LL;
  v22 = 0;
  v24 = 0;
  v25 = 0;
  v23 = 0;
  v32[1] = 0;
  memset_thunk_772440563353939046(v32, 0, 0x44uLL);
  TokenHandle = 0LL;
  BaseAddress = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  ThreadInformation = 0LL;
  TokenHandle = 0LL;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v6 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, (v3 & 0x100 | 0x200u) >> 7, 1u, &TokenHandle);
    v7 = v6;
    if ( v6 < 0 )
    {
      v26 = v6;
    }
    else
    {
      ThreadInformation = 0LL;
      v7 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
      if ( v7 >= 0 )
        goto LABEL_5;
      NtClose(TokenHandle);
      TokenHandle = 0LL;
      v26 = v7;
    }
    v9 = 0LL;
    goto LABEL_35;
  }
LABEL_5:
  Heap = (HANDLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
  v9 = Heap;
  BaseAddress = Heap;
  if ( Heap )
  {
    v7 = RtlpTpInitializeData(Heap + 5);
    v26 = v7;
    if ( v7 >= 0 )
    {
      v25 = 1;
      SubProcessTag = NtCurrentTeb()->SubProcessTag;
      BaseAddress[12] = SubProcessTag;
      v42 = NtCurrentTeb();
      v9 = BaseAddress;
      *(_GUID *)(BaseAddress + 13) = v42->ActivityId;
      InformationActivationContext = RtlQueryInformationActivationContext(
                                       1u,
                                       0LL,
                                       0LL,
                                       ActivationContextBasicInformation,
                                       ActivationContext,
                                       0x10uLL,
                                       0LL);
      v7 = InformationActivationContext;
      v26 = InformationActivationContext;
      if ( InformationActivationContext >= 0 )
      {
LABEL_8:
        if ( ((__int64)ActivationContext[1] & 1) != 0 )
        {
          RtlReleaseActivationContext(ActivationContext[0]);
          v11 = -1LL;
          ActivationContext[0] = (PACTIVATION_CONTEXT)-1LL;
        }
        else
        {
          v11 = (__int64)ActivationContext[0];
        }
        BaseAddress[9] = (HANDLE)v11;
        v22 = 1;
        *((_DWORD *)BaseAddress + 22) = 2;
        BaseAddress[7] = Function;
        BaseAddress[8] = Context;
        BaseAddress[4] = 0LL;
        v32[0] = 3;
        v33 = 0LL;
        v34 = 0LL;
        v35 = 0LL;
        v36 = 0LL;
        v37 = 0LL;
        v38 = 0;
        v39 = 1;
        v40 = 72;
        v12 = 0;
        if ( (v3 & 0xC0) != 0 )
        {
          v38 = 2;
          v12 = 2;
        }
        *BaseAddress = &RtlpTpWorkTaskCallbacks;
        *((_DWORD *)BaseAddress + 2) = 0;
        v29 = 0LL;
        if ( v12 )
        {
          v13 = &TppPoolpSerializedPoolLock;
          v14 = (volatile signed __int32 **)&TppPoolpSerializedPool;
        }
        else
        {
          v13 = &TppPoolpGlobalPoolLock;
          v14 = (volatile signed __int32 **)&TppPoolpGlobalPool;
        }
        v15 = TppPoolpReferenceGlobalPool(v14, v13, &v29);
        if ( v15 >= 0 )
          TppGetCurrentThreadNumaNode(v29, BaseAddress + 1, (char *)BaseAddress + 12, 0LL);
        v26 = v15;
        v7 = v15;
        if ( v15 >= 0 )
        {
          v23 = 1;
          RtlPcToFileHeader(BaseAddress[7], BaseAddress + 10);
          v16 = BaseAddress[10];
          if ( v16 )
          {
            LdrAddRefDll(0, v16);
            v24 = 1;
            if ( RtlGetCurrentServiceSessionId() )
            {
              v17 = (__int64)NtCurrentPeb()->SharedData + 556;
              v9 = BaseAddress;
            }
            else
            {
              v17 = 2147353478LL;
            }
            if ( *(_BYTE *)v17 )
            {
              v43 = NtCurrentTeb()->SubProcessTag;
              v9 = BaseAddress;
              RtlpTpETWCallbackEnqueue(
                (__int64)BaseAddress[4],
                (__int64)BaseAddress,
                (__int64)BaseAddress[7],
                (__int64)BaseAddress[8],
                (__int64)v43);
            }
            TpPostTask(v9, v9[4], 1LL);
            if ( !_InterlockedDecrement((volatile signed __int32 *)v9 + 22) )
              RtlpTpWorkUnposted(BaseAddress, BaseAddress[4]);
            v9 = 0LL;
            BaseAddress = 0LL;
            v7 = 0;
            v26 = 0;
          }
        }
        goto LABEL_35;
      }
      if ( InformationActivationContext == -1072365557 )
      {
        BaseAddress[9] = (HANDLE)-1LL;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v7 = -1073741801;
    v26 = -1073741801;
  }
LABEL_35:
  if ( v9 )
  {
    if ( v22 )
    {
      v19 = (_ACTIVATION_CONTEXT *)v9[9];
      if ( v19 != (_ACTIVATION_CONTEXT *)-1LL )
        RtlReleaseActivationContext(v19);
    }
    if ( v23 )
    {
      v20 = v9[4];
      if ( !v20 )
      {
        v20 = (PVOID)TppPoolpGlobalPool;
        if ( (v38 & 2) != 0 )
          v20 = TppPoolpSerializedPool;
      }
      if ( v20 == (PVOID)TppPoolpGlobalPool )
      {
        TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
      }
      else if ( v20 == TppPoolpSerializedPool )
      {
        TppPoolpDereferenceGlobalPool((const void **)&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
      }
      else
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v20, 0xFFFFFFFF) == 1 )
          TppPoolpFree(v20);
        v9 = BaseAddress;
      }
    }
    if ( v24 )
      LdrUnloadDll(v9[10]);
    if ( v25 )
    {
      v21 = v9[5];
      if ( v21 )
        NtClose(v21);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v7 = v26;
  }
  RtlpTpResumeImpersonation(TokenHandle);
  return v7;
}
