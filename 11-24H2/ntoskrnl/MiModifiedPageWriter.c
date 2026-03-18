/*
 * XREFs of MiModifiedPageWriter @ 0x1402CF990
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     KeQueryPriorityThread @ 0x140248260 (KeQueryPriorityThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     IoBoostThreadIoPriority @ 0x140278D90 (IoBoostThreadIoPriority.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1402D001C (MiStoreCheckCompleteWriteBatch.c)
 *     MiCheckFreeModifiedReservations @ 0x1402D00FC (MiCheckFreeModifiedReservations.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402D10D4 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1402D1508 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x1402D1954 (MiMakePagefileWriterEntryAvailable.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiGatherPagefilePages @ 0x14039C8C8 (MiGatherPagefilePages.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

int __fastcall MiModifiedPageWriter(__int64 *a1)
{
  __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  volatile signed __int32 *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  bool v9; // zf
  struct _KEVENT *v10; // r15
  struct _KTIMER *v11; // r14
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 **v15; // r12
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r15d
  __int64 v21; // rcx
  __int64 *v22; // r14
  __int64 *v23; // rax
  unsigned int v24; // eax
  __int64 v25; // r8
  unsigned int v26; // eax
  __int64 v27; // r10
  __int64 v28; // r11
  unsigned __int8 v29; // al
  unsigned int v30; // r9d
  __int64 i; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  char *v35; // rax
  $81B80DCEA5A02D890AB7B2872B48AC01 *v36; // rax
  __int64 *v37; // r14
  char *v38; // r13
  __int64 v39; // rdx
  unsigned int v40; // r15d
  __int64 v41; // rax
  _QWORD *v42; // r12
  signed __int32 v44[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v45; // [rsp+48h] [rbp-C0h]
  __int64 *v46; // [rsp+50h] [rbp-B8h]
  PVOID Object[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v49[6]; // [rsp+C8h] [rbp-40h] BYREF
  struct _KWAIT_BLOCK v50; // [rsp+F8h] [rbp-10h] BYREF

  v1 = *a1;
  CurrentThread = KeGetCurrentThread();
  v4 = (volatile signed __int32 *)(*a1 + 1088);
  --CurrentThread->SpecialApcDisable;
  v5 = KeAbPreAcquire(v4, 0LL, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64(v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, v4);
  if ( v6 )
    *(_BYTE *)(v6 + 10) = 1;
  KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( *(_QWORD *)(v1 + 992) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    LODWORD(v36) = KeAbPostRelease((ULONG_PTR)v4);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 )
    {
      v36 = &CurrentThread->152;
      if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v36->ApcState.ApcListHead[0].Flink != v36 )
        LODWORD(v36) = KiCheckForKernelApcDelivery(1LL, v39);
    }
  }
  else
  {
    *(_QWORD *)(v1 + 992) = CurrentThread;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((ULONG_PTR)v4);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(1LL, v7);
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
    LODWORD(v45) = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 18, v8);
    _InterlockedExchange64((volatile __int64 *)(v1 + 1000), 0LL);
    Object[1] = (PVOID)(v1 + 784);
    v10 = (struct _KEVENT *)(v1 + 928);
    Object[0] = (PVOID)(v1 + 88);
    v49[2] = (PVOID)(v1 + 968);
    v11 = (struct _KTIMER *)(v1 + 1240);
    v49[0] = (PVOID)(v1 + 88);
    v49[3] = (PVOID)(v1 + 744);
    v49[4] = (PVOID)(v1 + 1056);
    v49[1] = (PVOID)(v1 + 928);
    v49[5] = (PVOID)(v1 + 1240);
LABEL_10:
    *(_QWORD *)(v1 + 888) = 0LL;
    *(_DWORD *)(v1 + 896) = 0;
    *(_BYTE *)(v1 + 722) = 0;
    MiStoreCheckCompleteWriteBatch(v1);
    v12 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, 0, 0, 0LL, &WaitBlockArray);
    *(_BYTE *)(v1 + 722) = 1;
    if ( v12 )
    {
      while ( !*(_DWORD *)(v1 + 92) )
      {
        if ( !*(_QWORD *)(v1 + 19616) )
          goto LABEL_10;
        --CurrentThread->SpecialApcDisable;
        MiStoreCheckCompleteWriteBatch(v1);
        v15 = (__int64 **)(v1 + 952);
        if ( *v15 == (__int64 *)v15 )
        {
          *(_BYTE *)(v1 + 721) = 1;
          v9 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v9
            && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v14, v13);
          }
          if ( !KeWaitForMultipleObjects(6u, v49, WaitAny, WrPageOut, 0, 0, 0LL, &v50) )
            break;
          --CurrentThread->SpecialApcDisable;
          *(_BYTE *)(v1 + 721) = 0;
        }
        if ( *(_DWORD *)(v1 + 748) )
        {
          KeResetEvent((PRKEVENT)(v1 + 744));
          if ( *(_DWORD *)(v1 + 740) )
            IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
        }
        if ( *(_BYTE *)(v1 + 1244) )
        {
          *(_DWORD *)(v1 + 1232) = 0;
          KeSetEvent(v10, 0, 0);
          KeCancelTimer(v11);
          *(_QWORD *)&v11->Header.Lock = 0LL;
          v11->Header.Type = 8;
          v11->Header.WaitListHead.Blink = &v11->Header.WaitListHead;
          v11->Header.WaitListHead.Flink = &v11->Header.WaitListHead;
          v11->DueTime.QuadPart = 0LL;
          v11->Period = 0;
          v11->Processor = 0;
        }
        if ( *(_DWORD *)(v1 + 932) )
        {
          KeResetEvent(v10);
          _InterlockedOr(v44, 0);
          v26 = *(_DWORD *)(v1 + 18520);
          if ( v26 )
          {
            v13 = v1 + 18528;
            v27 = v26;
            v28 = 1LL;
            do
            {
              v14 = *(_QWORD *)v13;
              v29 = *(_BYTE *)(*(_QWORD *)v13 + 174LL);
              if ( (v29 & (unsigned __int8)v28) != 0 )
              {
                v30 = 0;
                *(_BYTE *)(v14 + 174) = v29 & 0xFE;
                for ( i = *(_QWORD *)v13; v30 < *(_DWORD *)(*(_QWORD *)v13 + 40LL); v30 += v28 )
                {
                  v14 = *(_QWORD *)(*(_QWORD *)(i + 32) + 8LL * v30);
                  if ( v14 && *(_QWORD *)v14 == 2575857425LL )
                    MiMakePagefileWriterEntryAvailable();
                  i = *(_QWORD *)v13;
                }
              }
              v13 += 8LL;
              v27 -= v28;
            }
            while ( v27 );
          }
        }
        if ( *(_DWORD *)(v1 + 1060) )
        {
          KeResetEvent((PRKEVENT)(v1 + 1056));
          MiStoreUpdateMemoryConditions(v1);
        }
        if ( *v15 == (__int64 *)v15 )
        {
          v9 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v9
            && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v14, v13);
          }
        }
        else
        {
          v16 = *(_DWORD *)(v1 + 1200);
          if ( (v16 & 1) != 0
            && (v16 & 0xFFFFFFFE) == 0
            && _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 1200), 0, 1) == 1 )
          {
            v9 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v9
              && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(1LL, v13);
            }
            KeResetEvent((PRKEVENT)(v1 + 784));
            goto LABEL_10;
          }
          if ( (unsigned int)MiUseLowIoPriorityForModifiedPages(v1, v13, 0LL) )
          {
            if ( *(_QWORD *)(v1 + 19616) < *(_QWORD *)(v1 + 776) )
            {
              v9 = CurrentThread->SpecialApcDisable++ == -1;
              if ( v9
                && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
              {
                KiCheckForKernelApcDelivery(v18, v17);
              }
              goto LABEL_10;
            }
            *(_DWORD *)(v1 + 768) = 4;
            v20 = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 4, v19);
            v21 = 0LL;
          }
          else
          {
            if ( *(_DWORD *)(v1 + 740) )
              IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
            v20 = -1;
            v21 = 8LL;
          }
          v22 = *v15;
          if ( (__int64 **)(*v15)[1] != v15 || (v23 = (__int64 *)*v22, *(__int64 **)(*v22 + 8) != v22) )
            __fastfail(3u);
          *v15 = v23;
          v23[1] = (__int64)v15;
          v24 = v22[5] & 0xFFFFFFE3;
          *v22 = 97LL;
          *((_DWORD *)v22 + 10) = v21 | v24;
          v9 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v9
            && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v21, v17);
          }
          v22[12] = (__int64)(v22 + 13);
          MiGatherPagefilePages(v22);
          if ( v20 != -1 )
          {
            if ( KeQueryPriorityThread(CurrentThread) != 18 )
              KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v20, v25);
            *(_DWORD *)(v1 + 768) = 18;
          }
          MiCheckFreeModifiedReservations(v1);
          v11 = (struct _KTIMER *)(v1 + 1240);
          v10 = (struct _KEVENT *)(v1 + 928);
        }
      }
    }
    if ( *(_DWORD *)(v1 + 740) )
      IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v1 + 1000));
    v35 = (char *)*(unsigned int *)(v1 + 18520);
    if ( (_DWORD)v35 )
    {
      v37 = (__int64 *)(v1 + 18528);
      Object[0] = (PVOID)*(unsigned int *)(v1 + 18520);
      v46 = (__int64 *)(v1 + 18528);
      v38 = v35;
      do
      {
        if ( *v37 )
        {
          --CurrentThread->SpecialApcDisable;
          v40 = 0;
          v41 = *v37;
          if ( *(_DWORD *)(*v37 + 40) )
          {
            do
            {
              v33 = v40;
              v42 = *(_QWORD **)(*(_QWORD *)(v41 + 32) + 8LL * v40);
              if ( v42 )
              {
                while ( *v42 == 97LL )
                {
                  *(_BYTE *)(v1 + 721) = 1;
                  v9 = CurrentThread->SpecialApcDisable++ == -1;
                  if ( v9
                    && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
                  {
                    KiCheckForKernelApcDelivery(v33, v32);
                  }
                  KeWaitForSingleObject((PVOID)(v1 + 968), WrPageOut, 0, 0, 0LL);
                  --CurrentThread->SpecialApcDisable;
                }
                v37 = v46;
              }
              v41 = *v37;
              ++v40;
            }
            while ( v40 < *(_DWORD *)(*v37 + 40) );
            v38 = (char *)Object[0];
          }
          v9 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v9
            && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v33, v32);
          }
        }
        ++v37;
        --v38;
        v46 = v37;
        Object[0] = v38;
      }
      while ( v38 );
    }
    KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v45, v34);
    LODWORD(v36) = KeSetEvent((PRKEVENT)(v1 + 808), 0, 0);
  }
  return (int)v36;
}
