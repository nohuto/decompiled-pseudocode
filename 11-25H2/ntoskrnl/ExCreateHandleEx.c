/*
 * XREFs of ExCreateHandleEx @ 0x140851070
 * Callers:
 *     AlpcpAllocateMessageFromExtendedTables @ 0x140735C00 (AlpcpAllocateMessageFromExtendedTables.c)
 *     ObCompleteObjectDuplication @ 0x1408AD954 (ObCompleteObjectDuplication.c)
 *     AlpcpAllocateMessageFunction @ 0x1408AE3F0 (AlpcpAllocateMessageFunction.c)
 *     NtCreateJobObject @ 0x1408DB4B0 (NtCreateJobObject.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     ExCreateHandle @ 0x140A1B200 (ExCreateHandle.c)
 *     RtlpInsertStringAtom @ 0x140A2A858 (RtlpInsertStringAtom.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExpUpdateDebugInfo @ 0x140851530 (ExpUpdateDebugInfo.c)
 *     ExpFreeTablePagedPool @ 0x1408517C0 (ExpFreeTablePagedPool.c)
 *     ExpGetHandleExtraInfo @ 0x140851804 (ExpGetHandleExtraInfo.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1409723BC (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateTablePagedPool @ 0x1409726F4 (ExpAllocateTablePagedPool.c)
 */

__int64 __fastcall ExCreateHandleEx(unsigned int *a1, __int64 a2, int a3, char a4, __int64 a5)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  char v8; // al
  unsigned int Number; // eax
  unsigned int v10; // r12d
  unsigned int v11; // ebp
  unsigned int v12; // r13d
  ULONG_PTR v13; // rsi
  __int64 *v14; // rax
  __int64 *v15; // r15
  unsigned __int64 *v16; // r15
  unsigned __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdi
  __int64 v21; // r12
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  volatile signed __int64 *v24; // rax
  volatile signed __int64 *v25; // rbp
  volatile signed __int64 v26; // rdx
  unsigned int v27; // r13d
  _QWORD *TablePagedPool; // rax
  _QWORD *HandleExtraInfo; // rax
  char v30; // si
  unsigned int v31; // eax
  ULONG_PTR v32; // rbx
  __int64 *v33; // rax
  __int64 *v34; // rbp
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  char HandleTableEntrySlow; // r15
  __int64 *v38; // rax
  __int64 *v39; // r13
  unsigned __int64 v40; // [rsp+20h] [rbp-48h]
  unsigned __int64 v41; // [rsp+28h] [rbp-40h]
  int v42; // [rsp+70h] [rbp+8h]
  __int64 v43; // [rsp+70h] [rbp+8h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp+10h]
  unsigned int v45; // [rsp+80h] [rbp+18h]

  v6 = (a2 << 16) & 0xFFFFFFFFFFF1FFFFuLL;
  HIDWORD(v41) = 0;
  if ( (a4 & 8) != 0 )
    LODWORD(v41) = a3 & 0x1FFFFFF | 0x2000000;
  else
    LODWORD(v41) = a3 & 0x1FFFFFF;
  v7 = 0LL;
  v40 = v6 | ((unsigned __int64)(a4 & 7) << 17) | 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = *((_BYTE *)a1 + 44);
  if ( (v8 & 4) != 0 )
  {
    v19 = (__int64)CurrentThread;
    goto LABEL_28;
  }
  if ( (v8 & 1) != 0 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v10 = ExpFreeListCount;
  v45 = Number;
LABEL_7:
  v11 = 0;
  v42 = *a1;
  while ( 1 )
  {
    v12 = Number;
    if ( v11 >= v10 )
    {
      HandleTableEntrySlow = 1;
      v38 = KeAbPreAcquire((__int64)(a1 + 14), 0LL);
      v39 = v38;
      if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 14, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1 + 7, v38, (__int64)(a1 + 14));
      if ( v39 )
        *((_BYTE *)v39 + 10) = 1;
      if ( v42 == *a1 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(a1, &a1[16 * v45 + 16]);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)a1 + 7);
      KeAbPostRelease((ULONG_PTR)(a1 + 14));
      if ( !HandleTableEntrySlow )
        goto LABEL_60;
      Number = v45;
      goto LABEL_7;
    }
    v13 = (ULONG_PTR)&a1[16 * Number + 16];
    if ( *(_QWORD *)(v13 + 8) )
    {
      v14 = KeAbPreAcquire((__int64)&a1[16 * Number + 16], 0LL);
      v15 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v13, v14, v13);
      if ( v15 )
        *((_BYTE *)v15 + 10) = 1;
      v16 = *(unsigned __int64 **)(v13 + 8);
      if ( v16 )
      {
        v17 = v16[1];
        *(_QWORD *)(v13 + 8) = v17;
        if ( !v17 )
          *(_QWORD *)(v13 + 16) = 0LL;
        v18 = ++*(_DWORD *)(v13 + 24);
        if ( v18 > *(_DWORD *)(v13 + 28) )
          *(_DWORD *)(v13 + 28) = v18;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v13);
      KeAbPostRelease(v13);
      if ( v16 )
        break;
    }
    v27 = v12 + 1;
    Number = 0;
    ++v11;
    if ( v27 != v10 )
      Number = v27;
  }
  v7 = *(_QWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFF000uLL) + 8)
     + 4 * ((__int64)((__int64)v16 - ((unsigned __int64)v16 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  if ( a5 && (*(_DWORD *)a5 || *(_DWORD *)(a5 + 4)) )
  {
    v21 = (unsigned __int8)((unsigned int)v7 >> 2);
    v22 = __PAIR64__(HIDWORD(v7), (unsigned int)v7 & 0xFFFFFC03) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (__PAIR64__(HIDWORD(v7), (unsigned int)v7 & 0xFFFFFC03) & 0xFFFFFFFFFFFFFFFCuLL) >= *a1 )
    {
LABEL_44:
      HIDWORD(v43) = HIDWORD(v7);
      if ( a1[1] )
      {
        LODWORD(v43) = v7 & 0xFFFFFFFC;
        HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(a1, v43);
        if ( HandleExtraInfo )
          *HandleExtraInfo = 0LL;
      }
      v16[1] = 0LL;
      v30 = a1[11] & 1;
      if ( v30 )
        v31 = 0;
      else
        v31 = KeGetPcr()->Prcb.Number;
      v32 = (ULONG_PTR)&a1[16 * v31 + 16];
      v33 = KeAbPreAcquire(v32, 0LL);
      v34 = v33;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v32, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v32, v33, v32);
      if ( v34 )
        *((_BYTE *)v34 + 10) = 1;
      if ( v30 )
      {
        v36 = *(_QWORD *)(v32 + 16);
        if ( v36 )
          *(_QWORD *)(v36 + 8) = v16;
        else
          *(_QWORD *)(v32 + 8) = v16;
        *(_QWORD *)(v32 + 16) = v16;
      }
      else
      {
        v35 = *(_QWORD *)(v32 + 8);
        v16[1] = v35;
        if ( !v35 )
          *(_QWORD *)(v32 + 16) = v16;
        *(_QWORD *)(v32 + 8) = v16;
      }
      --*(_DWORD *)(v32 + 24);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v32);
      KeAbPostRelease(v32);
      v7 = 0LL;
LABEL_60:
      v19 = (__int64)CurrentThread;
      goto LABEL_28;
    }
    v23 = *((_QWORD *)a1 + 1);
    if ( (v23 & 3) == 1 )
    {
      v24 = *(volatile signed __int64 **)(v23 + 8 * (v22 >> 10) - 1);
    }
    else
    {
      if ( (v23 & 3) == 0 )
      {
        v25 = (volatile signed __int64 *)(v23 + 4 * v22);
        goto LABEL_33;
      }
      v24 = *(volatile signed __int64 **)(*(_QWORD *)(v23 + 8 * (v22 >> 19) - 2) + 8 * ((v22 >> 10) & 0x1FF));
    }
    v25 = v24;
LABEL_33:
    if ( v25 )
    {
      v26 = *v25;
      if ( *v25 )
        goto LABEL_35;
      TablePagedPool = (_QWORD *)ExpAllocateTablePagedPool(*((_QWORD *)a1 + 2), 2048LL);
      if ( TablePagedPool )
      {
        if ( !_InterlockedCompareExchange64(v25, (signed __int64)TablePagedPool, 0LL) )
        {
          _InterlockedIncrement((volatile signed __int32 *)a1 + 1);
          TablePagedPool[v21] = *(_QWORD *)a5;
          goto LABEL_25;
        }
        ExpFreeTablePagedPool(*((_QWORD *)a1 + 2), TablePagedPool, 0x800uLL);
        v26 = *v25;
        if ( *v25 )
        {
LABEL_35:
          *(_QWORD *)(v26 + 8 * v21) = *(_QWORD *)a5;
          goto LABEL_25;
        }
      }
    }
    goto LABEL_44;
  }
LABEL_25:
  v19 = (__int64)CurrentThread;
  if ( *((_QWORD *)a1 + 12) )
    ExpUpdateDebugInfo(a1, CurrentThread, v7, 1LL);
  v16[1] = v41;
  *v16 = v40;
LABEL_28:
  KeLeaveCriticalRegionThread(v19);
  return v7;
}
