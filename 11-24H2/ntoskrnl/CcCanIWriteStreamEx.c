/*
 * XREFs of CcCanIWriteStreamEx @ 0x14040C5C0
 * Callers:
 *     CcPostDeferredWrites @ 0x1402795B0 (CcPostDeferredWrites.c)
 *     CcNotifyOfMappedWrite @ 0x1402EDA4C (CcNotifyOfMappedWrite.c)
 *     CcForceWriteThrough @ 0x14040C010 (CcForceWriteThrough.c)
 *     CcShouldLazyWriteCacheMap @ 0x14040C430 (CcShouldLazyWriteCacheMap.c)
 *     CcScheduleReadAheadNuma @ 0x140493C50 (CcScheduleReadAheadNuma.c)
 *     CcCanIWrite @ 0x1404D54C0 (CcCanIWrite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmEnoughMemoryForWrite @ 0x140411550 (MmEnoughMemoryForWrite.c)
 *     CcIsFileObjectDirectMapped @ 0x1404D5E2C (CcIsFileObjectDirectMapped.c)
 */

bool __fastcall CcCanIWriteStreamEx(
        KSPIN_LOCK *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        _BYTE *a7)
{
  _QWORD *v7; // r10
  _QWORD *v9; // r11
  bool v10; // bp
  char v11; // r15
  unsigned int v13; // edi
  int v14; // r13d
  unsigned int v15; // r13d
  unsigned __int64 v16; // r9
  bool v17; // bl
  char IsFileObjectDirectMapped; // al
  __int64 v19; // rdi
  __int64 v20; // rcx
  unsigned int v21; // edx
  int v22; // eax
  _QWORD *v24; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v27; // [rsp+88h] [rbp+10h]
  char v28; // [rsp+98h] [rbp+20h]
  unsigned __int64 v29; // [rsp+B0h] [rbp+38h]

  v7 = (_QWORD *)(a2 + 1016);
  v9 = (_QWORD *)(a2 + 992);
  v10 = 0;
  v11 = 0;
  v28 = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  if ( !a2 )
  {
    v7 = a1 + 135;
    v9 = a1 + 132;
  }
  v27 = v7;
  v24 = v9;
  LockHandle.LockQueue = 0LL;
  if ( a7 )
    *a7 = 0;
  v13 = 0x1000000;
  v14 = 0;
  if ( a4 <= 0x1000000 )
    v13 = a4;
  LOBYTE(v14) = (v13 & 0xFFF) != 0;
  v15 = (v13 >> 12) + v14;
  if ( (a6 & 8) == 0 )
  {
    KeAcquireInStackQueuedSpinLock(a1 + 96, &LockHandle);
    v7 = v27;
    v9 = v24;
  }
  v16 = v15 + (unsigned __int64)((a5 >> 12) + ((a5 & 0xFFF) != 0));
  v29 = v16;
  if ( v16 + *v9 < *v7 )
  {
    v17 = 0;
  }
  else
  {
    v17 = 1;
    if ( a3 )
    {
      IsFileObjectDirectMapped = CcIsFileObjectDirectMapped(a3);
      v16 = v29;
      v7 = v27;
      v9 = v24;
      v28 = IsFileObjectDirectMapped;
      v17 = IsFileObjectDirectMapped == 0;
    }
  }
  if ( a7
    && CcAzure_SoftThrottleLargeWriteAtPct
    && CcAzure_LargeWriteSize
    && v13
    && v13 >= CcAzure_LargeWriteSize
    && v16 + *v9 >= *v7 * (unsigned __int64)(unsigned int)CcAzure_SoftThrottleLargeWriteAtPct / 0x64 )
  {
    *a7 = 1;
  }
  if ( (a6 & 8) == 0 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  v19 = 0LL;
  if ( v28 || !a3 )
    goto LABEL_41;
  if ( (a6 & 0xA) == 0 && (*(_BYTE *)(*(_QWORD *)(a3 + 24) + 4LL) & 4) == 0 && !v17 )
    goto LABEL_43;
  if ( (a6 & 8) == 0 )
    KeAcquireInStackQueuedSpinLock(a1 + 96, &LockHandle);
  v19 = *(_QWORD *)(a3 + 40);
  if ( v19 )
  {
    v20 = *(_QWORD *)(v19 + 8);
    if ( v20 )
    {
      v21 = *(_DWORD *)(v20 + 272);
      if ( v21 )
      {
        v22 = *(_DWORD *)(v20 + 112);
        if ( v22 )
          v10 = v15 + v22 > v21;
      }
      if ( *(_QWORD *)(*(_QWORD *)(v20 + 512) + 40LL) <= (unsigned __int64)(unsigned int)CcMaxLazyWritePages
        && (a6 & 4) == 0 )
      {
        v17 = 0;
      }
    }
    v11 = MmEnoughMemoryForWrite(*(_QWORD *)(a3 + 40));
  }
  if ( (a6 & 8) == 0 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v10 )
  {
LABEL_41:
    if ( !v17 )
    {
      if ( v19 )
        return v11 != 0;
LABEL_43:
      v11 = MmEnoughMemoryForWrite(0LL);
      return v11 != 0;
    }
  }
  return 0;
}
