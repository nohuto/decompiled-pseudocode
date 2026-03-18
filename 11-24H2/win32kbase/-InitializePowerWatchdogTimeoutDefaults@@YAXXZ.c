/*
 * XREFs of ?InitializePowerWatchdogTimeoutDefaults@@YAXXZ @ 0x140140064
 * Callers:
 *     ?InitializePowerWatchdogTimeouts@@YAHXZ @ 0x14013FE9C (-InitializePowerWatchdogTimeouts@@YAHXZ.c)
 * Callees:
 *     Feature_MonitorPowerOnWatchdogTimeout__private_GetVariant @ 0x1401AED28 (Feature_MonitorPowerOnWatchdogTimeout__private_GetVariant.c)
 *     Feature_MonitorPowerOnWatchdogTimeout__private_IsEnabledDeviceUsageNoInline @ 0x1401AED64 (Feature_MonitorPowerOnWatchdogTimeout__private_IsEnabledDeviceUsageNoInline.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x1401B06A0 (wil_details_FeatureStateCache_ReevaluateCachedVariantState.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall InitializePowerWatchdogTimeoutDefaults(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // r14
  char *v8; // r15
  unsigned int *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+28h] [rbp-49h] BYREF
  const wchar_t *v14; // [rsp+30h] [rbp-41h] BYREF
  __int64 v15; // [rsp+38h] [rbp-39h]
  __int64 v16; // [rsp+40h] [rbp-31h]
  const wchar_t *v17; // [rsp+48h] [rbp-29h]
  __int64 v18; // [rsp+50h] [rbp-21h]
  __int64 v19; // [rsp+58h] [rbp-19h]
  const wchar_t *v20; // [rsp+60h] [rbp-11h]
  __int64 v21; // [rsp+68h] [rbp-9h]
  __int64 v22; // [rsp+70h] [rbp-1h]
  const wchar_t *v23; // [rsp+78h] [rbp+7h]
  __int64 v24; // [rsp+80h] [rbp+Fh]
  __int64 v25; // [rsp+88h] [rbp+17h]
  const wchar_t *v26; // [rsp+90h] [rbp+1Fh]
  __int64 v27; // [rsp+98h] [rbp+27h]

  v13 = 16LL;
  v14 = L"PowerWatchdogRequestQueueTimeoutMsec";
  v17 = L"PowerWatchdogPoCalloutTimeoutMsec";
  v20 = L"PowerWatchdogPowerOnGdiTimeoutMsec";
  v23 = L"PowerWatchdogDwmSyncFlushTimeoutMsec";
  v26 = L"PowerWatchdogDrvSetMonitorTimeoutMsec";
  v15 = 30000LL;
  v16 = 32LL;
  v18 = 10000LL;
  v19 = 48LL;
  v21 = 30000LL;
  v22 = 64LL;
  v24 = 30000LL;
  v25 = 80LL;
  v27 = 10000LL;
  v1 = 5LL;
  v2 = W32GetUserSessionState(a1) + 368;
  v7 = (char *)&v13 - v2;
  v8 = (char *)&v14 - v2;
  v9 = (unsigned int *)(v2 + 16);
  do
  {
    v10 = *(_DWORD *)&v7[(_QWORD)v9];
    *(v9 - 4) = *(unsigned int *)((char *)v9 + (_QWORD)v7 - 16);
    *((_QWORD *)v9 - 1) = *(_QWORD *)((char *)v9 + (_QWORD)v8 - 16);
    *v9 = v10;
    if ( (unsigned int)Feature_MonitorPowerOnWatchdogTimeout__private_IsEnabledDeviceUsageNoInline(
                         v4,
                         v3,
                         v5,
                         v6,
                         v13,
                         v14,
                         v15,
                         v16,
                         v17)
      && *(v9 - 4) == 80
      && (unsigned int)Feature_MonitorPowerOnWatchdogTimeout__private_GetVariant() == 1 )
    {
      HIDWORD(v11) = HIDWORD(Feature_MonitorPowerOnWatchdogTimeout__private_featureState);
      if ( (Feature_MonitorPowerOnWatchdogTimeout__private_featureState & 8) == 0 )
        v11 = wil_details_FeatureStateCache_ReevaluateCachedVariantState(
                v4,
                Feature_MonitorPowerOnWatchdogTimeout__private_featureState);
      v4 = (unsigned int)(1000 * HIDWORD(v11));
      if ( (unsigned int)v4 > v10 )
      {
        HIDWORD(v12) = HIDWORD(Feature_MonitorPowerOnWatchdogTimeout__private_featureState);
        if ( (Feature_MonitorPowerOnWatchdogTimeout__private_featureState & 8) == 0 )
          v12 = wil_details_FeatureStateCache_ReevaluateCachedVariantState(
                  v4,
                  Feature_MonitorPowerOnWatchdogTimeout__private_featureState);
        v10 = 1000 * HIDWORD(v12);
      }
      *v9 = v10;
    }
    v9 += 6;
    --v1;
  }
  while ( v1 );
}
