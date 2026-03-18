/*
 * XREFs of NtSetInformationWorkerFactory @ 0x140204420
 * Callers:
 *     <none>
 * Callees:
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140205A00 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCreateThread @ 0x1402462F8 (ExpWorkerFactoryCreateThread.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1403BEA00 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1403BEB10 (ExpWorkerFactoryCheckCreate.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     KiValidateCpuSetMasks @ 0x1403C8288 (KiValidateCpuSetMasks.c)
 *     KeTimeOutQueueWaiters @ 0x1403D7DA0 (KeTimeOutQueueWaiters.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x140476DBC (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExSystemExceptionFilter @ 0x1407B6F80 (ExSystemExceptionFilter.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall NtSetInformationWorkerFactory(HANDLE Handle, int a2, unsigned __int64 a3, unsigned int a4)
{
  KPROCESSOR_MODE PreviousMode; // di
  int v9; // r8d
  int v10; // eax
  __int64 v11; // rcx
  NTSTATUS result; // eax
  __int64 v13; // r8
  int Thread; // r14d
  bool v15; // r12
  unsigned __int64 *v16; // rdi
  unsigned __int8 CurrentIrql; // r13
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
  PVOID Object; // [rsp+30h] [rbp-188h] BYREF
  int Size; // [rsp+3Ch] [rbp-17Ch]
  struct _KLOCK_QUEUE_HANDLE Size_4; // [rsp+40h] [rbp-178h] BYREF
  __int128 v38; // [rsp+60h] [rbp-158h] BYREF
  _OWORD Src[16]; // [rsp+70h] [rbp-148h] BYREF

  memset(&Size_4, 0, sizeof(Size_4));
  v38 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset_0(Src, 0, sizeof(Src));
  if ( a2 == 11 )
  {
LABEL_2:
    v9 = 4;
LABEL_3:
    Size = v9;
    if ( a4 != v9 )
      return -1073741820;
    if ( a2 == 9 )
    {
      if ( PreviousMode && (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
LABEL_7:
      v10 = *(_DWORD *)a3;
    }
    else
    {
      switch ( a2 )
      {
        case 2:
          if ( PreviousMode && (a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_QWORD *)&Src[0] = *(_QWORD *)a3;
          goto LABEL_20;
        case 3:
        case 4:
        case 5:
          if ( !PreviousMode )
            goto LABEL_7;
          v11 = 0x7FFFFFFF0000LL;
          if ( a3 < 0x7FFFFFFF0000LL )
            v11 = a3;
          v10 = *(_DWORD *)v11;
          break;
        default:
          __fastfail(0x25u);
      }
    }
    LODWORD(Src[0]) = v10;
LABEL_20:
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 4u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
    if ( result >= 0 )
    {
      if ( a2 != 8 )
      {
        Thread = 0;
        v15 = 0;
        v16 = (unsigned __int64 *)*((_QWORD *)Object + 2);
        Size_4.LockQueue.Lock = v16;
        Size_4.LockQueue.Next = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, v13);
        Size_4.OldIrql = CurrentIrql;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( _InterlockedExchange64((volatile __int64 *)v16, (__int64)&Size_4) )
            KxWaitForLockOwnerShip(&Size_4);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(&Size_4, v16);
        }
        if ( a2 == 9 )
        {
          v18 = (char *)Object;
          switch ( LODWORD(Src[0]) )
          {
            case 2:
              v19 = *((_DWORD *)Object + 96);
              if ( v19 )
              {
                v20 = v19 - 1;
                *((_DWORD *)Object + 96) = v20;
                if ( !v20 )
                {
LABEL_31:
                  v15 = 1;
                  v21 = 1;
LABEL_35:
                  v22 = 0;
LABEL_36:
                  if ( v15 )
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
                        Thread = ExpWorkerFactoryCreateThread(v18);
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
              v23 = *((_DWORD *)Object + 96);
              v21 = 1;
              if ( v23 == *((_DWORD *)Object + 97) )
                Thread = -1073741823;
              else
                *((_DWORD *)Object + 96) = v23 + 1;
              goto LABEL_35;
            case 1:
              goto LABEL_31;
            case 3:
              if ( *((_DWORD *)Object + 96) )
              {
                ExpRemoveCurrentThreadFromThreadHistory(Object);
                v34 = *((_DWORD *)v18 + 96) - 1;
                *((_DWORD *)v18 + 96) = v34;
                --*((_DWORD *)v18 + 97);
                v15 = v34 == 0;
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
          if ( a2 != 13 )
          {
            switch ( a2 )
            {
              case 2:
                v18 = (char *)Object;
                if ( *(_BYTE *)(*((_QWORD *)Object + 2) + 33LL) )
                  goto LABEL_80;
                v31 = *(_QWORD *)&Src[0];
                if ( *(__int64 *)&Src[0] >= 0 )
                  goto LABEL_101;
                if ( *(__int64 *)&Src[0] > -10000000 )
                  v31 = -10000000LL;
                if ( v31 < -6000000000LL )
                  v31 = -6000000000LL;
                *((_QWORD *)Object + 14) = v31;
                *((_QWORD *)&v38 + 1) = -1LL;
                KeSetTimer2(v18 + 424, v31, -v31, &v38);
                goto LABEL_34;
              case 3:
                v18 = (char *)Object;
                v24 = *((_DWORD *)Object + 101);
                if ( SLODWORD(Src[0]) >= 0 )
                {
                  v25 = v24 + LODWORD(Src[0]);
                  if ( v24 >= v24 + LODWORD(Src[0]) )
                  {
                    *((_DWORD *)Object + 101) = -1;
                    v25 = -1;
                  }
                  else
                  {
                    *((_DWORD *)Object + 101) = v25;
                  }
                }
                else if ( v24 > -LODWORD(Src[0]) )
                {
                  v25 = v24 + LODWORD(Src[0]);
                  *((_DWORD *)Object + 101) = v24 + LODWORD(Src[0]);
                }
                else
                {
                  *((_DWORD *)Object + 101) = 0;
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
              case 4:
                v18 = (char *)Object;
                if ( *(_BYTE *)(*((_QWORD *)Object + 2) + 33LL) )
                  goto LABEL_80;
                v30 = Src[0];
                v15 = LODWORD(Src[0]) > *((_DWORD *)Object + 94);
                *((_DWORD *)Object + 94) = Src[0];
                if ( *((_DWORD *)v18 + 95) < v30 )
                  *((_DWORD *)v18 + 95) = v30;
                if ( !v15 )
                {
                  v22 = 0;
                  goto LABEL_68;
                }
                v15 = 0;
                if ( (*((_DWORD *)v18 + 102) & 0x200) != 0 )
                  ExpLeaveWorkerFactoryAwayMode(v18);
                do
                {
                  if ( (unsigned int)(*((_DWORD *)v18 + 96) + *((_DWORD *)v18 + 98)) >= *((_DWORD *)v18 + 94) )
                    goto LABEL_34;
                  ++*((_DWORD *)v18 + 100);
                  KeReleaseInStackQueuedSpinLock(&Size_4);
                  Thread = ExpWorkerFactoryCreateThread(v18);
                  KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v18 + 2), &Size_4);
                }
                while ( Thread >= 0 );
                --*((_DWORD *)v18 + 100);
                goto LABEL_34;
              case 5:
                v18 = (char *)Object;
                v28 = *((_QWORD *)Object + 2);
                if ( *(_BYTE *)(v28 + 33) )
                {
LABEL_80:
                  Thread = 128;
                  goto LABEL_34;
                }
                v22 = 1;
                v29 = Src[0];
                if ( LODWORD(Src[0])
                  && (!*((_DWORD *)Object + 95) && *(_DWORD *)(v28 + 24) || *(int *)(*(_QWORD *)(v28 + 8) + 4LL) > 0) )
                {
                  v15 = 1;
                }
                *((_DWORD *)Object + 95) = Src[0];
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
          v18 = (char *)Object;
          *((_DWORD *)Object + 102) = *((_DWORD *)Object + 102) & 0xFFFFF7FF | ((Src[0] & 1) << 11);
        }
LABEL_34:
        v21 = 1;
        goto LABEL_35;
      }
      v32 = Object;
      v33 = Src[0];
      if ( !LODWORD(Src[0]) )
      {
        v33 = KeNumberProcessors_0;
        v32 = Object;
      }
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL) + 44LL) = v33;
      ObfDereferenceObjectWithTag(v32, 0x746C6644u);
      return 0;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 2:
        v9 = 8;
        goto LABEL_3;
      case 3:
      case 4:
      case 5:
      case 8:
      case 9:
      case 12:
      case 13:
      case 14:
        goto LABEL_2;
      case 6:
        result = -1073741822;
        break;
      case 10:
        v9 = 16;
        goto LABEL_3;
      case 15:
        if ( a4 >= 0x100 )
          v9 = 256;
        else
          v9 = a4 + (a4 & 7);
        goto LABEL_3;
      default:
        result = -1073741821;
        break;
    }
  }
  return result;
}
