/*
 * XREFs of CmFcpManagerPublishChangeNotifications @ 0x140A35DD0
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407E40E0 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1407E474C (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A35848 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     CmpWorkItemQueueWork @ 0x1403A68B0 (CmpWorkItemQueueWork.c)
 *     ZwQueryWnfStateData @ 0x1406A9210 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall CmFcpManagerPublishChangeNotifications(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 i; // rbx
  __int64 result; // rax
  char v5; // bl
  __int64 v6; // [rsp+A8h] [rbp+40h] BYREF
  int v7; // [rsp+B0h] [rbp+48h]
  int v8; // [rsp+B8h] [rbp+50h]

  v6 = a2;
  v7 = 0;
  v2 = KeAbPreAcquire((__int64)&stru_140EF7178, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140EF7178, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140EF7178, 0, v2, (__int64)&stru_140EF7178);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  for ( i = qword_140EF7180; (__int64 *)i != &qword_140EF7180; i = *(_QWORD *)i )
    CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(i + 16));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140EF7178, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140EF7178);
  KeAbPostRelease((ULONG_PTR)&stru_140EF7178);
  v5 = byte_140EF709B;
  while ( 1 )
  {
    v8 = 8;
    result = ZwQueryWnfStateData((__int64)&WNF_CMFC_FEATURE_CONFIGURATION_CHANGED, (__int64)CmFcpWnfTypeId);
    if ( (int)result < 0 )
      break;
    result = v6;
    if ( !v6 )
      break;
    result = ZwUpdateWnfStateData((__int64)&WNF_CMFC_FEATURE_CONFIGURATION_CHANGED, (__int64)&v6);
    if ( (((_DWORD)result + 0x80000000) & 0x80000000) == 0 && (_DWORD)result != -1073741823 )
      break;
    if ( v5 && (int)result >= 0 )
    {
      v7 = 8;
      result = ZwQueryWnfStateData((__int64)&WNF_CMFC_HOST_OS_FEATURE_CONFIGURATION_CHANGED, 0LL);
      if ( (int)result >= 0 )
      {
        result = v6;
        if ( v6 )
          return ZwUpdateWnfStateData((__int64)&WNF_CMFC_HOST_OS_FEATURE_CONFIGURATION_CHANGED, (__int64)&v6);
      }
      return result;
    }
  }
  return result;
}
