/*
 * XREFs of NVMeControllerInitPart3 @ 0x14000FB50
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 *     NVMeHwInitialize @ 0x140018530 (NVMeHwInitialize.c)
 *     NVMeHwPassiveInitialize @ 0x1400185A0 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerReinitialize @ 0x1400274C4 (NVMeControllerReinitialize.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     NVMeStartAsyncEventCommands @ 0x140006F60 (NVMeStartAsyncEventCommands.c)
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     NVMeGetCommandEffectsLog @ 0x14000B4B0 (NVMeGetCommandEffectsLog.c)
 *     NVMeEnableThrottling @ 0x14000CB70 (NVMeEnableThrottling.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     NVMeGetFeatureIdentifiersSupportedLog @ 0x14000D0E0 (NVMeGetFeatureIdentifiersSupportedLog.c)
 *     NVMeGetSupportedLogPagesLog @ 0x14000D260 (NVMeGetSupportedLogPagesLog.c)
 *     NVMeControllerStartFailureEventLog @ 0x14000D720 (NVMeControllerStartFailureEventLog.c)
 *     Feature_EnableAENAtEndOfDeviceInit__private_IsEnabledDeviceUsageNoInline @ 0x140019F2C (Feature_EnableAENAtEndOfDeviceInit__private_IsEnabledDeviceUsageNoInline.c)
 *     NVMeControllerSetHostIdentifier @ 0x14001D908 (NVMeControllerSetHostIdentifier.c)
 *     NVMeQueueWorkItem @ 0x14002393C (NVMeQueueWorkItem.c)
 *     NVMeConfigAsyncEvent @ 0x140026EC0 (NVMeConfigAsyncEvent.c)
 *     NVMeGetControllerInitiatedTelemetry @ 0x1400281F0 (NVMeGetControllerInitiatedTelemetry.c)
 *     NVMeSyncHostTime_Feature_TimestampSyncMemoryAlloc @ 0x14002C6CC (NVMeSyncHostTime_Feature_TimestampSyncMemoryAlloc.c)
 *     __security_check_cookie @ 0x140030FC0 (__security_check_cookie.c)
 *     memcmp @ 0x1400310A0 (memcmp.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

char __fastcall NVMeControllerInitPart3(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r14d
  __int64 v7; // rdx
  unsigned int v8; // r15d
  void *v9; // rcx
  __int64 v10; // rax
  _OWORD *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  void *v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r14
  unsigned __int8 v19; // di
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // eax
  bool v27; // zf
  __int64 v29; // [rsp+B0h] [rbp-68h]
  __int64 v30; // [rsp+B8h] [rbp-60h]
  _OWORD *v31; // [rsp+E0h] [rbp-38h]

  v29 = *(_QWORD *)(a1 + 1560);
  NVMeGetCommandEffectsLog(a1, a2);
  v5 = 1LL;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    NVMeGetSupportedLogPagesLog(a1, a2);
    NVMeGetFeatureIdentifiersSupportedLog(a1, a2);
    if ( !*(_BYTE *)(a1 + 20) )
    {
      v6 = (*(_DWORD *)(a1 + 56) & 2) != 0 ? 0x80000000 : *(_DWORD *)(a1 + 244);
      if ( (unsigned int)StorPortExtendedFunction(82LL, a1, 512LL, 0LL) && v6 != 0x80000000 )
        StorPortExtendedFunction(82LL, a1, 512LL, 0LL);
    }
    v5 = 1LL;
  }
  v7 = *(unsigned int *)(a1 + 56);
  if ( (v7 & 0x2000) != 0 )
  {
    v4 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1560) + 76LL);
    if ( (v4 & 1) == 0 && (v4 & 6) == 2 && (v4 & 8) == 0 && (*(_DWORD *)(a1 + 4064) & 8) == 0 && !*(_BYTE *)(a1 + 20) )
    {
      v8 = (v7 & 2) != 0 ? 0x80000000 : *(_DWORD *)(a1 + 244);
      if ( (unsigned int)StorPortExtendedFunction(82LL, a1, 512LL, 0LL) && v8 != 0x80000000 )
        StorPortExtendedFunction(82LL, a1, 512LL, 0LL);
    }
  }
  if ( (*(_DWORD *)(a1 + 56) & 4) == 0 && !*(_BYTE *)(a1 + 20) )
  {
    *(_WORD *)(a1 + 220) = -1;
    if ( *(_BYTE *)(a1 + 1008) )
      *(_DWORD *)(a1 + 4064) |= 0x20000u;
    v9 = *(void **)(a1 + 1104);
    *(_BYTE *)(a1 + 1019) = 0;
    memset(v9, 0, 0x1088uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4200LL) = 0LL;
    *(_QWORD *)(a1 + 1072) = *(_QWORD *)(a1 + 1104);
    *(_BYTE *)(a1 + 1008) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
    v10 = *(_QWORD *)(a1 + 1104);
    *(_DWORD *)(v10 + 4140) &= 0xFFC0FFFF;
    *(_BYTE *)(v10 + 4096) = 10;
    *(_BYTE *)(v10 + 4136) = 4;
    *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4192LL) = NVMeGetTemperatureThresholdCompletion;
    ProcessCommand(a1, a1 + 1016);
    WaitForCommandComplete(a1, a1 + 1016, a2);
  }
  if ( !(unsigned int)Feature_EnableAENAtEndOfDeviceInit__private_IsEnabledDeviceUsageNoInline(v4, v7, v5) )
  {
    NVMeConfigAsyncEvent(a1, a2);
    NVMeStartAsyncEventCommands(a1);
  }
  if ( *(_BYTE *)(a1 + 20) )
  {
    v18 = v29;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 12) & 8) == 0 )
    {
      v11 = *(_OWORD **)(a1 + 3936);
      v12 = *(_QWORD *)(a1 + 1104);
      v31 = v11;
      *(_QWORD *)(a1 + 3936) = 0LL;
      if ( v11 )
      {
        v30 = *(_QWORD *)(a1 + 3952);
        if ( v30 )
        {
          v13 = 4LL;
          do
          {
            *v11 = 0LL;
            v11[1] = 0LL;
            v11[2] = 0LL;
            v11[3] = 0LL;
            v11[4] = 0LL;
            v11[5] = 0LL;
            v11[6] = 0LL;
            v11 += 8;
            *(v11 - 1) = 0LL;
            --v13;
          }
          while ( v13 );
          if ( *(_BYTE *)(a1 + 1008) )
            *(_DWORD *)(a1 + 4064) |= 0x20000u;
          v14 = *(void **)(a1 + 1104);
          *(_BYTE *)(a1 + 1019) = 0;
          memset(v14, 0, 0x1088uLL);
          *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4200LL) = 0LL;
          *(_QWORD *)(a1 + 1072) = *(_QWORD *)(a1 + 1104);
          *(_BYTE *)(a1 + 1008) = 1;
          *(_BYTE *)(v12 + 4225) |= 3u;
          *(_WORD *)(v12 + 4212) = 0;
          v15 = *(_QWORD *)(a1 + 1560);
          *(_BYTE *)(v12 + 4136) = -63;
          v16 = *(_DWORD *)(v12 + 4136) & 0xF07F7FFF;
          *(_BYTE *)(v12 + 4096) = 2;
          *(_DWORD *)(v12 + 4100) = -1;
          *(_DWORD *)(v12 + 4136) = v16 | 0x7F0000;
          if ( (v30 & 0xFFF) == 0 )
          {
            *(_QWORD *)(v12 + 4120) = v30;
            *(_QWORD *)(v12 + 4128) = 0LL;
          }
          *(_WORD *)(v12 + 4142) = 0;
          if ( (*(_BYTE *)(v15 + 261) & 4) != 0 )
          {
            *(_DWORD *)(v12 + 4138) = 127;
            *(_QWORD *)(v12 + 4144) = 0LL;
          }
          *(_BYTE *)(v12 + 4225) |= 4u;
          *(_QWORD *)(v12 + 4160) = v31;
          *(_QWORD *)(v12 + 4168) = v30;
          *(_QWORD *)(v12 + 4192) = NVMeGetCloudSSDErrorRecoveryLogPageCompletion;
          *(_DWORD *)(v12 + 4208) = 512;
          ProcessCommand(a1, a1 + 1016);
          WaitForCommandComplete(a1, a1 + 1016, a2);
        }
      }
      else
      {
        NVMeAllocateDmaBuffer(a1, 0x200u);
      }
    }
    v17 = *(_QWORD *)(a1 + 3936);
    if ( v17 && *(_DWORD *)(v17 + 4) )
    {
      if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 24), 0xCu) )
      {
        if ( (unsigned int)NVMeGetControllerInitiatedTelemetry(a1) )
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 24), 0xCu);
        else
          NVMeQueueWorkItem(a1, NVMeCaptureLiveDumpWorkItem, 0LL);
      }
      *(_DWORD *)(a1 + 28) = 24;
      NVMeControllerStartFailureEventLog(a1);
      StorPortExtendedFunction(0LL, a1, 528LL, 1701672526LL);
      if ( (*(_BYTE *)(a1 + 21) & 4) != 0 )
        StorPortExtendedFunction(86LL, a1, 0LL, 2LL);
    }
    v18 = v29;
    if ( (*(_BYTE *)(v29 + 261) & 0x48) == 0x48 && !*(_BYTE *)(a1 + 20) )
      NVMeAllocateDmaBuffer(a1, 0x200u);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 520LL) & 0x40) != 0 )
    NVMeSyncHostTime_Feature_TimestampSyncMemoryAlloc(a1, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 525LL) & 1) != 0 )
  {
    v19 = *(_BYTE *)(a1 + 3964);
    if ( (v19 & 6) == 2 )
    {
      LocalCommandReuse(a1, a1 + 1008);
      *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
      *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
      *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~4u;
      *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
      v20 = *(_QWORD *)(a1 + 1104);
      v21 = *(_DWORD *)(v20 + 4140);
      *(_BYTE *)(v20 + 4096) = 9;
      *(_BYTE *)(v20 + 4136) = 6;
      *(_DWORD *)(v20 + 4140) = v21 ^ ((unsigned __int8)v21 ^ v19) & 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4192LL) = NVMeSetFeaturesCacheCompletion;
      ProcessCommand(a1, a1 + 1016);
      WaitForCommandComplete(a1, a1 + 1016, 1u);
    }
  }
  NVMeEnableThrottling(a1);
  if ( (*(_BYTE *)(v18 + 520) & 0x20) != 0 )
    NVMeControllerSetHostIdentifier(a1);
  v26 = *(_DWORD *)(a1 + 24) & 0xFFDDFFFF;
  *(_DWORD *)(a1 + 28) = 0;
  v27 = *(_BYTE *)(a1 + 20) == 0;
  *(_DWORD *)(a1 + 24) = v26 | 0x201;
  if ( v27 )
    StorPortExtendedFunction(118LL, a1, NVMeHwRegistryNotify, v25);
  if ( (unsigned int)Feature_EnableAENAtEndOfDeviceInit__private_IsEnabledDeviceUsageNoInline(v23, v22, v24) )
  {
    NVMeConfigAsyncEvent(a1, a2);
    if ( a2 )
      NVMeStartAsyncEventCommands(a1);
  }
  return 1;
}
