/*
 * XREFs of PopFxProcessWork @ 0x1403172E0
 * Callers:
 *     PopFxDispatchPluginWorkOnce @ 0x140315E30 (PopFxDispatchPluginWorkOnce.c)
 *     PopFxActivateComponentWorker @ 0x1403B6358 (PopFxActivateComponentWorker.c)
 *     PoFxCompleteIdleState @ 0x14044C090 (PoFxCompleteIdleState.c)
 *     PopFxIdleWorkerTail @ 0x1404EB37C (PopFxIdleWorkerTail.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     EtwpLevelKeywordEnabled @ 0x1402A2030 (EtwpLevelKeywordEnabled.c)
 *     PopPepCompleteComponentIdleState @ 0x1403110AC (PopPepCompleteComponentIdleState.c)
 *     PopPlNotifyDeviceFState @ 0x140315BD0 (PopPlNotifyDeviceFState.c)
 *     PopFxCompleteComponentActivation @ 0x140317240 (PopFxCompleteComponentActivation.c)
 *     PopPepProcessEvent @ 0x140317DF0 (PopPepProcessEvent.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140376700 (PopFxDeliverDevicePowerRequired.c)
 *     PopFxDereferenceDevice @ 0x140376880 (PopFxDereferenceDevice.c)
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     PopFxTryReferenceDevice @ 0x140377BF0 (PopFxTryReferenceDevice.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140377C48 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140378130 (PopFxCompleteDevicePowerRequired.c)
 *     PopFxAddLogEntry @ 0x1403782D8 (PopFxAddLogEntry.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14044C130 (PopDiagTraceFxComponentIdleState.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x14046E034 (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14049A8A4 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxCompleteComponentPerfState @ 0x1404B6CBC (PopFxCompleteComponentPerfState.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1404B70E4 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1404BC5A4 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1404F588C (PopFxAcpiForwardPepWorkRequest.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall PopFxProcessWork(ULONG_PTR BugCheckParameter2, unsigned int *a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  char v9; // si
  ULONG_PTR v10; // rsi
  __int64 v11; // r15
  __int64 v12; // r12
  ULONG_PTR v13; // r15
  __int64 v14; // rcx
  unsigned __int8 v15; // r12
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // r8
  REGHANDLE v21; // r9
  unsigned __int64 v22; // r15
  unsigned __int8 v23; // dl
  __int64 v24; // rbx
  KIRQL v25; // r14
  __int64 v26; // rsi
  _QWORD *v27; // rbx
  int v28; // esi
  __int64 v29; // rax
  __int64 v30; // rsi
  unsigned int v31; // ebx
  char v32; // al
  __int64 v33; // rsi
  unsigned int v34; // ecx
  signed __int32 v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r13
  _DWORD *v40; // r15
  __int64 v41; // rax
  unsigned int v42; // edx
  signed __int32 v43; // eax
  signed __int32 v44; // ett
  signed __int32 v45; // eax
  signed __int32 v46; // ett
  BOOLEAN v47; // al
  char v48; // al
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r15
  __int64 v54; // r14
  signed __int32 v55; // ebx
  KIRQL v56; // [rsp+48h] [rbp-69h]
  unsigned int v57; // [rsp+4Ch] [rbp-65h]
  int v58; // [rsp+50h] [rbp-61h] BYREF
  int v59; // [rsp+58h] [rbp-59h] BYREF
  __int64 v60; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v61; // [rsp+68h] [rbp-49h]
  int v62; // [rsp+6Ch] [rbp-45h]
  __int16 v63; // [rsp+70h] [rbp-41h]
  int v64; // [rsp+72h] [rbp-3Fh]
  __int16 v65; // [rsp+76h] [rbp-3Bh]
  __int64 *v66; // [rsp+78h] [rbp-39h]
  __int64 v67; // [rsp+80h] [rbp-31h]
  __int64 v68; // [rsp+88h] [rbp-29h]
  __int64 v69; // [rsp+90h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-19h] BYREF
  int *v71; // [rsp+A8h] [rbp-9h]
  __int64 v72; // [rsp+B0h] [rbp-1h]
  int *v73; // [rsp+B8h] [rbp+7h]
  __int64 v74; // [rsp+C0h] [rbp+Fh]
  __int64 retaddr; // [rsp+110h] [rbp+5Fh]

  v4 = (int)*a2;
  v67 = 0LL;
  if ( (unsigned int)v4 > 8 )
    PopFxBugCheck(0x603uLL, BugCheckParameter2, v4, 0LL);
  while ( 1 )
  {
    v7 = (int)*a2;
    v8 = 0x140000000uLL;
    v9 = 0;
    if ( !(_DWORD)v7 )
      break;
    if ( (_DWORD)v7 == 1 )
    {
      v11 = *((_QWORD *)a2 + 1);
      if ( BugCheckParameter2 )
        goto LABEL_4;
      v12 = a2[4];
      if ( (unsigned int)v12 >= *(_DWORD *)(v11 + 868) )
        PopFxBugCheck(0x611uLL, 0LL, *((_QWORD *)a2 + 1), (unsigned int)v12);
      _mm_lfence();
      v33 = *(_QWORD *)(*(_QWORD *)(v11 + 872) + 8 * v12);
      if ( a2[5] >= *(_DWORD *)(v33 + 156) )
        PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v11 + 872) + 8 * v12), 0LL);
      v34 = a2[5];
      if ( v34 == *(_DWORD *)(v33 + 152) )
        PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v11 + 872) + 8 * v12), 1uLL);
      if ( v34 && *(_DWORD *)(v33 + 152) )
        PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v11 + 872) + 8 * v12), 2uLL);
      *(_DWORD *)(v33 + 152) = a2[5];
      *(_DWORD *)(v33 + 140) = 2;
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v11 + 192), (unsigned int)v12, a2[5], (unsigned int)v12);
      v35 = _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 140), 0xFFFFFFFF);
      v36 = *(_QWORD *)(v11 + 48);
      if ( v35 != 1 )
      {
        PopFxAddLogEntry(v36, (unsigned int)v12, 14LL);
        return;
      }
      PopDiagTraceFxComponentIdleState(v36, (unsigned int)v12, a2[5]);
      memset_0(a2, 0, 0x40uLL);
      v39 = *(_QWORD *)(v11 + 56);
      v9 = 0;
      v40 = (_DWORD *)(v39 + 208 * v12);
      v66 = (__int64 *)(v39 + 32);
      if ( !*(_BYTE *)(v39 + 124) )
      {
        v66 = (__int64 *)(v39 + 32);
LABEL_65:
        v9 = PopPepProcessEvent(v39, v40 + 48, 1LL);
        PopPlNotifyDeviceFState(*v66, v12, v40[93], v40[92], 1);
        goto LABEL_66;
      }
      v41 = *(_QWORD *)(v39 + 32);
      v42 = v40[50];
      v64 = 0;
      v65 = 0;
      v68 = v41;
      v60 = *(_QWORD *)(v41 + 72);
      LODWORD(v41) = v40[92];
      v61 = v42;
      v62 = v41;
      v63 = 1;
      v57 = v42;
      if ( (unsigned __int8)guard_dispatch_icall_no_overrides(19LL, &v60, v37, v38) )
      {
        if ( HIBYTE(v63) )
          goto LABEL_65;
        PopFxAddLogEntry(*(_QWORD *)(v68 + 48), v57, 18LL);
        v32 = HIBYTE(v63);
      }
      else
      {
        v32 = 1;
        HIBYTE(v63) = 1;
      }
      if ( v32 )
        goto LABEL_65;
    }
    else
    {
      switch ( (int)v7 )
      {
        case 2:
          v13 = *((_QWORD *)a2 + 1);
          if ( BugCheckParameter2 )
            goto LABEL_4;
          v14 = *(_QWORD *)(v13 + 48);
          v15 = *((_BYTE *)a2 + 16);
          if ( v14 )
          {
            LOBYTE(v7) = 1;
            PopDiagTraceFxDevicePowerRequirement(v14, v7, v15);
          }
          v56 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 400));
          if ( v15 )
          {
            *(_DWORD *)(v13 + 36) = 2;
            _m_prefetchw((const void *)(v13 + 32));
            v43 = *(_DWORD *)(v13 + 32);
            do
            {
              v44 = v43;
              v43 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 32), v43 & 0xFFFFFF7F, v43);
            }
            while ( v44 != v43 );
            if ( (v43 & 0x80u) == 0 )
              PopFxBugCheck(0x609uLL, 0LL, v13, 0LL);
            _m_prefetchw((const void *)(v13 + 32));
            v45 = *(_DWORD *)(v13 + 32);
            do
            {
              v46 = v45;
              v45 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 32), v45, v45);
            }
            while ( v46 != v45 );
            if ( (v45 & 4) != 0 )
            {
              _InterlockedAnd((volatile signed __int32 *)(v13 + 32), 0xFFFFFFFB);
              *(_DWORD *)(v13 + 40) = 0;
              v47 = KeCancelTimer((PKTIMER)(v13 + 408));
              _InterlockedDecrement((volatile signed __int32 *)(v13 + 36));
              if ( !v47 )
                goto LABEL_93;
              v48 = PopFxCompleteDevicePowerRequired(v13);
              goto LABEL_90;
            }
            if ( !*(_DWORD *)(v13 + 40) )
            {
              v48 = PopFxDeliverDevicePowerRequired(v13);
LABEL_90:
              v9 = v48;
            }
          }
          else
          {
            _m_prefetchw((const void *)(v13 + 32));
            v16 = *(_DWORD *)(v13 + 32);
            do
            {
              v17 = v16;
              v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 32), v16, v16);
            }
            while ( v17 != v16 );
            if ( (v16 & 0x80u) != 0 )
              PopFxBugCheck(0x609uLL, 0LL, v13, 1uLL);
            if ( (unsigned __int8)PopPepProcessEvent(*(_QWORD *)(v13 + 56), 0LL, 4LL) )
              PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
            _InterlockedOr((volatile signed __int32 *)(v13 + 32), 0x80u);
            if ( *(_QWORD *)(v13 + 144) )
            {
              if ( *(_DWORD *)(v13 + 36) || *(_DWORD *)(v13 + 40) || (*(_DWORD *)(v13 + 32) & 4) != 0 )
                PopFxBugCheck(0x610uLL, 0LL, v13, 0LL);
              *(_DWORD *)(v13 + 40) = 2;
              if ( !(unsigned __int8)PopFxScheduleDeviceIdleTimer(v13) )
              {
                PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v13 + 48), 0LL, 0LL);
                guard_dispatch_icall_no_overrides(*(_QWORD *)(v13 + 192), v49, v50, v51);
                _InterlockedOr((volatile signed __int32 *)(v13 + 32), 0x40u);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 40), 0xFFFFFFFF) != 1 )
                  PopFxAddLogEntry(*(_QWORD *)(v13 + 48), 0LL, 17LL);
              }
            }
            else
            {
              PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v13 + 48), 0LL, 0LL);
              _InterlockedOr((volatile signed __int32 *)(v13 + 32), 0x40u);
            }
          }
LABEL_93:
          KxReleaseSpinLock((volatile signed __int64 *)(v13 + 400));
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v56);
          __writecr8(v56);
          break;
        case 3:
          v27 = (_QWORD *)*((_QWORD *)a2 + 1);
          v28 = -1073741822;
          if ( v27[19] )
          {
            v28 = PopFxTryReferenceDevice(*((_QWORD *)a2 + 1), 1LL, 0x140000000uLL);
            if ( v28 >= 0 )
            {
              v28 = guard_dispatch_icall_no_overrides(
                      v27[24],
                      *((_QWORD *)a2 + 2),
                      *((_QWORD *)a2 + 4),
                      *((_QWORD *)a2 + 5));
              PopFxDereferenceDevice(v27, 1LL);
            }
          }
          v29 = v27[7];
          v73 = (int *)(unsigned int)v28;
          UserData.Ptr = *(_QWORD *)(*(_QWORD *)(v29 + 32) + 72LL);
          *(_QWORD *)&UserData.Size = *((_QWORD *)a2 + 2);
          v71 = (int *)*((_QWORD *)a2 + 3);
          v72 = v67;
          guard_dispatch_icall_no_overrides(15LL, &UserData, v8, a4);
          return;
        case 4:
          v24 = *((_QWORD *)a2 + 1);
          v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + 400));
          if ( *((_BYTE *)a2 + 16) )
            _InterlockedOr((volatile signed __int32 *)(v24 + 32), 8u);
          else
            _InterlockedAnd((volatile signed __int32 *)(v24 + 32), 0xFFFFFFF7);
          PopFxUpdateDeviceIdleTimer(v24);
          KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 400), v25);
          return;
        case 5:
          v30 = *((_QWORD *)a2 + 1);
          if ( !BugCheckParameter2 )
            goto LABEL_51;
          v31 = a2[4];
          if ( v31 >= *(_DWORD *)(v30 + 868) )
            PopFxBugCheck(0x611uLL, BugCheckParameter2, *((_QWORD *)a2 + 1), v31);
          PopFxAddLogEntry(*(_QWORD *)(v30 + 48), v31, 18LL);
          PopPepCompleteComponentIdleState(*(_QWORD *)(v30 + 56), v31);
          return;
        case 6:
          v26 = *((_QWORD *)a2 + 1);
          if ( !BugCheckParameter2 )
LABEL_51:
            PopFxBugCheck(0x603uLL, 0LL, (int)*a2, 0LL);
          v52 = a2[4];
          if ( (unsigned int)v52 >= *(_DWORD *)(v26 + 868) )
            PopFxBugCheck(0x611uLL, BugCheckParameter2, *((_QWORD *)a2 + 1), (unsigned int)v52);
          _mm_lfence();
          v53 = *(_QWORD *)(*(_QWORD *)(v26 + 872) + 8 * v52);
          v54 = *(_QWORD *)(v53 + 424);
          v55 = _InterlockedDecrement((volatile signed __int32 *)(v54 + 40));
          _InterlockedOr((volatile signed __int32 *)(v54 + 40), 0x20000000u);
          if ( (v55 & 0x8000000) == 0 )
            PopFxAddLogEntry(*(_QWORD *)(v26 + 48), v52, 20LL);
          PopDiagTraceFxPerfRequestProgress(v54, v55 & 7, v8);
          PopFxCompleteComponentPerfState(
            v26,
            *(unsigned int *)(v53 + 16),
            *(_QWORD *)(v53 + 424),
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
    if ( !v9 )
      return;
  }
  v10 = *((_QWORD *)a2 + 1);
  if ( BugCheckParameter2 )
LABEL_4:
    PopFxBugCheck(0x603uLL, BugCheckParameter2, (int)*a2, 0LL);
  v18 = a2[4];
  if ( (unsigned int)v18 >= *(_DWORD *)(v10 + 868) )
    PopFxBugCheck(0x611uLL, 0LL, *((_QWORD *)a2 + 1), (unsigned int)v18);
  _mm_lfence();
  v19 = *(_QWORD *)(*(_QWORD *)(v10 + 872) + 8 * v18);
  if ( *(_DWORD *)(v19 + 152) )
    PopFxBugCheck(0x615uLL, 0LL, (unsigned int)v18, 0LL);
  if ( *(int *)(v19 + 88) < 0 )
    PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v10 + 872) + 8 * v18), 1uLL);
  if ( (*(_DWORD *)(v19 + 88) & 0x3FFFFFFF) == 0 )
    PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v10 + 872) + 8 * v18), 2uLL);
  if ( *(_DWORD *)(v19 + 140) )
    PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v10 + 872) + 8 * v18), 3uLL);
  v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v19 + 200));
  if ( *(_DWORD *)(v19 + 216) == 1 )
  {
    *(_QWORD *)(v19 + 224) = MEMORY[0xFFFFF78000000008];
    *(_BYTE *)(v19 + 208) = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 200), 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v19 + 200), retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v22);
  __writecr8(v22);
  v69 = *(_QWORD *)(v10 + 48);
  v58 = v18;
  if ( PopDiagHandleRegistered )
  {
    v21 = PopDiagHandle;
    if ( PopDiagHandle )
    {
      if ( EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, 4u, 256LL)
        || *(_WORD *)(v21 + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(v21 + 40) + 96LL, v23, v20) )
      {
        UserData.Ptr = (ULONGLONG)&v69;
        v59 = 1;
        *(_QWORD *)&UserData.Size = 8LL;
        v71 = &v58;
        v72 = 4LL;
        v73 = &v59;
        v74 = 4LL;
        EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_CONDITION, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
      }
    }
  }
  if ( *(_QWORD *)(v10 + 112) )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v10 + 192), (unsigned int)v18, v20, v21);
  PopPepProcessEvent(*(_QWORD *)(v10 + 56), 208 * v18 + *(_QWORD *)(v10 + 56) + 192LL, 2LL);
  PopFxCompleteComponentActivation(v10, v19, 1);
}
