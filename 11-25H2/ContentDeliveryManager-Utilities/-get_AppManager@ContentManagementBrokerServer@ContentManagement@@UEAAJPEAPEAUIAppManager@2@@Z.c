/*
 * XREFs of ?get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z @ 0x18003E730
 * Callers:
 *     <none>
 * Callees:
 *     ?EnforceCapability@ContentManagement@@YAJXZ @ 0x18002EF20 (-EnforceCapability@ContentManagement@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance_AppManager@@YAJPEAUIUser@System@Windows@@PEAPEAUIAppManager@ContentManagement@@@Z @ 0x180073F4C (-CreateInstance_AppManager@@YAJPEAUIUser@System@Windows@@PEAPEAUIAppManager@ContentManagement@@@.c)
 */

__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_AppManager(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::IAppManager **a2,
        bool *a3)
{
  struct Windows::System::IUser *v4; // rcx
  int Instance_AppManager; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  Instance_AppManager = ContentManagement::EnforceCapability(this, (__int64)a2, a3);
  if ( Instance_AppManager < 0 )
  {
    v6 = 1135LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)Instance_AppManager);
    return (unsigned int)Instance_AppManager;
  }
  Instance_AppManager = CreateInstance_AppManager(v4, a2);
  if ( Instance_AppManager < 0 )
  {
    v6 = 1137LL;
    goto LABEL_3;
  }
  return 0LL;
}
