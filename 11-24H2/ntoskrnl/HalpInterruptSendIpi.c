/*
 * XREFs of HalpInterruptSendIpi @ 0x1402C8970
 * Callers:
 *     KiAbDeferredProcessingWorker @ 0x140283660 (KiAbDeferredProcessingWorker.c)
 *     KiInsertQueueDpc @ 0x140284920 (KiInsertQueueDpc.c)
 *     KiSendSoftwareInterruptAffinity @ 0x1402852DC (KiSendSoftwareInterruptAffinity.c)
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 *     KiIpiSendRequest @ 0x1402A24D0 (KiIpiSendRequest.c)
 *     KiReadyDeferredReadyList @ 0x1402A7E10 (KiReadyDeferredReadyList.c)
 *     KiUpdateRunTime @ 0x1402AA8E0 (KiUpdateRunTime.c)
 *     KiCheckForTimerExpiration @ 0x1402AB5D0 (KiCheckForTimerExpiration.c)
 *     KiCheckForThreadDispatch @ 0x1402C5DAC (KiCheckForThreadDispatch.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiProcessThreadWaitList @ 0x1402C75B0 (KiProcessThreadWaitList.c)
 *     HalSendSoftwareInterrupt @ 0x1402C8820 (HalSendSoftwareInterrupt.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     KiDetachProcess @ 0x1402C9FD0 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402CB2C0 (KeUnstackDetachProcess.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x1402DAC90 (KiStartThreadCycleAccumulationContextSwap.c)
 *     KiRequestSoftwareInterrupt @ 0x1402DC510 (KiRequestSoftwareInterrupt.c)
 *     KiSignalThreadForApc @ 0x1402DD8B0 (KiSignalThreadForApc.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     MiUnlockStealVm @ 0x1402FE250 (MiUnlockStealVm.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1403179A4 (KiSendClockInterruptToTargetProcessor.c)
 *     KeForceDetachProcess @ 0x1403422E0 (KeForceDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     HalRequestSoftwareInterrupt @ 0x140369040 (HalRequestSoftwareInterrupt.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140371618 (KiIntRedirectQueueRequestOnProcessor.c)
 *     HalRequestClockInterrupt @ 0x1403718A0 (HalRequestClockInterrupt.c)
 *     HalRequestIpi @ 0x140371AA0 (HalRequestIpi.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 *     MiDetachFromWorkingSet @ 0x1403E1C30 (MiDetachFromWorkingSet.c)
 *     KiRequestTimer2Expiration @ 0x14040F090 (KiRequestTimer2Expiration.c)
 *     KiSendSoftwareInterrupt @ 0x14040F180 (KiSendSoftwareInterrupt.c)
 *     HalRequestIpiSpecifyVector @ 0x14042A540 (HalRequestIpiSpecifyVector.c)
 *     HalRequestDeferredRecoveryServiceInterrupt @ 0x140541AD0 (HalRequestDeferredRecoveryServiceInterrupt.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     HvlSendSyntheticClusterIpi @ 0x1403A4B40 (HvlSendSyntheticClusterIpi.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpInterruptSendIpi(unsigned int *a1, unsigned int a2)
{
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
  unsigned __int16 v17; // cx
  unsigned __int64 *v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int16 v20; // ax
  __int64 v21; // rcx
  unsigned __int64 v22; // r13
  unsigned int v23; // ecx
  unsigned __int16 *v24; // r15
  __int64 v25; // r9
  int v26; // r10d
  __int64 v27; // rax
  char v28; // bl
  int v29; // eax
  unsigned __int64 v30; // r14
  __int64 v31; // r12
  unsigned __int64 v32; // rdx
  __int64 v33; // rdx
  char v34; // bl
  int v35; // eax
  __int64 v36; // rcx
  char v37; // bl
  int v38; // eax
  __int64 v39; // r9
  char v40; // bl
  unsigned __int16 v41; // r9
  unsigned __int16 v42; // cx
  unsigned __int16 v43; // r12
  unsigned __int16 v44; // si
  __int64 v45; // rax
  unsigned int v46; // r8d
  __int64 v47; // rcx
  unsigned __int16 v48; // cx
  unsigned __int16 Count; // r12
  unsigned __int16 v50; // si
  __int64 v51; // rax
  int v52; // [rsp+40h] [rbp-C0h]
  int v53; // [rsp+58h] [rbp-A8h] BYREF
  int v54; // [rsp+5Ch] [rbp-A4h]
  int v55; // [rsp+60h] [rbp-A0h] BYREF
  int v56; // [rsp+64h] [rbp-9Ch]
  __int128 v57; // [rsp+68h] [rbp-98h]
  int v58; // [rsp+78h] [rbp-88h]
  int v59; // [rsp+80h] [rbp-80h]
  int v60; // [rsp+84h] [rbp-7Ch]
  _DWORD v61[4]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v62[2]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v63[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v64; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v65[33]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int16 v66; // [rsp+1C0h] [rbp+C0h]
  unsigned __int16 v67; // [rsp+1C2h] [rbp+C2h]
  int v68; // [rsp+1C4h] [rbp+C4h]
  _QWORD v69[33]; // [rsp+1C8h] [rbp+C8h] BYREF

  memset_0(&v64, 0, 0x108uLL);
  v5 = *a1;
  v6 = &v64;
  v58 = 0;
  v57 = 0LL;
  switch ( (_DWORD)v5 )
  {
    case 6:
      v8 = a1[2];
      LODWORD(v57) = 4;
      DWORD2(v57) = *(_DWORD *)(HalpInterruptLocalIds + 4 * v8);
      break;
    case 1:
    case 2:
      if ( HalpInterruptIpiPolicy == 4
        && (*(_DWORD *)(HalpInterruptController + 244) & 0x10) != 0
        && !HalpInterruptNoShorthand )
      {
        LODWORD(v57) = 1;
        break;
      }
      v6 = (__int64 *)*((_QWORD *)a1 + 1);
      if ( (_DWORD)v5 != 1 )
        goto LABEL_18;
      v64 = 2097153LL;
      memset_0(v65, 0, 0x100uLL);
      v15 = *((unsigned __int16 *)v6 + 4);
      v16 = *v6;
      if ( (unsigned __int16)v64 <= (unsigned __int16)v15 )
      {
        if ( WORD1(v64) <= (unsigned __int16)v15 )
          goto LABEL_17;
        LOWORD(v64) = v15 + 1;
      }
      v65[v15] |= v16;
LABEL_17:
      v6 = &v64;
      goto LABEL_18;
    case 3:
      if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x10) == 0 || HalpInterruptNoShorthand )
      {
        WORD1(v64) = 32;
        memset_0(v65, 0, 0x100uLL);
        v48 = WORD1(v64);
        Count = WORD1(v64);
        if ( KeActiveProcessors.Count <= WORD1(v64) )
          Count = KeActiveProcessors.Count;
        LOWORD(v64) = Count;
        v50 = 0;
        HIDWORD(v64) = 0;
        if ( Count )
        {
          memmove(v65, &KeActiveProcessors.8, 8LL * Count);
          do
            ++v50;
          while ( v50 < Count );
          v48 = WORD1(v64);
        }
        if ( v50 < v48 )
        {
          do
          {
            v51 = v50++;
            v65[v51] = 0LL;
          }
          while ( v50 < WORD1(v64) );
        }
        goto LABEL_18;
      }
      LODWORD(v57) = 1;
      break;
    case 4:
      if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x20) == 0 || HalpInterruptNoShorthand )
      {
        WORD1(v64) = 32;
        memset_0(v65, 0, 0x100uLL);
        v42 = WORD1(v64);
        v43 = WORD1(v64);
        if ( KeActiveProcessors.Count <= WORD1(v64) )
          v43 = KeActiveProcessors.Count;
        LOWORD(v64) = v43;
        v44 = 0;
        HIDWORD(v64) = 0;
        if ( v43 )
        {
          memmove(v65, &KeActiveProcessors.8, 8LL * v43);
          do
            ++v44;
          while ( v44 < v43 );
          v42 = WORD1(v64);
        }
        if ( v44 < v42 )
        {
          do
          {
            v45 = v44++;
            v65[v45] = 0LL;
          }
          while ( v44 < WORD1(v64) );
        }
        v46 = *((_DWORD *)KiGlobalState + KeGetPcr()->Prcb.Number);
        v47 = v46 >> 6;
        if ( (unsigned __int16)v64 > (unsigned int)v47 )
          v65[v47] &= ~(1LL << (v46 & 0x3F));
        goto LABEL_18;
      }
      LODWORD(v57) = 2;
      break;
    case 5:
      if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
      {
        LODWORD(v57) = 3;
        break;
      }
      v64 = 2097153LL;
      memset_0(v65, 0, 0x100uLL);
      v10 = *((_DWORD *)KiGlobalState + KeGetPcr()->Prcb.Number);
      v11 = v10 & 0x3F;
      v12 = v10 >> 6;
      if ( (unsigned __int16)v64 > (unsigned int)v12 )
        goto LABEL_14;
      if ( WORD1(v64) > (unsigned int)v12 )
      {
        LOWORD(v64) = v12 + 1;
LABEL_14:
        v13 = &v65[v12];
        v14 = *v13;
        _bittestandset64(&v14, v11);
        *v13 = v14;
      }
LABEL_18:
      memset_0(v69, 0, 0x100uLL);
      if ( qword_140FC11C8 )
      {
        if ( (__int64 (__fastcall *)(_QWORD, _QWORD))qword_140FC11C8 == HvlSendSyntheticClusterIpi )
          return HvlSendSyntheticClusterIpi(v6, a2);
        return (unsigned int)guard_dispatch_icall_no_overrides(v6, a2);
      }
      v67 = 32;
      memset_0(v69, 0, 0x100uLL);
      v17 = *(_WORD *)v6;
      v18 = (unsigned __int64 *)v67;
      if ( (unsigned __int16)HalpInterruptPhysicalTargets < *(_WORD *)v6 )
        v17 = HalpInterruptPhysicalTargets;
      v66 = v17;
      v19 = v17;
      if ( v17 > v67 )
      {
        v17 = v67;
        v66 = v67;
        v19 = v67;
      }
      v20 = 0;
      if ( (_WORD)v19 )
      {
        v19 = (unsigned __int64)qword_140FC2DA8;
        do
        {
          v36 = v20++;
          v69[v36] = qword_140FC2DA8[v36] & v6[v36 + 1];
          v17 = v66;
        }
        while ( v20 < v66 );
        v18 = (unsigned __int64 *)v67;
      }
      v68 = 0;
      if ( v20 < (unsigned __int16)v18 )
      {
        do
        {
          v21 = v20++;
          v69[v21] = 0LL;
        }
        while ( v20 < v67 );
        v17 = v66;
      }
      if ( HalpInterruptIpiPolicy == 3 )
      {
        v19 = 0LL;
        if ( v17 )
        {
          v18 = v69;
          v39 = v17;
          do
          {
            v19 = (unsigned int)__popcnt(*v18++) + (unsigned int)v19;
            --v39;
          }
          while ( v39 );
          if ( (unsigned int)v19 > HalpInterruptIpiThreshold )
          {
            v59 = -1;
            v60 = 1;
            v61[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
            v61[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
            v40 = HalpDisableInterrupts(HalpInterruptIpiLines, v18, v19);
            result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v61);
            v23 = result;
            if ( v40 )
              goto LABEL_11;
            return v23;
          }
        }
      }
      if ( HalpInterruptClusterModeEnabled )
      {
        v22 = HalpInterruptClusterData;
        v23 = 0;
        v24 = (unsigned __int16 *)(HalpInterruptClusterData + 16);
        while ( v22 < HalpInterruptClusterDataEnd )
        {
          v25 = *v24;
          if ( *(_WORD *)v6 > (unsigned __int16)v25 )
          {
            v19 = *((_QWORD *)v24 - 1) & v6[v25 + 1];
            if ( v19 )
            {
              if ( HalpInterruptIpiPolicy != 2 )
              {
                v26 = 0;
                LOBYTE(v18) = 0;
                do
                {
                  if ( (v19 & 1) != 0 )
                  {
                    if ( (_WORD)v25 || (_BYTE)v18 )
                    {
                      if ( (unsigned __int16)v25 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v18 >= 0x40u )
                      {
                        v27 = 0xFFFFFFFFLL;
                      }
                      else
                      {
                        v27 = *((unsigned int *)qword_140F22998 + 64 * v25 + (unsigned __int8)v18);
                        if ( !(_DWORD)v27 )
                          v27 = 0xFFFFFFFFLL;
                      }
                    }
                    else
                    {
                      v27 = 0LL;
                    }
                    v26 |= *(_DWORD *)(HalpInterruptTargets + 24 * v27 + 12);
                  }
                  LOBYTE(v18) = (_BYTE)v18 + 1;
                  v19 >>= 1;
                }
                while ( v19 );
              }
              v62[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
              v62[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
              v61[2] = -1;
              v61[3] = 1;
              v28 = HalpDisableInterrupts(HalpInterruptIpiLines, v18, v19);
              v29 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v62);
              v23 = v29;
              if ( v28 )
                _enable();
              if ( v29 < 0 )
                return v23;
            }
          }
          v22 += 24LL;
          v24 += 12;
        }
      }
      else
      {
        if ( HalpInterruptPhysicalModeOnly )
          goto LABEL_87;
        v19 = v6[1];
        v41 = 0;
        v52 = 0;
        while ( 1 )
        {
          while ( v19 )
          {
            _BitScanForward64((unsigned __int64 *)&v18, v19);
            v19 &= ~(1LL << (char)v18);
            if ( *(_DWORD *)(HalpInterruptTargets
                           + 24LL * *((unsigned int *)qword_140F22998 + 64 * v41 + (unsigned __int8)v18)) == 5 )
              v52 |= *(_DWORD *)(HalpInterruptTargets
                               + 24LL * *((unsigned int *)qword_140F22998 + 64 * v41 + (unsigned __int8)v18)
                               + 8);
          }
          if ( ++v41 >= *(_WORD *)v6 )
            break;
          v19 = v6[v41 + 1];
        }
        if ( !v52 )
        {
LABEL_87:
          v23 = 0;
        }
        else
        {
          v63[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
          v63[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
          v37 = HalpDisableInterrupts(HalpInterruptIpiLines, v18, 0LL);
          v38 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v63);
          v23 = v38;
          if ( v37 )
            _enable();
          if ( v38 < 0 )
            return v23;
        }
      }
      v30 = v69[0];
      LOWORD(v31) = 0;
      do
      {
        while ( !v30 )
        {
          v31 = (unsigned __int16)(v31 + 1);
          if ( (unsigned int)v31 >= v66 )
            return v23;
          v30 = v69[v31];
        }
        _BitScanForward64(&v32, v30);
        v30 &= ~(1LL << v32);
        v33 = *((unsigned int *)qword_140F22998 + 64 * (unsigned __int16)v31 + (unsigned __int8)v32);
        v56 = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v55 = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v53 = -1;
        v54 = 1;
        v34 = HalpDisableInterrupts(HalpInterruptIpiLines, v33, v19);
        v35 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), &v55);
        v23 = v35;
        if ( v34 )
          _enable();
      }
      while ( v35 >= 0 );
      return v23;
    default:
      return 3221225485LL;
  }
  v55 = -1;
  v56 = 1;
  v54 = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v53 = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v9 = HalpDisableInterrupts(HalpInterruptIpiLines, v5, v4);
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), &v53);
  if ( v9 )
LABEL_11:
    _enable();
  return result;
}
