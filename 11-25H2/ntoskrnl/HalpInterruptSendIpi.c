/*
 * XREFs of HalpInterruptSendIpi @ 0x140288640
 * Callers:
 *     HalRequestIpi @ 0x140205130 (HalRequestIpi.c)
 *     KeForceDetachProcess @ 0x14023A720 (KeForceDetachProcess.c)
 *     KiInsertQueueDpc @ 0x140252DA0 (KiInsertQueueDpc.c)
 *     KiSendSoftwareInterruptAffinity @ 0x140253D64 (KiSendSoftwareInterruptAffinity.c)
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiUpdateRunTime @ 0x140273230 (KiUpdateRunTime.c)
 *     KiCheckForTimerExpiration @ 0x140273F20 (KiCheckForTimerExpiration.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1402777C0 (KiSendClockInterruptToTargetProcessor.c)
 *     KiCheckForThreadDispatch @ 0x140285CEC (KiCheckForThreadDispatch.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiProcessThreadWaitList @ 0x1402874A0 (KiProcessThreadWaitList.c)
 *     HalSendSoftwareInterrupt @ 0x1402884F0 (HalSendSoftwareInterrupt.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x14028A0A0 (KiDetachProcess.c)
 *     HalRequestSoftwareInterrupt @ 0x14028F270 (HalRequestSoftwareInterrupt.c)
 *     MiUnlockStealVm @ 0x1402BB590 (MiUnlockStealVm.c)
 *     KiAbDeferredProcessingWorker @ 0x1402E4D00 (KiAbDeferredProcessingWorker.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x1402F1D40 (KiSignalThreadForApc.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F3D40 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x140315830 (KiReadyDeferredReadyList.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     KiIpiSendRequest @ 0x14032D550 (KiIpiSendRequest.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x140350FB0 (KiStartThreadCycleAccumulationContextSwap.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140377540 (KiIntRedirectQueueRequestOnProcessor.c)
 *     HalRequestClockInterrupt @ 0x1403777C0 (HalRequestClockInterrupt.c)
 *     MiDetachFromWorkingSet @ 0x1403C31E0 (MiDetachFromWorkingSet.c)
 *     KeUnstackDetachProcess @ 0x1403C41A0 (KeUnstackDetachProcess.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 *     KiRequestTimer2Expiration @ 0x14041E04C (KiRequestTimer2Expiration.c)
 *     KiSendSoftwareInterrupt @ 0x14041E140 (KiSendSoftwareInterrupt.c)
 *     HalRequestIpiSpecifyVector @ 0x140439850 (HalRequestIpiSpecifyVector.c)
 *     HalRequestDeferredRecoveryServiceInterrupt @ 0x140541950 (HalRequestDeferredRecoveryServiceInterrupt.c)
 * Callees:
 *     ?KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140267478 (-KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     HvlSendSyntheticClusterIpi @ 0x140267530 (HvlSendSyntheticClusterIpi.c)
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall HalpInterruptSendIpi(_DWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // ecx
  struct _KAFFINITY_EX *v7; // r13
  __int64 result; // rax
  __int64 v9; // rcx
  char v10; // bl
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  unsigned __int64 *v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // r12d
  $B38C3B1372D6E954799962D5DD404846 *v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r14
  unsigned __int16 *i; // rcx
  __int64 v23; // r10
  unsigned __int64 v24; // r9
  __int64 v25; // rax
  char v26; // bl
  int v27; // eax
  unsigned __int64 v28; // r14
  __int64 v29; // r13
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  char v32; // bl
  int v33; // eax
  unsigned int v34; // ecx
  char v35; // bl
  __int64 v36; // r9
  unsigned int v37; // ecx
  unsigned __int16 v38; // cx
  unsigned __int16 v39; // si
  unsigned __int16 v40; // di
  __int64 v41; // rax
  unsigned int v42; // r8d
  __int64 v43; // rcx
  char v44; // bl
  int v45; // eax
  unsigned __int16 Size; // cx
  unsigned __int16 Count; // si
  unsigned __int16 v48; // di
  __int64 v49; // rax
  int v50; // [rsp+40h] [rbp-C0h]
  int v51; // [rsp+58h] [rbp-A8h] BYREF
  int v52; // [rsp+5Ch] [rbp-A4h]
  int v53; // [rsp+60h] [rbp-A0h] BYREF
  int v54; // [rsp+64h] [rbp-9Ch]
  __int128 v55; // [rsp+68h] [rbp-98h]
  int v56; // [rsp+78h] [rbp-88h]
  int v57; // [rsp+80h] [rbp-80h]
  int v58; // [rsp+84h] [rbp-7Ch]
  _DWORD v59[4]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v60[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 *v61; // [rsp+A0h] [rbp-60h]
  int v62; // [rsp+A8h] [rbp-58h]
  int v63; // [rsp+ACh] [rbp-54h]
  _DWORD v64[4]; // [rsp+B0h] [rbp-50h] BYREF
  struct _KAFFINITY_EX v65; // [rsp+C0h] [rbp-40h] BYREF
  struct _KAFFINITY_EX v66; // [rsp+1D0h] [rbp+D0h] BYREF

  memset_0(&v65, 0, sizeof(v65));
  v6 = *a1;
  v7 = &v65;
  v56 = 0;
  v55 = 0LL;
  switch ( v6 )
  {
    case 6:
      v9 = (unsigned int)a1[2];
      LODWORD(v55) = 4;
      DWORD2(v55) = *(_DWORD *)(HalpInterruptLocalIds + 4 * v9);
      break;
    case 1:
    case 2:
      if ( HalpInterruptIpiPolicy == 4
        && (*(_DWORD *)(HalpInterruptController + 244) & 0x10) != 0
        && !HalpInterruptNoShorthand )
      {
        LODWORD(v55) = 1;
        break;
      }
      v7 = (struct _KAFFINITY_EX *)*((_QWORD *)a1 + 1);
      if ( v6 != 1 )
        goto LABEL_18;
      *(_QWORD *)&v65.Count = 2097153LL;
      memset_0(&v65.8, 0, sizeof(v65.8));
      v16 = LOWORD(v7->Bitmap[0]);
      v17 = *(_QWORD *)&v7->Count;
      if ( v65.Count <= (unsigned __int16)v16 )
      {
        if ( v65.Size <= (unsigned __int16)v16 )
          goto LABEL_17;
        v65.Count = v16 + 1;
      }
      v65.Bitmap[v16] |= v17;
LABEL_17:
      v7 = &v65;
      goto LABEL_18;
    case 3:
      if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x10) == 0 || HalpInterruptNoShorthand )
      {
        v65.Size = 32;
        memset_0(&v65.8, 0, sizeof(v65.8));
        Size = v65.Size;
        Count = v65.Size;
        if ( KeActiveProcessors.Count <= v65.Size )
          Count = KeActiveProcessors.Count;
        v65.Count = Count;
        v48 = 0;
        v65.Reserved = 0;
        if ( Count )
        {
          memmove(&v65.8, &KeActiveProcessors.8, 8LL * Count);
          do
            ++v48;
          while ( v48 < Count );
          Size = v65.Size;
        }
        if ( v48 < Size )
        {
          do
          {
            v49 = v48++;
            v65.Bitmap[v49] = 0LL;
          }
          while ( v48 < v65.Size );
        }
        goto LABEL_18;
      }
      LODWORD(v55) = 1;
      break;
    case 4:
      if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x20) == 0 || HalpInterruptNoShorthand )
      {
        v65.Size = 32;
        memset_0(&v65.8, 0, sizeof(v65.8));
        v38 = v65.Size;
        v39 = v65.Size;
        if ( KeActiveProcessors.Count <= v65.Size )
          v39 = KeActiveProcessors.Count;
        v65.Count = v39;
        v40 = 0;
        v65.Reserved = 0;
        if ( v39 )
        {
          memmove(&v65.8, &KeActiveProcessors.8, 8LL * v39);
          do
            ++v40;
          while ( v40 < v39 );
          v38 = v65.Size;
        }
        if ( v40 < v38 )
        {
          do
          {
            v41 = v40++;
            v65.Bitmap[v41] = 0LL;
          }
          while ( v40 < v65.Size );
        }
        v42 = *((_DWORD *)KiGlobalState + KeGetPcr()->Prcb.Number);
        v43 = v42 >> 6;
        if ( v65.Count > (unsigned int)v43 )
          v65.Bitmap[v43] &= ~(1LL << (v42 & 0x3F));
        goto LABEL_18;
      }
      LODWORD(v55) = 2;
      break;
    case 5:
      if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
      {
        LODWORD(v55) = 3;
        break;
      }
      *(_QWORD *)&v65.Count = 2097153LL;
      memset_0(&v65.8, 0, sizeof(v65.8));
      v11 = *((_DWORD *)KiGlobalState + KeGetPcr()->Prcb.Number);
      v12 = v11 & 0x3F;
      v13 = v11 >> 6;
      if ( v65.Count > (unsigned int)v13 )
        goto LABEL_14;
      if ( v65.Size > (unsigned int)v13 )
      {
        v65.Count = v13 + 1;
LABEL_14:
        v14 = &v65.Bitmap[v13];
        v15 = *v14;
        _bittestandset64((__int64 *)&v15, v12);
        *v14 = v15;
      }
LABEL_18:
      memset_0(&v66.8, 0, sizeof(v66.8));
      v18 = 0;
      if ( qword_140FC07C8 )
      {
        if ( (__int64 (__fastcall *)(__int64, unsigned int))qword_140FC07C8 == HvlSendSyntheticClusterIpi )
          return (unsigned int)HvlSendSyntheticClusterIpi((__int64)v7, a2);
        else
          return (unsigned int)guard_dispatch_icall_no_overrides(v7, a2);
      }
      else
      {
        *(_QWORD *)&v66.Count = 2097153LL;
        memset_0(&v66.8, 0, sizeof(v66.8));
        KiAndAffinityEx(&HalpInterruptPhysicalTargets, v7, &v66, v66.Size);
        if ( HalpInterruptIpiPolicy != 3 )
          goto LABEL_20;
        v34 = 0;
        if ( !v66.Count )
          goto LABEL_20;
        v19 = &v66.8;
        v20 = v66.Count;
        do
        {
          v34 += __popcnt(v19->Bitmap[0]);
          v19 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v19 + 8);
          --v20;
        }
        while ( v20 );
        if ( v34 > HalpInterruptIpiThreshold )
        {
          v57 = -1;
          v58 = 1;
          v59[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
          v59[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
          v35 = HalpDisableInterrupts(HalpInterruptIpiLines, v19, 0LL);
          result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v59);
          v18 = result;
          if ( v35 )
            goto LABEL_11;
        }
        else
        {
LABEL_20:
          if ( HalpInterruptClusterModeEnabled )
          {
            v21 = HalpInterruptClusterData;
            for ( i = (unsigned __int16 *)(HalpInterruptClusterData + 16); ; i += 12 )
            {
              v61 = i;
              if ( v21 >= HalpInterruptClusterDataEnd )
                break;
              v23 = *i;
              if ( v7->Count > (unsigned __int16)v23 )
              {
                v24 = *((_QWORD *)i - 1) & v7->Bitmap[v23];
                if ( v24 )
                {
                  if ( HalpInterruptIpiPolicy != 2 )
                  {
                    v19 = 0LL;
                    LOBYTE(v20) = 0;
                    do
                    {
                      if ( (v24 & 1) != 0 )
                      {
                        if ( (_WORD)v23 || (_BYTE)v20 )
                        {
                          if ( (unsigned __int16)v23 >= (unsigned __int16)KiActiveGroups
                            || (unsigned __int8)v20 >= 0x40u )
                          {
                            v25 = 0xFFFFFFFFLL;
                          }
                          else
                          {
                            v25 = *((unsigned int *)qword_140F216A8 + 64 * v23 + (unsigned __int8)v20);
                            if ( !(_DWORD)v25 )
                              v25 = 0xFFFFFFFFLL;
                          }
                        }
                        else
                        {
                          v25 = 0LL;
                        }
                        v19 = ($B38C3B1372D6E954799962D5DD404846 *)(*(_DWORD *)(HalpInterruptTargets + 24 * v25 + 12) | (unsigned int)v19);
                      }
                      LOBYTE(v20) = v20 + 1;
                      v24 >>= 1;
                    }
                    while ( v24 );
                  }
                  v60[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                  v60[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                  v59[2] = -1;
                  v59[3] = 1;
                  v26 = HalpDisableInterrupts(HalpInterruptIpiLines, v19, v20);
                  v27 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v60);
                  v18 = v27;
                  if ( v26 )
                    _enable();
                  if ( v27 < 0 )
                    return v18;
                  i = v61;
                }
              }
              v21 += 24LL;
            }
          }
          else if ( !HalpInterruptPhysicalModeOnly )
          {
            v20 = v7->Bitmap[0];
            LOWORD(v36) = 0;
            v50 = 0;
LABEL_63:
            v37 = v7 ? v7->Count : (unsigned __int16)v36 + 1;
            while ( 1 )
            {
              if ( v20 )
              {
                _BitScanForward64((unsigned __int64 *)&v19, v20);
                v20 &= ~(1LL << (char)v19);
                if ( *(_DWORD *)(HalpInterruptTargets
                               + 24LL
                               * *((unsigned int *)qword_140F216A8 + 64 * (unsigned __int16)v36 + (unsigned __int8)v19)) == 5 )
                  v50 |= *(_DWORD *)(HalpInterruptTargets
                                   + 24LL
                                   * *((unsigned int *)qword_140F216A8
                                     + 64 * (unsigned __int16)v36
                                     + (unsigned __int8)v19)
                                   + 8);
                goto LABEL_63;
              }
              v36 = (unsigned __int16)(v36 + 1);
              if ( (unsigned int)v36 >= v37 )
                break;
              v20 = v7->Bitmap[v36];
            }
            if ( v50 )
            {
              v62 = -1;
              v63 = 1;
              v64[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
              v64[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
              v44 = HalpDisableInterrupts(HalpInterruptIpiLines, v19, 0LL);
              v45 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v64);
              v18 = v45;
              if ( v44 )
                _enable();
              if ( v45 < 0 )
                return v18;
            }
          }
          v28 = v66.Bitmap[0];
          LOWORD(v29) = 0;
          do
          {
            while ( !v28 )
            {
              v29 = (unsigned __int16)(v29 + 1);
              if ( (unsigned int)v29 >= v66.Count )
                return v18;
              v28 = v66.Bitmap[v29];
            }
            _BitScanForward64(&v30, v28);
            v28 &= ~(1LL << v30);
            v31 = *((unsigned int *)qword_140F216A8 + 64 * (unsigned __int16)v29 + (unsigned __int8)v30);
            v54 = *(_DWORD *)(HalpInterruptIpiLines + 20);
            v53 = *(_DWORD *)(HalpInterruptIpiLines + 16);
            v51 = -1;
            v52 = 1;
            v32 = HalpDisableInterrupts(HalpInterruptIpiLines, v31, v20);
            v33 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), &v53);
            v18 = v33;
            if ( v32 )
              _enable();
          }
          while ( v33 >= 0 );
        }
      }
      return v18;
    default:
      return 3221225485LL;
  }
  v53 = -1;
  v54 = 1;
  v52 = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v51 = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v10 = HalpDisableInterrupts(HalpInterruptIpiLines, v4, v5);
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), &v51);
  if ( v10 )
LABEL_11:
    _enable();
  return result;
}
