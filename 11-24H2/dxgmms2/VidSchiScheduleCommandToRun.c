/*
 * XREFs of VidSchiScheduleCommandToRun @ 0x140018790
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1400B68B0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     VidSchiProfilePerformanceTick @ 0x140015D90 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1400171A0 (-VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x140017290 (-VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z.c)
 *     ?VidSchiCheckOutstandingControlEvent@@YAHPEAU_VIDSCH_GLOBAL@@@Z @ 0x140018EF0 (-VidSchiCheckOutstandingControlEvent@@YAHPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x140018F34 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiSwitchContextWithCheck @ 0x1400193A0 (VidSchiSwitchContextWithCheck.c)
 *     ?VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x140019F10 (-VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiUpdateContextStatus @ 0x14001AC80 (VidSchiUpdateContextStatus.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x14001FBBC (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1400240F4 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiStartNodeYield @ 0x1400242C8 (VidSchiStartNodeYield.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x140033300 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmAddPendingTermination@@YAXPEAUVIDMM_ALLOC@@@Z @ 0x1400337E4 (-VidMmAddPendingTermination@@YAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiCheckHwProgress @ 0x1400B5C20 (VidSchiCheckHwProgress.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1400B633C (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiWaitForSchedulerEvents @ 0x140115A90 (VidSchiWaitForSchedulerEvents.c)
 */

__int64 __fastcall VidSchiScheduleCommandToRun(struct _VIDSCH_GLOBAL *a1, _BYTE *a2)
{
  int v4; // r12d
  __int64 v5; // rsi
  __int64 v6; // rcx
  struct _VIDSCH_GLOBAL *v7; // r10
  _QWORD **v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD **v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  struct _VIDSCH_GLOBAL *v14; // r8
  struct _VIDSCH_GLOBAL **v15; // rdx
  struct _VIDSCH_CONTEXT *v16; // rdi
  __int64 v17; // rax
  struct _VIDSCH_NODE *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  CCHAR v22; // al
  int v23; // r14d
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // r14
  struct _VIDSCH_CONTEXT *v27; // rdx
  bool v28; // zf
  char *v29; // rdx
  int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // eax
  int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v38; // ecx
  CCHAR MostSignificantBit; // al
  struct _VIDSCH_GLOBAL *v40; // rsi
  _QWORD *v41; // r10
  __int64 v42; // rdx
  _QWORD *v43; // rax
  CCHAR v44; // al
  LARGE_INTEGER v45; // r14
  unsigned int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // r9
  LARGE_INTEGER v49; // r14
  unsigned int v50; // edx
  __int64 v51; // rcx
  __int64 v52; // r9
  struct _KLOCK_QUEUE_HANDLE v53; // [rsp+40h] [rbp-69h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-51h] BYREF
  struct _VIDSCH_NODE *v55; // [rsp+70h] [rbp-39h] BYREF
  __int128 v56; // [rsp+78h] [rbp-31h]
  __int64 v57; // [rsp+88h] [rbp-21h]
  __int128 v58; // [rsp+90h] [rbp-19h]
  __int64 v59; // [rsp+A0h] [rbp-9h]
  __int128 v60; // [rsp+A8h] [rbp-1h]
  __int64 v61; // [rsp+B8h] [rbp+Fh]
  char v62; // [rsp+110h] [rbp+67h] BYREF
  char v63; // [rsp+118h] [rbp+6Fh] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+120h] [rbp+77h] BYREF
  union _LARGE_INTEGER v65; // [rsp+128h] [rbp+7Fh] BYREF

  *a2 = 0;
  memset(&v53, 0, sizeof(v53));
  v62 = 0;
  v4 = 1;
  while ( 1 )
  {
    if ( (unsigned int)(*((_DWORD *)a1 + 811) - 2) > 1 )
    {
      v5 = 0LL;
      if ( !(unsigned int)VidSchiCheckHwProgress(a1, &v62) )
        break;
    }
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 252, &LockHandle);
    v7 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 256);
    if ( v7 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 2048) )
    {
      do
      {
        v40 = *(struct _VIDSCH_GLOBAL **)v7;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v6, (char *)v7 - 216) )
        {
          v42 = *v41;
          if ( *(_QWORD **)(*v41 + 8LL) != v41 )
            goto LABEL_20;
          v43 = (_QWORD *)v41[1];
          if ( (_QWORD *)*v43 != v41 )
            goto LABEL_20;
          *v43 = v42;
          *(_QWORD *)(v42 + 8) = v43;
          VidMmAddPendingTermination((struct VIDMM_ALLOC *)(v41 - 27));
        }
        v7 = v40;
      }
      while ( v40 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 2048) );
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (unsigned int)VidSchiCheckOutstandingControlEvent(a1) )
    {
      v5 = 0LL;
      goto LABEL_52;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 248, &v53);
    HwQueueStagingList::ProcessHwQueues((struct _VIDSCH_GLOBAL *)((char *)a1 + 272), &v53);
    if ( *((_DWORD *)a1 + 856) || *((_BYTE *)a1 + 3428) )
      VidSchiProcessCrossAdapterSignaledSyncObjects((struct _VIDSCH_GLOBAL *)((char *)a1 + 272));
    if ( *((_BYTE *)a1 + 51) )
    {
      v8 = (_QWORD **)((char *)a1 + 3752);
      while ( 1 )
      {
        v9 = *v8;
        if ( *v8 == v8 )
          break;
        if ( (_QWORD **)v9[1] != v8 )
          goto LABEL_20;
        v10 = (_QWORD *)*v9;
        if ( *(_QWORD **)(*v9 + 8LL) != v9 )
          goto LABEL_20;
        *v8 = v10;
        v10[1] = v8;
        v9[1] = 0LL;
        *v9 = 0LL;
        VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v9 - 5));
      }
      v11 = (_QWORD **)((char *)a1 + 3768);
      while ( 1 )
      {
        v12 = *v11;
        if ( *v11 == v11 )
          goto LABEL_21;
        if ( (_QWORD **)v12[1] != v11 )
          break;
        v13 = (_QWORD *)*v12;
        if ( *(_QWORD **)(*v12 + 8LL) != v12 )
          break;
        *v11 = v13;
        v14 = (struct _VIDSCH_GLOBAL *)(v12 + 19);
        v13[1] = v11;
        *v12 = 0LL;
        v12[1] = 0LL;
        if ( !v12[19] )
        {
          v15 = (struct _VIDSCH_GLOBAL **)*((_QWORD *)a1 + 36);
          if ( *v15 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 280) )
            break;
          *(_QWORD *)v14 = (char *)a1 + 280;
          v12[20] = v15;
          *v15 = v14;
          *((_QWORD *)a1 + 36) = v14;
          *((_BYTE *)a1 + 296) = 0;
        }
      }
LABEL_20:
      __fastfail(3u);
    }
    do
    {
LABEL_21:
      v16 = 0LL;
      v59 = 0LL;
      v58 = 0LL;
      if ( *((_DWORD *)a1 + 194) )
      {
        v17 = *((_QWORD *)a1 + 33);
        if ( v17 && (*(_DWORD *)(v17 + 184) & 1) != 0 )
        {
          v16 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)a1 + 33);
        }
        else
        {
          v18 = VidSchiSelectReadyNode(a1);
          v19 = (__int64)v18;
          if ( v18 )
          {
            if ( *((_DWORD *)v18 + 473) )
            {
              v20 = *((_QWORD *)v18 + 3);
              v63 = 0;
              v57 = 0LL;
              v55 = v18;
              v56 = 0LL;
              DpSynchronizeExecution(
                *(_QWORD *)(v20 + 24),
                VidSchiUpdateNodeRunningTimeAtISR,
                &v55,
                *(unsigned int *)(v20 + 32),
                &v63);
            }
            v21 = *(unsigned int *)(v19 + 1888);
            if ( *(_BYTE *)(v19 + 2144)
              && (v21 & 0xC0000000) == 0
              && (v21 & (0xFFFFFFFFuLL >> (31 - *(_BYTE *)(*(_QWORD *)(v19 + 24) + 216LL)))) != 0 )
            {
              MostSignificantBit = RtlFindMostSignificantBit(v21 & (0xFFFFFFFFuLL >> (31
                                                                                    - *(_BYTE *)(*(_QWORD *)(v19 + 24)
                                                                                               + 216LL))));
              v16 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v19, MostSignificantBit, 1);
              if ( v16 )
              {
                VidSchiUpdateNodeYieldStatus((struct _VIDSCH_NODE *)v19);
              }
              else
              {
                v44 = RtlFindMostSignificantBit(*(unsigned int *)(v19 + 1888));
                v16 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v19, v44, 0);
                if ( !*(_QWORD *)(v19 + 2120) )
                {
                  PerformanceFrequency.QuadPart = 0LL;
                  v45 = KeQueryPerformanceCounter(&PerformanceFrequency);
                  v46 = *(_DWORD *)(*((_QWORD *)v16 + 13) + 504LL);
                  v47 = 0LL;
                  if ( v46 <= *((_DWORD *)a1 + 10) )
                    v47 = v46;
                  v48 = *(unsigned int *)(*((_QWORD *)a1 + v47 + 429) + 83104LL);
                  if ( !(_DWORD)v48 )
                  {
                    WdLogSingleEntry1(3LL, (unsigned int)v47);
                    v48 = 16LL;
                    WdLogGlobalForLineNumber = 18907;
                  }
                  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
                    v19,
                    (LARGE_INTEGER)v45.QuadPart,
                    (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
                    v48);
                }
                VidSchiProfilePerformanceTick(20, (__int64)a1, v19, 0LL, (__int64)v16, 0LL, 0LL, 1LL);
              }
            }
            else
            {
              v22 = RtlFindMostSignificantBit(*(unsigned int *)(v19 + 1888));
              v16 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v19, v22, 0);
              if ( (*((_DWORD *)a1 + 698) & 8) != 0 && *(_BYTE *)(v19 + 2144) && !*(_QWORD *)(v19 + 2120) )
              {
                v65.QuadPart = 0LL;
                v49 = KeQueryPerformanceCounter(&v65);
                v50 = *(_DWORD *)(*((_QWORD *)v16 + 13) + 504LL);
                v51 = 0LL;
                if ( v50 <= *((_DWORD *)a1 + 10) )
                  v51 = v50;
                v52 = *(unsigned int *)(*((_QWORD *)a1 + v51 + 429) + 83104LL);
                if ( !(_DWORD)v52 )
                {
                  WdLogSingleEntry1(3LL, (unsigned int)v51);
                  v52 = 16LL;
                  WdLogGlobalForLineNumber = 18907;
                }
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
                  v19,
                  (LARGE_INTEGER)v49.QuadPart,
                  (union _LARGE_INTEGER)v65.QuadPart,
                  v52);
              }
              VidSchiProfilePerformanceTick(20, (__int64)a1, v19, 0LL, (__int64)v16, 0LL, 0LL, 0LL);
            }
          }
        }
      }
      VidSchiProfilePerformanceTick(2, (__int64)a1, 0LL, 0LL, (__int64)v16, 0LL, 0LL, 0LL);
      if ( !v16 )
      {
        VidSchiLogAggregatedTelemetry(a1);
        HwQueueStagingList::ProcessHwQueues((struct _VIDSCH_GLOBAL *)((char *)a1 + 272), &v53);
        KeReleaseInStackQueuedSpinLock(&v53);
        v5 = 0LL;
        goto LABEL_52;
      }
      v23 = VidSchiSwitchContextWithCheck(v16);
      if ( v23 == 1 )
      {
        v24 = *((_QWORD *)v16 + 12);
        v61 = 0LL;
        v25 = *((_DWORD *)v16 + 46);
        v5 = 0LL;
        v60 = 0LL;
        v26 = *(_QWORD *)(v24 + 24);
        if ( (v25 & 1) != 0 )
        {
          v5 = *((_QWORD *)v16 + 81);
          if ( v5 )
          {
            --*((_DWORD *)v16 + 195);
            --*(_DWORD *)(v24 + 3008);
            --*(_DWORD *)(v26 + 776);
            v27 = *(struct _VIDSCH_CONTEXT **)(v5 + 32);
            if ( v27 == (struct _VIDSCH_CONTEXT *)((char *)v16 + 664) )
            {
              *((_DWORD *)v16 + 161) &= 0xFFFFFFF0;
              *((_QWORD *)v16 + 81) = 0LL;
              VidSchiUpdateContextStatus(v16, 1LL, 19178LL);
            }
            else
            {
              v28 = v27 == (struct _VIDSCH_CONTEXT *)32;
              v29 = (char *)v27 - 32;
              *((_QWORD *)v16 + 81) = v29;
              if ( v28 )
              {
                v38 = *((_DWORD *)v16 + 161) & 0xFFFFFFF8;
                *((_DWORD *)v16 + 161) = v38;
                v36 = v38 & 0xFFFFFFF7;
              }
              else
              {
                v30 = 0;
                if ( (unsigned int)(*((_DWORD *)v29 + 12) - 4) > 1 )
                  v4 = 0;
                v31 = v4 | *((_DWORD *)v16 + 161) & 0xFFFFFFFE;
                *((_DWORD *)v16 + 161) = v31;
                if ( *((_DWORD *)v29 + 12) == 3 )
                  v30 = 2;
                v32 = v31 & 0xFFFFFFFD | v30;
                *((_DWORD *)v16 + 161) = v32;
                v33 = 0;
                if ( *((_DWORD *)v29 + 12) == 7 )
                  v33 = 4;
                v34 = v32 & 0xFFFFFFFB | v33;
                *((_DWORD *)v16 + 161) = v34;
                v35 = 0;
                if ( *((_DWORD *)v29 + 12) == 6 )
                  v35 = 8;
                v36 = v34 & 0xFFFFFFF7 | v35;
              }
              *((_DWORD *)v16 + 161) = v36;
            }
            VidSchiProfilePerformanceTick(5, v26, 0LL, 0LL, 0LL, v5, 0LL, 0LL);
          }
        }
        *((_DWORD *)v16 + 46) |= 0x400u;
        HwQueueStagingList::ProcessHwQueues((struct _VIDSCH_GLOBAL *)((char *)a1 + 272), &v53);
        KeReleaseInStackQueuedSpinLock(&v53);
        goto LABEL_48;
      }
    }
    while ( v23 == 3 );
    HwQueueStagingList::ProcessHwQueues((struct _VIDSCH_GLOBAL *)((char *)a1 + 272), &v53);
    KeReleaseInStackQueuedSpinLock(&v53);
    if ( v23 == 4 )
    {
      *(_QWORD *)(*((_QWORD *)v16 + 12) + 232LL) = 0LL;
      VidSchiSubmitPreemptionCommand(*((_QWORD *)v16 + 12));
    }
    else
    {
      v5 = 0LL;
      if ( !v23 || v23 == 2 )
      {
LABEL_52:
        if ( (unsigned int)VidSchiWaitForSchedulerEvents(a1) == 258 )
          break;
      }
    }
  }
LABEL_48:
  if ( *((_DWORD *)a1 + 811) )
    *a2 = 1;
  return v5;
}
