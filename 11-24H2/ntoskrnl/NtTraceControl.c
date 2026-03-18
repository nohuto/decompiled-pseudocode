/*
 * XREFs of NtTraceControl @ 0x140834A80
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1407A0750 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407A0A4C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140A87340 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14024CFF4 (EtwpQueryUsedProcessorCount.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentThreadProcessId @ 0x1404296F0 (PsGetCurrentThreadProcessId.c)
 *     EtwpCreateActivityId @ 0x140437FB0 (EtwpCreateActivityId.c)
 *     WdiUpdateSem @ 0x14064C054 (WdiUpdateSem.c)
 *     EtwpGetPmcOwnership @ 0x14064C900 (EtwpGetPmcOwnership.c)
 *     EtwpGetPmcSessions @ 0x14064CAA8 (EtwpGetPmcSessions.c)
 *     EtwpTransitionToRealtime @ 0x14064F408 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x1406514B0 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x14065173C (EtwpSetCompressionSettings.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     EtwpUseDescriptorTypeUm @ 0x1407AA8B0 (EtwpUseDescriptorTypeUm.c)
 *     EtwpIncrementTraceFile @ 0x1407AA940 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1407AAA20 (EtwpQueryReferenceTime.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1407AD0A8 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpQuerySessionDemuxObject @ 0x1407AD3B0 (EtwpQuerySessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1407AD42C (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407AD74C (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpStopTrace @ 0x1408325A4 (EtwpStopTrace.c)
 *     EtwpStartTrace @ 0x1408330A4 (EtwpStartTrace.c)
 *     EtwpUpdateTrace @ 0x14083311C (EtwpUpdateTrace.c)
 *     EtwpTrackProviderBinary @ 0x1408338BC (EtwpTrackProviderBinary.c)
 *     EtwpFlushTrace @ 0x140833B94 (EtwpFlushTrace.c)
 *     EtwpAddNotificationEvent @ 0x140833DC4 (EtwpAddNotificationEvent.c)
 *     EtwpGetTraceGroupInfo @ 0x140833E70 (EtwpGetTraceGroupInfo.c)
 *     EtwpQueryTrace @ 0x1408347C0 (EtwpQueryTrace.c)
 *     EtwpGetTraceGuidInfo @ 0x1408356A0 (EtwpGetTraceGuidInfo.c)
 *     EtwpReceiveNotification @ 0x140835D94 (EtwpReceiveNotification.c)
 *     EtwpSetProviderTraitsUm @ 0x140836014 (EtwpSetProviderTraitsUm.c)
 *     EtwpValidateLoggerInfo @ 0x140836450 (EtwpValidateLoggerInfo.c)
 *     EtwpGetTraceGuidList @ 0x140836488 (EtwpGetTraceGuidList.c)
 *     EtwpNotifyGuid @ 0x140836EE4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 *     EtwpRegisterUMProvider @ 0x14083C6F0 (EtwpRegisterUMProvider.c)
 *     EtwpGetGuidList @ 0x14083D340 (EtwpGetGuidList.c)
 *     ExRaiseAccessViolation @ 0x1408C10E0 (ExRaiseAccessViolation.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140926F50 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpUpdateDisallowList @ 0x1409F5CCC (EtwpUpdateDisallowList.c)
 *     EtwpSendReplyDataBlock @ 0x1409F6D68 (EtwpSendReplyDataBlock.c)
 *     EtwpSetProviderBinaryTracking @ 0x140A45A78 (EtwpSetProviderBinaryTracking.c)
 *     WdiDispatchControl @ 0x140A48240 (WdiDispatchControl.c)
 *     EtwpEnumerateTraceGuids @ 0x140A4A870 (EtwpEnumerateTraceGuids.c)
 *     EtwpRealtimeConnect @ 0x140A5EC30 (EtwpRealtimeConnect.c)
 *     EtwpGetDisallowList @ 0x140A65D64 (EtwpGetDisallowList.c)
 *     EtwpReceiveReplyDataBlock @ 0x140A712D0 (EtwpReceiveReplyDataBlock.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x140A869A0 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtTraceControl(
        unsigned int a1,
        unsigned int *a2,
        unsigned int a3,
        volatile signed __int64 *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int64 v7; // rbx
  char *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r9
  char *v11; // r10
  unsigned int *v12; // r11
  int TraceGuidInfo; // edi
  char v14; // r8
  unsigned int v15; // ecx
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  _DWORD *v20; // rsi
  int v21; // eax
  unsigned int v22; // r14d
  unsigned int v23; // r15d
  __int64 v24; // rcx
  char *Pool2; // rax
  unsigned __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // r10d
  void *v31; // rcx
  __int64 Blink_low; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int *v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r8
  unsigned int v38; // edx
  size_t Size; // [rsp+30h] [rbp-78h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+38h] [rbp-70h]
  int v41; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v42; // [rsp+44h] [rbp-64h]
  int v43; // [rsp+48h] [rbp-60h]
  char *v44; // [rsp+50h] [rbp-58h]
  __int64 v45; // [rsp+58h] [rbp-50h]
  void *v46; // [rsp+60h] [rbp-48h]

  v7 = a1;
  v8 = 0LL;
  v44 = 0LL;
  LODWORD(Size) = 0;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  TraceGuidInfo = (int)v11;
  v43 = (int)v11;
  LOBYTE(v42) = (_BYTE)v11;
  if ( v14 )
  {
    v15 = (unsigned int)v7 >> 31;
    v42 = (unsigned int)v7 >> 31;
    LODWORD(v7) = v7 & 0x7FFFFFFF;
    if ( !(_BYTE)v15 )
      v7 = (unsigned int)v10;
    v16 = 0x7FFFFFFF0000LL;
    if ( !v9 )
      a3 = (unsigned int)v11;
    if ( a4 )
    {
      if ( a5 )
      {
        v17 = (unsigned __int64)a4;
        v18 = (unsigned __int64)a4 + a5 - 1;
        if ( (unsigned __int64)a4 > v18 || v18 >= 0x7FFFFFFF0000LL )
          ExRaiseAccessViolation();
        v19 = (v18 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v17 = *(_BYTE *)v17;
          v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v17 != v19 );
      }
    }
    else
    {
      a5 = (unsigned int)v11;
    }
    v20 = (_DWORD *)a6;
    if ( !a6 )
    {
      TraceGuidInfo = -1073741811;
      v43 = -1073741811;
      goto LABEL_41;
    }
    if ( a6 < 0x7FFFFFFF0000LL )
      v16 = a6;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    TraceGuidInfo = v43;
  }
  else
  {
    v20 = (_DWORD *)a6;
  }
  if ( (unsigned int)v7 <= 0x1B && (v21 = 134238208, _bittest(&v21, v7)) )
  {
    v22 = a5;
    v23 = a3;
  }
  else
  {
    v23 = a3;
    v22 = a5;
    if ( a3 || a5 )
    {
      Pool2 = (char *)ExAllocatePool2(0x101uLL);
      v8 = Pool2;
      v44 = Pool2;
      if ( !Pool2 )
      {
        TraceGuidInfo = -1073741801;
        goto LABEL_41;
      }
      v12 = a2;
      if ( a2 )
      {
        memmove(Pool2, a2, a3);
        v11 = 0LL;
        v12 = a2;
      }
      else
      {
        v11 = 0LL;
      }
    }
  }
  switch ( (_DWORD)v7 )
  {
    case 0xC:
      if ( v22 == 16 )
      {
        TraceGuidInfo = (int)v11;
        EtwpCreateActivityId(a4);
        goto LABEL_27;
      }
LABEL_67:
      TraceGuidInfo = -1073741811;
      goto LABEL_27;
    case 0x16:
      if ( v23 == 16 )
      {
        LODWORD(Size) = v22;
        TraceGuidInfo = EtwpGetTraceGuidInfo(Flink, v8, v8, &Size);
        goto LABEL_27;
      }
      goto LABEL_67;
    case 0x10:
      if ( !v23 && v22 - 72 <= 0xFFB8 )
      {
        TraceGuidInfo = EtwpReceiveNotification(v8);
        goto LABEL_27;
      }
      goto LABEL_67;
  }
  v27 = 0x140000000uLL;
  switch ( (int)v7 )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      if ( v22 < 0xB0 || v23 < 0xB0 )
        goto LABEL_96;
      TraceGuidInfo = EtwpValidateLoggerInfo(v8, (unsigned int)(v7 - 1), 0x140000000uLL, v10);
      if ( TraceGuidInfo < 0 )
        goto LABEL_73;
      if ( *(_DWORD *)v8 > v23 )
      {
LABEL_96:
        TraceGuidInfo = -1073741306;
      }
      else
      {
        TraceGuidInfo = v30;
LABEL_73:
        if ( TraceGuidInfo >= 0 )
        {
          if ( (_DWORD)v7 == 3 )
          {
            TraceGuidInfo = EtwpQueryTrace((__int64)Flink, (__int64)v8, v29);
          }
          else if ( (unsigned int)v28 <= 6 )
          {
            __asm { jmp     rdx }
          }
          LODWORD(Size) = 176;
        }
      }
      break;
    case 11:
      if ( v23 != 96 || v22 != 96 )
        goto LABEL_67;
      TraceGuidInfo = EtwpRealtimeConnect(v8);
      LODWORD(Size) = 96;
      break;
    case 13:
      if ( v23 != 48 || v22 )
        goto LABEL_67;
      TraceGuidInfo = WdiDispatchControl(v8);
      break;
    case 14:
      if ( v23 != 8 || v22 )
        goto LABEL_67;
      v45 = *v12;
      TraceGuidInfo = EtwpRealtimeDisconnectConsumerByHandle();
      break;
    case 15:
      if ( v23 != 160 || v22 - 160 > 0xFF60 )
        goto LABEL_67;
      TraceGuidInfo = EtwpRegisterUMProvider((_DWORD)Flink, (_DWORD)v8, v22, (unsigned __int8)v42, (__int64)&Size);
      break;
    case 17:
      if ( v23 < 0x48 || v22 != 72 || *((_DWORD *)v8 + 1) != v23 )
        goto LABEL_67;
      if ( *(_DWORD *)v8 == 3 )
      {
        if ( v23 < 0x78 )
          goto LABEL_67;
        LOBYTE(v27) = 1;
        TraceGuidInfo = EtwpEnableGuid(Flink, v8, v27);
        LODWORD(Size) = 72;
      }
      else
      {
        LOBYTE(v27) = 1;
        TraceGuidInfo = EtwpNotifyGuid(Flink, v8, v27);
        LODWORD(Size) = 72;
      }
      break;
    case 18:
      if ( v23 < 0x48 || *((_DWORD *)v8 + 1) != v23 )
        goto LABEL_67;
      *((_DWORD *)v8 + 9) = PsGetCurrentThreadProcessId();
      TraceGuidInfo = EtwpSendReplyDataBlock(v8);
      break;
    case 19:
      if ( v23 != 8 )
        goto LABEL_67;
      v41 = (int)v11;
      TraceGuidInfo = EtwpReceiveReplyDataBlock(v8);
      LODWORD(Size) = v41;
      break;
    case 20:
      if ( v23 || v22 )
        goto LABEL_67;
      TraceGuidInfo = WdiUpdateSem();
      break;
    case 21:
      TraceGuidInfo = EtwpGetTraceGuidList(Flink, v8, v22 >> 4, &Size);
      LODWORD(Size) = 16 * Size;
      break;
    case 23:
      TraceGuidInfo = EtwpEnumerateTraceGuids(Flink, v8, v22 / 0x24, &Size);
      LODWORD(Size) = 36 * Size;
      break;
    case 24:
      if ( v23 || v22 )
        goto LABEL_67;
      if ( LODWORD(Flink[271].Blink) )
      {
        TraceGuidInfo = -1073741790;
      }
      else
      {
        LODWORD(Flink[271].Blink) = PsGetCurrentThreadProcessId();
        TraceGuidInfo = 0;
      }
      break;
    case 25:
      if ( v23 != 4 || v22 != 16 )
        goto LABEL_67;
      TraceGuidInfo = EtwpQueryReferenceTime((__int64)Flink, *(unsigned int *)v8, v8);
      LODWORD(Size) = 16;
      break;
    case 26:
      if ( v23 != 8 )
        goto LABEL_67;
      TraceGuidInfo = EtwpTrackProviderBinary((__int64)Flink, (void **)v8);
      break;
    case 27:
      if ( v23 != 4 )
        goto LABEL_67;
      v31 = (void *)*v12;
      v46 = v31;
      if ( !v31 )
        goto LABEL_67;
      TraceGuidInfo = EtwpAddNotificationEvent(v31, v42);
      break;
    case 28:
      if ( v23 < 8 )
        goto LABEL_67;
      v36 = *((unsigned int *)v8 + 1);
      if ( 16 * v36 + 8 != v23 )
        goto LABEL_67;
      if ( (_DWORD)v36 )
        v11 = v8 + 8;
      TraceGuidInfo = EtwpUpdateDisallowList(Flink, *(unsigned int *)v8, v36, v11);
      break;
    case 30:
      if ( v23 != 24 || v22 - 120 > 0xFF88 )
        goto LABEL_67;
      TraceGuidInfo = EtwpSetProviderTraitsUm((_DWORD)v8, v22, (unsigned int)&Size);
      break;
    case 31:
      if ( v23 != 16 || v22 )
        goto LABEL_67;
      TraceGuidInfo = EtwpUseDescriptorTypeUm((__int64)v8);
      break;
    case 32:
      TraceGuidInfo = EtwpGetGuidList((_DWORD)Flink, 2, (_DWORD)v8, v22 >> 4, (__int64)&Size);
      LODWORD(Size) = 16 * Size;
      break;
    case 33:
      if ( v23 != 16 )
        goto LABEL_67;
      LODWORD(Size) = v22;
      TraceGuidInfo = EtwpGetTraceGroupInfo((__int64)Flink, (__int64)v8, v8, (unsigned int *)&Size);
      break;
    case 34:
      if ( v23 != 8 )
        goto LABEL_67;
      LODWORD(Size) = v22;
      TraceGuidInfo = EtwpGetDisallowList(Flink, v8, v8, &Size);
      break;
    case 35:
      if ( v23 != 16 || v22 )
        goto LABEL_67;
      TraceGuidInfo = EtwpSetCompressionSettings((unsigned int *)v8);
      break;
    case 36:
      if ( v23 != 8 || v22 != 16 )
        goto LABEL_67;
      LODWORD(Size) = 16;
      TraceGuidInfo = EtwpGetCompressionSettings((unsigned __int16 *)v8, (unsigned int *)v8);
      break;
    case 37:
      if ( v23 < 0xC )
        goto LABEL_67;
      v37 = *((unsigned __int16 *)v8 + 4);
      if ( (unsigned int)v37 > 0x10 )
        goto LABEL_67;
      v38 = *((_DWORD *)v8 + 1);
      if ( v38 - 1 <= 3 )
        goto LABEL_67;
      if ( (_WORD)v37 )
      {
        if ( !v38 )
          goto LABEL_67;
      }
      else if ( v38 )
      {
        goto LABEL_67;
      }
      if ( 16 * v37 + 12 != v23 )
        goto LABEL_67;
      if ( (_WORD)v37 )
        v11 = v8 + 12;
      TraceGuidInfo = EtwpUpdatePeriodicCaptureState(*(unsigned int *)v8, v38, v37, v11);
      break;
    case 38:
      if ( v23 < 8 || (v23 & 7) != 0 || v22 < 2 )
        goto LABEL_67;
      LOWORD(v41) = (_WORD)v11;
      TraceGuidInfo = EtwpGetPrivateSessionTraceHandle(v8, v23 >> 3, (unsigned __int16 *)&v41);
      if ( !TraceGuidInfo )
      {
        LODWORD(Size) = 2;
        *(_WORD *)v8 = v41;
      }
      break;
    case 39:
      if ( v23 < 2 || v22 < 8 )
        goto LABEL_67;
      TraceGuidInfo = EtwpRegisterPrivateSession((__int64)Flink, *(_WORD *)v8, (_WORD *)v8 + 2, v8);
      if ( !TraceGuidInfo )
        LODWORD(Size) = 8;
      break;
    case 40:
      if ( v23 < 8 || v22 < 2 )
        goto LABEL_67;
      TraceGuidInfo = EtwpQuerySessionDemuxObject(*(void **)v8, v8);
      if ( !TraceGuidInfo )
        LODWORD(Size) = 2;
      break;
    case 41:
      if ( v23 < 8 )
        goto LABEL_67;
      TraceGuidInfo = EtwpSetProviderBinaryTracking(Flink, *(unsigned int *)v8, (unsigned __int8)v8[4]);
      break;
    case 42:
      if ( v22 < 4 )
        goto LABEL_67;
      *(_DWORD *)v8 = Flink[1].Flink;
      LODWORD(Size) = 4;
      TraceGuidInfo = (int)v11;
      break;
    case 43:
      if ( v22 < 4 )
        goto LABEL_67;
      *(_DWORD *)v8 = EtwpMaxPmcCounter;
      LODWORD(Size) = 4;
      TraceGuidInfo = (int)v11;
      break;
    case 44:
      if ( v23 != 8 || v22 < 4 )
        goto LABEL_67;
      Blink_low = *(unsigned __int16 *)v8;
      if ( (_DWORD)Blink_low == 0xFFFF )
        Blink_low = LOBYTE(Flink[281].Blink);
      v34 = EtwpAcquireLoggerContextByLoggerId(Flink, Blink_low, 0LL);
      if ( !v34 )
        goto LABEL_67;
      LODWORD(Size) = 4;
      *(_DWORD *)v8 = EtwpQueryUsedProcessorCount(v34, v33);
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v35 + 170) + 704LL) + 8LL * *v35),
        1u);
      break;
    case 45:
      LODWORD(Size) = v22;
      TraceGuidInfo = EtwpGetPmcOwnership(v8, (unsigned int *)&Size);
      break;
    case 46:
      LODWORD(Size) = v22;
      TraceGuidInfo = EtwpGetPmcSessions((__int64)v8, (unsigned int *)&Size);
      break;
    default:
      TraceGuidInfo = -1073741808;
      break;
  }
LABEL_27:
  if ( TraceGuidInfo >= 0 )
  {
    if ( (_DWORD)Size )
    {
      if ( (unsigned int)Size > v22 )
      {
        TraceGuidInfo = -1073741789;
        v43 = -1073741789;
      }
      else
      {
        memmove((void *)a4, v8, (unsigned int)Size);
      }
    }
    *v20 = Size;
  }
  if ( TraceGuidInfo == -1073741789 && ((unsigned int)(v7 - 15) <= 1 || (unsigned int)(v7 - 21) <= 1)
    || (unsigned int)v7 <= 0x2E && (v24 = 0x41D700880000LL, _bittest64(&v24, v7)) )
  {
    *v20 = Size;
  }
LABEL_41:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)TraceGuidInfo;
}
