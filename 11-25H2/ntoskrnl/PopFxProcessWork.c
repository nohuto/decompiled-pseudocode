/*
 * XREFs of PopFxProcessWork @ 0x14034B940
 * Callers:
 *     PopFxIdleWorkerTail @ 0x1403492B0 (PopFxIdleWorkerTail.c)
 *     PopFxActivateComponentWorker @ 0x140349BD0 (PopFxActivateComponentWorker.c)
 *     PopFxDispatchPluginWorkOnce @ 0x14034CB24 (PopFxDispatchPluginWorkOnce.c)
 *     PoFxCompleteIdleState @ 0x14044CB70 (PoFxCompleteIdleState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402576B0 (EtwpLevelKeywordEnabled.c)
 *     PopPepProcessEvent @ 0x1402BD780 (PopPepProcessEvent.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     PopFxCompleteComponentActivation @ 0x14034C328 (PopFxCompleteComponentActivation.c)
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     PopPlNotifyDeviceFState @ 0x140357D50 (PopPlNotifyDeviceFState.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140358878 (PopFxDeliverDevicePowerRequired.c)
 *     PopFxDereferenceDevice @ 0x1403589F8 (PopFxDereferenceDevice.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140358F8C (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140359474 (PopFxCompleteDevicePowerRequired.c)
 *     PopFxAddLogEntry @ 0x140359640 (PopFxAddLogEntry.c)
 *     PopFxTryReferenceDevice @ 0x1403596E8 (PopFxTryReferenceDevice.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14044CC10 (PopDiagTraceFxComponentIdleState.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x14046F768 (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14049A5F4 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxCompleteComponentPerfState @ 0x1404B73E8 (PopFxCompleteComponentPerfState.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1404B7810 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1404BD69C (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopPepCompleteComponentIdleState @ 0x1404CBFBC (PopPepCompleteComponentIdleState.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1404F2F88 (PopFxAcpiForwardPepWorkRequest.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  __int64 v11; // r14
  __int64 v12; // rbx
  unsigned __int64 v13; // r15
  unsigned __int8 v14; // dl
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG_PTR v17; // r15
  __int64 v18; // rcx
  unsigned __int8 v19; // r12
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  __int64 v22; // rbx
  KIRQL v23; // r14
  __int64 v24; // rsi
  _QWORD *v25; // rbx
  int v26; // esi
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rsi
  unsigned int v31; // ecx
  signed __int32 v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r13
  _DWORD *v35; // r15
  __int64 v36; // rax
  unsigned int v37; // edx
  char v38; // al
  signed __int32 v39; // eax
  signed __int32 v40; // ett
  signed __int32 v41; // eax
  signed __int32 v42; // ett
  BOOLEAN v43; // al
  char v44; // al
  __int64 v45; // rdx
  unsigned int v46; // ebx
  __int64 v47; // r15
  __int64 v48; // r14
  signed __int32 v49; // ebx
  LPCGUID ActivityId; // [rsp+28h] [rbp-89h]
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
      v30 = *(_QWORD *)(*(_QWORD *)(v9 + 872) + 8 * v10);
      if ( a2[5] >= *(_DWORD *)(v30 + 156) )
        PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v9 + 872) + 8 * v10), 0LL);
      v31 = a2[5];
      if ( v31 == *(_DWORD *)(v30 + 152) )
        PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v9 + 872) + 8 * v10), 1uLL);
      if ( v31 && *(_DWORD *)(v30 + 152) )
        PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v9 + 872) + 8 * v10), 2uLL);
      *(_DWORD *)(v30 + 152) = a2[5];
      *(_DWORD *)(v30 + 140) = 2;
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v9 + 192), (unsigned int)v10);
      v32 = _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 140), 0xFFFFFFFF);
      v33 = *(_QWORD *)(v9 + 48);
      if ( v32 != 1 )
      {
        PopFxAddLogEntry(v33, (unsigned int)v10, 14LL);
        return;
      }
      PopDiagTraceFxComponentIdleState(v33, (unsigned int)v10, a2[5]);
      memset_0(a2, 0, 0x40uLL);
      v34 = *(_QWORD *)(v9 + 56);
      v7 = 0;
      v35 = (_DWORD *)(v34 + 208 * v10);
      v61 = (_QWORD *)(v34 + 32);
      if ( *(_BYTE *)(v34 + 124) )
      {
        v36 = *(_QWORD *)(v34 + 32);
        v37 = v35[50];
        v59 = 0;
        v60 = 0;
        v63 = v36;
        v55 = *(_QWORD *)(v36 + 72);
        LODWORD(v36) = v35[92];
        v56 = v37;
        v57 = v36;
        v58 = 1;
        v52 = v37;
        if ( (unsigned __int8)guard_dispatch_icall_no_overrides(19LL, &v55) )
        {
          if ( !HIBYTE(v58) )
          {
            PopFxAddLogEntry(*(_QWORD *)(v63 + 48), v52, 18LL);
            v38 = HIBYTE(v58);
            goto LABEL_76;
          }
        }
        else
        {
          v38 = 1;
          HIBYTE(v58) = 1;
LABEL_76:
          if ( !v38 )
            goto LABEL_65;
        }
      }
      else
      {
        v61 = (_QWORD *)(v34 + 32);
      }
      v7 = PopPepProcessEvent(v34, (__int64)(v35 + 48), 1u, 6u, (__int64)ActivityId, (__int64)a2);
      PopPlNotifyDeviceFState(*v61, v10, v35[93], v35[92], 1);
      goto LABEL_65;
    }
    switch ( (int)v5 )
    {
      case 2:
        v17 = *((_QWORD *)a2 + 1);
        if ( BugCheckParameter2 )
          goto LABEL_4;
        v18 = *(_QWORD *)(v17 + 48);
        v19 = *((_BYTE *)a2 + 16);
        if ( v18 )
        {
          LOBYTE(v5) = 1;
          PopDiagTraceFxDevicePowerRequirement(v18, v5, v19);
        }
        v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 400));
        if ( v19 )
        {
          *(_DWORD *)(v17 + 36) = 2;
          _m_prefetchw((const void *)(v17 + 32));
          v39 = *(_DWORD *)(v17 + 32);
          do
          {
            v40 = v39;
            v39 = _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 32), v39 & 0xFFFFFF7F, v39);
          }
          while ( v40 != v39 );
          if ( (v39 & 0x80u) == 0 )
            PopFxBugCheck(0x609uLL, 0LL, v17, 0LL);
          _m_prefetchw((const void *)(v17 + 32));
          v41 = *(_DWORD *)(v17 + 32);
          do
          {
            v42 = v41;
            v41 = _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 32), v41, v41);
          }
          while ( v42 != v41 );
          if ( (v41 & 4) != 0 )
          {
            _InterlockedAnd((volatile signed __int32 *)(v17 + 32), 0xFFFFFFFB);
            *(_DWORD *)(v17 + 40) = 0;
            v43 = KeCancelTimer((PKTIMER)(v17 + 408));
            _InterlockedDecrement((volatile signed __int32 *)(v17 + 36));
            if ( !v43 )
              goto LABEL_93;
            v44 = PopFxCompleteDevicePowerRequired(v17);
            goto LABEL_90;
          }
          if ( !*(_DWORD *)(v17 + 40) )
          {
            v44 = PopFxDeliverDevicePowerRequired(v17);
LABEL_90:
            v7 = v44;
          }
        }
        else
        {
          _m_prefetchw((const void *)(v17 + 32));
          v20 = *(_DWORD *)(v17 + 32);
          do
          {
            v21 = v20;
            v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 32), v20, v20);
          }
          while ( v21 != v20 );
          if ( (v20 & 0x80u) != 0 )
            PopFxBugCheck(0x609uLL, 0LL, v17, 1uLL);
          if ( (unsigned __int8)PopPepProcessEvent(*(_QWORD *)(v17 + 56), 0LL, 4u, 6u, (__int64)ActivityId, 0LL) )
            PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
          _InterlockedOr((volatile signed __int32 *)(v17 + 32), 0x80u);
          if ( *(_QWORD *)(v17 + 144) )
          {
            if ( *(_DWORD *)(v17 + 36) || *(_DWORD *)(v17 + 40) || (*(_DWORD *)(v17 + 32) & 4) != 0 )
              PopFxBugCheck(0x610uLL, 0LL, v17, 0LL);
            *(_DWORD *)(v17 + 40) = 2;
            if ( !(unsigned __int8)PopFxScheduleDeviceIdleTimer(v17) )
            {
              PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v17 + 48), 0LL, 0LL);
              guard_dispatch_icall_no_overrides(*(_QWORD *)(v17 + 192), v45);
              _InterlockedOr((volatile signed __int32 *)(v17 + 32), 0x40u);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 40), 0xFFFFFFFF) != 1 )
                PopFxAddLogEntry(*(_QWORD *)(v17 + 48), 0LL, 17LL);
            }
          }
          else
          {
            PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v17 + 48), 0LL, 0LL);
            _InterlockedOr((volatile signed __int32 *)(v17 + 32), 0x40u);
          }
        }
LABEL_93:
        KxReleaseSpinLock((volatile signed __int64 *)(v17 + 400));
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v51);
        __writecr8(v51);
        break;
      case 3:
        v25 = (_QWORD *)*((_QWORD *)a2 + 1);
        v26 = -1073741822;
        if ( v25[19] )
        {
          v26 = PopFxTryReferenceDevice(*((_QWORD *)a2 + 1), 1LL, 0x140000000uLL);
          if ( v26 >= 0 )
          {
            v26 = guard_dispatch_icall_no_overrides(v25[24], *((_QWORD *)a2 + 2));
            PopFxDereferenceDevice(v25, 1LL);
          }
        }
        v27 = v25[7];
        v68 = (int *)(unsigned int)v26;
        UserData.Ptr = *(_QWORD *)(*(_QWORD *)(v27 + 32) + 72LL);
        *(_QWORD *)&UserData.Size = *((_QWORD *)a2 + 2);
        v66 = (int *)*((_QWORD *)a2 + 3);
        v67 = v62;
        guard_dispatch_icall_no_overrides(15LL, &UserData);
        return;
      case 4:
        v22 = *((_QWORD *)a2 + 1);
        v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 400));
        if ( *((_BYTE *)a2 + 16) )
          _InterlockedOr((volatile signed __int32 *)(v22 + 32), 8u);
        else
          _InterlockedAnd((volatile signed __int32 *)(v22 + 32), 0xFFFFFFF7);
        PopFxUpdateDeviceIdleTimer(v22);
        KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 400), v23);
        return;
      case 5:
        v24 = *((_QWORD *)a2 + 1);
        if ( !BugCheckParameter2 )
          goto LABEL_51;
        v46 = a2[4];
        if ( v46 >= *(_DWORD *)(v24 + 868) )
          PopFxBugCheck(0x611uLL, BugCheckParameter2, *((_QWORD *)a2 + 1), v46);
        PopFxAddLogEntry(*(_QWORD *)(v24 + 48), v46, 18LL);
        PopPepCompleteComponentIdleState(*(_QWORD *)(v24 + 56), v46);
        return;
      case 6:
        v28 = *((_QWORD *)a2 + 1);
        if ( !BugCheckParameter2 )
LABEL_51:
          PopFxBugCheck(0x603uLL, 0LL, (int)*a2, 0LL);
        v29 = a2[4];
        if ( (unsigned int)v29 >= *(_DWORD *)(v28 + 868) )
          PopFxBugCheck(0x611uLL, BugCheckParameter2, *((_QWORD *)a2 + 1), (unsigned int)v29);
        _mm_lfence();
        v47 = *(_QWORD *)(*(_QWORD *)(v28 + 872) + 8 * v29);
        v48 = *(_QWORD *)(v47 + 424);
        v49 = _InterlockedDecrement((volatile signed __int32 *)(v48 + 40));
        _InterlockedOr((volatile signed __int32 *)(v48 + 40), 0x20000000u);
        if ( (v49 & 0x8000000) == 0 )
          PopFxAddLogEntry(*(_QWORD *)(v28 + 48), v29, 20LL);
        PopDiagTraceFxPerfRequestProgress(v48, v49 & 7, v6);
        PopFxCompleteComponentPerfState(
          v28,
          *(unsigned int *)(v47 + 16),
          *(_QWORD *)(v47 + 424),
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
LABEL_65:
    if ( !v7 )
      return;
  }
  v8 = *((_QWORD *)a2 + 1);
  if ( BugCheckParameter2 )
LABEL_4:
    PopFxBugCheck(0x603uLL, BugCheckParameter2, (int)*a2, 0LL);
  v11 = a2[4];
  if ( (unsigned int)v11 >= *(_DWORD *)(v8 + 868) )
    PopFxBugCheck(0x611uLL, 0LL, *((_QWORD *)a2 + 1), (unsigned int)v11);
  _mm_lfence();
  v12 = *(_QWORD *)(*(_QWORD *)(v8 + 872) + 8 * v11);
  if ( *(_DWORD *)(v12 + 152) )
    PopFxBugCheck(0x615uLL, 0LL, (unsigned int)v11, 0LL);
  if ( *(int *)(v12 + 88) < 0 )
    PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v8 + 872) + 8 * v11), 1uLL);
  if ( (*(_DWORD *)(v12 + 88) & 0x3FFFFFFF) == 0 )
    PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v8 + 872) + 8 * v11), 2uLL);
  if ( *(_DWORD *)(v12 + 140) )
    PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v8 + 872) + 8 * v11), 3uLL);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 200));
  if ( *(_DWORD *)(v12 + 216) == 1 )
  {
    *(_QWORD *)(v12 + 224) = MEMORY[0xFFFFF78000000008];
    *(_BYTE *)(v12 + 208) = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 200), 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v12 + 200), retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v13);
  __writecr8(v13);
  v64 = *(_QWORD *)(v8 + 48);
  v53 = v11;
  if ( PopDiagHandleRegistered
    && PopDiagHandle
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 32) + 96LL, 4u, 256LL)
     || *(_BYTE *)(v16 + 101) && EtwpLevelKeywordEnabled(*(_QWORD *)(v16 + 40) + 96LL, v14, v15)) )
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
  if ( *(_QWORD *)(v8 + 112) )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 192), (unsigned int)v11);
  PopPepProcessEvent(*(_QWORD *)(v8 + 56), 208 * v11 + *(_QWORD *)(v8 + 56) + 192LL, 2u, 3u, (__int64)ActivityId, 0LL);
  PopFxCompleteComponentActivation(v8);
}
