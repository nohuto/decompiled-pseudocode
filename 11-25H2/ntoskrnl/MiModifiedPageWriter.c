/*
 * XREFs of MiModifiedPageWriter @ 0x1403BFEE0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     IoBoostThreadIoPriority @ 0x140326240 (IoBoostThreadIoPriority.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     KeQueryPriorityThread @ 0x140375500 (KeQueryPriorityThread.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x1403BF26C (MiMakePagefileWriterEntryAvailable.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1403C056C (MiStoreCheckCompleteWriteBatch.c)
 *     MiCheckFreeModifiedReservations @ 0x1403C0654 (MiCheckFreeModifiedReservations.c)
 *     MiGatherPagefilePages @ 0x1403C0730 (MiGatherPagefilePages.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403C1B60 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1403C1F98 (MiUseLowIoPriorityForModifiedPages.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

int __fastcall MiModifiedPageWriter(__int64 *a1)
{
  __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 *v4; // r14
  __int64 *v5; // rax
  __int64 *v6; // rbx
  bool v7; // zf
  struct _KEVENT *v8; // r15
  struct _KTIMER *v9; // r14
  NTSTATUS v10; // eax
  __int64 *v11; // rdx
  __int64 **v12; // r12
  int v13; // eax
  int v14; // r15d
  int v15; // ecx
  __int64 *v16; // r14
  __int64 *v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // r10
  __int64 v21; // r11
  unsigned __int8 v22; // al
  unsigned int v23; // r9d
  __int64 i; // rax
  _QWORD *v25; // rcx
  char *v26; // rax
  $727077A9B6E167EAE1398C74674DC5A5 *v27; // rax
  __int64 *v28; // r14
  char *v29; // r13
  unsigned int v30; // r15d
  __int64 v31; // rax
  _QWORD *v32; // r12
  signed __int32 v34[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v35; // [rsp+48h] [rbp-C0h]
  __int64 *v36; // [rsp+50h] [rbp-B8h]
  PVOID Object[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v39[6]; // [rsp+C8h] [rbp-40h] BYREF
  struct _KWAIT_BLOCK v40; // [rsp+F8h] [rbp-10h] BYREF

  v1 = *a1;
  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned __int64 *)(*a1 + 1088);
  --CurrentThread->SpecialApcDisable;
  v5 = KeAbPreAcquire((__int64)v4, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( *(_QWORD *)(v1 + 992) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4);
    LODWORD(v27) = KeAbPostRelease((ULONG_PTR)v4);
    v7 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v7 )
    {
      v27 = &CurrentThread->152;
      if ( ($727077A9B6E167EAE1398C74674DC5A5 *)v27->ApcState.ApcListHead[0].Flink != v27 )
        LODWORD(v27) = KiCheckForKernelApcDelivery();
    }
  }
  else
  {
    *(_QWORD *)(v1 + 992) = CurrentThread;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    v7 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v7 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
    LODWORD(v35) = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 18);
    _InterlockedExchange64((volatile __int64 *)(v1 + 1000), 0LL);
    Object[1] = (PVOID)(v1 + 784);
    v8 = (struct _KEVENT *)(v1 + 928);
    Object[0] = (PVOID)(v1 + 88);
    v39[2] = (PVOID)(v1 + 968);
    v9 = (struct _KTIMER *)(v1 + 1240);
    v39[0] = (PVOID)(v1 + 88);
    v39[3] = (PVOID)(v1 + 744);
    v39[4] = (PVOID)(v1 + 1056);
    v39[1] = (PVOID)(v1 + 928);
    v39[5] = (PVOID)(v1 + 1240);
LABEL_12:
    *(_QWORD *)(v1 + 888) = 0LL;
    *(_DWORD *)(v1 + 896) = 0;
    *(_BYTE *)(v1 + 722) = 0;
    MiStoreCheckCompleteWriteBatch(v1);
    v10 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, 0, 0, 0LL, &WaitBlockArray);
    *(_BYTE *)(v1 + 722) = 1;
    if ( v10 )
    {
      while ( !*(_DWORD *)(v1 + 92) )
      {
        if ( !*(_QWORD *)(v1 + 19616) )
          goto LABEL_12;
        --CurrentThread->SpecialApcDisable;
        MiStoreCheckCompleteWriteBatch(v1);
        v12 = (__int64 **)(v1 + 952);
        if ( *v12 == (__int64 *)v12 )
        {
          *(_BYTE *)(v1 + 721) = 1;
          v7 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v7
            && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          if ( !KeWaitForMultipleObjects(6u, v39, WaitAny, WrPageOut, 0, 0, 0LL, &v40) )
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
          KeSetEvent(v8, 0, 0);
          KeCancelTimer(v9);
          *(_QWORD *)&v9->Header.Lock = 0LL;
          v9->Header.Type = 8;
          v9->Header.WaitListHead.Blink = &v9->Header.WaitListHead;
          v9->Header.WaitListHead.Flink = &v9->Header.WaitListHead;
          v9->DueTime.QuadPart = 0LL;
          v9->Period = 0;
          v9->Processor = 0;
        }
        if ( *(_DWORD *)(v1 + 932) )
        {
          KeResetEvent(v8);
          _InterlockedOr(v34, 0);
          v19 = *(_DWORD *)(v1 + 18520);
          if ( v19 )
          {
            v11 = (__int64 *)(v1 + 18528);
            v20 = v19;
            v21 = 1LL;
            do
            {
              v22 = *(_BYTE *)(*v11 + 174);
              if ( (v22 & (unsigned __int8)v21) != 0 )
              {
                v23 = 0;
                *(_BYTE *)(*v11 + 174) = v22 & 0xFE;
                for ( i = *v11; v23 < *(_DWORD *)(*v11 + 40); v23 += v21 )
                {
                  v25 = *(_QWORD **)(*(_QWORD *)(i + 32) + 8LL * v23);
                  if ( v25 && *v25 == 2575857425LL )
                    MiMakePagefileWriterEntryAvailable(v25);
                  i = *v11;
                }
              }
              ++v11;
              v20 -= v21;
            }
            while ( v20 );
          }
        }
        if ( *(_DWORD *)(v1 + 1060) )
        {
          KeResetEvent((PRKEVENT)(v1 + 1056));
          MiStoreUpdateMemoryConditions(v1);
        }
        if ( *v12 == (__int64 *)v12 )
        {
          v7 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v7
            && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        else
        {
          v13 = *(_DWORD *)(v1 + 1200);
          if ( (v13 & 1) != 0
            && (v13 & 0xFFFFFFFE) == 0
            && _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 1200), 0, 1) == 1 )
          {
            v7 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v7
              && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            KeResetEvent((PRKEVENT)(v1 + 784));
            goto LABEL_12;
          }
          if ( (unsigned int)MiUseLowIoPriorityForModifiedPages(v1, v11, 0LL) )
          {
            if ( *(_QWORD *)(v1 + 19616) < *(_QWORD *)(v1 + 776) )
            {
              v7 = CurrentThread->SpecialApcDisable++ == -1;
              if ( v7
                && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
              {
                KiCheckForKernelApcDelivery();
              }
              goto LABEL_12;
            }
            *(_DWORD *)(v1 + 768) = 4;
            v14 = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 4);
            v15 = 0;
          }
          else
          {
            if ( *(_DWORD *)(v1 + 740) )
              IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
            v14 = -1;
            v15 = 8;
          }
          v16 = *v12;
          if ( (__int64 **)(*v12)[1] != v12 || (v17 = (__int64 *)*v16, *(__int64 **)(*v16 + 8) != v16) )
            __fastfail(3u);
          *v12 = v17;
          v17[1] = (__int64)v12;
          v18 = v16[5] & 0xFFFFFFE3;
          *v16 = 97LL;
          *((_DWORD *)v16 + 10) = v15 | v18;
          v7 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v7
            && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          v16[12] = (__int64)(v16 + 13);
          MiGatherPagefilePages(v16);
          if ( v14 != -1 )
          {
            if ( KeQueryPriorityThread(CurrentThread) != 18 )
              KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v14);
            *(_DWORD *)(v1 + 768) = 18;
          }
          MiCheckFreeModifiedReservations(v1);
          v9 = (struct _KTIMER *)(v1 + 1240);
          v8 = (struct _KEVENT *)(v1 + 928);
        }
      }
    }
    if ( *(_DWORD *)(v1 + 740) )
      IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v1 + 1000));
    v26 = (char *)*(unsigned int *)(v1 + 18520);
    if ( (_DWORD)v26 )
    {
      v28 = (__int64 *)(v1 + 18528);
      Object[0] = (PVOID)*(unsigned int *)(v1 + 18520);
      v36 = (__int64 *)(v1 + 18528);
      v29 = v26;
      do
      {
        if ( *v28 )
        {
          --CurrentThread->SpecialApcDisable;
          v30 = 0;
          v31 = *v28;
          if ( *(_DWORD *)(*v28 + 40) )
          {
            do
            {
              v32 = *(_QWORD **)(*(_QWORD *)(v31 + 32) + 8LL * v30);
              if ( v32 )
              {
                while ( *v32 == 97LL )
                {
                  *(_BYTE *)(v1 + 721) = 1;
                  v7 = CurrentThread->SpecialApcDisable++ == -1;
                  if ( v7
                    && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
                  {
                    KiCheckForKernelApcDelivery();
                  }
                  KeWaitForSingleObject((PVOID)(v1 + 968), WrPageOut, 0, 0, 0LL);
                  --CurrentThread->SpecialApcDisable;
                }
                v28 = v36;
              }
              v31 = *v28;
              ++v30;
            }
            while ( v30 < *(_DWORD *)(*v28 + 40) );
            v29 = (char *)Object[0];
          }
          v7 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v7
            && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        ++v28;
        --v29;
        v36 = v28;
        Object[0] = v29;
      }
      while ( v29 );
    }
    KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v35);
    LODWORD(v27) = KeSetEvent((PRKEVENT)(v1 + 808), 0, 0);
  }
  return (int)v27;
}
