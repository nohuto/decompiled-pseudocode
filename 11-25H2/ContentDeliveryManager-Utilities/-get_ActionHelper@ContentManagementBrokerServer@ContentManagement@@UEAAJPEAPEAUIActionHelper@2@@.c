/*
 * XREFs of ?get_ActionHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIActionHelper@2@@Z @ 0x18003E670
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VActionHelper@ContentManagement@@UIActionHelper@2@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIActionHelper@ContentManagement@@@Z @ 0x180025B38 (--$MakeAndInitialize@VActionHelper@ContentManagement@@UIActionHelper@2@$$V@Details@WRL@Microsoft.c)
 *     ?EnforceCapability@ContentManagement@@YAJXZ @ 0x18002EF20 (-EnforceCapability@ContentManagement@@YAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_ActionHelper(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::IActionHelper **a2,
        bool *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct ContentManagement::IActionHelper **); // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = ContentManagement::EnforceCapability(this, (__int64)a2, a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::ActionHelper,ContentManagement::IActionHelper,>(&v10);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v6 = (**v10)(v10, &GUID_3de57b85_d574_488b_9d07_81cd7c7e49df, a2);
      v5 = v6;
      if ( v6 >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v7 = 1202LL;
    }
    else
    {
      v7 = 1201LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v6);
LABEL_9:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    return v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4AE,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
