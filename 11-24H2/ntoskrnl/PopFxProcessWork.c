/*
 * XREFs of PopFxProcessWork @ 0x1402BFE70
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1402AE658 (PopFxActivateComponentWorker.c)
 *     PopFxDispatchPluginWorkOnce @ 0x1402BE9E4 (PopFxDispatchPluginWorkOnce.c)
 *     PoFxCompleteIdleState @ 0x1403A5B20 (PoFxCompleteIdleState.c)
 *     PopFxIdleWorkerTail @ 0x1404E22FC (PopFxIdleWorkerTail.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     PopFxCompleteComponentActivation @ 0x1402BFDF0 (PopFxCompleteComponentActivation.c)
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1402E6324 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1402E680C (PopFxCompleteDevicePowerRequired.c)
 *     PopFxAddLogEntry @ 0x1402E69B4 (PopFxAddLogEntry.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403A5978 (PopDiagTraceFxComponentIdleState.c)
 *     PopFxTryReferenceDevice @ 0x1403A6408 (PopFxTryReferenceDevice.c)
 *     PopPlNotifyDeviceFState @ 0x1403A734C (PopPlNotifyDeviceFState.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x140468810 (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140481DAC (PopFxDeliverDevicePowerRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x140495294 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxCompleteComponentPerfState @ 0x1404B149C (PopFxCompleteComponentPerfState.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1404B18C4 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1404B770C (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopPepCompleteComponentIdleState @ 0x1404C8510 (PopPepCompleteComponentIdleState.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1404F318C (PopFxAcpiForwardPepWorkRequest.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall PopFxProcessWork(ULONG_PTR BugCheckParameter2, unsigned int *a2)
{
  ULONG_PTR v2; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  char v7; // si
  ULONG_PTR v8; // rsi
  __int64 v9; // r15
  __int64 v10; // r12
  ULONG_PTR v11; // r15
  __int64 v12; // rcx
  unsigned __int8 v13; // r12
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  KIRQL v24; // r14
  __int64 v25; // rsi
  _QWORD *v26; // rbx
  int v27; // esi
  __int64 v28; // rax
  __int64 v29; // rsi
  unsigned int v30; // ebx
  char v31; // al
  __int64 v32; // rsi
  unsigned int v33; // ecx
  signed __int32 v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r13
  _DWORD *v37; // r15
  __int64 v38; // rax
  unsigned int v39; // edx
  signed __int32 v40; // eax
  signed __int32 v41; // ett
  signed __int32 v42; // eax
  signed __int32 v43; // ett
  BOOLEAN v44; // al
  char v45; // al
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // r15
  __int64 v49; // r14
  signed __int32 v50; // ebx
  KIRQL v51; // [rsp+48h] [rbp-69h]
  unsigned int v52; // [rsp+4Ch] [rbp-65h]
  int v53; // [rsp+50h] [rbp-61h] BYREF
  int v54; // [rsp+58h] [rbp-59h] BYREF
  __int64 v55; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v56; // [rsp+68h] [rbp-49h]
  int v57; // [rsp+6Ch] [rbp-45h]
  __int16 v58; // [rsp+70h] [rbp-41h]
  int v59; // [rsp+72h] [rbp-3Fh]
  __int16 v60; // [rsp+76h] [rbp-3Bh]
  _QWORD *v61; // [rsp+78h] [rbp-39h]
  __int64 v62; // [rsp+80h] [rbp-31h]
  __int64 v63; // [rsp+88h] [rbp-29h]
  __int64 v64; // [rsp+90h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-19h] BYREF
  int *v66; // [rsp+A8h] [rbp-9h]
  __int64 v67; // [rsp+B0h] [rbp-1h]
  int *v68; // [rsp+B8h] [rbp+7h]
  __int64 v69; // [rsp+C0h] [rbp+Fh]
  __int64 retaddr; // [rsp+110h] [rbp+5Fh]

  v2 = (int)*a2;
  v62 = 0LL;
  if ( (unsigned int)v2 > 8 )
    PopFxBugCheck(0x603uLL, BugCheckParameter2, v2, 0LL);
  while ( 1 )
  {
    v5 = (int)*a2;
    v6 = 0x140000000uLL;
    v7 = 0;
    if ( !(_DWORD)v5 )
      break;
    if ( (_DWORD)v5 == 1 )
    {
      v9 = *((_QWORD *)a2 + 1);
      if ( BugCheckParameter2 )
        goto LABEL_4;
      v10 = a2[4];
      if ( (unsigned int)v10 >= *(_DWORD *)(v9 + 868) )
        PopFxBugCheck(0x611uLL, 0LL, *((_QWORD *)a2 + 1), (unsigned int)v10);
      _mm_lfence();
      v32 = *(_QWORD *)(*(_QWORD *)(v9 + 872) + 8 * v10);
      if ( a2[5] >= *(_DWORD *)(v32 + 156) )
        PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v9 + 872) + 8 * v10), 0LL);
      v33 = a2[5];
      if ( v33 == *(_DWORD *)(v32 + 152) )
        PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v9 + 872) + 8 * v10), 1uLL);
      if ( v33 && *(_DWORD *)(v32 + 152) )
        PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v9 + 872) + 8 * v10), 2uLL);
      *(_DWORD *)(v32 + 152) = a2[5];
      *(_DWORD *)(v32 + 140) = 2;
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v9 + 192), (unsigned int)v10);
      v34 = _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 140), 0xFFFFFFFF);
      v35 = *(_QWORD *)(v9 + 48);
      if ( v34 != 1 )
      {
        PopFxAddLogEntry(v35, (unsigned int)v10, 14LL);
        return;
      }
      PopDiagTraceFxComponentIdleState(v35, (unsigned int)v10, a2[5]);
      memset_0(a2, 0, 0x40uLL);
      v36 = *(_QWORD *)(v9 + 56);
      v7 = 0;
      v37 = (_DWORD *)(v36 + 208 * v10);
      v61 = (_QWORD *)(v36 + 32);
      if ( !*(_BYTE *)(v36 + 124) )
      {
        v61 = (_QWORD *)(v36 + 32);
LABEL_65:
        v7 = PopPepProcessEvent(v36, v37 + 48, 1LL, 6LL);
        PopPlNotifyDeviceFState(*v61, v10, v37[93], v37[92], 1);
        goto LABEL_66;
      }
      v38 = *(_QWORD *)(v36 + 32);
      v39 = v37[50];
      v59 = 0;
      v60 = 0;
      v63 = v38;
      v55 = *(_QWORD *)(v38 + 72);
      LODWORD(v38) = v37[92];
      v56 = v39;
      v57 = v38;
      v58 = 1;
      v52 = v39;
      if ( (unsigned __int8)guard_dispatch_icall_no_overrides(19LL, &v55) )
      {
        if ( HIBYTE(v58) )
          goto LABEL_65;
        PopFxAddLogEntry(*(_QWORD *)(v63 + 48), v52, 18LL);
        v31 = HIBYTE(v58);
      }
      else
      {
        v31 = 1;
        HIBYTE(v58) = 1;
      }
      if ( v31 )
        goto LABEL_65;
    }
    else
    {
      switch ( (int)v5 )
      {
        case 2:
          v11 = *((_QWORD *)a2 + 1);
          if ( BugCheckParameter2 )
            goto LABEL_4;
          v12 = *(_QWORD *)(v11 + 48);
          v13 = *((_BYTE *)a2 + 16);
          if ( v12 )
          {
            LOBYTE(v5) = 1;
            PopDiagTraceFxDevicePowerRequirement(v12, v5, v13);
          }
          v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 400));
          if ( v13 )
          {
            *(_DWORD *)(v11 + 36) = 2;
            _m_prefetchw((const void *)(v11 + 32));
            v40 = *(_DWORD *)(v11 + 32);
            do
            {
              v41 = v40;
              v40 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 32), v40 & 0xFFFFFF7F, v40);
            }
            while ( v41 != v40 );
            if ( (v40 & 0x80u) == 0 )
              PopFxBugCheck(0x609uLL, 0LL, v11, 0LL);
            _m_prefetchw((const void *)(v11 + 32));
            v42 = *(_DWORD *)(v11 + 32);
            do
            {
              v43 = v42;
              v42 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 32), v42, v42);
            }
            while ( v43 != v42 );
            if ( (v42 & 4) != 0 )
            {
              _InterlockedAnd((volatile signed __int32 *)(v11 + 32), 0xFFFFFFFB);
              *(_DWORD *)(v11 + 40) = 0;
              v44 = KeCancelTimer((PKTIMER)(v11 + 408));
              _InterlockedDecrement((volatile signed __int32 *)(v11 + 36));
              if ( !v44 )
                goto LABEL_93;
              v45 = PopFxCompleteDevicePowerRequired(v11);
              goto LABEL_90;
            }
            if ( !*(_DWORD *)(v11 + 40) )
            {
              v45 = PopFxDeliverDevicePowerRequired(v11);
LABEL_90:
              v7 = v45;
            }
          }
          else
          {
            _m_prefetchw((const void *)(v11 + 32));
            v14 = *(_DWORD *)(v11 + 32);
            do
            {
              v15 = v14;
              v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 32), v14, v14);
            }
            while ( v15 != v14 );
            if ( (v14 & 0x80u) != 0 )
              PopFxBugCheck(0x609uLL, 0LL, v11, 1uLL);
            if ( (unsigned __int8)PopPepProcessEvent(*(_QWORD *)(v11 + 56), 0LL, 4LL, 6LL) )
              PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
            _InterlockedOr((volatile signed __int32 *)(v11 + 32), 0x80u);
            if ( *(_QWORD *)(v11 + 144) )
            {
              if ( *(_DWORD *)(v11 + 36) || *(_DWORD *)(v11 + 40) || (*(_DWORD *)(v11 + 32) & 4) != 0 )
                PopFxBugCheck(0x610uLL, 0LL, v11, 0LL);
              *(_DWORD *)(v11 + 40) = 2;
              if ( !(unsigned __int8)PopFxScheduleDeviceIdleTimer(v11) )
              {
                PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v11 + 48), 0LL, 0LL);
                guard_dispatch_icall_no_overrides(*(_QWORD *)(v11 + 192), v46);
                _InterlockedOr((volatile signed __int32 *)(v11 + 32), 0x40u);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 40), 0xFFFFFFFF) != 1 )
                  PopFxAddLogEntry(*(_QWORD *)(v11 + 48), 0LL, 17LL);
              }
            }
            else
            {
              PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v11 + 48), 0LL, 0LL);
              _InterlockedOr((volatile signed __int32 *)(v11 + 32), 0x40u);
            }
          }
LABEL_93:
          KxReleaseSpinLock((volatile signed __int64 *)(v11 + 400));
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v51);
          __writecr8(v51);
          break;
        case 3:
          v26 = (_QWORD *)*((_QWORD *)a2 + 1);
          v27 = -1073741822;
          if ( v26[19] )
          {
            v27 = PopFxTryReferenceDevice(*((_QWORD *)a2 + 1), 1LL, 0x140000000uLL);
            if ( v27 >= 0 )
            {
              v27 = guard_dispatch_icall_no_overrides(v26[24], *((_QWORD *)a2 + 2));
              PopFxDereferenceDevice(v26, 1LL);
            }
          }
          v28 = v26[7];
          v68 = (int *)(unsigned int)v27;
          UserData.Ptr = *(_QWORD *)(*(_QWORD *)(v28 + 32) + 72LL);
          *(_QWORD *)&UserData.Size = *((_QWORD *)a2 + 2);
          v66 = (int *)*((_QWORD *)a2 + 3);
          v67 = v62;
          guard_dispatch_icall_no_overrides(15LL, &UserData);
          return;
        case 4:
          v23 = *((_QWORD *)a2 + 1);
          v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 400));
          if ( *((_BYTE *)a2 + 16) )
            _InterlockedOr((volatile signed __int32 *)(v23 + 32), 8u);
          else
            _InterlockedAnd((volatile signed __int32 *)(v23 + 32), 0xFFFFFFF7);
          PopFxUpdateDeviceIdleTimer(v23);
          KeReleaseSpinLock((PKSPIN_LOCK)(v23 + 400), v24);
          return;
        case 5:
          v29 = *((_QWORD *)a2 + 1);
          if ( !BugCheckParameter2 )
            goto LABEL_51;
          v30 = a2[4];
          if ( v30 >= *(_DWORD *)(v29 + 868) )
            PopFxBugCheck(0x611uLL, BugCheckParameter2, *((_QWORD *)a2 + 1), v30);
          PopFxAddLogEntry(*(_QWORD *)(v29 + 48), v30, 18LL);
          PopPepCompleteComponentIdleState(*(_QWORD *)(v29 + 56), v30);
          return;
        case 6:
          v25 = *((_QWORD *)a2 + 1);
          if ( !BugCheckParameter2 )
LABEL_51:
            PopFxBugCheck(0x603uLL, 0LL, (int)*a2, 0LL);
          v47 = a2[4];
          if ( (unsigned int)v47 >= *(_DWORD *)(v25 + 868) )
            PopFxBugCheck(0x611uLL, BugCheckParameter2, *((_QWORD *)a2 + 1), (unsigned int)v47);
          _mm_lfence();
          v48 = *(_QWORD *)(*(_QWORD *)(v25 + 872) + 8 * v47);
          v49 = *(_QWORD *)(v48 + 424);
          v50 = _InterlockedDecrement((volatile signed __int32 *)(v49 + 40));
          _InterlockedOr((volatile signed __int32 *)(v49 + 40), 0x20000000u);
          if ( (v50 & 0x8000000) == 0 )
            PopFxAddLogEntry(*(_QWORD *)(v25 + 48), v47, 20LL);
          PopDiagTraceFxPerfRequestProgress(v49, v50 & 7, v6);
          PopFxCompleteComponentPerfState(
            v25,
            *(unsigned int *)(v48 + 16),
            *(_QWORD *)(v48 + 424),
            *((unsigned __int8 *)a2 + 20));
          return;
        case 7:
          PopFxAcpiForwardPepAcpiNotifyRequest(*((_QWORD *)a2 + 1));
          return;
        case 8:
          PopFxAcpiForwardPepWorkRequest(*((_QWORD *)a2 + 1));
          return;
        default:
          return;
      }
    }
LABEL_66:
    if ( !v7 )
      return;
  }
  v8 = *((_QWORD *)a2 + 1);
  if ( BugCheckParameter2 )
LABEL_4:
    PopFxBugCheck(0x603uLL, BugCheckParameter2, (int)*a2, 0LL);
  v16 = a2[4];
  if ( (unsigned int)v16 >= *(_DWORD *)(v8 + 868) )
    PopFxBugCheck(0x611uLL, 0LL, *((_QWORD *)a2 + 1), (unsigned int)v16);
  _mm_lfence();
  v17 = *(_QWORD *)(*(_QWORD *)(v8 + 872) + 8 * v16);
  if ( *(_DWORD *)(v17 + 152) )
    PopFxBugCheck(0x615uLL, 0LL, (unsigned int)v16, 0LL);
  if ( *(int *)(v17 + 88) < 0 )
    PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v8 + 872) + 8 * v16), 1uLL);
  if ( (*(_DWORD *)(v17 + 88) & 0x3FFFFFFF) == 0 )
    PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v8 + 872) + 8 * v16), 2uLL);
  if ( *(_DWORD *)(v17 + 140) )
    PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v8 + 872) + 8 * v16), 3uLL);
  v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 200));
  if ( *(_DWORD *)(v17 + 216) == 1 )
  {
    *(_QWORD *)(v17 + 224) = MEMORY[0xFFFFF78000000008];
    *(_BYTE *)(v17 + 208) = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (v18 = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 200), 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v17 + 200), retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v19);
  __writecr8(v19);
  v64 = *(_QWORD *)(v8 + 48);
  v53 = v16;
  if ( PopDiagHandleRegistered )
  {
    if ( PopDiagHandle )
    {
      LOBYTE(v18) = 4;
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, v18, 256LL, PopDiagHandle)
        || *(_WORD *)(v22 + 102)
        && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v22 + 40) + 96LL, v20, v21, v22) )
      {
        UserData.Ptr = (ULONGLONG)&v64;
        v54 = 1;
        *(_QWORD *)&UserData.Size = 8LL;
        v66 = &v53;
        v67 = 4LL;
        v68 = &v54;
        v69 = 4LL;
        EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_CONDITION, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
      }
    }
  }
  if ( *(_QWORD *)(v8 + 112) )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 192), (unsigned int)v16);
  PopPepProcessEvent(*(_QWORD *)(v8 + 56), 208 * v16 + *(_QWORD *)(v8 + 56) + 192LL, 2LL, 3LL);
  PopFxCompleteComponentActivation(v8, v17, 1);
}
