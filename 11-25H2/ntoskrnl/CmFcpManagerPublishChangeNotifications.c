/*
 * XREFs of CmFcpManagerPublishChangeNotifications @ 0x140A3050C
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407D4800 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A2FF84 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140AD4F6C (CmFcManagerUpdateFeatureConfigurations.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     CmpWorkItemQueueWork @ 0x1403B8E30 (CmpWorkItemQueueWork.c)
 *     ZwQueryWnfStateData @ 0x14069DF40 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall CmFcpManagerPublishChangeNotifications(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 i; // rbx
  char v4; // bl
  __int64 result; // rax
  __int64 v6; // [rsp+A8h] [rbp+40h] BYREF
  int v7; // [rsp+B0h] [rbp+48h]
  int v8; // [rsp+B8h] [rbp+50h]

  v6 = a2;
  v7 = 0;
  v2 = KeAbPreAcquire((__int64)&stru_140EF6DD8, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140EF6DD8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140EF6DD8, 0, v2, (unsigned __int64)&stru_140EF6DD8);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  for ( i = qword_140EF6DE0; (__int64 *)i != &qword_140EF6DE0; i = *(_QWORD *)i )
    CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(i + 16));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140EF6DD8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140EF6DD8);
  KeAbPostRelease((ULONG_PTR)&stru_140EF6DD8);
  v4 = byte_140EF6CFB;
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
    if ( v4 && (int)result >= 0 )
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
