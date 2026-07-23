/*
 * XREFs of NtSetInformationWorkerFactory @ 0x14043ED50
 * Callers:
 *     <none>
 * Callees:
 *     ExpWorkerFactoryCreateThread @ 0x140206060 (ExpWorkerFactoryCreateThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140303BD0 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140303CE0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140306390 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     KeTimeOutQueueWaiters @ 0x14043F744 (KeTimeOutQueueWaiters.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x140476FF0 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     KiValidateCpuSetMasks @ 0x140491B6C (KiValidateCpuSetMasks.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExSystemExceptionFilter @ 0x1407A7AE0 (ExSystemExceptionFilter.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // r14
  ULONG v9; // r12d
  __int32 v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  NTSTATUS result; // eax
  NTSTATUS Thread; // r14d
  bool v15; // r13
  unsigned __int64 *v16; // rcx
  __int64 CurrentIrql; // r8
  struct _KPRCB **v18; // rdx
  __int32 v19; // ebx
  _QWORD *v20; // rdi
  __int32 v21; // ebx
  __int32 v22; // ebx
  int v23; // eax
  int v24; // eax
  char v25; // r15
  __int32 v26; // ebx
  __int32 v27; // ebx
  __int32 v28; // ebx
  bool v29; // zf
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // eax
  __int64 v35; // rax
  unsigned __int32 v36; // ecx
  __int64 v37; // rax
  unsigned __int32 v38; // eax
  unsigned __int32 v39; // ecx
  unsigned __int32 v40; // ecx
  unsigned __int32 v41; // eax
  __int64 v42; // rdx
  int v43; // ebx
  unsigned int v44; // r8d
  unsigned int v45; // eax
  char v46; // cl
  PVOID v47; // rcx
  __int32 v48; // eax
  char v49; // [rsp+31h] [rbp-197h]
  PVOID Object; // [rsp+38h] [rbp-190h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-180h] BYREF
  int v52; // [rsp+60h] [rbp-168h]
  unsigned __int64 *v53; // [rsp+68h] [rbp-160h]
  __int64 v54; // [rsp+70h] [rbp-158h]
  __int128 v55; // [rsp+78h] [rbp-150h] BYREF
  __m128i Src; // [rsp+90h] [rbp-138h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v55 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset_0(&Src, 0, 0x100uLL);
  if ( WorkerFactoryInformationClass <= WorkerFactoryAdjustThreadGoal )
  {
    if ( WorkerFactoryInformationClass != WorkerFactoryAdjustThreadGoal )
    {
      if ( (unsigned int)WorkerFactoryInformationClass < WorkerFactoryIdleTimeout )
        return -1073741821;
      if ( WorkerFactoryInformationClass == WorkerFactoryIdleTimeout )
      {
        v9 = 8;
        goto LABEL_6;
      }
      if ( WorkerFactoryInformationClass != WorkerFactoryBindingCount
        && WorkerFactoryInformationClass != WorkerFactoryThreadMinimum
        && WorkerFactoryInformationClass != WorkerFactoryThreadMaximum )
      {
        if ( WorkerFactoryInformationClass == WorkerFactoryPaused )
          return -1073741822;
        return -1073741821;
      }
    }
LABEL_5:
    v9 = 4;
    goto LABEL_6;
  }
  switch ( WorkerFactoryInformationClass )
  {
    case WorkerFactoryCallbackType:
      goto LABEL_5;
    case WorkerFactoryStackInformation:
      v9 = 16;
      goto LABEL_6;
    case WorkerFactoryThreadBasePriority:
    case WorkerFactoryTimeoutWaiters:
    case WorkerFactoryFlags:
    case WorkerFactoryThreadSoftMaximum:
      goto LABEL_5;
  }
  if ( WorkerFactoryInformationClass != WorkerFactoryThreadCpuSets )
    return -1073741821;
  if ( WorkerFactoryInformationLength >= 0x100 )
    v9 = 256;
  else
    v9 = WorkerFactoryInformationLength + (WorkerFactoryInformationLength & 7);
LABEL_6:
  if ( WorkerFactoryInformationLength != v9 )
    return -1073741820;
  if ( WorkerFactoryInformationClass > WorkerFactoryStackInformation )
  {
    if ( WorkerFactoryInformationClass == WorkerFactoryThreadBasePriority )
      goto LABEL_18;
    if ( WorkerFactoryInformationClass == WorkerFactoryTimeoutWaiters )
    {
      if ( PreviousMode )
      {
        v12 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)WorkerFactoryInformation < 0x7FFFFFFF0000LL )
          v12 = (__int64)WorkerFactoryInformation;
        *(_DWORD *)v12 = *(_DWORD *)v12;
      }
    }
    else
    {
      if ( (unsigned int)(WorkerFactoryInformationClass - 13) < 2 )
        goto LABEL_18;
      if ( PreviousMode && v9 && ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      memmove(&Src, WorkerFactoryInformation, v9);
    }
  }
  else
  {
    switch ( WorkerFactoryInformationClass )
    {
      case WorkerFactoryStackInformation:
        if ( PreviousMode && ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
          goto LABEL_24;
        Src = *(__m128i *)WorkerFactoryInformation;
        Src.m128i_i32[0] = _mm_cvtsi128_si32(Src);
        break;
      case WorkerFactoryIdleTimeout:
        if ( PreviousMode && ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
LABEL_24:
          ExRaiseDatatypeMisalignment();
        Src.m128i_i64[0] = *(_QWORD *)WorkerFactoryInformation;
        break;
      case WorkerFactoryBindingCount:
      case WorkerFactoryThreadMinimum:
      case WorkerFactoryThreadMaximum:
      case WorkerFactoryAdjustThreadGoal:
LABEL_18:
        if ( PreviousMode )
        {
          v11 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)WorkerFactoryInformation < 0x7FFFFFFF0000LL )
            v11 = (__int64)WorkerFactoryInformation;
          v10 = *(_DWORD *)v11;
          goto LABEL_17;
        }
LABEL_16:
        v10 = *(_DWORD *)WorkerFactoryInformation;
LABEL_17:
        Src.m128i_i32[0] = v10;
        break;
      default:
        if ( PreviousMode && ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        goto LABEL_16;
    }
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(WorkerFactoryHandle, 4u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  if ( result < 0 )
    return result;
  if ( WorkerFactoryInformationClass != WorkerFactoryAdjustThreadGoal )
  {
    Thread = 0;
    v52 = 0;
    v15 = 0;
    v49 = 1;
    v16 = (unsigned __int64 *)*((_QWORD *)Object + 2);
    v53 = v16;
    LockHandle.LockQueue.Lock = v16;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    v54 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v16) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v16);
      v16 = v53;
      LOBYTE(CurrentIrql) = v54;
    }
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v18 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)v16, (__int64)&LockHandle);
      if ( v18 )
        KxWaitForLockOwnerShip((struct _KPRCB *)&LockHandle, v18);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v16);
    }
    if ( WorkerFactoryInformationClass > WorkerFactoryStackInformation )
    {
      v26 = WorkerFactoryInformationClass - 11;
      v20 = Object;
      if ( !v26 )
      {
        v46 = *(_BYTE *)(*((_QWORD *)Object + 2) + 33LL);
        *((_DWORD *)Object + 103) = Src.m128i_i32[0];
        Thread = v46 != 0 ? 0x80 : 0;
        goto LABEL_111;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
        v43 = 0;
        if ( !*((_DWORD *)Object + 100) )
        {
          v44 = *((_DWORD *)Object + 96);
          v45 = *((_DWORD *)Object + 94);
          if ( v44 > v45 )
            v43 = KeTimeOutQueueWaiters(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL), 0LL, v44 - v45);
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v49 = 0;
        *(_DWORD *)WorkerFactoryInformation = v43;
        v25 = 0;
        goto LABEL_64;
      }
      v28 = v27 - 1;
      if ( v28 )
      {
        v37 = *((_QWORD *)Object + 2);
        if ( v28 == 1 )
        {
          if ( !*(_BYTE *)(v37 + 33) )
          {
            v38 = Src.m128i_i32[0];
            *((_DWORD *)Object + 99) = Src.m128i_i32[0];
            if ( v38 )
            {
              v39 = *((_DWORD *)v20 + 94);
              if ( v38 >= v39 )
              {
                v40 = *((_DWORD *)v20 + 95);
                v25 = 0;
                if ( v38 > v40 )
                  *((_DWORD *)v20 + 99) = v40;
                goto LABEL_64;
              }
              *((_DWORD *)v20 + 99) = v39;
            }
            goto LABEL_111;
          }
        }
        else if ( !*(_BYTE *)(v37 + 33) )
        {
          if ( (*((_DWORD *)Object + 102) & 0x8000) != 0 )
          {
            Thread = -1073700861;
          }
          else
          {
            Thread = KiValidateCpuSetMasks(&Src, v9 >> 3);
            if ( Thread >= 0 )
            {
              memset_0(v20 + 15, 0, 0x100uLL);
              memmove(v20 + 15, &Src, v9);
              *((_DWORD *)v20 + 102) |= 0x4000u;
            }
          }
          goto LABEL_111;
        }
        goto LABEL_117;
      }
      *((_DWORD *)Object + 102) = *((_DWORD *)Object + 102) & 0xFFFFF7FF | ((Src.m128i_i8[0] & 1) << 11);
LABEL_73:
      v25 = 0;
      goto LABEL_64;
    }
    if ( WorkerFactoryInformationClass == WorkerFactoryStackInformation )
    {
      v20 = Object;
      v25 = 0;
      if ( *(_BYTE *)(*((_QWORD *)Object + 2) + 33LL) )
      {
        Thread = 128;
      }
      else
      {
        *((_QWORD *)Object + 8) = Src.m128i_i64[1];
        v20[7] = Src.m128i_i64[0];
      }
      goto LABEL_64;
    }
    v19 = WorkerFactoryInformationClass - 2;
    v20 = Object;
    if ( !v19 )
    {
      if ( !*(_BYTE *)(*((_QWORD *)Object + 2) + 33LL) )
      {
        v42 = Src.m128i_i64[0];
        if ( Src.m128i_i64[0] < 0 )
        {
          if ( Src.m128i_i64[0] > -10000000 )
            v42 = -10000000LL;
          if ( v42 < -6000000000LL )
            v42 = -6000000000LL;
          *((_QWORD *)Object + 14) = v42;
          *((_QWORD *)&v55 + 1) = -1LL;
          KeSetTimer2((__int64)(v20 + 53), (LARGE_INTEGER)v42, -v42, (__int64)&v55);
        }
        else
        {
          Thread = -1073741811;
        }
        goto LABEL_111;
      }
      goto LABEL_117;
    }
    v21 = v19 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        if ( v22 != 1 )
        {
          if ( Src.m128i_i32[0] )
          {
            if ( Src.m128i_i32[0] != 1 )
            {
              if ( Src.m128i_i32[0] == 2 )
              {
                v23 = *((_DWORD *)Object + 96);
                if ( !v23 )
                  goto LABEL_60;
                v30 = v23 - 1;
                v29 = v30 == 0;
              }
              else
              {
                if ( Src.m128i_i32[0] != 3 )
                {
                  Thread = -1073741811;
                  goto LABEL_63;
                }
                if ( !*((_DWORD *)Object + 96) )
                  goto LABEL_60;
                ExpRemoveCurrentThreadFromThreadHistory(Object);
                v30 = *((_DWORD *)v20 + 96) - 1;
                --*((_DWORD *)v20 + 97);
                v29 = v30 == 0;
              }
              *((_DWORD *)v20 + 96) = v30;
              if ( !v29 )
                goto LABEL_63;
            }
            v15 = 1;
            goto LABEL_63;
          }
          v24 = *((_DWORD *)Object + 96);
          if ( v24 != *((_DWORD *)Object + 97) )
          {
            *((_DWORD *)Object + 96) = v24 + 1;
            goto LABEL_63;
          }
LABEL_60:
          Thread = -1073741823;
LABEL_63:
          v25 = 0;
LABEL_64:
          if ( v15 )
          {
            v33 = *((_DWORD *)v20 + 96);
            if ( *(_BYTE *)(v20[2] + 33LL) )
            {
              Thread = 128;
            }
            else
            {
              v34 = *((_DWORD *)v20 + 95);
              if ( v33 >= v34 )
              {
                if ( !v25 )
                  Thread = -1073741527;
              }
              else
              {
                if ( *((_DWORD *)v20 + 100) || v33 + *((_DWORD *)v20 + 98) >= v34 )
                  goto LABEL_98;
                if ( (v20[51] & 0x200) != 0 )
                  ExpLeaveWorkerFactoryAwayMode(v20);
                ++*((_DWORD *)v20 + 100);
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                v49 = 0;
                Thread = ExpWorkerFactoryCreateThread((__int64)v20);
                if ( Thread < 0 )
                {
                  v49 = 1;
                  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v20[2], &LockHandle);
                  --*((_DWORD *)v20 + 100);
                  if ( v25 )
LABEL_98:
                    Thread = 0;
                }
              }
            }
          }
          if ( v49 )
            KeReleaseInStackQueuedSpinLock(&LockHandle);
          ObfDereferenceObjectWithTag(v20, 0x746C6644u);
          return Thread;
        }
        v35 = *((_QWORD *)Object + 2);
        if ( !*(_BYTE *)(v35 + 33) )
        {
          v25 = 1;
          v36 = Src.m128i_i32[0];
          if ( Src.m128i_i32[0]
            && (!*((_DWORD *)Object + 95) && *(_DWORD *)(v35 + 24) || *(int *)(*(_QWORD *)(v35 + 8) + 4LL) > 0) )
          {
            v15 = 1;
          }
          *((_DWORD *)Object + 95) = Src.m128i_i32[0];
          if ( v36 < *((_DWORD *)v20 + 94) )
            *((_DWORD *)v20 + 94) = v36;
          goto LABEL_64;
        }
LABEL_117:
        Thread = 128;
LABEL_111:
        v25 = 0;
        goto LABEL_64;
      }
      if ( *(_BYTE *)(*((_QWORD *)Object + 2) + 33LL) )
      {
        Thread = 128;
      }
      else
      {
        v41 = Src.m128i_i32[0];
        v15 = Src.m128i_i32[0] > *((_DWORD *)Object + 94);
        *((_DWORD *)Object + 94) = Src.m128i_i32[0];
        if ( *((_DWORD *)v20 + 95) < v41 )
          *((_DWORD *)v20 + 95) = v41;
        if ( !v15 )
        {
          v25 = 0;
          goto LABEL_64;
        }
        v15 = 0;
        if ( (v20[51] & 0x200) != 0 )
          ExpLeaveWorkerFactoryAwayMode(v20);
        while ( (unsigned int)(*((_DWORD *)v20 + 98) + *((_DWORD *)v20 + 96)) < *((_DWORD *)v20 + 94) )
        {
          ++*((_DWORD *)v20 + 100);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          Thread = ExpWorkerFactoryCreateThread((__int64)v20);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v20[2], &LockHandle);
          if ( Thread < 0 )
          {
            --*((_DWORD *)v20 + 100);
            goto LABEL_73;
          }
        }
      }
      goto LABEL_73;
    }
    v31 = *((_DWORD *)Object + 101);
    if ( Src.m128i_i32[0] >= 0 )
    {
      v32 = v31 + Src.m128i_i32[0];
      if ( v31 >= v31 + Src.m128i_i32[0] )
      {
        *((_DWORD *)Object + 101) = -1;
        v32 = -1;
LABEL_91:
        if ( v31 )
        {
          if ( !v32 && (v20[51] & 0x200) != 0 )
            ExpLeaveWorkerFactoryAwayMode(v20);
        }
        else if ( v32 && ExpTryEnterWorkerFactoryAwayMode(v20) )
        {
          ExpWorkerFactoryCheckCreate((char *)v20, &LockHandle, 0);
          v49 = 0;
        }
        goto LABEL_111;
      }
    }
    else
    {
      if ( v31 <= -Src.m128i_i32[0] )
      {
        *((_DWORD *)Object + 101) = 0;
        v32 = 0;
        goto LABEL_91;
      }
      v32 = v31 + Src.m128i_i32[0];
    }
    *((_DWORD *)Object + 101) = v32;
    goto LABEL_91;
  }
  v47 = Object;
  v48 = Src.m128i_i32[0];
  if ( !Src.m128i_i32[0] )
  {
    v48 = KeNumberProcessors_0;
    v47 = Object;
  }
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL) + 44LL) = v48;
  ObfDereferenceObjectWithTag(v47, 0x746C6644u);
  return 0;
}
