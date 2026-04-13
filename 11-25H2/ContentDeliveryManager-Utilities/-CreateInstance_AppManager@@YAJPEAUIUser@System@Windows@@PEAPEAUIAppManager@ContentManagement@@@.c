/*
 * XREFs of ?CreateInstance_AppManager@@YAJPEAUIUser@System@Windows@@PEAPEAUIAppManager@ContentManagement@@@Z @ 0x180073F4C
 * Callers:
 *     ?get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z @ 0x18003E730 (-get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VAppManager@ContentManagement@@UIAppManager@2@AEAPEAUIUser@System@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAUIAppManager@ContentManagement@@AEAPEAUIUser@System@Windows@@@Z @ 0x180072264 (--$MakeAndInitialize@VAppManager@ContentManagement@@UIAppManager@2@AEAPEAUIUser@System@Windows@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateInstance_AppManager(
        struct Windows::System::IUser *a1,
        struct ContentManagement::IAppManager **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v9)(_QWORD, GUID *, struct ContentManagement::IAppManager **); // [rsp+40h] [rbp+8h] BYREF

  v7[0] = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::AppManager,ContentManagement::IAppManager,Windows::System::IUser * &>(
         &v9,
         v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = (**v9)(v9, &GUID_2565aa54_0e11_4804_812f_cf610f71362c, a2);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v5 = 502LL;
  }
  else
  {
    v5 = 501LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_7:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  return v4;
}
