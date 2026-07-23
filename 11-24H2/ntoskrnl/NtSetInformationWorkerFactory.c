/*
 * XREFs of NtSetInformationWorkerFactory @ 0x14032BA00
 * Callers:
 *     <none>
 * Callees:
 *     ExpWorkerFactoryCreateThread @ 0x14020F0C8 (ExpWorkerFactoryCreateThread.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeTimeOutQueueWaiters @ 0x1402F1880 (KeTimeOutQueueWaiters.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x14032CFE0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1403AD690 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1403AD7A0 (ExpWorkerFactoryCheckCreate.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x14047335C (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     KiValidateCpuSetMasks @ 0x14048B8AC (KiValidateCpuSetMasks.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExSystemExceptionFilter @ 0x1407B73D0 (ExSystemExceptionFilter.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // di
  ULONG v9; // r8d
  int v10; // eax
  __int64 v11; // rcx
  NTSTATUS result; // eax
  NTSTATUS Thread; // r14d
  bool v14; // r12
  unsigned __int64 *v15; // rdi
  unsigned __int8 CurrentIrql; // r13
  __int64 v17; // rdx
  char *v18; // rdi
  int v19; // eax
  int v20; // eax
  char v21; // bl
  char v22; // si
  int v23; // eax
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  __int64 v28; // rax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rdx
  PVOID v32; // rcx
  int v33; // eax
  int v34; // ecx
  PVOID *Object; // [rsp+20h] [rbp-198h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-190h]
  PVOID v37; // [rsp+30h] [rbp-188h] BYREF
  ULONG Size; // [rsp+3Ch] [rbp-17Ch]
  struct _KLOCK_QUEUE_HANDLE Size_4; // [rsp+40h] [rbp-178h] BYREF
  __int128 v40; // [rsp+60h] [rbp-158h] BYREF
  _OWORD Src[16]; // [rsp+70h] [rbp-148h] BYREF

  memset(&Size_4, 0, sizeof(Size_4));
  v40 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset_0(Src, 0, sizeof(Src));
  if ( WorkerFactoryInformationClass == WorkerFactoryThreadBasePriority )
  {
LABEL_2:
    v9 = 4;
LABEL_3:
    Size = v9;
    if ( WorkerFactoryInformationLength != v9 )
      return -1073741820;
    if ( WorkerFactoryInformationClass == WorkerFactoryCallbackType )
    {
      if ( PreviousMode && ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
LABEL_7:
      v10 = *(_DWORD *)WorkerFactoryInformation;
    }
    else
    {
      switch ( WorkerFactoryInformationClass )
      {
        case WorkerFactoryIdleTimeout:
          if ( PreviousMode && ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_QWORD *)&Src[0] = *(_QWORD *)WorkerFactoryInformation;
          goto LABEL_20;
        case WorkerFactoryBindingCount:
        case WorkerFactoryThreadMinimum:
        case WorkerFactoryThreadMaximum:
          if ( !PreviousMode )
            goto LABEL_7;
          v11 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)WorkerFactoryInformation < 0x7FFFFFFF0000LL )
            v11 = (__int64)WorkerFactoryInformation;
          v10 = *(_DWORD *)v11;
          break;
        default:
          __fastfail(0x25u);
      }
    }
    LODWORD(Src[0]) = v10;
LABEL_20:
    v37 = 0LL;
    result = ObReferenceObjectByHandle(WorkerFactoryHandle, 4u, ExpWorkerFactoryObjectType, PreviousMode, &v37, 0LL);
    if ( result >= 0 )
    {
      if ( WorkerFactoryInformationClass != WorkerFactoryAdjustThreadGoal )
      {
        Thread = 0;
        v14 = 0;
        v15 = (unsigned __int64 *)*((_QWORD *)v37 + 2);
        Size_4.LockQueue.Lock = v15;
        Size_4.LockQueue.Next = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
        Size_4.OldIrql = CurrentIrql;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v17 = _InterlockedExchange64((volatile __int64 *)v15, (__int64)&Size_4);
          if ( v17 )
            KxWaitForLockOwnerShip(&Size_4, v17);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(&Size_4, v15);
        }
        if ( WorkerFactoryInformationClass == WorkerFactoryCallbackType )
        {
          v18 = (char *)v37;
          switch ( LODWORD(Src[0]) )
          {
            case 2:
              v19 = *((_DWORD *)v37 + 96);
              if ( v19 )
              {
                v20 = v19 - 1;
                *((_DWORD *)v37 + 96) = v20;
                if ( !v20 )
                {
LABEL_31:
                  v14 = 1;
                  v21 = 1;
LABEL_35:
                  v22 = 0;
LABEL_36:
                  if ( v14 )
                  {
                    v26 = *((_DWORD *)v18 + 96);
                    if ( *(_BYTE *)(*((_QWORD *)v18 + 2) + 33LL) )
                    {
                      Thread = 128;
                    }
                    else
                    {
                      v27 = *((_DWORD *)v18 + 95);
                      if ( v26 >= v27 )
                      {
                        if ( !v22 )
                          Thread = -1073741527;
                      }
                      else
                      {
                        if ( *((_DWORD *)v18 + 100) || v26 + *((_DWORD *)v18 + 98) >= v27 )
                          goto LABEL_62;
                        if ( (*((_DWORD *)v18 + 102) & 0x200) != 0 )
                          ExpLeaveWorkerFactoryAwayMode(v18);
                        ++*((_DWORD *)v18 + 100);
                        KeReleaseInStackQueuedSpinLock(&Size_4);
                        v21 = 0;
                        Thread = ExpWorkerFactoryCreateThread((__int64)v18);
                        if ( Thread < 0 )
                        {
                          v21 = 1;
                          KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v18 + 2), &Size_4);
                          --*((_DWORD *)v18 + 100);
                          if ( v22 )
LABEL_62:
                            Thread = 0;
                        }
                      }
                    }
                  }
                  if ( v21 )
                    KeReleaseInStackQueuedSpinLock(&Size_4);
                  ObfDereferenceObjectWithTag(v18, 0x746C6644u);
                  return Thread;
                }
              }
              else
              {
                Thread = -1073741823;
              }
              break;
            case 0:
              v23 = *((_DWORD *)v37 + 96);
              v21 = 1;
              if ( v23 == *((_DWORD *)v37 + 97) )
                Thread = -1073741823;
              else
                *((_DWORD *)v37 + 96) = v23 + 1;
              goto LABEL_35;
            case 1:
              goto LABEL_31;
            case 3:
              if ( *((_DWORD *)v37 + 96) )
              {
                ExpRemoveCurrentThreadFromThreadHistory(v37);
                v34 = *((_DWORD *)v18 + 96) - 1;
                *((_DWORD *)v18 + 96) = v34;
                --*((_DWORD *)v18 + 97);
                v14 = v34 == 0;
              }
              else
              {
                Thread = -1073741823;
              }
              break;
            default:
LABEL_101:
              Thread = -1073741811;
              break;
          }
        }
        else
        {
          if ( WorkerFactoryInformationClass != WorkerFactoryFlags )
          {
            switch ( WorkerFactoryInformationClass )
            {
              case WorkerFactoryIdleTimeout:
                v18 = (char *)v37;
                if ( *(_BYTE *)(*((_QWORD *)v37 + 2) + 33LL) )
                  goto LABEL_80;
                v31 = *(_QWORD *)&Src[0];
                if ( *(__int64 *)&Src[0] >= 0 )
                  goto LABEL_101;
                if ( *(__int64 *)&Src[0] > -10000000 )
                  v31 = -10000000LL;
                if ( v31 < -6000000000LL )
                  v31 = -6000000000LL;
                *((_QWORD *)v37 + 14) = v31;
                *((_QWORD *)&v40 + 1) = -1LL;
                KeSetTimer2(v18 + 424, v31, -v31, &v40, Object, HandleInformation);
                goto LABEL_34;
              case WorkerFactoryBindingCount:
                v18 = (char *)v37;
                v24 = *((_DWORD *)v37 + 101);
                if ( SLODWORD(Src[0]) >= 0 )
                {
                  v25 = v24 + LODWORD(Src[0]);
                  if ( v24 >= v24 + LODWORD(Src[0]) )
                  {
                    *((_DWORD *)v37 + 101) = -1;
                    v25 = -1;
                  }
                  else
                  {
                    *((_DWORD *)v37 + 101) = v25;
                  }
                }
                else if ( v24 > -LODWORD(Src[0]) )
                {
                  v25 = v24 + LODWORD(Src[0]);
                  *((_DWORD *)v37 + 101) = v24 + LODWORD(Src[0]);
                }
                else
                {
                  *((_DWORD *)v37 + 101) = 0;
                  v25 = 0;
                }
                if ( v24 )
                {
                  if ( !v25 && (*((_DWORD *)v18 + 102) & 0x200) != 0 )
                    ExpLeaveWorkerFactoryAwayMode(v18);
                }
                else if ( v25 && (unsigned __int8)ExpTryEnterWorkerFactoryAwayMode(v18) )
                {
                  ExpWorkerFactoryCheckCreate(v18, &Size_4);
                  v21 = 0;
                  goto LABEL_35;
                }
                goto LABEL_34;
              case WorkerFactoryThreadMinimum:
                v18 = (char *)v37;
                if ( *(_BYTE *)(*((_QWORD *)v37 + 2) + 33LL) )
                  goto LABEL_80;
                v30 = Src[0];
                v14 = LODWORD(Src[0]) > *((_DWORD *)v37 + 94);
                *((_DWORD *)v37 + 94) = Src[0];
                if ( *((_DWORD *)v18 + 95) < v30 )
                  *((_DWORD *)v18 + 95) = v30;
                if ( !v14 )
                {
                  v22 = 0;
                  goto LABEL_68;
                }
                v14 = 0;
                if ( (*((_DWORD *)v18 + 102) & 0x200) != 0 )
                  ExpLeaveWorkerFactoryAwayMode(v18);
                do
                {
                  if ( (unsigned int)(*((_DWORD *)v18 + 96) + *((_DWORD *)v18 + 98)) >= *((_DWORD *)v18 + 94) )
                    goto LABEL_34;
                  ++*((_DWORD *)v18 + 100);
                  KeReleaseInStackQueuedSpinLock(&Size_4);
                  Thread = ExpWorkerFactoryCreateThread((__int64)v18);
                  KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v18 + 2), &Size_4);
                }
                while ( Thread >= 0 );
                --*((_DWORD *)v18 + 100);
                goto LABEL_34;
              case WorkerFactoryThreadMaximum:
                v18 = (char *)v37;
                v28 = *((_QWORD *)v37 + 2);
                if ( *(_BYTE *)(v28 + 33) )
                {
LABEL_80:
                  Thread = 128;
                  goto LABEL_34;
                }
                v22 = 1;
                v29 = Src[0];
                if ( LODWORD(Src[0])
                  && (!*((_DWORD *)v37 + 95) && *(_DWORD *)(v28 + 24) || *(int *)(*(_QWORD *)(v28 + 8) + 4LL) > 0) )
                {
                  v14 = 1;
                }
                *((_DWORD *)v37 + 95) = Src[0];
                if ( v29 < *((_DWORD *)v18 + 94) )
                {
                  *((_DWORD *)v18 + 94) = v29;
                  v21 = 1;
                }
                else
                {
LABEL_68:
                  v21 = 1;
                }
                break;
              default:
                __fastfail(0x25u);
            }
            goto LABEL_36;
          }
          v18 = (char *)v37;
          *((_DWORD *)v37 + 102) = *((_DWORD *)v37 + 102) & 0xFFFFF7FF | ((Src[0] & 1) << 11);
        }
LABEL_34:
        v21 = 1;
        goto LABEL_35;
      }
      v32 = v37;
      v33 = Src[0];
      if ( !LODWORD(Src[0]) )
      {
        v33 = KeNumberProcessors_0;
        v32 = v37;
      }
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v37 + 2) + 8LL) + 44LL) = v33;
      ObfDereferenceObjectWithTag(v32, 0x746C6644u);
      return 0;
    }
  }
  else
  {
    switch ( WorkerFactoryInformationClass )
    {
      case WorkerFactoryIdleTimeout:
        v9 = 8;
        goto LABEL_3;
      case WorkerFactoryBindingCount:
      case WorkerFactoryThreadMinimum:
      case WorkerFactoryThreadMaximum:
      case WorkerFactoryAdjustThreadGoal:
      case WorkerFactoryCallbackType:
      case WorkerFactoryTimeoutWaiters:
      case WorkerFactoryFlags:
      case WorkerFactoryThreadSoftMaximum:
        goto LABEL_2;
      case WorkerFactoryPaused:
        result = -1073741822;
        break;
      case WorkerFactoryStackInformation:
        v9 = 16;
        goto LABEL_3;
      case WorkerFactoryThreadCpuSets:
        if ( WorkerFactoryInformationLength >= 0x100 )
          v9 = 256;
        else
          v9 = WorkerFactoryInformationLength + (WorkerFactoryInformationLength & 7);
        goto LABEL_3;
      default:
        result = -1073741821;
        break;
    }
  }
  return result;
}
