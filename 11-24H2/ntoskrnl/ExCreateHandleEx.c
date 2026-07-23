/*
 * XREFs of ExCreateHandleEx @ 0x1408490F0
 * Callers:
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14073FB50 (AlpcpAllocateMessageFromExtendedTables.c)
 *     NtCreateJobObject @ 0x14085C390 (NtCreateJobObject.c)
 *     AlpcpAllocateMessageFunction @ 0x140894520 (AlpcpAllocateMessageFunction.c)
 *     ObCompleteObjectDuplication @ 0x1408948C8 (ObCompleteObjectDuplication.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     ExCreateHandle @ 0x140A1AF74 (ExCreateHandle.c)
 *     RtlpInsertStringAtom @ 0x140A249F0 (RtlpInsertStringAtom.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpUpdateDebugInfo @ 0x1408495B4 (ExpUpdateDebugInfo.c)
 *     ExpFreeTablePagedPool @ 0x1408497A4 (ExpFreeTablePagedPool.c)
 *     ExpGetHandleExtraInfo @ 0x1408497E8 (ExpGetHandleExtraInfo.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14094D498 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateTablePagedPool @ 0x14094D7D0 (ExpAllocateTablePagedPool.c)
 */

__int64 __fastcall ExCreateHandleEx(unsigned int *a1, __int64 a2, int a3, char a4, _DWORD *a5)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  char v8; // al
  unsigned int Number; // eax
  unsigned int v10; // r12d
  unsigned int v11; // ebp
  unsigned int v12; // r13d
  ULONG_PTR v13; // rsi
  char *v14; // rax
  char *v15; // r15
  unsigned __int64 *v16; // r15
  unsigned __int64 v17; // rax
  int v18; // eax
  __int64 v20; // r12
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  volatile signed __int64 *v23; // rax
  volatile signed __int64 *v24; // rbp
  volatile signed __int64 v25; // rdx
  unsigned int v26; // r13d
  void *TablePagedPool; // rax
  _QWORD *HandleExtraInfo; // rax
  char v29; // si
  unsigned int v30; // eax
  ULONG_PTR v31; // rbx
  char *v32; // rax
  char *v33; // rbp
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  char HandleTableEntrySlow; // r13
  char *v37; // rax
  char *v38; // rbp
  unsigned __int64 v39; // [rsp+20h] [rbp-48h]
  unsigned __int64 v40; // [rsp+28h] [rbp-40h]
  int v41; // [rsp+70h] [rbp+8h]
  __int64 v42; // [rsp+70h] [rbp+8h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp+10h]
  unsigned int v44; // [rsp+80h] [rbp+18h]

  v6 = (a2 << 16) & 0xFFFFFFFFFFF1FFFFuLL;
  HIDWORD(v40) = 0;
  if ( (a4 & 8) != 0 )
    LODWORD(v40) = a3 & 0x1FFFFFF | 0x2000000;
  else
    LODWORD(v40) = a3 & 0x1FFFFFF;
  v7 = 0LL;
  v39 = v6 | ((unsigned __int64)(a4 & 7) << 17) | 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = *((_BYTE *)a1 + 44);
  if ( (v8 & 4) == 0 )
  {
    if ( (v8 & 1) != 0 )
      Number = 0;
    else
      Number = KeGetPcr()->Prcb.Number;
    v10 = ExpFreeListCount;
    v44 = Number;
LABEL_7:
    v11 = 0;
    v41 = *a1;
    while ( 1 )
    {
      v12 = Number;
      if ( v11 >= v10 )
      {
        HandleTableEntrySlow = 1;
        v37 = (char *)KeAbPreAcquire((__int64)(a1 + 14), 0LL);
        v38 = v37;
        if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 14, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1 + 7, v37, (__int64)(a1 + 14));
        if ( v38 )
          v38[10] = 1;
        if ( v41 == *a1 )
          HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(a1, &a1[16 * v44 + 16]);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)a1 + 7);
        KeAbPostRelease((ULONG_PTR)(a1 + 14));
        if ( HandleTableEntrySlow )
        {
          Number = v44;
          goto LABEL_7;
        }
        goto LABEL_28;
      }
      v13 = (ULONG_PTR)&a1[16 * Number + 16];
      if ( *(_QWORD *)(v13 + 8) )
      {
        v14 = (char *)KeAbPreAcquire((__int64)&a1[16 * Number + 16], 0LL);
        v15 = v14;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v13, v14, v13);
        if ( v15 )
          v15[10] = 1;
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
      v26 = v12 + 1;
      Number = 0;
      ++v11;
      if ( v26 != v10 )
        Number = v26;
    }
    v7 = *(_QWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFF000uLL) + 8)
       + 4 * ((__int64)((__int64)v16 - ((unsigned __int64)v16 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
    if ( !a5 || !*a5 && !a5[1] )
      goto LABEL_25;
    v20 = (unsigned __int8)((unsigned int)v7 >> 2);
    v21 = __PAIR64__(HIDWORD(v7), (unsigned int)v7 & 0xFFFFFC03) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (__PAIR64__(HIDWORD(v7), (unsigned int)v7 & 0xFFFFFC03) & 0xFFFFFFFFFFFFFFFCuLL) < *a1 )
    {
      v22 = *((_QWORD *)a1 + 1);
      if ( (v22 & 3) == 1 )
      {
        v23 = *(volatile signed __int64 **)(v22 + 8 * (v21 >> 10) - 1);
        goto LABEL_32;
      }
      if ( (v22 & 3) != 0 )
      {
        v23 = *(volatile signed __int64 **)(*(_QWORD *)(v22 + 8 * (v21 >> 19) - 2) + 8 * ((v21 >> 10) & 0x1FF));
LABEL_32:
        v24 = v23;
      }
      else
      {
        v24 = (volatile signed __int64 *)(v22 + 4 * v21);
      }
      if ( v24 )
      {
        v25 = *v24;
        if ( *v24 )
          goto LABEL_35;
        TablePagedPool = (void *)ExpAllocateTablePagedPool(*((_QWORD *)a1 + 2), 2048LL);
        if ( TablePagedPool )
        {
          if ( _InterlockedCompareExchange64(v24, (signed __int64)TablePagedPool, 0LL) )
          {
            ExpFreeTablePagedPool(*((_QWORD *)a1 + 2), TablePagedPool, 0x800uLL);
            v25 = *v24;
            if ( !*v24 )
              goto LABEL_44;
LABEL_35:
            *(_QWORD *)(v25 + 8 * v20) = *(_QWORD *)a5;
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)a1 + 1);
            *((_QWORD *)TablePagedPool + v20) = *(_QWORD *)a5;
          }
LABEL_25:
          if ( *((_QWORD *)a1 + 12) )
            ExpUpdateDebugInfo(a1, CurrentThread, v7, 1LL);
          v16[1] = v40;
          *v16 = v39;
          goto LABEL_28;
        }
      }
    }
LABEL_44:
    HIDWORD(v42) = HIDWORD(v7);
    if ( a1[1] )
    {
      LODWORD(v42) = v7 & 0xFFFFFFFC;
      HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(a1, v42);
      if ( HandleExtraInfo )
        *HandleExtraInfo = 0LL;
    }
    v16[1] = 0LL;
    v29 = a1[11] & 1;
    if ( v29 )
      v30 = 0;
    else
      v30 = KeGetPcr()->Prcb.Number;
    v31 = (ULONG_PTR)&a1[16 * v30 + 16];
    v32 = (char *)KeAbPreAcquire(v31, 0LL);
    v33 = v32;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v31, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v31, v32, v31);
    if ( v33 )
      v33[10] = 1;
    if ( v29 )
    {
      v35 = *(_QWORD *)(v31 + 16);
      if ( v35 )
        *(_QWORD *)(v35 + 8) = v16;
      else
        *(_QWORD *)(v31 + 8) = v16;
      *(_QWORD *)(v31 + 16) = v16;
    }
    else
    {
      v34 = *(_QWORD *)(v31 + 8);
      v16[1] = v34;
      if ( !v34 )
        *(_QWORD *)(v31 + 16) = v16;
      *(_QWORD *)(v31 + 8) = v16;
    }
    --*(_DWORD *)(v31 + 24);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v31, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v31);
    KeAbPostRelease(v31);
    v7 = 0LL;
  }
LABEL_28:
  KeLeaveCriticalRegionThread();
  return v7;
}
