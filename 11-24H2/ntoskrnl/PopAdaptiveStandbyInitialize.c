/*
 * XREFs of PopAdaptiveStandbyInitialize @ 0x1407617F8
 * Callers:
 *     PopInitPlatformSettings @ 0x140C67E1C (PopInitPlatformSettings.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     EtwActivityIdControl @ 0x14041E010 (EtwActivityIdControl.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     IoSetActivityIdThread @ 0x14045C3B0 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140463690 (IoClearActivityIdThread.c)
 *     SSHSupportIsPlatformAoAc @ 0x140490DC8 (SSHSupportIsPlatformAoAc.c)
 *     PopInitializeIRTimer @ 0x1405CCE3C (PopInitializeIRTimer.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D787C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_AdaptiveHibernateEnhancements__private_GetVariant @ 0x1405DB0A0 (Feature_AdaptiveHibernateEnhancements__private_GetVariant.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlIsMultiSessionSku @ 0x1409113D0 (RtlIsMultiSessionSku.c)
 *     ExSubscribeWnfStateChange @ 0x140A19320 (ExSubscribeWnfStateChange.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PoRegisterPowerSettingCallback @ 0x140A6B150 (PoRegisterPowerSettingCallback.c)
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
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int128 v12; // xmm0
  int v13; // eax
  int Handle; // [rsp+28h] [rbp-39h]
  NTSTATUS v16; // [rsp+48h] [rbp-19h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-11h] BYREF
  GUID *v18; // [rsp+60h] [rbp-1h]
  _QWORD v19[3]; // [rsp+68h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20[2]; // [rsp+80h] [rbp+1Fh] BYREF
  NTSTATUS *v21; // [rsp+A0h] [rbp+3Fh]
  int v22; // [rsp+A8h] [rbp+47h]
  int v23; // [rsp+ACh] [rbp+4Bh]

  v18 = 0LL;
  v19[0] = &WNF_PO_COMPOSITE_BATTERY;
  v19[1] = &WNF_SEB_AUDIO_ACTIVITY;
  v19[2] = &WNF_PO_SLEEPSTUDY_SESSION_CHANGE;
  ActivityId = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E08258, 0LL, 0LL);
  EtwActivityIdControl(3u, &ActivityId);
  v0 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v18 = (GUID *)v0;
  if ( (unsigned int)dword_140E08258 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08258,
      (unsigned __int8 *)byte_14004E29D,
      &ActivityId,
      (const GUID *)v0,
      2u,
      v20);
  qword_140F06E28 = 0LL;
  PopAdaptiveStandbyLock = 0LL;
  PopAcquireRwLockExclusive(&PopAdaptiveStandbyLock);
  if ( !SSHSupportIsPlatformAoAc() || !(unsigned __int8)RtlIsMultiSessionSku() )
  {
    v4 = -1073741637;
    goto LABEL_31;
  }
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    DWORD1(xmmword_140F06E88) = 1;
    *((_QWORD *)&xmmword_140F06E88 + 1) = 0xFFFFFFFF00000001uLL;
    dword_140F06E98 = 10800;
  }
  else
  {
    dword_140F06E7C = 1;
    dword_140F06E84 = -1;
    dword_140F06E80 = 1;
    LODWORD(xmmword_140F06E88) = 10800;
  }
  LODWORD(xmmword_140F06EC8) = xmmword_140F06EC8 | 1;
  qword_140F07048 = 0LL;
  qword_140F07030 = 0LL;
  *((_QWORD *)&xmmword_140F06EC8 + 1) = -1LL;
  qword_140F07040 = (__int64)PopAdaptiveStandbyActionWorker;
  dword_140F06ED8 = 100;
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
    PopInitializeIRTimer(
      (unsigned __int64)&unk_140F06F80,
      (__int64)PopAdaptiveStandbyPolicyTimerCallback,
      v1,
      (__int64)PopAdaptiveStandbyPolicyTimerWorker,
      Handle,
      6,
      34);
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
LABEL_14:
    v5 = 0;
    v6 = v19;
    do
    {
      v4 = ExSubscribeWnfStateChange((unsigned int)&v16, *v6, 1, 0, (__int64)PopAdaptiveStandbyWnfCallback, 0LL);
      if ( v4 < 0 )
        goto LABEL_31;
      ++v5;
      ++v6;
    }
    while ( v5 < 3 );
    if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
    {
      v8 = Feature_AdaptiveHibernateEnhancements__private_GetVariant(v7) - 1;
      if ( !v8 )
      {
        v12 = Control;
        v13 = dword_140E0C3B8;
        goto LABEL_28;
      }
      v9 = v8 - 1;
      if ( !v9 )
      {
        v12 = HighTreatment1;
        v13 = dword_140E0C370;
        goto LABEL_28;
      }
      v10 = v9 - 1;
      if ( !v10 )
      {
        v12 = HighTreatment2;
        v13 = dword_140E0C358;
        goto LABEL_28;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
        v12 = HighTreatment3;
        v13 = dword_140E0C3A0;
        goto LABEL_28;
      }
      if ( v11 == 1 )
      {
        v12 = HighTreatment4;
        v13 = dword_140E0C388;
LABEL_28:
        PopAdaptiveStandbyRegions = v12;
        dword_140E0C3D0 = v13;
      }
    }
    PopAdaptiveStandbyContext = 1;
    v4 = 0;
    goto LABEL_31;
  }
  v2 = 0;
  v3 = &PopAdaptiveStandbyPowerSettings;
  while ( 1 )
  {
    v4 = PoRegisterPowerSettingCallback(0LL, *v3, PopAdaptiveStandbyPowerSettingCallback, v3, (PVOID *)v3 + 2);
    if ( v4 < 0 )
      break;
    ++v2;
    v3 += 3;
    if ( v2 >= 7 )
      goto LABEL_14;
  }
LABEL_31:
  PopReleaseRwLock((signed __int64 *)&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08258 > 5 )
  {
    v23 = 0;
    v21 = &v16;
    v16 = v4;
    v22 = 4;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08258,
      (unsigned __int8 *)&word_14004E1C6,
      &ActivityId,
      v18,
      3u,
      v20);
  }
  return IoClearActivityIdThread((struct _LIST_ENTRY *)v18);
}
