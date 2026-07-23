/*
 * XREFs of SmHwAcceleratorPartitionMgrGetDescriptor @ 0x1403A2DC4
 * Callers:
 *     SmStoreDecompressBuffer @ 0x14020D068 (SmStoreDecompressBuffer.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1403A1130 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x14029D460 (KeAbPreWait.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MmGetNextNode @ 0x140433CC0 (MmGetNextNode.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall SmHwAcceleratorPartitionMgrGetDescriptor(__int64 a1, char a2, unsigned int a3)
{
  __int64 v3; // r14
  _BOOL8 v4; // r15
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v8; // rdi
  int v9; // r12d
  __int64 *v10; // rsi
  unsigned int NextNode; // eax
  int v12; // r13d
  _SLIST_HEADER **v13; // r14
  _SLIST_HEADER *i; // r12
  PSLIST_ENTRY v15; // rax
  _DWORD *v16; // rsi
  struct _KTHREAD *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // rsi
  ULONG_PTR v20; // r13
  ULONG_PTR v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rsi
  int v24; // r14d
  __int64 *v25; // rax
  struct _KTHREAD *v26; // rax
  __int64 *v27; // rsi
  PSLIST_ENTRY v28; // r14
  __int64 *v29; // rax
  int v30; // [rsp+38h] [rbp-39h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-31h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-29h]
  _SLIST_ENTRY *v33; // [rsp+50h] [rbp-21h]
  __int64 v34; // [rsp+58h] [rbp-19h]
  __int128 Object; // [rsp+68h] [rbp-9h] BYREF
  _OWORD v36[5]; // [rsp+78h] [rbp+7h] BYREF
  int v40; // [rsp+F0h] [rbp+7Fh]

  v3 = a1;
  v4 = (a2 & 1) == 0;
  Timeout.QuadPart = 0LL;
  Object = 0LL;
  v5 = *(_QWORD *)(a1 + 8 * v4 + 32);
  v36[0] = 0LL;
  v34 = v5;
  LODWORD(v5) = *(_DWORD *)(a1 + 4 * v4 + 48);
  BugCheckParameter2 = a1 + 56 + 8 * v4;
  if ( !(_DWORD)v5 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = (volatile signed __int64 *)(a1 + 24);
  v40 = 0;
  v9 = 0;
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire(a1 + 24, 0LL);
  if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v3 + 24), 0, v10, v3 + 24);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  v33 = 0LL;
LABEL_8:
  if ( !*(_DWORD *)(v3 + 4 * v4 + 48) )
    goto LABEL_47;
  NextNode = a3;
  v30 = 0;
  v12 = 1;
LABEL_10:
  v13 = (_SLIST_HEADER **)(v34 + 16LL * NextNode);
  for ( i = *v13; ; i = (_SLIST_HEADER *)i->Alignment )
  {
    if ( i == (_SLIST_HEADER *)v13 )
    {
      if ( (a2 & 4) == 0 )
      {
        NextNode = MmGetNextNode(a3, &v30);
        if ( *v13 != (_SLIST_HEADER *)v13 )
          v12 = 0;
        if ( NextNode != -1 )
          goto LABEL_10;
      }
      if ( (a2 & 2) != 0 )
      {
        v9 = v40;
LABEL_47:
        v28 = v33;
        goto LABEL_48;
      }
      if ( v40 )
      {
        WORD4(Object) = 0;
        *((_QWORD *)&v36[0] + 1) = v36;
        HIDWORD(Object) = 0;
        v20 = BugCheckParameter2;
        *(_QWORD *)&v36[0] = v36;
        v21 = BugCheckParameter2;
        BYTE10(Object) = 6;
        *(_QWORD *)&Object = *(_QWORD *)BugCheckParameter2;
        *(_QWORD *)BugCheckParameter2 = &Object;
        v22 = KeAbPreAcquire(v21, 0LL);
        v9 = 0;
        v23 = (__int64)v22;
        if ( v22 )
          KeAbPreWait(v22);
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        KeAbPostRelease((ULONG_PTR)v8);
        KeLeaveCriticalRegion();
        Timeout.QuadPart = -600000000LL;
        v24 = 0;
        if ( KeWaitForSingleObject((char *)&Object + 8, WrKernel, 0, 0, &Timeout) )
        {
          while ( KeWaitForSingleObject((char *)&Object + 8, WrKernel, 0, 0, &Timeout) )
            ++v24;
        }
        if ( v23 )
        {
          v25 = KeAbPreAcquire(v20, v23);
          KeAbPostReleaseEx(v20, (ULONG_PTR)v25);
        }
        v26 = KeGetCurrentThread();
        v40 = 0;
        --v26->KernelApcDisable;
        v27 = KeAbPreAcquire((__int64)v8, 0LL);
        if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)v8, 0, v27, (unsigned __int64)v8);
        v3 = a1;
        if ( v27 )
        {
          *((_BYTE *)v27 + 10) = 1;
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
        v40 = 1;
        --v17->KernelApcDisable;
        v18 = KeAbPreAcquire((__int64)v8, 0LL);
        v19 = v18;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v8, v18, (__int64)v8);
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
  v28 = v15;
  if ( (a2 & 2) == 0 )
  {
    v29 = KeAbPreAcquire(BugCheckParameter2, 0LL);
    if ( v29 )
    {
      *((_BYTE *)v29 + 10) = 1;
      *v16 |= 1u;
    }
  }
  if ( v12 )
    *v16 |= 2u;
  v9 = v40;
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
  return v28;
}
