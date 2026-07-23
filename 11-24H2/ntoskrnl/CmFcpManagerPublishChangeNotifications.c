/*
 * XREFs of CmFcpManagerPublishChangeNotifications @ 0x140A2B2EC
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407E4630 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1407E4C9C (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A2AD64 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 * Callees:
 *     CmpWorkItemQueueWork @ 0x14021E9B0 (CmpWorkItemQueueWork.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ZwQueryWnfStateData @ 0x1406AA1B0 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 */

int __fastcall CmFcpManagerPublishChangeNotifications(__int64 a1, unsigned __int64 a2)
{
  char *v2; // rbx
  __int64 i; // rbx
  int result; // eax
  char v5; // bl
  ULONG v6; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 Buffer; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v8[3]; // [rsp+50h] [rbp-18h] BYREF
  ULONG ChangeStamp; // [rsp+A0h] [rbp+38h] BYREF
  int v10; // [rsp+A4h] [rbp+3Ch]
  unsigned __int64 v11; // [rsp+A8h] [rbp+40h] BYREF
  ULONG v12; // [rsp+B0h] [rbp+48h] BYREF
  ULONG BufferSize; // [rsp+B8h] [rbp+50h] BYREF

  v11 = a2;
  v10 = HIDWORD(a1);
  ChangeStamp = 0;
  v6 = 0;
  v8[0] = 0LL;
  v12 = 0;
  v2 = (char *)KeAbPreAcquire((__int64)&stru_140EF73B8, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140EF73B8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140EF73B8, 0, v2, (__int64)&stru_140EF73B8);
  if ( v2 )
    v2[10] = 1;
  for ( i = qword_140EF73C0; (__int64 *)i != &qword_140EF73C0; i = *(_QWORD *)i )
    CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(i + 16));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140EF73B8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140EF73B8);
  KeAbPostRelease((ULONG_PTR)&stru_140EF73B8);
  v5 = byte_140EF72DB;
  while ( 1 )
  {
    Buffer = 0LL;
    BufferSize = 8;
    result = ZwQueryWnfStateData(
               &WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
               &CmFcpWnfTypeId,
               0LL,
               &ChangeStamp,
               &Buffer,
               &BufferSize);
    if ( result < 0 )
      break;
    result = v11;
    if ( Buffer >= v11 )
      break;
    result = ZwUpdateWnfStateData(
               &WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
               &v11,
               8u,
               &CmFcpWnfTypeId,
               0LL,
               ChangeStamp,
               1u);
    if ( ((result + 0x80000000) & 0x80000000) == 0 && result != -1073741823 )
      break;
    if ( v5 && result >= 0 )
    {
      v12 = 8;
      result = ZwQueryWnfStateData(&WNF_CMFC_HOST_OS_FEATURE_CONFIGURATION_CHANGED, 0LL, 0LL, &v6, v8, &v12);
      if ( result >= 0 )
      {
        result = v11;
        if ( v8[0] < v11 )
          return ZwUpdateWnfStateData(&WNF_CMFC_HOST_OS_FEATURE_CONFIGURATION_CHANGED, &v11, 8u, 0LL, 0LL, 0, 0);
      }
      return result;
    }
  }
  return result;
}
