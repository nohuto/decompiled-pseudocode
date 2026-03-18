/*
 * XREFs of VidSchiSignalSyncObject @ 0x1400310C0
 * Callers:
 *     VidSchSubmitSignalToHwQueue @ 0x140030520 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSignalSyncObject(unsigned int a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // edx
  __int64 v9; // rax
  unsigned int *v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  _QWORD *v13; // r14
  unsigned __int64 v14; // rax
  unsigned int v15; // eax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // rdi
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r8
  __int64 v21; // rbp
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r8
  struct _KLOCK_QUEUE_HANDLE v24; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-20h] BYREF

  v6 = 8LL * a1;
  v7 = *(_QWORD *)(v6 + a2);
  if ( !a5 )
    goto LABEL_12;
  v8 = *(_DWORD *)(v7 + 48);
  if ( v8 == 6 )
    goto LABEL_3;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v15 = *(_DWORD *)(v7 + 72);
      if ( v15 >= *(_DWORD *)(v7 + 68) )
      {
        WdLogSingleEntry1(3LL, *(_QWORD *)(v7 + 16));
        WdLogGlobalForLineNumber = 26474;
      }
      else
      {
        *(_DWORD *)(v7 + 72) = v15 + 1;
      }
      goto LABEL_12;
    }
    if ( v8 == 2 )
    {
      if ( *(_BYTE *)(v7 + 28) )
      {
        v21 = *(_QWORD *)(v7 + 304);
        v22 = *(_QWORD *)(v6 + a4);
        memset(&v24, 0, sizeof(v24));
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v21 + 8), &v24);
        v23 = *(_QWORD *)(v21 + 40);
        if ( v23 >= v22 )
        {
          WdLogSingleEntry3(3LL, *(_QWORD *)(v7 + 16), v23, v22);
          WdLogGlobalForLineNumber = 6174;
        }
        else
        {
          *(_QWORD *)(v21 + 40) = v22;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v24);
      }
      else
      {
        v16 = *(_QWORD *)(v7 + 72);
        v17 = *(_QWORD *)(v6 + a4);
        if ( v16 >= v17 )
        {
          WdLogSingleEntry3(3LL, *(_QWORD *)(v7 + 16), v16, v17);
          WdLogGlobalForLineNumber = 26509;
        }
        else
        {
          *(_QWORD *)(v7 + 72) = v17;
        }
      }
      goto LABEL_12;
    }
    if ( (unsigned int)(v8 - 4) >= 2 )
      goto LABEL_12;
LABEL_3:
    if ( *(_BYTE *)(v7 + 29) )
      goto LABEL_12;
    if ( *(_BYTE *)(v7 + 28) )
    {
      v18 = *(_QWORD *)(v7 + 304);
      v19 = *(_QWORD *)(v6 + a4);
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v18 + 8), &LockHandle);
      v20 = *(_QWORD *)(v18 + 40);
      if ( v20 >= v19 )
      {
        WdLogSingleEntry3(3LL, *(_QWORD *)(v7 + 16), v20, v19);
        WdLogGlobalForLineNumber = 6174;
      }
      else
      {
        *(_QWORD *)(v18 + 40) = v19;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_12;
    }
    if ( (a3 & 4) != 0 )
      goto LABEL_6;
    v12 = *(_QWORD *)(v6 + a4);
    v13 = (_QWORD *)(v6 + a4);
    if ( v8 == 6 )
      v14 = *(_QWORD *)(v7 + 168);
    else
      v14 = *(_QWORD *)(v7 + 96);
    if ( *(_BYTE *)(v7 + 30) )
    {
      if ( v12 >= v14 )
      {
        if ( v12 == v14 )
        {
          WdLogSingleEntry1(3LL, *(_QWORD *)(v6 + a4));
          WdLogGlobalForLineNumber = 5991;
        }
LABEL_6:
        v9 = *(_QWORD *)(v6 + a4);
        if ( *(_DWORD *)(v7 + 48) == 6 )
          *(_QWORD *)(v7 + 168) = v9;
        else
          *(_QWORD *)(v7 + 96) = v9;
        goto LABEL_8;
      }
      WdLogSingleEntry2(3LL, *(_QWORD *)(v6 + a4), v14);
      WdLogGlobalForLineNumber = 5982;
    }
    else
    {
      if ( (int)v14 - (int)v12 <= 0 )
      {
        if ( (_DWORD)v14 == (_DWORD)v12 )
        {
          WdLogSingleEntry1(3LL, (unsigned int)v12);
          WdLogGlobalForLineNumber = 6010;
        }
        goto LABEL_6;
      }
      WdLogSingleEntry2(3LL, (unsigned int)v12, (unsigned int)v14);
      WdLogGlobalForLineNumber = 6001;
    }
    WdLogSingleEntry3(3LL, *(_QWORD *)(v7 + 16), *(_QWORD *)(v7 + 96), *v13);
    WdLogGlobalForLineNumber = 26548;
LABEL_8:
    v10 = *(unsigned int **)(v7 + 72);
    if ( *(_DWORD *)(v7 + 48) == 6 || *(_BYTE *)(v7 + 30) )
      v11 = *(_QWORD *)v10;
    else
      v11 = *v10;
    WdLogSingleEntry4(4LL, v7, v11);
    WdLogGlobalForLineNumber = 26556;
    goto LABEL_12;
  }
  if ( !*(_QWORD *)(v7 + 72) )
  {
    WdLogSingleEntry1(3LL, *(_QWORD *)(v7 + 16));
    WdLogGlobalForLineNumber = 26460;
  }
  *(_QWORD *)(v7 + 72) = 0LL;
LABEL_12:
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 36));
}
