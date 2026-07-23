/*
 * XREFs of NtTraceControl @ 0x140895400
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140791390 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14079167C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140A82918 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpQueryUsedProcessorCount @ 0x1403E4578 (EtwpQueryUsedProcessorCount.c)
 *     PsGetCurrentThreadProcessId @ 0x140431FB0 (PsGetCurrentThreadProcessId.c)
 *     EtwpCreateActivityId @ 0x14043ABE0 (EtwpCreateActivityId.c)
 *     WdiUpdateSem @ 0x140640094 (WdiUpdateSem.c)
 *     EtwpGetPmcOwnership @ 0x1406408E0 (EtwpGetPmcOwnership.c)
 *     EtwpGetPmcSessions @ 0x140640A88 (EtwpGetPmcSessions.c)
 *     EtwpTransitionToRealtime @ 0x140643468 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x1406454B0 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x14064573C (EtwpSetCompressionSettings.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     EtwpUseDescriptorTypeUm @ 0x14079B4E0 (EtwpUseDescriptorTypeUm.c)
 *     EtwpIncrementTraceFile @ 0x14079B570 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x14079B650 (EtwpQueryReferenceTime.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14079DCD8 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpQuerySessionDemuxObject @ 0x14079DFE0 (EtwpQuerySessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x14079E05C (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14079E37C (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpStopTrace @ 0x140892F28 (EtwpStopTrace.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x140893A24 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpReceiveReplyDataBlock @ 0x140893A8C (EtwpReceiveReplyDataBlock.c)
 *     EtwpUpdateTrace @ 0x140893BB4 (EtwpUpdateTrace.c)
 *     EtwpTrackProviderBinary @ 0x140894358 (EtwpTrackProviderBinary.c)
 *     EtwpFlushTrace @ 0x140894628 (EtwpFlushTrace.c)
 *     EtwpAddNotificationEvent @ 0x140894858 (EtwpAddNotificationEvent.c)
 *     EtwpGetTraceGroupInfo @ 0x140894910 (EtwpGetTraceGroupInfo.c)
 *     EtwpQueryTrace @ 0x140895150 (EtwpQueryTrace.c)
 *     EtwpGetTraceGuidInfo @ 0x140896060 (EtwpGetTraceGuidInfo.c)
 *     EtwpReceiveNotification @ 0x1408967E0 (EtwpReceiveNotification.c)
 *     EtwpSetProviderTraitsUm @ 0x140896A5C (EtwpSetProviderTraitsUm.c)
 *     EtwpValidateLoggerInfo @ 0x140896ED4 (EtwpValidateLoggerInfo.c)
 *     EtwpGetTraceGuidList @ 0x1408972CC (EtwpGetTraceGuidList.c)
 *     EtwpNotifyGuid @ 0x140897964 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     EtwpGetGuidList @ 0x14089DF60 (EtwpGetGuidList.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1409328B0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 *     EtwpUpdateDisallowList @ 0x1409EE900 (EtwpUpdateDisallowList.c)
 *     EtwpSendReplyDataBlock @ 0x1409FB184 (EtwpSendReplyDataBlock.c)
 *     EtwpSetProviderBinaryTracking @ 0x1409FEC84 (EtwpSetProviderBinaryTracking.c)
 *     EtwpStartTrace @ 0x140A37464 (EtwpStartTrace.c)
 *     WdiDispatchControl @ 0x140A435F0 (WdiDispatchControl.c)
 *     EtwpEnumerateTraceGuids @ 0x140A475DC (EtwpEnumerateTraceGuids.c)
 *     EtwpRealtimeConnect @ 0x140A5E498 (EtwpRealtimeConnect.c)
 *     EtwpGetDisallowList @ 0x140A64BF8 (EtwpGetDisallowList.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r9
  char *v10; // r11
  NTSTATUS Trace; // edi
  unsigned int v12; // r12d
  char v13; // r8
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  PULONG v18; // rsi
  int v19; // eax
  ULONG v20; // r13d
  ULONG v21; // r15d
  _WORD *v22; // r10
  unsigned int *v23; // rcx
  void *v24; // r15
  __int64 v25; // rcx
  _WORD *Pool2; // rax
  unsigned __int64 v28; // r8
  NTSTATUS TraceGuidInfo; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  ULONG *v32; // r10
  NTSTATUS v33; // r11d
  NTSTATUS TraceGuidList; // eax
  void *v35; // rcx
  NTSTATUS GuidList; // eax
  __int64 Blink_low; // rdx
  __int64 v38; // rcx
  unsigned int *v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r8
  unsigned int v42; // edx
  unsigned int v43; // [rsp+30h] [rbp-68h] BYREF
  ULONG Size; // [rsp+34h] [rbp-64h] BYREF
  int Size_4; // [rsp+38h] [rbp-60h]
  void *Src; // [rsp+40h] [rbp-58h]
  struct _LIST_ENTRY *Flink; // [rsp+48h] [rbp-50h]
  void *v48; // [rsp+50h] [rbp-48h]
  void *v49; // [rsp+58h] [rbp-40h]

  v7 = (unsigned int)FunctionCode;
  Src = 0LL;
  Size = 0;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  Trace = (int)v10;
  Size_4 = (int)v10;
  LOBYTE(v12) = 0;
  if ( v13 )
  {
    v12 = (unsigned int)v7 >> 31;
    LODWORD(v7) = v7 & 0x7FFFFFFF;
    if ( !(_BYTE)v12 )
      v7 = (unsigned int)v9;
    v14 = 0x7FFFFFFF0000LL;
    if ( !v8 )
      InputBufferLength = (unsigned int)v10;
    if ( OutputBuffer )
    {
      if ( OutputBufferLength )
      {
        v15 = (unsigned __int64)OutputBuffer;
        v16 = (unsigned __int64)OutputBuffer + OutputBufferLength - 1;
        if ( v16 >= 0x7FFFFFFF0000LL || (unsigned __int64)OutputBuffer > v16 )
          ExRaiseAccessViolation();
        v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v15 = *(_BYTE *)v15;
          v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v15 != v17 );
      }
    }
    else
    {
      OutputBufferLength = (unsigned int)v10;
    }
    v18 = ReturnLength;
    if ( !ReturnLength )
    {
      Trace = -1073741811;
      Size_4 = -1073741811;
      goto LABEL_42;
    }
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      v14 = (__int64)ReturnLength;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    Trace = Size_4;
  }
  else
  {
    v18 = ReturnLength;
  }
  if ( (unsigned int)v7 <= 0x1B )
  {
    v19 = 134238208;
    if ( _bittest(&v19, v7) )
    {
      v20 = OutputBufferLength;
      v21 = InputBufferLength;
LABEL_24:
      v22 = Src;
      v23 = (unsigned int *)InputBuffer;
      goto LABEL_25;
    }
  }
  v21 = InputBufferLength;
  v20 = OutputBufferLength;
  if ( !InputBufferLength && !OutputBufferLength )
    goto LABEL_24;
  Pool2 = (_WORD *)ExAllocatePool2(0x101uLL);
  v22 = Pool2;
  Src = Pool2;
  if ( !Pool2 )
  {
    Trace = -1073741801;
    goto LABEL_42;
  }
  v23 = (unsigned int *)InputBuffer;
  if ( InputBuffer )
  {
    memmove(Pool2, InputBuffer, InputBufferLength);
    v22 = Src;
    v10 = 0LL;
    v23 = (unsigned int *)InputBuffer;
  }
  else
  {
    v10 = 0LL;
  }
LABEL_25:
  if ( (_DWORD)v7 != 12 )
  {
    if ( (_DWORD)v7 == 22 )
    {
      if ( v21 != 16 )
        goto LABEL_69;
      Size = v20;
      TraceGuidInfo = EtwpGetTraceGuidInfo(Flink, v22, v22, &Size);
LABEL_56:
      Trace = TraceGuidInfo;
    }
    else
    {
      v28 = 0x140000000uLL;
      switch ( (int)v7 )
      {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
          if ( v20 < 0xB0 || v21 < 0xB0 )
            goto LABEL_98;
          Trace = EtwpValidateLoggerInfo(v22, (unsigned int)(v7 - 1), 0x140000000uLL, v9);
          if ( Trace < 0 )
            goto LABEL_75;
          if ( *v32 > v21 )
          {
LABEL_98:
            Trace = -1073741306;
            v24 = Src;
            goto LABEL_28;
          }
          Trace = v33;
LABEL_75:
          if ( Trace < 0 )
            break;
          if ( (_DWORD)v7 == 3 )
          {
            Trace = EtwpQueryTrace((__int64)Flink, (__int64)v32, v31);
          }
          else if ( (unsigned int)v30 <= 6 )
          {
            __asm { jmp     rdx }
          }
          Size = 176;
          v24 = Src;
          goto LABEL_28;
        case 11:
          if ( v21 != 96 || v20 != 96 )
            goto LABEL_69;
          Size = 96;
          Trace = EtwpRealtimeConnect(v22);
          v24 = Src;
          goto LABEL_28;
        case 13:
          if ( v21 != 48 || v20 )
            goto LABEL_69;
          TraceGuidInfo = WdiDispatchControl(v22);
          goto LABEL_56;
        case 14:
          if ( v21 != 8 || v20 )
            goto LABEL_69;
          v48 = (void *)*v23;
          Trace = EtwpRealtimeDisconnectConsumerByHandle(v48);
          v24 = Src;
          goto LABEL_28;
        case 15:
          if ( v21 != 160 || v20 - 160 > 0xFF60 )
            goto LABEL_69;
          Trace = EtwpRegisterUMProvider((_DWORD)Flink, (_DWORD)v22, v20, (unsigned __int8)v12, (__int64)&Size);
          v24 = Src;
          goto LABEL_28;
        case 16:
          if ( v21 || v20 - 72 > 0xFFB8 )
            goto LABEL_69;
          Trace = EtwpReceiveNotification(v22);
          v24 = Src;
          goto LABEL_28;
        case 17:
          if ( v21 < 0x48 || v20 != 72 || *((_DWORD *)v22 + 1) != v21 )
            goto LABEL_69;
          if ( *(_DWORD *)v22 == 3 )
          {
            if ( v21 < 0x78 )
              goto LABEL_69;
            LOBYTE(v28) = 1;
            TraceGuidInfo = EtwpEnableGuid(Flink, v22, v28);
            Size = 72;
          }
          else
          {
            LOBYTE(v28) = 1;
            TraceGuidInfo = EtwpNotifyGuid(Flink, v22, v28);
            Size = 72;
          }
          goto LABEL_56;
        case 18:
          if ( v21 < 0x48 || *((_DWORD *)v22 + 1) != v21 )
            goto LABEL_69;
          v24 = Src;
          *((_DWORD *)Src + 9) = PsGetCurrentThreadProcessId();
          Trace = EtwpSendReplyDataBlock(v24);
          goto LABEL_28;
        case 19:
          if ( v21 != 8 )
            goto LABEL_69;
          v43 = (unsigned int)v10;
          Trace = EtwpReceiveReplyDataBlock((unsigned int *)v22, v20, &v43);
          Size = v43;
          v24 = Src;
          goto LABEL_28;
        case 20:
          if ( v21 || v20 )
            goto LABEL_69;
          TraceGuidInfo = WdiUpdateSem();
          goto LABEL_56;
        case 21:
          TraceGuidList = EtwpGetTraceGuidList(Flink, v22, v20 >> 4, &Size);
          Size *= 16;
          Trace = TraceGuidList;
          v24 = Src;
          goto LABEL_28;
        case 23:
          Trace = EtwpEnumerateTraceGuids(Flink, v22, v20 / 0x24, &Size);
          Size *= 36;
          break;
        case 24:
          if ( v21 || v20 )
            goto LABEL_69;
          if ( LODWORD(Flink[254].Blink) )
          {
            Trace = -1073741790;
          }
          else
          {
            LODWORD(Flink[254].Blink) = PsGetCurrentThreadProcessId();
            Trace = 0;
          }
          break;
        case 25:
          if ( v21 != 4 || v20 != 16 )
            goto LABEL_69;
          TraceGuidInfo = EtwpQueryReferenceTime((__int64)Flink, *(unsigned int *)v22, v22);
          Size = 16;
          goto LABEL_56;
        case 26:
          if ( v21 != 8 )
            goto LABEL_69;
          Trace = EtwpTrackProviderBinary((__int64)Flink, (void **)v22);
          v24 = Src;
          goto LABEL_28;
        case 27:
          if ( v21 != 4 )
            goto LABEL_69;
          v35 = (void *)*v23;
          v49 = v35;
          if ( !v35 )
            goto LABEL_69;
          Trace = EtwpAddNotificationEvent(v35, v12);
          v24 = Src;
          goto LABEL_28;
        case 28:
          if ( v21 < 8 )
            goto LABEL_69;
          v40 = *((unsigned int *)v22 + 1);
          if ( 16 * v40 + 8 != v21 )
            goto LABEL_69;
          if ( (_DWORD)v40 )
            v10 = (char *)(v22 + 4);
          Trace = EtwpUpdateDisallowList(Flink, *(unsigned int *)v22, v40, v10);
          v24 = Src;
          goto LABEL_28;
        case 30:
          if ( v21 != 24 || v20 - 120 > 0xFF88 )
            goto LABEL_69;
          Trace = EtwpSetProviderTraitsUm((_DWORD)v22, v20, (unsigned int)&Size);
          v24 = Src;
          goto LABEL_28;
        case 31:
          if ( v21 != 16 || v20 )
            goto LABEL_69;
          TraceGuidInfo = EtwpUseDescriptorTypeUm((__int64)v22);
          goto LABEL_56;
        case 32:
          GuidList = EtwpGetGuidList((_DWORD)Flink, 2, (_DWORD)v22, v20 >> 4, (__int64)&Size);
          Size *= 16;
          Trace = GuidList;
          v24 = Src;
          goto LABEL_28;
        case 33:
          if ( v21 != 16 )
            goto LABEL_69;
          Size = v20;
          Trace = EtwpGetTraceGroupInfo((__int64)Flink, (__int64)v22, v22, &Size);
          v24 = Src;
          goto LABEL_28;
        case 34:
          if ( v21 != 8 )
            goto LABEL_69;
          Size = v20;
          Trace = EtwpGetDisallowList(Flink, v22, v22, &Size);
          v24 = Src;
          goto LABEL_28;
        case 35:
          if ( v21 != 16 || v20 )
            goto LABEL_69;
          TraceGuidInfo = EtwpSetCompressionSettings((unsigned int *)v22);
          goto LABEL_56;
        case 36:
          if ( v21 != 8 || v20 != 16 )
            goto LABEL_69;
          Size = 16;
          TraceGuidInfo = EtwpGetCompressionSettings(v22, (unsigned int *)v22);
          goto LABEL_56;
        case 37:
          if ( v21 < 0xC )
            goto LABEL_69;
          v41 = (unsigned __int16)v22[4];
          if ( (unsigned int)v41 > 0x10 )
          {
            Trace = -1073741811;
            break;
          }
          v42 = *((_DWORD *)v22 + 1);
          if ( v42 - 1 <= 3 )
          {
            Trace = -1073741811;
            break;
          }
          if ( (_WORD)v41 )
          {
            if ( !v42 )
            {
              Trace = -1073741811;
              break;
            }
          }
          else if ( v42 )
          {
            goto LABEL_69;
          }
          if ( 16 * v41 + 12 != v21 )
            goto LABEL_69;
          if ( (_WORD)v41 )
            v10 = (char *)(v22 + 6);
          TraceGuidInfo = EtwpUpdatePeriodicCaptureState(*(unsigned int *)v22, v42, v41, v10);
          goto LABEL_56;
        case 38:
          if ( v21 < 8 || (v21 & 7) != 0 || v20 < 2 )
            goto LABEL_69;
          LOWORD(v43) = (_WORD)v10;
          Trace = EtwpGetPrivateSessionTraceHandle(v22, v21 >> 3, (unsigned __int16 *)&v43);
          if ( Trace )
            break;
          Size = 2;
          v24 = Src;
          *(_WORD *)Src = v43;
          goto LABEL_28;
        case 39:
          if ( v21 < 2 || v20 < 8 )
            goto LABEL_69;
          Trace = EtwpRegisterPrivateSession((__int64)Flink, *v22, v22 + 2, v22);
          if ( !Trace )
            Size = 8;
          break;
        case 40:
          if ( v21 < 8 || v20 < 2 )
            goto LABEL_69;
          Trace = EtwpQuerySessionDemuxObject(*(void **)v22, v22);
          if ( !Trace )
            Size = 2;
          break;
        case 41:
          if ( v21 < 8 )
            goto LABEL_69;
          TraceGuidInfo = EtwpSetProviderBinaryTracking(Flink, *(unsigned int *)v22, *((unsigned __int8 *)v22 + 4));
          goto LABEL_56;
        case 42:
          if ( v20 < 4 )
            goto LABEL_69;
          *(_DWORD *)v22 = Flink[1].Flink;
          Size = 4;
          Trace = (int)v10;
          v24 = Src;
          goto LABEL_28;
        case 43:
          v24 = Src;
          if ( v20 >= 4 )
          {
            *(_DWORD *)v22 = EtwpMaxPmcCounter;
            Size = 4;
            Trace = (int)v10;
          }
          else
          {
            Trace = -1073741811;
          }
          goto LABEL_28;
        case 44:
          if ( v21 != 8 || v20 < 4 )
            goto LABEL_69;
          Blink_low = (unsigned __int16)*v22;
          if ( (_DWORD)Blink_low == 0xFFFF )
            Blink_low = LOBYTE(Flink[264].Blink);
          v38 = EtwpAcquireLoggerContextByLoggerId(Flink, Blink_low, 0LL);
          if ( v38 )
          {
            Size = 4;
            v24 = Src;
            *(_DWORD *)Src = EtwpQueryUsedProcessorCount(v38);
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v39 + 170) + 448LL) + 8LL * *v39),
              1u);
            goto LABEL_28;
          }
          Trace = -1073741811;
          break;
        case 45:
          Size = v20;
          TraceGuidInfo = EtwpGetPmcOwnership(v22, &Size);
          goto LABEL_56;
        case 46:
          Size = v20;
          TraceGuidInfo = EtwpGetPmcSessions((__int64)v22, &Size);
          goto LABEL_56;
        default:
          Trace = -1073741808;
          break;
      }
    }
    v24 = Src;
    goto LABEL_28;
  }
  if ( v20 != 16 )
  {
LABEL_69:
    Trace = -1073741811;
    v24 = Src;
    goto LABEL_28;
  }
  Trace = (int)v10;
  EtwpCreateActivityId((volatile signed __int64 *)OutputBuffer);
  v24 = Src;
LABEL_28:
  if ( Trace >= 0 )
  {
    if ( Size )
    {
      if ( Size > v20 )
      {
        Trace = -1073741789;
        Size_4 = -1073741789;
      }
      else
      {
        memmove(OutputBuffer, v24, Size);
      }
    }
    *v18 = Size;
  }
  if ( Trace == -1073741789 && ((unsigned int)(v7 - 21) <= 1 || (unsigned int)(v7 - 15) <= 1)
    || (unsigned int)v7 <= 0x2E && (v25 = 0x41D700880000LL, _bittest64(&v25, v7)) )
  {
    *v18 = Size;
  }
LABEL_42:
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return Trace;
}
