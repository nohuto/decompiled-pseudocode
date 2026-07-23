/*
 * XREFs of SmHwAcceleratorPartitionMgrGetDescriptor @ 0x140383B28
 * Callers:
 *     SmStoreDecompressBuffer @ 0x1402F9A18 (SmStoreDecompressBuffer.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140383570 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     MmGetNextNode @ 0x140421790 (MmGetNextNode.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall SmHwAcceleratorPartitionMgrGetDescriptor(__int64 a1, char a2, unsigned int a3)
{
  __int64 v3; // r14
  _BOOL8 v4; // r15
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v8; // rdi
  int v9; // r12d
  char *v10; // rsi
  unsigned int NextNode; // eax
  int v12; // r13d
  _SLIST_HEADER **v13; // r14
  _SLIST_HEADER *i; // r12
  PSLIST_ENTRY v15; // rax
  _DWORD *v16; // rsi
  struct _KTHREAD *v17; // rax
  char *v18; // rax
  char *v19; // rsi
  ULONG_PTR v20; // r13
  ULONG_PTR v21; // rcx
  char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  int v27; // r14d
  _QWORD *v28; // rax
  struct _KTHREAD *v29; // rax
  char *v30; // rsi
  PSLIST_ENTRY v31; // r14
  _QWORD *v32; // rax
  int v33; // [rsp+38h] [rbp-39h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-31h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-29h]
  _SLIST_ENTRY *v36; // [rsp+50h] [rbp-21h]
  __int64 v37; // [rsp+58h] [rbp-19h]
  __int128 Object; // [rsp+68h] [rbp-9h] BYREF
  _OWORD v39[5]; // [rsp+78h] [rbp+7h] BYREF
  int v43; // [rsp+F0h] [rbp+7Fh]

  v3 = a1;
  v4 = (a2 & 1) == 0;
  Timeout.QuadPart = 0LL;
  Object = 0LL;
  v5 = *(_QWORD *)(a1 + 8 * v4 + 32);
  v39[0] = 0LL;
  v37 = v5;
  LODWORD(v5) = *(_DWORD *)(a1 + 4 * v4 + 48);
  BugCheckParameter2 = a1 + 56 + 8 * v4;
  if ( !(_DWORD)v5 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = (volatile signed __int64 *)(a1 + 24);
  v43 = 0;
  v9 = 0;
  --CurrentThread->KernelApcDisable;
  v10 = (char *)KeAbPreAcquire(a1 + 24, 0LL);
  if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v3 + 24), 0, v10, v3 + 24);
  if ( v10 )
    v10[10] = 1;
  v36 = 0LL;
LABEL_8:
  if ( !*(_DWORD *)(v3 + 4 * v4 + 48) )
    goto LABEL_47;
  NextNode = a3;
  v33 = 0;
  v12 = 1;
LABEL_10:
  v13 = (_SLIST_HEADER **)(v37 + 16LL * NextNode);
  for ( i = *v13; ; i = (_SLIST_HEADER *)i->Alignment )
  {
    if ( i == (_SLIST_HEADER *)v13 )
    {
      if ( (a2 & 4) == 0 )
      {
        NextNode = MmGetNextNode(a3, &v33);
        if ( *v13 != (_SLIST_HEADER *)v13 )
          v12 = 0;
        if ( NextNode != -1 )
          goto LABEL_10;
      }
      if ( (a2 & 2) != 0 )
      {
        v9 = v43;
LABEL_47:
        v31 = v36;
        goto LABEL_48;
      }
      if ( v43 )
      {
        WORD4(Object) = 0;
        *((_QWORD *)&v39[0] + 1) = v39;
        HIDWORD(Object) = 0;
        v20 = BugCheckParameter2;
        *(_QWORD *)&v39[0] = v39;
        v21 = BugCheckParameter2;
        BYTE10(Object) = 6;
        *(_QWORD *)&Object = *(_QWORD *)BugCheckParameter2;
        *(_QWORD *)BugCheckParameter2 = &Object;
        v22 = (char *)KeAbPreAcquire(v21, 0LL);
        v9 = 0;
        v26 = (__int64)v22;
        if ( v22 )
          KeAbPreWait(v22, v23, v24, v25);
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        KeAbPostRelease((ULONG_PTR)v8);
        KeLeaveCriticalRegion();
        Timeout.QuadPart = -600000000LL;
        v27 = 0;
        if ( KeWaitForSingleObject((char *)&Object + 8, WrKernel, 0, 0, &Timeout) )
        {
          while ( KeWaitForSingleObject((char *)&Object + 8, WrKernel, 0, 0, &Timeout) )
            ++v27;
        }
        if ( v26 )
        {
          v28 = KeAbPreAcquire(v20, v26);
          KeAbPostReleaseEx(v20, (ULONG_PTR)v28);
        }
        v29 = KeGetCurrentThread();
        v43 = 0;
        --v29->KernelApcDisable;
        v30 = (char *)KeAbPreAcquire((__int64)v8, 0LL);
        if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)v8, 0, v30, (__int64)v8);
        v3 = a1;
        if ( v30 )
        {
          v30[10] = 1;
          goto LABEL_26;
        }
      }
      else
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v8);
        KeAbPostRelease((ULONG_PTR)v8);
        KeLeaveCriticalRegion();
        v17 = KeGetCurrentThread();
        v9 = 1;
        v43 = 1;
        --v17->KernelApcDisable;
        v18 = (char *)KeAbPreAcquire((__int64)v8, 0LL);
        v19 = v18;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v8, v18, (__int64)v8);
        v3 = a1;
        if ( v19 )
        {
          v19[10] = 1;
LABEL_26:
          v3 = a1;
          goto LABEL_8;
        }
      }
      goto LABEL_8;
    }
    v15 = RtlpInterlockedPopEntrySList(i + 1);
    v16 = v15;
    if ( v15 )
      break;
  }
  v31 = v15;
  if ( (a2 & 2) == 0 )
  {
    v32 = KeAbPreAcquire(BugCheckParameter2, 0LL);
    if ( v32 )
    {
      *((_BYTE *)v32 + 10) = 1;
      *v16 |= 1u;
    }
  }
  if ( v12 )
    *v16 |= 2u;
  v9 = v43;
LABEL_48:
  if ( v9 )
  {
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
  }
  else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
  {
    ExfReleasePushLockShared((signed __int64 *)v8);
  }
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegion();
  return v31;
}
