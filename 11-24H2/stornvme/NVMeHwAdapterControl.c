/*
 * XREFs of NVMeHwAdapterControl @ 0x14000DBA0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeSetHostMemoryBuffer @ 0x140006A20 (NVMeSetHostMemoryBuffer.c)
 *     NVMeStartAsyncEventCommands @ 0x140006F60 (NVMeStartAsyncEventCommands.c)
 *     IoQueuesFreeResources @ 0x140007110 (IoQueuesFreeResources.c)
 *     NVMeControllerInitPart2 @ 0x140007440 (NVMeControllerInitPart2.c)
 *     NVMeIssueAsyncEventCommand @ 0x140007940 (NVMeIssueAsyncEventCommand.c)
 *     IoQueuesDeletion @ 0x140007DE0 (IoQueuesDeletion.c)
 *     NVMeSetPowerState @ 0x140008510 (NVMeSetPowerState.c)
 *     NVMeUpdateResumeLatencyTolerance @ 0x14000BED0 (NVMeUpdateResumeLatencyTolerance.c)
 *     NVMeSetFStateIdleTimer @ 0x14000BF50 (NVMeSetFStateIdleTimer.c)
 *     NVMePerfStateTransition @ 0x14000BFF0 (NVMePerfStateTransition.c)
 *     FreeProcessorInfo @ 0x14000C700 (FreeProcessorInfo.c)
 *     CalculateTimeDurationIn100ns @ 0x14000C8D0 (CalculateTimeDurationIn100ns.c)
 *     NVMeQueuesReInit @ 0x14000C920 (NVMeQueuesReInit.c)
 *     NVMeControllerStartFailureEventLog @ 0x14000D720 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x14000F830 (ControllerReset.c)
 *     NVMeControllerInitPart3 @ 0x14000FB50 (NVMeControllerInitPart3.c)
 *     NVMeControllerPowerDown @ 0x1400109D0 (NVMeControllerPowerDown.c)
 *     NVMeControllerRemove @ 0x140010BF0 (NVMeControllerRemove.c)
 *     NVMeDisableThrottling @ 0x1400167B0 (NVMeDisableThrottling.c)
 *     NVMePowerCleanUp @ 0x140017000 (NVMePowerCleanUp.c)
 *     FreeMsiInfo @ 0x1400170A0 (FreeMsiInfo.c)
 *     AdminQueuesFreeResources @ 0x140017250 (AdminQueuesFreeResources.c)
 *     NVMeAllocateAsyncEventCommandsForMFND @ 0x14001B694 (NVMeAllocateAsyncEventCommandsForMFND.c)
 *     NVMeControllerCompleteAllIORequests @ 0x14001C710 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerFilterResourceRequirements @ 0x14001C804 (NVMeControllerFilterResourceRequirements.c)
 *     NVMeControllerInitPart1 @ 0x14001D11C (NVMeControllerInitPart1.c)
 *     NVMeControllerPreparePLDR @ 0x14001D3BC (NVMeControllerPreparePLDR.c)
 *     NVMeControllerReset @ 0x14001D564 (NVMeControllerReset.c)
 *     NVMeFreeHostMemoryBuffer @ 0x14001DB68 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitializeProcessorIoQueueMapping @ 0x14001E2F4 (NVMeInitializeProcessorIoQueueMapping.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode2 @ 0x14002C3B8 (NVMeSetNonOperationalPowerStatePermissiveMode2.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode3 @ 0x14002C4AC (NVMeSetNonOperationalPowerStatePermissiveMode3.c)
 *     NVMeSyncHostTime_Feature_TimestampSyncMemoryAlloc @ 0x14002C6CC (NVMeSyncHostTime_Feature_TimestampSyncMemoryAlloc.c)
 *     NVMeSendControllerInternalData @ 0x1400301F4 (NVMeSendControllerInternalData.c)
 *     memmove @ 0x1400311C0 (memmove.c)
 */

__int64 __fastcall NVMeHwAdapterControl(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v7; // ebp
  unsigned __int64 v10; // rdx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rdx
  int inited; // edi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // edx
  int v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rdi
  _DWORD *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r9
  int v27; // ecx
  __int64 v28; // r8
  __int64 v29; // rcx
  char v30; // si
  int v31; // r14d
  unsigned __int8 v32; // si
  int v33; // eax
  __int64 v34; // rcx
  int v35; // r10d
  unsigned __int8 v36; // r8
  __int64 v37; // r9
  unsigned __int16 *v38; // rcx
  int v39; // edx
  unsigned int v40; // edx
  unsigned __int64 v41; // rsi
  unsigned __int8 v42; // r14
  int v43; // eax
  unsigned int v44; // eax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r9
  unsigned int i; // edi
  __int64 v51; // r8
  _QWORD *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned __int64 v56; // rcx
  __int64 v57; // rcx
  unsigned int v58; // eax
  __int16 v59; // ax
  unsigned int v60; // eax
  __int64 v61; // rdi
  bool v62; // cf
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  _OWORD *v66; // rax
  unsigned int *v67; // r9
  bool v68; // zf
  size_t Size; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v70; // [rsp+D0h] [rbp-28h] BYREF
  unsigned __int64 v71[4]; // [rsp+D8h] [rbp-20h] BYREF
  __int64 v72; // [rsp+100h] [rbp+8h] BYREF
  __int64 v73; // [rsp+118h] [rbp+20h] BYREF

  v4 = 0LL;
  v7 = 0;
  if ( a1 && (*(_DWORD *)(a1 + 4064) & 0x1000) != 0 )
    return 0LL;
  v10 = 0x140000000uLL;
  switch ( a2 )
  {
    case 0:
      v11 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 )
        *(_BYTE *)(a3 + 4) = 1;
      if ( v11 > 1 )
        *(_BYTE *)(a3 + 5) = 1;
      if ( v11 > 2 )
        *(_BYTE *)(a3 + 6) = 1;
      if ( v11 > 6 )
        *(_BYTE *)(a3 + 10) = 1;
      if ( v11 > 8 )
        *(_BYTE *)(a3 + 12) = 1;
      if ( v11 > 9 )
        *(_BYTE *)(a3 + 13) = 1;
      if ( v11 > 0xC )
        *(_BYTE *)(a3 + 16) = 1;
      if ( v11 > 0xD )
        *(_BYTE *)(a3 + 17) = 1;
      if ( v11 > 0xE )
        *(_BYTE *)(a3 + 18) = 1;
      if ( v11 > 0xF )
        *(_BYTE *)(a3 + 19) = 1;
      if ( v11 <= 0x10 )
      {
        if ( v11 <= 5 )
          return v7;
      }
      else
      {
        *(_BYTE *)(a3 + 20) = 1;
      }
      *(_BYTE *)(a3 + 9) = 1;
      if ( v11 > 0x11 )
        *(_BYTE *)(a3 + 21) = 1;
      if ( v11 > 0x13 )
        *(_BYTE *)(a3 + 23) = 1;
      if ( v11 > 0x14 )
        *(_BYTE *)(a3 + 24) = 1;
      if ( v11 > 0x15 )
        *(_BYTE *)(a3 + 25) = 1;
      if ( v11 > 0x16 )
        *(_BYTE *)(a3 + 26) = 1;
      if ( v11 > 0x17 )
        *(_BYTE *)(a3 + 27) = 1;
      if ( v11 > 0x18 )
        *(_BYTE *)(a3 + 28) = 1;
      if ( v11 > 0x19 )
        *(_BYTE *)(a3 + 29) = 1;
      if ( v11 > 0x1A )
        *(_BYTE *)(a3 + 30) = 1;
      if ( v11 > 0x1B )
        *(_BYTE *)(a3 + 31) = 1;
      return v7;
    case 1:
      v45 = *(_DWORD *)(a1 + 24);
      if ( (v45 & 8) != 0 )
      {
        NVMeControllerRemove(a1);
      }
      else if ( (v45 & 2) != 0 )
      {
        if ( (v45 & 0x20000) == 0 )
          IoQueuesDeletion(a1, 0x140000000LL, a3, a4);
        NVMePowerCleanUp(a1);
        if ( (*(_DWORD *)(a1 + 24) & 0x20000) == 0 && *(_QWORD *)(a1 + 3720) )
          NVMeFreeHostMemoryBuffer(a1);
        IoQueuesFreeResources(a1);
        AdminQueuesFreeResources(a1);
        FreeProcessorInfo((_QWORD *)a1, v46, v47, v48);
        FreeMsiInfo(a1);
        if ( !*(_BYTE *)(a1 + 20) )
        {
          for ( i = 0; i < *(_DWORD *)(a1 + 224); ++i )
          {
            v51 = *(_QWORD *)(a1 + 8LL * i + 1672);
            if ( v51 )
              StorPortExtendedFunction(1LL, a1, v51, v49);
          }
        }
        v52 = (_QWORD *)(a1 + 1672);
        v53 = 31LL;
        do
        {
          *v52 = 0LL;
          v52[1] = 0LL;
          v52[2] = 0LL;
          v52 += 8;
          *(v52 - 5) = 0LL;
          *(v52 - 4) = 0LL;
          *(v52 - 3) = 0LL;
          *(v52 - 2) = 0LL;
          *(v52 - 1) = 0LL;
          --v53;
        }
        while ( v53 );
        *v52 = 0LL;
        v52[1] = 0LL;
        v52[2] = 0LL;
        v52[3] = 0LL;
        v52[4] = 0LL;
        v52[5] = 0LL;
        v52[6] = 0LL;
        *(_DWORD *)(a1 + 212) = 0;
        *(_DWORD *)(a1 + 224) = 0;
        NVMeDisableThrottling(a1);
      }
      return v7;
    case 2:
      return v7;
    case 5:
      if ( (*(_DWORD *)(a1 + 1600) & 1) != 0 )
      {
        if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1.Data1
          && *(_QWORD *)(a3 + 8) == *(_QWORD *)GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1.Data4
          && *(_DWORD *)(a3 + 24) == 4 )
        {
          *(_DWORD *)(a1 + 1624) = **(_DWORD **)(a3 + 16);
          NVMeUpdateResumeLatencyTolerance(a1);
        }
        else if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT1.Data1
               && *(_QWORD *)(a3 + 8) == *(_QWORD *)GUID_NVME_POWER_IDLE_TIMEOUT1.Data4
               && *(_DWORD *)(a3 + 24) == 4 )
        {
          if ( *(_DWORD *)(a1 + 84) == -1 )
            *(_DWORD *)(a1 + 1628) = **(_DWORD **)(a3 + 16);
        }
        else if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2.Data1
               && *(_QWORD *)(a3 + 8) == *(_QWORD *)GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2.Data4
               && *(_DWORD *)(a3 + 24) == 4 )
        {
          *(_DWORD *)(a1 + 1632) = **(_DWORD **)(a3 + 16);
          NVMeUpdateResumeLatencyTolerance(a1);
        }
        else if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT2.Data1
               && *(_QWORD *)(a3 + 8) == *(_QWORD *)GUID_NVME_POWER_IDLE_TIMEOUT2.Data4
               && *(_DWORD *)(a3 + 24) == 4 )
        {
          *(_DWORD *)(a1 + 1636) = **(_DWORD **)(a3 + 16);
        }
        else if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_NVME_POWER_NOPPME.Data1
               && *(_QWORD *)(a3 + 8) == *(_QWORD *)GUID_NVME_POWER_NOPPME.Data4
               && *(_DWORD *)(a3 + 24) == 4 )
        {
          if ( (*(_DWORD *)(a1 + 4336) & 2) != 0 )
          {
            v54 = *(_DWORD *)(a1 + 4064) >> 2;
            LOBYTE(v54) = (*(_DWORD *)(a1 + 4064) & 4) != 0;
            NVMeSetNonOperationalPowerStatePermissiveMode3(a1, v54);
          }
          else
          {
            NVMeSetNonOperationalPowerStatePermissiveMode2(a1, **(unsigned __int8 **)(a3 + 16));
          }
        }
      }
      return v7;
    case 6:
      v12 = *(_DWORD *)(a3 + 20);
      if ( v12 == 1 )
      {
        v72 = 0LL;
        v70 = 0LL;
        StorPortExtendedFunction(47LL, a1, &v70, &v72);
        v13 = v72;
        if ( (*(_DWORD *)(a1 + 4336) & 2) != 0 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 6u);
          LOBYTE(v7) = 1;
        }
        *(_DWORD *)(a1 + 24) &= ~4u;
        NVMeQueuesReInit(a1);
        LOBYTE(v14) = 1;
        inited = ControllerReset(a1, v14);
        if ( !inited )
        {
          inited = NVMeControllerInitPart1(a1);
          if ( !inited )
          {
            LOBYTE(v16) = 1;
            inited = NVMeControllerInitPart2(a1, 0LL, v16, v17);
            if ( !inited )
            {
              LOBYTE(v18) = 1;
              if ( (unsigned __int8)NVMeControllerInitPart3(a1, v18) )
                inited = 0;
            }
          }
        }
        if ( (_BYTE)v7 )
        {
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 6u);
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 8u);
        }
        if ( inited )
        {
          NVMeControllerStartFailureEventLog(a1);
        }
        else
        {
          v19 = *(_DWORD *)(a1 + 4064);
          if ( (v19 & 2) != 0 )
          {
            v20 = *(_DWORD *)(a1 + 4336);
            v21 = v19 & 0xFFFFFFFD;
            *(_DWORD *)(a1 + 4064) = v21;
            v22 = v21 >> 2;
            LOBYTE(v22) = v22 & 1;
            if ( (v20 & 2) != 0 )
              NVMeSetNonOperationalPowerStatePermissiveMode3(a1, v22);
            else
              NVMeSetNonOperationalPowerStatePermissiveMode2(a1, v22);
          }
        }
        v7 = 2;
        if ( inited != -1056964596 )
          v7 = 0;
        StorPortExtendedFunction(47LL, a1, &v70, &v72);
        if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
        {
          CalculateTimeDurationIn100ns(v72 - v13, v70);
LABEL_75:
          StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
          return v7;
        }
      }
      else
      {
        if ( v12 != 4 )
          return v7;
        if ( (*(_DWORD *)(a1 + 24) & 0x40) == 0 || *(_DWORD *)(a3 + 16) != 3 )
        {
          v73 = 0LL;
          v71[0] = 0LL;
          StorPortExtendedFunction(47LL, a1, v71, &v73);
          v23 = v73;
          NVMeControllerPowerDown(a1);
          StorPortExtendedFunction(47LL, a1, v71, &v73);
          if ( (*(_BYTE *)(a1 + 21) & 8) == 0 )
            return v7;
          CalculateTimeDurationIn100ns(v73 - v23, v71[0]);
          goto LABEL_75;
        }
        if ( (*(_DWORD *)(a1 + 4336) & 2) != 0 )
          _interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 8u);
      }
      return v7;
    case 8:
      v27 = *(_DWORD *)(a1 + 1600) ^ ((unsigned __int8)*(_DWORD *)(a1 + 1600) ^ (unsigned __int8)(4 * *(_BYTE *)(a3 + 20))) & 4;
      *(_DWORD *)(a1 + 1600) = v27;
      if ( *(_BYTE *)(a3 + 20) )
      {
        if ( (v27 & 0x20) != 0 )
        {
          v28 = *(_QWORD *)(a1 + 1640);
          *(_DWORD *)(a1 + 1600) = v27 & 0xFFFFFFDF;
          StorPortExtendedFunction(33LL, a1, v28, NVMeFStateIdleTimerCallback);
        }
        StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
        if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1648), 0) && !NVMePerfStateTransition(a1) )
          *(_DWORD *)(a1 + 1648) &= ~1u;
        if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 4u) == 1 )
          NVMeSyncHostTime_Feature_TimestampSyncMemoryAlloc(a1, 1LL);
      }
      else if ( *(_BYTE *)(a1 + 1609) > 1u )
      {
        NVMeUpdateResumeLatencyTolerance(a1);
        NVMeSetFStateIdleTimer(v29);
      }
      return v7;
    case 9:
      if ( *(_DWORD *)(a3 + 4) >= 0x18u && *(_DWORD *)a3 )
      {
        v30 = *(_BYTE *)(a3 + 20);
        v31 = *(unsigned __int8 *)(a1 + 1610);
        *(_BYTE *)(a1 + 1610) = v30;
        v32 = *(_DWORD *)(a3 + 20) ? *(_BYTE *)(a1 + 1605) + v30 : *(_BYTE *)(a1 + 1607);
        if ( v32 <= 0x1Fu )
        {
          NVMeSetPowerState(a1, v32);
          *(_BYTE *)(a1 + 1604) = v32;
          if ( !*(_BYTE *)(a1 + 1610)
            && (*(_DWORD *)(a1 + 56) & 0x4000000) == 0
            && v31 == *(unsigned __int8 *)(a1 + 1609) - 1
            && (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 520LL) & 0x40) != 0 )
          {
            *(_DWORD *)(a1 + 3748) |= 0x10u;
          }
          v33 = *(unsigned __int8 *)(a1 + 1610);
          if ( (_BYTE)v33 && v33 < *(unsigned __int8 *)(a1 + 1609) - 1 && NVMeUpdateResumeLatencyTolerance(a1) )
            NVMeSetFStateIdleTimer(v34);
        }
      }
      return v7;
    case 12:
      if ( *(_DWORD *)(a3 + 4) < 0x10u || !*(_DWORD *)a3 )
        return v7;
      *(_DWORD *)(a1 + 1612) = *(_DWORD *)(a3 + 8);
      *(_DWORD *)(a1 + 1620) = *(_DWORD *)(a3 + 12);
      NVMeUpdateResumeLatencyTolerance(a1);
      if ( v24[20] == 5 )
      {
        v25 = a1;
        if ( *(_DWORD *)(a3 + 8) == 1 )
          v26 = (unsigned int)v24[24];
        else
          v26 = (unsigned int)v24[23];
        goto LABEL_87;
      }
      if ( (v24[400] & 0x10) == 0 )
        return v7;
      v25 = a1;
      if ( *(_DWORD *)(a3 + 8) != 1 )
      {
        v26 = 0xFFFFFFFFLL;
LABEL_87:
        StorPortExtendedFunction(57LL, v25, 0LL, v26);
        return v7;
      }
      StorPortExtendedFunction(57LL, a1, 0LL, (unsigned int)v24[24]);
      if ( (*(_DWORD *)(a1 + 4336) & 4) != 0 )
        StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
      return v7;
    case 13:
      if ( !*(_DWORD *)a3 )
        return 1;
      NVMeControllerFilterResourceRequirements(a1, a3);
      return v7;
    case 14:
      if ( *(_DWORD *)(a3 + 4) < 0x10u || !*(_DWORD *)a3 )
        return v7;
      v35 = *(unsigned __int8 *)(a1 + 1605);
      v36 = 0;
      v37 = *(_QWORD *)(a1 + 1560);
      do
      {
        if ( v36 <= 0x1Fu
          && v36 <= *(_BYTE *)(v37 + 263)
          && (v38 = (unsigned __int16 *)(v37 + 32 * (v36 + 64LL))) != 0LL )
        {
          v39 = 10000;
          if ( (*((_BYTE *)v38 + 3) & 1) != 0 )
            v39 = 100;
          v40 = *v38 * v39;
        }
        else
        {
          v40 = -1;
        }
        v41 = v40 / 0x3E8;
        if ( v41 <= *(_QWORD *)(a3 + 8) )
          break;
        ++v36;
      }
      while ( (char)v36 <= v35 );
      *(_BYTE *)(a1 + 1608) = v36;
      if ( v36 > (unsigned __int8)v35 )
        *(_BYTE *)(a1 + 1608) = v35;
      if ( (*(_DWORD *)(a1 + 1600) & 4) == 0 || *(unsigned __int8 *)(a1 + 1607) == (char)v36 )
        goto LABEL_133;
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 1648), 0) )
      {
        *(_DWORD *)(a1 + 1600) |= 0x80u;
      }
      else if ( !NVMePerfStateTransition(a1) )
      {
        *(_DWORD *)(a1 + 1648) &= ~1u;
        *(_QWORD *)(a3 + 8) = v41;
        return v7;
      }
LABEL_133:
      *(_QWORD *)(a3 + 8) = v41;
      return v7;
    case 15:
      if ( *(_DWORD *)(a3 + 4) >= 0x18u )
      {
        if ( *(_DWORD *)a3 )
        {
          v42 = *(_BYTE *)(a3 + 16);
          if ( *(_BYTE *)(a3 + 12) )
          {
            if ( v42 <= *(_BYTE *)(a1 + 1605) && v42 <= 0x1Fu )
            {
              NVMeSetPowerState(a1, v42);
              *(_BYTE *)(a1 + 1607) = v42;
              *(_BYTE *)(a1 + 1604) = v42;
            }
          }
        }
      }
      v43 = *(_DWORD *)(a1 + 1600);
      if ( (v43 & 0x80u) == 0
        || (v44 = v43 & 0xFFFFFF7F, *(_DWORD *)(a1 + 1600) = v44, (v44 & 2) == 0)
        || *(_BYTE *)(a1 + 1607) == *(_BYTE *)(a1 + 1608)
        || (unsigned int)StorPortExtendedFunction(66LL, a1, 0LL, 0LL) )
      {
        *(_DWORD *)(a1 + 1648) &= ~1u;
      }
      return v7;
    case 16:
      LOBYTE(v10) = 17;
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFF7DF6 | 0x8008;
      NVMeControllerCompleteAllIORequests(a1, v10);
      *(_DWORD *)(a1 + 24) &= ~0x10u;
      return v7;
    case 17:
      v55 = *(_QWORD *)(a1 + 1560);
      if ( !a3 || !v55 || *(_DWORD *)a3 != 1 )
        return 1;
      *(_OWORD *)(a3 + 9) = *(_OWORD *)(v55 + 4);
      *(_DWORD *)(a3 + 25) = *(_DWORD *)(v55 + 20);
      *(_BYTE *)(a3 + 29) = 95;
      v56 = *(unsigned __int16 *)(v55 + 78);
      *(_BYTE *)(a3 + 33) = `HexFromUchar'::`2'::hexDigits[v56 & 0xF];
      *(_BYTE *)(a3 + 32) = `HexFromUchar'::`2'::hexDigits[(unsigned __int8)v56 >> 4];
      *(_BYTE *)(a3 + 31) = `HexFromUchar'::`2'::hexDigits[((unsigned int)v56 >> 8) & 0xF];
      *(_BYTE *)(a3 + 30) = `HexFromUchar'::`2'::hexDigits[v56 >> 12];
      *(_BYTE *)(a3 + 34) = 0;
      *(_BYTE *)(a3 + 8) = 0;
      return v7;
    case 19:
      v57 = *(_QWORD *)(a1 + 1560);
      v7 = 1;
      if ( a3 && *(_DWORD *)(a3 + 4) >= 0x98u )
      {
        *(_OWORD *)a3 = 0LL;
        *(_OWORD *)(a3 + 16) = 0LL;
        *(_OWORD *)(a3 + 32) = 0LL;
        *(_OWORD *)(a3 + 48) = 0LL;
        *(_OWORD *)(a3 + 64) = 0LL;
        *(_OWORD *)(a3 + 80) = 0LL;
        *(_OWORD *)(a3 + 96) = 0LL;
        *(_OWORD *)(a3 + 112) = 0LL;
        *(_OWORD *)(a3 + 128) = 0LL;
        *(_QWORD *)(a3 + 144) = 0LL;
        *(_DWORD *)a3 = 1;
        v7 = 0;
        *(_DWORD *)(a3 + 4) = 152;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)(v57 + 4);
        *(_DWORD *)(a3 + 32) = *(_DWORD *)(v57 + 20);
      }
      return v7;
    case 20:
      v7 = 1;
      if ( a3 )
      {
        v58 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 == 1 )
        {
          v7 = 0;
          *(_BYTE *)(a1 + 21) ^= (*(_BYTE *)(a1 + 21) ^ (2 * *(_BYTE *)(a3 + 4))) & 2;
        }
        else if ( v58 == 2 )
        {
          v7 = 0;
          *(_BYTE *)(a1 + 21) ^= (*(_BYTE *)(a1 + 21) ^ (4 * *(_BYTE *)(a3 + 4))) & 4;
        }
        else if ( v58 )
        {
          if ( v58 == 3 )
            *(_BYTE *)(a1 + 21) ^= (*(_BYTE *)(a1 + 21) ^ (16 * *(_BYTE *)(a3 + 4))) & 0x10;
          return 0;
        }
        else
        {
          v7 = 0;
          *(_BYTE *)(a1 + 21) ^= (*(_BYTE *)(a1 + 21) ^ (8 * *(_BYTE *)(a3 + 4))) & 8;
        }
      }
      return v7;
    case 21:
      v7 = 1;
      if ( a3 && *(_DWORD *)(a3 + 4) >= 0x20u && *(_DWORD *)(a3 + 16) == 1 )
        return (unsigned int)NVMeSendControllerInternalData(a1, *(_QWORD *)(a3 + 24));
      return v7;
    case 22:
      v7 = 1;
      if ( a3 && *(_DWORD *)a3 == 16 && *(_DWORD *)(a3 + 4) >= 0x10u )
        return (unsigned __int8)NVMeControllerReset(a1) == 0;
      return v7;
    case 23:
      if ( a3 )
      {
        if ( *(_DWORD *)a3 == 1 )
        {
          if ( *(_WORD *)(a3 + 4) == 1 && *(_WORD *)(a3 + 6) >= 0x10u )
          {
            v59 = *(_WORD *)(a3 + 8);
            *(_DWORD *)(a1 + 12) |= 4u;
            *(_WORD *)(a1 + 4054) = v59;
            if ( !*(_BYTE *)(a1 + 20) )
            {
              if ( v59 )
              {
                v60 = *(_QWORD *)(a1 + 1400)
                    ? *(unsigned __int16 *)(a1 + 1554)
                    : NVMeAllocateAsyncEventCommandsForMFND();
                *(_WORD *)(a1 + 1554) = v60;
                if ( v60 )
                {
                  if ( *(_QWORD *)(a1 + 1400) )
                  {
                    v61 = v60;
                    do
                    {
                      NVMeIssueAsyncEventCommand(a1, v4 + *(_QWORD *)(a1 + 1400));
                      v4 += 128LL;
                      --v61;
                    }
                    while ( v61 );
                  }
                }
              }
            }
          }
        }
        else
        {
          if ( *(_DWORD *)a3 != 2 )
            return 1;
          if ( *(_WORD *)(a3 + 4) == 1 && *(_WORD *)(a3 + 6) >= 8u )
            NVMeStartAsyncEventCommands(a1);
        }
      }
      else
      {
        return (unsigned int)NVMeInitializeProcessorIoQueueMapping();
      }
      return v7;
    case 24:
      v62 = *(_DWORD *)(a3 + 8) < 0xA0u;
      v7 = 3;
      *(_DWORD *)(a3 + 4) = 160;
      if ( !v62 )
      {
        v63 = *(_QWORD *)(a3 + 16);
        v7 = 0;
        *(_DWORD *)v63 = 2;
        *(_DWORD *)(v63 + 4) = 152;
        v64 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 64LL);
        *(_OWORD *)(v63 + 8) = *(_OWORD *)v64;
        *(_OWORD *)(v63 + 24) = *(_OWORD *)(v64 + 16);
        *(_OWORD *)(v63 + 40) = *(_OWORD *)(v64 + 32);
        *(_OWORD *)(v63 + 56) = *(_OWORD *)(v64 + 48);
        *(_OWORD *)(v63 + 72) = *(_OWORD *)(v64 + 64);
        *(_OWORD *)(v63 + 88) = *(_OWORD *)(v64 + 80);
        *(_OWORD *)(v63 + 104) = *(_OWORD *)(v64 + 96);
        *(_OWORD *)(v63 + 120) = *(_OWORD *)(v64 + 112);
        *(_OWORD *)(v63 + 136) = *(_OWORD *)(v64 + 128);
        *(_QWORD *)(v63 + 152) = *(_QWORD *)(v64 + 144);
      }
      return v7;
    case 25:
      v65 = *(_QWORD *)(a3 + 8);
      if ( *(_DWORD *)(a3 + 4) < 0xA0u || (unsigned int)(*(_DWORD *)v65 - 1) > 1 )
        return 1;
      *(_DWORD *)(a3 + 32) = *(_DWORD *)(v65 + 4);
      if ( *(_DWORD *)(a3 + 16) >= *(_DWORD *)(v65 + 4) )
      {
        if ( *(_DWORD *)v65 == 2 )
        {
          memmove(*(void **)(a3 + 24), (const void *)(v65 + 8), *(unsigned int *)(v65 + 4));
        }
        else
        {
          if ( *(_DWORD *)v65 != 1 )
            return 1;
          v66 = *(_OWORD **)(a3 + 24);
          *v66 = *(_OWORD *)(v65 + 8);
          v66[1] = *(_OWORD *)(v65 + 24);
          v66[2] = *(_OWORD *)(v65 + 40);
          v66[3] = *(_OWORD *)(v65 + 56);
          v66[4] = *(_OWORD *)(v65 + 72);
          v66[5] = *(_OWORD *)(v65 + 88);
          v66[6] = *(_OWORD *)(v65 + 104);
          v66[7] = *(_OWORD *)(v65 + 120);
          v66[8] = *(_OWORD *)(v65 + 136);
          *(_DWORD *)(*(_QWORD *)(a3 + 24) + 148LL) = *(_DWORD *)(v65 + 152);
        }
      }
      else
      {
        return 3;
      }
      return v7;
    case 26:
      v67 = *(unsigned int **)(a1 + 3720);
      if ( v67 )
      {
        LODWORD(Size) = v67[1];
        NVMeSetHostMemoryBuffer(a1, 0, 0, *v67, v67 + 2, Size);
      }
      v68 = (*(_BYTE *)(a1 + 21) & 8) == 0;
      *(_DWORD *)(a1 + 24) |= 0x100000u;
      if ( !v68 )
        StorPortExtendedFunction(87LL, a1, 0LL, 0LL);
      return v7;
    case 27:
      LOBYTE(v7) = (unsigned int)NVMeControllerPreparePLDR(a1) != 0;
      return v7;
    default:
      return 1;
  }
}
