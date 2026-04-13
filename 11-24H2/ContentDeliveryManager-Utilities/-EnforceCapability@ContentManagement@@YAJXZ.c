/*
 * XREFs of ?EnforceCapability@ContentManagement@@YAJXZ @ 0x18002EEF0
 * Callers:
 *     ?get_ActionHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIActionHelper@2@@Z @ 0x18003E850 (-get_ActionHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIActionHelper@2@@.c)
 *     ?get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z @ 0x18003E910 (-get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z.c)
 *     ?get_LaunchManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUILaunchManager@2@@Z @ 0x18003EC50 (-get_LaunchManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUILaunchManager@2.c)
 *     ?get_MobilityExperienceSettings@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIMobilityExperienceSettings@2@@Z @ 0x18003ED10 (-get_MobilityExperienceSettings@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIMo.c)
 *     ?get_NotificationManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUINotificationManager@2@@Z @ 0x18003EDD0 (-get_NotificationManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUINotificat.c)
 *     ?get_PhoneShellNamespaceHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIPhoneShellNamespaceHelper@2@@Z @ 0x18003F010 (-get_PhoneShellNamespaceHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIPho.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x18007181C (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 */

__int64 __fastcall ContentManagement::EnforceCapability(ContentManagement *this, __int64 a2, bool *a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int16 v8; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(v8) = 0;
  v3 = CallerIdentity::CheckCallerCapability((CallerIdentity *)L"targetedContent", &v8, a3);
  if ( v3 < 0 )
  {
    v4 = 115LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3,
      v6);
    return (unsigned int)v3;
  }
  if ( !(_BYTE)v8 )
  {
    v3 = -2147024891;
    v4 = 116LL;
    goto LABEL_3;
  }
  return 0LL;
}
