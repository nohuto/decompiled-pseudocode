/*
 * XREFs of SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14038A1E8
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140389C30 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_.c)
 *     SmStoreDecompressBuffer @ 0x14039C718 (SmStoreDecompressBuffer.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreWait @ 0x14033E810 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     MmGetNextNode @ 0x14042FCE0 (MmGetNextNode.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall SmHwAcceleratorPartitionMgrGetDescriptor(__int64 a1, char a2, unsigned int a3)
{
  __int64 v3; // r14
  _BOOL8 v4; // r15
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v8; // rdi
  int v9; // r12d
  _QWORD *v10; // rsi
  unsigned int NextNode; // eax
  int v12; // r13d
  union _SLIST_HEADER **v13; // r14
  union _SLIST_HEADER *i; // r12
  PSLIST_ENTRY v15; // rax
  _DWORD *v16; // rsi
  struct _KTHREAD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  ULONG_PTR v20; // r13
  ULONG_PTR v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rsi
  int v26; // r14d
  _QWORD *v27; // rax
  struct _KTHREAD *v28; // rax
  _QWORD *v29; // rsi
  PSLIST_ENTRY v30; // r14
  _QWORD *v31; // rax
  int v32; // [rsp+38h] [rbp-39h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-31h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-29h]
  struct _SLIST_ENTRY *v35; // [rsp+50h] [rbp-21h]
  __int64 v36; // [rsp+58h] [rbp-19h]
  __int128 Object; // [rsp+68h] [rbp-9h] BYREF
  _OWORD v38[5]; // [rsp+78h] [rbp+7h] BYREF
  int v42; // [rsp+F0h] [rbp+7Fh]

  v3 = a1;
  v4 = (a2 & 1) == 0;
  Timeout.QuadPart = 0LL;
  Object = 0LL;
  v5 = *(_QWORD *)(a1 + 8 * v4 + 32);
  v38[0] = 0LL;
  v36 = v5;
  LODWORD(v5) = *(_DWORD *)(a1 + 4 * v4 + 48);
  BugCheckParameter2 = a1 + 56 + 8 * v4;
  if ( !(_DWORD)v5 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = (volatile signed __int64 *)(a1 + 24);
  v42 = 0;
  v9 = 0;
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire(a1 + 24, 0LL);
  if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v3 + 24), 0, v10, v3 + 24);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  v35 = 0LL;
LABEL_8:
  if ( !*(_DWORD *)(v3 + 4 * v4 + 48) )
    goto LABEL_47;
  NextNode = a3;
  v32 = 0;
  v12 = 1;
LABEL_10:
  v13 = (union _SLIST_HEADER **)(v36 + 16LL * NextNode);
  for ( i = *v13; ; i = (union _SLIST_HEADER *)i->Alignment )
  {
    if ( i == (union _SLIST_HEADER *)v13 )
    {
      if ( (a2 & 4) == 0 )
      {
        NextNode = MmGetNextNode(a3, &v32);
        if ( *v13 != (union _SLIST_HEADER *)v13 )
          v12 = 0;
        if ( NextNode != -1 )
          goto LABEL_10;
      }
      if ( (a2 & 2) != 0 )
      {
        v9 = v42;
LABEL_47:
        v30 = v35;
        goto LABEL_48;
      }
      if ( v42 )
      {
        WORD4(Object) = 0;
        *((_QWORD *)&v38[0] + 1) = v38;
        HIDWORD(Object) = 0;
        v20 = BugCheckParameter2;
        *(_QWORD *)&v38[0] = v38;
        v21 = BugCheckParameter2;
        BYTE10(Object) = 6;
        *(_QWORD *)&Object = *(_QWORD *)BugCheckParameter2;
        *(_QWORD *)BugCheckParameter2 = &Object;
        v22 = KeAbPreAcquire(v21, 0LL);
        v9 = 0;
        v25 = (__int64)v22;
        if ( v22 )
          KeAbPreWait((__int64)v22, v23, v24);
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        KeAbPostRelease((ULONG_PTR)v8);
        KeLeaveCriticalRegion();
        Timeout.QuadPart = -600000000LL;
        v26 = 0;
        if ( KeWaitForSingleObject((char *)&Object + 8, WrKernel, 0, 0, &Timeout) )
        {
          while ( KeWaitForSingleObject((char *)&Object + 8, WrKernel, 0, 0, &Timeout) )
            ++v26;
        }
        if ( v25 )
        {
          v27 = KeAbPreAcquire(v20, v25);
          KeAbPostReleaseEx(v20, (ULONG_PTR)v27);
        }
        v28 = KeGetCurrentThread();
        v42 = 0;
        --v28->KernelApcDisable;
        v29 = KeAbPreAcquire((__int64)v8, 0LL);
        if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)v8, 0, v29, (__int64)v8);
        v3 = a1;
        if ( v29 )
        {
          *((_BYTE *)v29 + 10) = 1;
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
        v42 = 1;
        --v17->KernelApcDisable;
        v18 = KeAbPreAcquire((__int64)v8, 0LL);
        v19 = v18;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v8, (__int64)v18, (__int64)v8);
        v3 = a1;
        if ( v19 )
        {
          *((_BYTE *)v19 + 10) = 1;
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
  v30 = v15;
  if ( (a2 & 2) == 0 )
  {
    v31 = KeAbPreAcquire(BugCheckParameter2, 0LL);
    if ( v31 )
    {
      *((_BYTE *)v31 + 10) = 1;
      *v16 |= 1u;
    }
  }
  if ( v12 )
    *v16 |= 2u;
  v9 = v42;
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
  return v30;
}
