/*
 * XREFs of ?get_IdentityManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIIdentityManager@2@@Z @ 0x18003EBA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VIdentityManager@ContentManagement@@UIIdentityManager@2@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIIdentityManager@ContentManagement@@@Z @ 0x1800263D0 (--$MakeAndInitialize@VIdentityManager@ContentManagement@@UIIdentityManager@2@$$V@Details@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_IdentityManager(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::IIdentityManager **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::IdentityManager,ContentManagement::IIdentityManager,>(a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4A6,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
