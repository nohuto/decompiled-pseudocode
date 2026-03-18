/*
 * XREFs of HalpInterruptSendIpi @ 0x14031FDE0
 * Callers:
 *     KiAbDeferredProcessingWorker @ 0x140253050 (KiAbDeferredProcessingWorker.c)
 *     KiInsertQueueDpc @ 0x140254310 (KiInsertQueueDpc.c)
 *     KiSendSoftwareInterruptAffinity @ 0x140254CCC (KiSendSoftwareInterruptAffinity.c)
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 *     KiIpiSendRequest @ 0x1402928D0 (KiIpiSendRequest.c)
 *     KiSignalThreadForApc @ 0x140296870 (KiSignalThreadForApc.c)
 *     KiRequestSoftwareInterrupt @ 0x140297BA0 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x140299320 (KiReadyDeferredReadyList.c)
 *     KiUpdateRunTime @ 0x14029BDF0 (KiUpdateRunTime.c)
 *     KiCheckForTimerExpiration @ 0x14029CAE0 (KiCheckForTimerExpiration.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1402A0034 (KiSendClockInterruptToTargetProcessor.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockStealVm @ 0x1402E1FC0 (MiUnlockStealVm.c)
 *     KeForceDetachProcess @ 0x1402F9B70 (KeForceDetachProcess.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x14030BC30 (KiStartThreadCycleAccumulationContextSwap.c)
 *     KiCheckForThreadDispatch @ 0x14031D21C (KiCheckForThreadDispatch.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiProcessThreadWaitList @ 0x14031EA20 (KiProcessThreadWaitList.c)
 *     HalSendSoftwareInterrupt @ 0x14031FC90 (HalSendSoftwareInterrupt.c)
 *     KiFlushSoftwareInterruptBatch @ 0x14031FCD0 (KiFlushSoftwareInterruptBatch.c)
 *     KiDetachProcess @ 0x140321440 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x140322730 (KeUnstackDetachProcess.c)
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     HalRequestSoftwareInterrupt @ 0x14034AB60 (HalRequestSoftwareInterrupt.c)
 *     MiDetachFromWorkingSet @ 0x140379390 (MiDetachFromWorkingSet.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x1403B5288 (KiIntRedirectQueueRequestOnProcessor.c)
 *     HalRequestClockInterrupt @ 0x1403B5510 (HalRequestClockInterrupt.c)
 *     HalRequestIpi @ 0x1403B67D0 (HalRequestIpi.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403DD970 (KiSearchForNewThreadsOnTarget.c)
 *     KiRequestTimer2Expiration @ 0x14041B550 (KiRequestTimer2Expiration.c)
 *     KiSendSoftwareInterrupt @ 0x14041B640 (KiSendSoftwareInterrupt.c)
 *     HalRequestIpiSpecifyVector @ 0x140437AC0 (HalRequestIpiSpecifyVector.c)
 *     HalRequestDeferredRecoveryServiceInterrupt @ 0x140544180 (HalRequestDeferredRecoveryServiceInterrupt.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     HvlSendSyntheticClusterIpi @ 0x1403C8710 (HvlSendSyntheticClusterIpi.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HalpInterruptSendIpi(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // r15d
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 *v6; // r14
  __int64 result; // rax
  __int64 v8; // rcx
  char v9; // bl
  unsigned int v10; // ecx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int16 v19; // cx
  unsigned __int64 *v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int16 v22; // ax
  __int64 v23; // rcx
  _DWORD *v24; // r13
  unsigned int v25; // ecx
  unsigned __int16 *v26; // r15
  __int64 v27; // r9
  int v28; // r10d
  __int64 v29; // rax
  char v30; // bl
  int v31; // eax
  unsigned __int64 v32; // r14
  __int64 v33; // r12
  unsigned __int64 v34; // rdx
  __int64 v35; // rdx
  char v36; // bl
  int v37; // eax
  __int64 v38; // rcx
  char v39; // bl
  int v40; // eax
  __int64 v41; // r9
  char v42; // bl
  unsigned __int16 v43; // r9
  unsigned __int16 v44; // cx
  unsigned __int16 v45; // r12
  unsigned __int16 v46; // si
  __int64 v47; // rax
  unsigned int v48; // r8d
  __int64 v49; // rcx
  unsigned __int16 v50; // cx
  unsigned __int16 Count; // r12
  unsigned __int16 v52; // si
  __int64 v53; // rax
  __int128 v54; // [rsp+38h] [rbp-C8h] BYREF
  int v55; // [rsp+48h] [rbp-B8h]
  unsigned int v56; // [rsp+50h] [rbp-B0h]
  int v57; // [rsp+54h] [rbp-ACh]
  int v58; // [rsp+58h] [rbp-A8h] BYREF
  int v59; // [rsp+5Ch] [rbp-A4h]
  int v60; // [rsp+60h] [rbp-A0h] BYREF
  int v61; // [rsp+64h] [rbp-9Ch]
  __int128 v62; // [rsp+68h] [rbp-98h] BYREF
  int v63; // [rsp+78h] [rbp-88h]
  int v64; // [rsp+80h] [rbp-80h]
  int v65; // [rsp+84h] [rbp-7Ch]
  _DWORD v66[4]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v67[2]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v68[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v70[33]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int16 v71; // [rsp+1C0h] [rbp+C0h]
  unsigned __int16 v72; // [rsp+1C2h] [rbp+C2h]
  int v73; // [rsp+1C4h] [rbp+C4h]
  _QWORD v74[33]; // [rsp+1C8h] [rbp+C8h] BYREF

  v2 = a2;
  v56 = a2;
  memset_0(&v69, 0, 0x108uLL);
  v5 = *a1;
  v6 = &v69;
  v63 = 0;
  v62 = 0LL;
  switch ( (_DWORD)v5 )
  {
    case 6:
      v8 = a1[2];
      LODWORD(v62) = 4;
      DWORD2(v62) = *(_DWORD *)(HalpInterruptLocalIds + 4 * v8);
      break;
    case 1:
    case 2:
      if ( HalpInterruptIpiPolicy == 4
        && (*(_DWORD *)(HalpInterruptController + 244) & 0x10) != 0
        && !HalpInterruptNoShorthand )
      {
        LODWORD(v62) = 1;
        break;
      }
      v6 = (__int64 *)*((_QWORD *)a1 + 1);
      if ( (_DWORD)v5 != 1 )
        goto LABEL_18;
      v69 = 2097153LL;
      memset_0(v70, 0, 0x100uLL);
      v15 = *((unsigned __int16 *)v6 + 4);
      v16 = *v6;
      if ( (unsigned __int16)v69 <= (unsigned __int16)v15 )
      {
        if ( WORD1(v69) <= (unsigned __int16)v15 )
          goto LABEL_17;
        LOWORD(v69) = v15 + 1;
      }
      v70[v15] |= v16;
LABEL_17:
      v6 = &v69;
      goto LABEL_18;
    case 3:
      if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x10) == 0 || HalpInterruptNoShorthand )
      {
        WORD1(v69) = 32;
        memset_0(v70, 0, 0x100uLL);
        v50 = WORD1(v69);
        Count = WORD1(v69);
        if ( KeActiveProcessors.Count <= WORD1(v69) )
          Count = KeActiveProcessors.Count;
        LOWORD(v69) = Count;
        v52 = 0;
        HIDWORD(v69) = 0;
        if ( Count )
        {
          memmove(v70, &KeActiveProcessors.8, 8LL * Count);
          do
            ++v52;
          while ( v52 < Count );
          v50 = WORD1(v69);
        }
        if ( v52 < v50 )
        {
          do
          {
            v53 = v52++;
            v70[v53] = 0LL;
          }
          while ( v52 < WORD1(v69) );
        }
        goto LABEL_18;
      }
      LODWORD(v62) = 1;
      break;
    case 4:
      if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x20) == 0 || HalpInterruptNoShorthand )
      {
        WORD1(v69) = 32;
        memset_0(v70, 0, 0x100uLL);
        v44 = WORD1(v69);
        v45 = WORD1(v69);
        if ( KeActiveProcessors.Count <= WORD1(v69) )
          v45 = KeActiveProcessors.Count;
        LOWORD(v69) = v45;
        v46 = 0;
        HIDWORD(v69) = 0;
        if ( v45 )
        {
          memmove(v70, &KeActiveProcessors.8, 8LL * v45);
          do
            ++v46;
          while ( v46 < v45 );
          v44 = WORD1(v69);
        }
        if ( v46 < v44 )
        {
          do
          {
            v47 = v46++;
            v70[v47] = 0LL;
          }
          while ( v46 < WORD1(v69) );
        }
        v48 = *((_DWORD *)KiGlobalState + KeGetPcr()->Prcb.Number);
        v49 = v48 >> 6;
        if ( (unsigned __int16)v69 > (unsigned int)v49 )
          v70[v49] &= ~(1LL << (v48 & 0x3F));
        goto LABEL_18;
      }
      LODWORD(v62) = 2;
      break;
    case 5:
      if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
      {
        LODWORD(v62) = 3;
        break;
      }
      v69 = 2097153LL;
      memset_0(v70, 0, 0x100uLL);
      v10 = *((_DWORD *)KiGlobalState + KeGetPcr()->Prcb.Number);
      v11 = v10 & 0x3F;
      v12 = v10 >> 6;
      if ( (unsigned __int16)v69 > (unsigned int)v12 )
        goto LABEL_14;
      if ( WORD1(v69) > (unsigned int)v12 )
      {
        LOWORD(v69) = v12 + 1;
LABEL_14:
        v13 = &v70[v12];
        v14 = *v13;
        _bittestandset64(&v14, v11);
        *v13 = v14;
      }
LABEL_18:
      memset_0(v74, 0, 0x100uLL);
      v55 = 0;
      v54 = 0LL;
      if ( qword_140FC0F68 )
      {
        if ( (__int64 (__fastcall *)(_QWORD, _QWORD))qword_140FC0F68 == HvlSendSyntheticClusterIpi )
          return HvlSendSyntheticClusterIpi(v6, v2);
        return (unsigned int)guard_dispatch_icall_no_overrides(v6, v2, v17, v18);
      }
      v72 = 32;
      memset_0(v74, 0, 0x100uLL);
      v19 = *(_WORD *)v6;
      v20 = (unsigned __int64 *)v72;
      if ( (unsigned __int16)HalpInterruptPhysicalTargets < *(_WORD *)v6 )
        v19 = HalpInterruptPhysicalTargets;
      v71 = v19;
      v21 = v19;
      if ( v19 > v72 )
      {
        v19 = v72;
        v71 = v72;
        v21 = v72;
      }
      v22 = 0;
      if ( (_WORD)v21 )
      {
        v21 = (unsigned __int64)qword_140FC2B48;
        do
        {
          v38 = v22++;
          v74[v38] = qword_140FC2B48[v38] & v6[v38 + 1];
          v19 = v71;
        }
        while ( v22 < v71 );
        v20 = (unsigned __int64 *)v72;
      }
      v73 = 0;
      if ( v22 < (unsigned __int16)v20 )
      {
        do
        {
          v23 = v22++;
          v74[v23] = 0LL;
        }
        while ( v22 < v72 );
        v19 = v71;
      }
      if ( HalpInterruptIpiPolicy == 3 )
      {
        v21 = 0LL;
        if ( v19 )
        {
          v20 = v74;
          v41 = v19;
          do
          {
            v21 = (unsigned int)__popcnt(*v20++) + (unsigned int)v21;
            --v41;
          }
          while ( v41 );
          if ( (unsigned int)v21 > HalpInterruptIpiThreshold )
          {
            LODWORD(v54) = 1;
            v64 = -1;
            v65 = 1;
            v66[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
            v66[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
            v42 = HalpDisableInterrupts(HalpInterruptIpiLines, v20, v21);
            result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v66, &v54, v2);
            v25 = result;
            if ( v42 )
              goto LABEL_11;
            return v25;
          }
        }
      }
      if ( HalpInterruptClusterModeEnabled )
      {
        v24 = (_DWORD *)HalpInterruptClusterData;
        v25 = 0;
        v26 = (unsigned __int16 *)(HalpInterruptClusterData + 16);
        while ( (unsigned __int64)v24 < HalpInterruptClusterDataEnd )
        {
          v27 = *v26;
          if ( *(_WORD *)v6 > (unsigned __int16)v27 )
          {
            v21 = *((_QWORD *)v26 - 1) & v6[v27 + 1];
            if ( v21 )
            {
              DWORD2(v54) = *v24;
              LODWORD(v54) = 6;
              if ( HalpInterruptIpiPolicy == 2 )
              {
                HIDWORD(v54) = -1;
              }
              else
              {
                v28 = 0;
                HIDWORD(v54) = 0;
                LOBYTE(v20) = 0;
                do
                {
                  if ( (v21 & 1) != 0 )
                  {
                    if ( (_WORD)v27 || (_BYTE)v20 )
                    {
                      if ( (unsigned __int16)v27 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v20 >= 0x40u )
                      {
                        v29 = 0xFFFFFFFFLL;
                      }
                      else
                      {
                        v29 = *((unsigned int *)qword_140F21E78 + 64 * v27 + (unsigned __int8)v20);
                        if ( !(_DWORD)v29 )
                          v29 = 0xFFFFFFFFLL;
                      }
                    }
                    else
                    {
                      v29 = 0LL;
                    }
                    v28 |= *(_DWORD *)(HalpInterruptTargets + 24 * v29 + 12);
                    HIDWORD(v54) = v28;
                  }
                  LOBYTE(v20) = (_BYTE)v20 + 1;
                  v21 >>= 1;
                }
                while ( v21 );
              }
              v67[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
              v67[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
              v66[2] = -1;
              v66[3] = 1;
              v30 = HalpDisableInterrupts(HalpInterruptIpiLines, v20, v21);
              v31 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v67, &v54, v56);
              v25 = v31;
              if ( v30 )
                _enable();
              if ( v31 < 0 )
                return v25;
            }
          }
          v24 += 6;
          v26 += 12;
        }
        v2 = v56;
      }
      else
      {
        if ( HalpInterruptPhysicalModeOnly )
          goto LABEL_88;
        v21 = v6[1];
        v43 = 0;
        LODWORD(v54) = 5;
        DWORD2(v54) = 0;
        while ( 1 )
        {
          while ( v21 )
          {
            _BitScanForward64((unsigned __int64 *)&v20, v21);
            v21 &= ~(1LL << (char)v20);
            if ( *(_DWORD *)(HalpInterruptTargets
                           + 24LL * *((unsigned int *)qword_140F21E78 + 64 * v43 + (unsigned __int8)v20)) == 5 )
              DWORD2(v54) |= *(_DWORD *)(HalpInterruptTargets
                                       + 24LL * *((unsigned int *)qword_140F21E78 + 64 * v43 + (unsigned __int8)v20)
                                       + 8);
          }
          if ( ++v43 >= *(_WORD *)v6 )
            break;
          v21 = v6[v43 + 1];
        }
        if ( !DWORD2(v54) )
        {
LABEL_88:
          v25 = 0;
        }
        else
        {
          v56 = -1;
          v57 = 1;
          v68[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
          v68[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
          v39 = HalpDisableInterrupts(HalpInterruptIpiLines, v20, 0LL);
          v40 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v68, &v54, v2);
          v25 = v40;
          if ( v39 )
            _enable();
          if ( v40 < 0 )
            return v25;
        }
      }
      v32 = v74[0];
      LOWORD(v33) = 0;
      do
      {
        while ( !v32 )
        {
          v33 = (unsigned __int16)(v33 + 1);
          if ( (unsigned int)v33 >= v71 )
            return v25;
          v32 = v74[v33];
        }
        _BitScanForward64(&v34, v32);
        v32 &= ~(1LL << v34);
        v35 = *((unsigned int *)qword_140F21E78 + 64 * (unsigned __int16)v33 + (unsigned __int8)v34);
        LODWORD(v54) = 4;
        DWORD2(v54) = *(_DWORD *)(HalpInterruptTargets + 24 * v35 + 8);
        v61 = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v60 = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v58 = -1;
        v59 = 1;
        v36 = HalpDisableInterrupts(HalpInterruptIpiLines, v35, v21);
        v37 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), &v60, &v54, v2);
        v25 = v37;
        if ( v36 )
          _enable();
      }
      while ( v37 >= 0 );
      return v25;
    default:
      return 3221225485LL;
  }
  v60 = -1;
  v61 = 1;
  v59 = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v58 = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v9 = HalpDisableInterrupts(HalpInterruptIpiLines, v5, v4);
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), &v58, &v62, v2);
  if ( v9 )
LABEL_11:
    _enable();
  return result;
}
