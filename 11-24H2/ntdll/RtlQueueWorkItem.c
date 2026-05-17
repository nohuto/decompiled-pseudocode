/*
 * XREFs of RtlQueueWorkItem @ 0x18006D9E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlQueryInformationActivationContext @ 0x18001ABD0 (RtlQueryInformationActivationContext.c)
 *     TppPoolpReferenceGlobalPool @ 0x18001B460 (TppPoolpReferenceGlobalPool.c)
 *     LdrUnloadDll @ 0x18001B6B0 (LdrUnloadDll.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseActivationContext @ 0x18005E4D0 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18006D7D0 (TppPoolpDereferenceGlobalPool.c)
 *     RtlpTpETWCallbackEnqueue @ 0x18006D918 (RtlpTpETWCallbackEnqueue.c)
 *     RtlpTpResumeImpersonation @ 0x18006E478 (RtlpTpResumeImpersonation.c)
 *     RtlpTpInitializeData @ 0x18006ECC0 (RtlpTpInitializeData.c)
 *     TppGetCurrentThreadNumaNode @ 0x18006EE30 (TppGetCurrentThreadNumaNode.c)
 *     RtlPcToFileHeader @ 0x18006EF40 (RtlPcToFileHeader.c)
 *     TpPostTask @ 0x18006EFB0 (TpPostTask.c)
 *     LdrAddRefDll @ 0x18006F1D0 (LdrAddRefDll.c)
 *     RtlpTpWorkUnposted @ 0x18006F660 (RtlpTpWorkUnposted.c)
 *     TppPoolpFree @ 0x1800DEE44 (TppPoolpFree.c)
 *     TpUnreserveTaskPost @ 0x1800EE35C (TpUnreserveTaskPost.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenThreadToken @ 0x180162110 (NtOpenThreadToken.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // r8
  int v7; // eax
  int v8; // esi
  __int64 Heap; // rax
  unsigned __int64 v10; // rdi
  int InformationActivationContext; // eax
  __int64 v12; // rax
  int v13; // eax
  volatile signed __int64 *v14; // rdx
  __int64 *v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  volatile signed __int32 *v20; // rcx
  volatile signed __int32 *v21; // rcx
  void *v22; // rcx
  char v23; // [rsp+40h] [rbp-D8h]
  char v24; // [rsp+41h] [rbp-D7h]
  char v25; // [rsp+42h] [rbp-D6h]
  char v26; // [rsp+43h] [rbp-D5h]
  int v27; // [rsp+44h] [rbp-D4h]
  unsigned __int64 v28; // [rsp+48h] [rbp-D0h]
  HANDLE Handle; // [rsp+58h] [rbp-C0h] BYREF
  volatile signed __int32 *v30; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-B0h] BYREF
  __int128 v32; // [rsp+70h] [rbp-A8h] BYREF
  _DWORD v33[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v34; // [rsp+88h] [rbp-90h]
  __int64 v35; // [rsp+90h] [rbp-88h]
  __int64 v36; // [rsp+98h] [rbp-80h]
  __int128 v37; // [rsp+A0h] [rbp-78h]
  __int64 v38; // [rsp+B0h] [rbp-68h]
  int v39; // [rsp+B8h] [rbp-60h]
  int v40; // [rsp+BCh] [rbp-5Ch]
  int v41; // [rsp+C0h] [rbp-58h]
  void *SubProcessTag; // [rsp+D0h] [rbp-48h]
  struct _TEB *v43; // [rsp+D8h] [rbp-40h]
  void *v44; // [rsp+E0h] [rbp-38h]

  v32 = 0LL;
  v23 = 0;
  v25 = 0;
  v26 = 0;
  v24 = 0;
  v33[1] = 0;
  memset_thunk_772440563353939046(v33, 0, 0x44uLL);
  Handle = 0LL;
  v28 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  v31 = 0LL;
  Handle = 0LL;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    LOBYTE(v6) = 1;
    v7 = NtOpenThreadToken(-2LL, (a3 & 0x100 | 0x200) >> 7, v6, &Handle);
    v8 = v7;
    if ( v7 < 0 )
    {
      v27 = v7;
    }
    else
    {
      v31 = 0LL;
      v8 = NtSetInformationThread(-2LL, 5LL, &v31);
      if ( v8 >= 0 )
        goto LABEL_5;
      NtClose(Handle);
      Handle = 0LL;
      v27 = v8;
    }
    v10 = 0LL;
    goto LABEL_35;
  }
LABEL_5:
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
  v10 = Heap;
  v28 = Heap;
  if ( Heap )
  {
    v8 = RtlpTpInitializeData(Heap + 40, a3, Handle);
    v27 = v8;
    if ( v8 >= 0 )
    {
      v26 = 1;
      SubProcessTag = NtCurrentTeb()->SubProcessTag;
      *(_QWORD *)(v28 + 96) = SubProcessTag;
      v43 = NtCurrentTeb();
      v10 = v28;
      *(_GUID *)(v28 + 104) = v43->ActivityId;
      InformationActivationContext = RtlQueryInformationActivationContext(1, 0LL, 0LL, 1, (__int64)&v32, 0x10uLL, 0LL);
      v8 = InformationActivationContext;
      v27 = InformationActivationContext;
      if ( InformationActivationContext >= 0 )
      {
LABEL_8:
        if ( (BYTE8(v32) & 1) != 0 )
        {
          RtlReleaseActivationContext((volatile signed __int32 *)v32);
          v12 = -1LL;
          *(_QWORD *)&v32 = -1LL;
        }
        else
        {
          v12 = v32;
        }
        *(_QWORD *)(v28 + 72) = v12;
        v23 = 1;
        *(_DWORD *)(v28 + 88) = 2;
        *(_QWORD *)(v28 + 56) = a1;
        *(_QWORD *)(v28 + 64) = a2;
        *(_QWORD *)(v28 + 32) = 0LL;
        v33[0] = 3;
        v34 = 0LL;
        v35 = 0LL;
        v36 = 0LL;
        v37 = 0LL;
        v38 = 0LL;
        v39 = 0;
        v40 = 1;
        v41 = 72;
        v13 = 0;
        if ( (a3 & 0xC0) != 0 )
        {
          v39 = 2;
          v13 = 2;
        }
        *(_QWORD *)v28 = RtlpTpWorkTaskCallbacks;
        *(_DWORD *)(v28 + 8) = 0;
        v30 = 0LL;
        if ( v13 )
        {
          v14 = (volatile signed __int64 *)&TppPoolpSerializedPoolLock;
          v15 = &TppPoolpSerializedPool;
        }
        else
        {
          v14 = &TppPoolpGlobalPoolLock;
          v15 = &TppPoolpGlobalPool;
        }
        v16 = TppPoolpReferenceGlobalPool((volatile signed __int32 **)v15, v14, &v30);
        if ( v16 >= 0 )
          TppGetCurrentThreadNumaNode(v30, v28 + 8, v28 + 12, 0LL);
        v27 = v16;
        v8 = v16;
        if ( v16 >= 0 )
        {
          v24 = 1;
          RtlPcToFileHeader(*(PVOID *)(v28 + 56), (PVOID *)(v28 + 80));
          v17 = *(_QWORD *)(v28 + 80);
          if ( v17 )
          {
            LdrAddRefDll(0LL, v17);
            v25 = 1;
            if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            {
              v18 = (__int64)NtCurrentPeb()->SharedData + 556;
              v10 = v28;
            }
            else
            {
              v18 = 2147353478LL;
            }
            if ( *(_BYTE *)v18 )
            {
              v44 = NtCurrentTeb()->SubProcessTag;
              v10 = v28;
              RtlpTpETWCallbackEnqueue(
                *(_QWORD *)(v28 + 32),
                v28,
                *(_QWORD *)(v28 + 56),
                *(_QWORD *)(v28 + 64),
                (__int64)v44);
            }
            TpPostTask(v10, *(_QWORD *)(v10 + 32), 1LL);
            if ( !_InterlockedDecrement((volatile signed __int32 *)(v10 + 88)) )
              RtlpTpWorkUnposted(v28, *(_QWORD *)(v28 + 32));
            v10 = 0LL;
            v28 = 0LL;
            v8 = 0;
            v27 = 0;
          }
        }
        goto LABEL_35;
      }
      if ( InformationActivationContext == -1072365557 )
      {
        *(_QWORD *)(v28 + 72) = -1LL;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v8 = -1073741801;
    v27 = -1073741801;
  }
LABEL_35:
  if ( v10 )
  {
    if ( v23 )
    {
      v20 = *(volatile signed __int32 **)(v10 + 72);
      if ( v20 != (volatile signed __int32 *)-1LL )
        RtlReleaseActivationContext(v20);
    }
    if ( v24 )
    {
      v21 = *(volatile signed __int32 **)(v10 + 32);
      if ( !v21 )
      {
        v21 = (volatile signed __int32 *)TppPoolpGlobalPool;
        if ( (v39 & 2) != 0 )
          v21 = (volatile signed __int32 *)TppPoolpSerializedPool;
      }
      if ( v21 == (volatile signed __int32 *)TppPoolpGlobalPool )
      {
        TppPoolpDereferenceGlobalPool(
          (const void **)&TppPoolpGlobalPool,
          (volatile signed __int32 *)&TppPoolpGlobalPoolLock);
      }
      else if ( v21 == (volatile signed __int32 *)TppPoolpSerializedPool )
      {
        TppPoolpDereferenceGlobalPool(
          (const void **)&TppPoolpSerializedPool,
          (volatile signed __int32 *)&TppPoolpSerializedPoolLock);
      }
      else
      {
        if ( _InterlockedExchangeAdd(v21, 0xFFFFFFFF) == 1 )
          TppPoolpFree(v21);
        v10 = v28;
      }
    }
    if ( v25 )
      LdrUnloadDll(*(_QWORD *)(v10 + 80));
    if ( v26 )
    {
      v22 = *(void **)(v10 + 40);
      if ( v22 )
        NtClose(v22);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v28);
    v8 = v27;
  }
  RtlpTpResumeImpersonation(Handle);
  return (unsigned int)v8;
}
