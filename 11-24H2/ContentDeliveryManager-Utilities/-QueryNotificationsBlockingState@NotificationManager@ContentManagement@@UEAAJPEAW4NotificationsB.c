/*
 * XREFs of ?QueryNotificationsBlockingState@NotificationManager@ContentManagement@@UEAAJPEAW4NotificationsBlockingStateFlags@2@@Z @ 0x180036D90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetActionCenterQuietHoursState@NotificationManager@ContentManagement@@AEAAJPEA_N@Z @ 0x180030830 (-GetActionCenterQuietHoursState@NotificationManager@ContentManagement@@AEAAJPEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::NotificationManager::QueryNotificationsBlockingState(
        ContentManagement::NotificationManager *this,
        enum ContentManagement::NotificationsBlockingStateFlags *a2)
{
  int v2; // ebx
  ContentManagement::NotificationManager *v4; // rcx
  HRESULT ActionCenterQuietHoursState; // edi
  __int64 v6; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+40h] [rbp+18h] BYREF

  *(_DWORD *)a2 = 0;
  v2 = 0;
  v11 = 0;
  ActionCenterQuietHoursState = SHQueryUserNotificationState((QUERY_USER_NOTIFICATION_STATE *)&v11);
  if ( ActionCenterQuietHoursState < 0 )
  {
    v6 = 203LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)ActionCenterQuietHoursState,
      v8);
    return (unsigned int)ActionCenterQuietHoursState;
  }
  switch ( v11 )
  {
    case 2:
      v2 = 1;
      break;
    case 4:
      v2 = 4;
      break;
    case 6:
      v2 = 2;
      break;
  }
  v10 = 0;
  ActionCenterQuietHoursState = ContentManagement::NotificationManager::GetActionCenterQuietHoursState(v4, &v10);
  if ( ActionCenterQuietHoursState < 0 )
  {
    v6 = 221LL;
    goto LABEL_3;
  }
  if ( v10 )
    v2 |= 8u;
  *(_DWORD *)a2 = v2;
  return 0LL;
}
