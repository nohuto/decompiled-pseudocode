/*
 * XREFs of PopAdaptiveStandbyInitialize @ 0x140760B64
 * Callers:
 *     PopInitPlatformSettings @ 0x140C69F98 (PopInitPlatformSettings.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x1404123E0 (EtwActivityIdControl.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     IoSetActivityIdThread @ 0x140451750 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140459F90 (IoClearActivityIdThread.c)
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 *     PopInitializeIRTimer @ 0x1405CA5AC (PopInitializeIRTimer.c)
 *     Feature_AdaptiveHibernateEnhancements__private_GetVariant @ 0x1405D4DBC (Feature_AdaptiveHibernateEnhancements__private_GetVariant.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D4DFC (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlIsMultiSessionSku @ 0x1408E8B20 (RtlIsMultiSessionSku.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ExSubscribeWnfStateChange @ 0x140A12490 (ExSubscribeWnfStateChange.c)
 *     PoRegisterPowerSettingCallback @ 0x140A646B0 (PoRegisterPowerSettingCallback.c)
 */

struct _KTHREAD *PopAdaptiveStandbyInitialize()
{
  struct _LIST_ENTRY *v0; // rax
  __int64 v1; // r8
  unsigned int v2; // r14d
  GUID **v3; // rsi
  NTSTATUS v4; // edi
  unsigned int v5; // esi
  _QWORD *v6; // r14
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  int Handle; // [rsp+28h] [rbp-39h]
  NTSTATUS v15; // [rsp+48h] [rbp-19h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-11h] BYREF
  GUID *v17; // [rsp+60h] [rbp-1h]
  _QWORD v18[3]; // [rsp+68h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19[2]; // [rsp+80h] [rbp+1Fh] BYREF
  NTSTATUS *v20; // [rsp+A0h] [rbp+3Fh]
  int v21; // [rsp+A8h] [rbp+47h]
  int v22; // [rsp+ACh] [rbp+4Bh]

  v17 = 0LL;
  v18[0] = &WNF_PO_COMPOSITE_BATTERY;
  v18[1] = &WNF_SEB_AUDIO_ACTIVITY;
  v18[2] = &WNF_PO_SLEEPSTUDY_SESSION_CHANGE;
  ActivityId = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E08218, 0LL, 0LL);
  EtwActivityIdControl(3u, &ActivityId);
  v0 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v17 = (GUID *)v0;
  if ( (unsigned int)dword_140E08218 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)byte_14004F090,
      &ActivityId,
      (const GUID *)v0,
      2u,
      v19);
  qword_140F07378 = 0LL;
  PopAdaptiveStandbyLock = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock);
  if ( SSHSupportIsPlatformAoAc() && RtlIsMultiSessionSku() )
  {
    if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
    {
      DWORD1(xmmword_140F07188) = 1;
      *((_QWORD *)&xmmword_140F07188 + 1) = 0xFFFFFFFF00000001uLL;
      dword_140F07198 = 10800;
    }
    else
    {
      dword_140F0717C = 1;
      dword_140F07184 = -1;
      dword_140F07180 = 1;
      LODWORD(xmmword_140F07188) = 10800;
    }
    LODWORD(xmmword_140F071C8) = xmmword_140F071C8 | 1;
    qword_140F07358 = 0LL;
    qword_140F07340 = 0LL;
    *((_QWORD *)&xmmword_140F071C8 + 1) = -1LL;
    qword_140F07350 = (__int64)PopAdaptiveStandbyActionWorker;
    dword_140F071D8 = 100;
    if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
      PopInitializeIRTimer(
        (unsigned __int64)&unk_140F07290,
        (__int64)PopAdaptiveStandbyPolicyTimerCallback,
        v1,
        (__int64)PopAdaptiveStandbyPolicyTimerWorker,
        Handle,
        6,
        34);
    v2 = 0;
    v3 = &PopAdaptiveStandbyPowerSettings;
    do
    {
      v4 = PoRegisterPowerSettingCallback(0LL, *v3, PopAdaptiveStandbyPowerSettingCallback, v3, (PVOID *)v3 + 2);
      if ( v4 < 0 )
        goto LABEL_27;
      ++v2;
      v3 += 3;
    }
    while ( v2 < 7 );
    v5 = 0;
    v6 = v18;
    do
    {
      v4 = ExSubscribeWnfStateChange((unsigned int)&v15, *v6, 1, 0, (__int64)PopAdaptiveStandbyWnfCallback, 0LL);
      if ( v4 < 0 )
        goto LABEL_27;
      ++v5;
      ++v6;
    }
    while ( v5 < 3 );
    if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
    {
      v7 = Feature_AdaptiveHibernateEnhancements__private_GetVariant() - 6;
      if ( !v7 )
      {
        v10 = dword_140E0C4B8;
        v11 = xmmword_140E0C490;
        PopAdaptiveStandbyRegions = PopAdaptiveStandbyRegionsOEM;
        xmmword_140E0C460 = xmmword_140E0C4A0;
        v12 = qword_140E0C4B0;
        goto LABEL_24;
      }
      v8 = v7 - 1;
      if ( !v8 || (v9 = v8 - 1) == 0 )
      {
        v10 = dword_140E0C3F8;
        v11 = xmmword_140E0C3D0;
        PopAdaptiveStandbyRegions = PopAdaptiveStandbyRegionsT3;
        xmmword_140E0C460 = xmmword_140E0C3E0;
        v12 = qword_140E0C3F0;
        goto LABEL_24;
      }
      if ( (unsigned int)(v9 - 1) <= 1 )
      {
        v10 = dword_140E0C438;
        v11 = xmmword_140E0C410;
        PopAdaptiveStandbyRegions = PopAdaptiveStandbyRegionsT35;
        xmmword_140E0C460 = xmmword_140E0C420;
        v12 = qword_140E0C430;
LABEL_24:
        xmmword_140E0C450 = v11;
        dword_140E0C478 = v10;
        qword_140E0C470 = v12;
      }
    }
    PopAdaptiveStandbyContext = 1;
    v4 = 0;
    goto LABEL_27;
  }
  v4 = -1073741637;
LABEL_27:
  PopReleaseRwLock(&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08218 > 5 )
  {
    v22 = 0;
    v20 = &v15;
    v15 = v4;
    v21 = 4;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)word_14004EFC2,
      &ActivityId,
      v17,
      3u,
      v19);
  }
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v17);
}
