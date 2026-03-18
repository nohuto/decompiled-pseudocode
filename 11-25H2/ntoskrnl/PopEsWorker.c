/*
 * XREFs of PopEsWorker @ 0x140AAAEB0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopEsUpdateState @ 0x1404B8AA0 (PopEsUpdateState.c)
 *     PopTraceEsSetting @ 0x1404DA4C0 (PopTraceEsSetting.c)
 *     Feature_EnergySaver_GroupPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1404F243C (Feature_EnergySaver_GroupPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     PopEsPublishSetting @ 0x1406E9D2C (PopEsPublishSetting.c)
 *     PopEsPublishState @ 0x140750C88 (PopEsPublishState.c)
 *     ExSubscribeWnfStateChange @ 0x140A139C0 (ExSubscribeWnfStateChange.c)
 *     PopEsStartTelemetry @ 0x140AA85F0 (PopEsStartTelemetry.c)
 */

__int64 PopEsWorker()
{
  char v0; // bl
  signed __int32 v1; // eax
  signed __int32 v2; // ett
  unsigned int v3; // ecx
  signed __int32 v4; // r8d
  int v5; // edx
  int v6; // ecx
  unsigned int v7; // edi
  __int64 result; // rax
  int v9; // edx
  int v10; // edx

  do
  {
    do
    {
      v0 = 0;
      _m_prefetchw(&PopEsWorkItemDue);
      v1 = PopEsWorkItemDue;
      do
      {
        v2 = v1;
        v1 = _InterlockedCompareExchange(&PopEsWorkItemDue, v1, v1);
      }
      while ( v2 != v1 );
      _BitScanForward(&v3, v1);
      v4 = v1;
      v5 = 1 << v3;
      v6 = v1 & ~(1 << v3);
      if ( (v6 & 8) != 0 && ((v5 - 2) & 0xFFFFFFFD) == 0 )
      {
        v0 = 1;
        v6 &= ~8u;
      }
      v7 = v6 & 0xFFFFFFFB;
      if ( v5 != 2 )
        v7 = v6;
      result = (unsigned int)_InterlockedCompareExchange(&PopEsWorkItemDue, v7, v1);
    }
    while ( v4 != (_DWORD)result );
    v9 = v5 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 2 )
          continue;
        PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
      }
      else
      {
        PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
        PopEsPublishSetting();
        Feature_EnergySaver_GroupPolicy__private_IsEnabledDeviceUsageNoInline();
        PopTraceEsSetting();
      }
      PopEsUpdateState(v0);
      result = PopReleaseRwLock(&PopEsLock);
    }
    else
    {
      PopEsPublishState();
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
      PopEsStartTelemetry();
      PopReleaseRwLock(&PopEsLock);
      ExSubscribeWnfStateChange((__int64)&PopEsWnfSubscriptionOverride, (__int64)&WNF_PO_ENERGY_SAVER_OVERRIDE);
      result = Feature_EnergySaver_GroupPolicy__private_IsEnabledDeviceUsageNoInline();
      if ( (_DWORD)result )
      {
        ExSubscribeWnfStateChange((__int64)&PopEsWnfSubscriptionGroupPolicy, (__int64)&WNF_GPOL_SYSTEM_CHANGES);
        result = ExSubscribeWnfStateChange(
                   (__int64)&PopEsWnfSubscriptionOverrideMdm,
                   (__int64)&WNF_PO_ENERGY_SAVER_OVERRIDE_MDM);
      }
    }
  }
  while ( v7 );
  return result;
}
