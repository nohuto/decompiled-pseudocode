/*
 * XREFs of ?get_LaunchManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUILaunchManager@2@@Z @ 0x18003EC50
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VLaunchManager@ContentManagement@@UILaunchManager@2@$$V@Details@WRL@Microsoft@@YAJPEAPEAUILaunchManager@ContentManagement@@@Z @ 0x180026520 (--$MakeAndInitialize@VLaunchManager@ContentManagement@@UILaunchManager@2@$$V@Details@WRL@Microso.c)
 *     ?EnforceCapability@ContentManagement@@YAJXZ @ 0x18002EEF0 (-EnforceCapability@ContentManagement@@YAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_LaunchManager(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::ILaunchManager **a2,
        bool *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct ContentManagement::ILaunchManager **); // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = ContentManagement::EnforceCapability(this, (__int64)a2, a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::LaunchManager,ContentManagement::ILaunchManager,>(&v10);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v6 = (**v10)(v10, &GUID_3cb33ed0_2338_4892_aa4c_c96803309c9a, a2);
      v5 = v6;
      if ( v6 >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v7 = 1181LL;
    }
    else
    {
      v7 = 1180LL;
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
    (void *)0x499,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
