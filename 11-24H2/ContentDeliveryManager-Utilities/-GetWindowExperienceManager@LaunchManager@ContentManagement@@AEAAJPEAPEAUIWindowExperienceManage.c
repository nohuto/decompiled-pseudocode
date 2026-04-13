/*
 * XREFs of ?GetWindowExperienceManager@LaunchManager@ContentManagement@@AEAAJPEAPEAUIWindowExperienceManager@2@@Z @ 0x180033A54
 * Callers:
 *     ?PositionAppOnScreen@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAU?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@I@Z @ 0x180035A80 (-PositionAppOnScreen@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAU-$IMapView@W4Windo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::LaunchManager::GetWindowExperienceManager(
        ContentManagement::LaunchManager *this,
        struct ContentManagement::IWindowExperienceManager **a2)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  LPVOID v5; // rbx
  __int64 (__fastcall *v6)(LPVOID, GUID *, GUID *, ContentManagement::LaunchManager **); // rdi
  int v7; // eax
  struct ContentManagement::IWindowExperienceManager *v8; // rax
  int ppv; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  ContentManagement::LaunchManager *v12; // [rsp+50h] [rbp+20h] BYREF
  LPVOID v13; // [rsp+58h] [rbp+28h] BYREF

  v12 = this;
  *a2 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  v3 = CoCreateInstance(
         &GUID_228826af_02e1_4226_a9e0_99a855e455a6,
         0LL,
         0x404u,
         &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
         &v13);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v12 = 0LL;
    v5 = v13;
    v6 = *(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, ContentManagement::LaunchManager **))(*(_QWORD *)v13 + 96LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    v7 = v6(v5, &GUID_db147050_dcbf_4699_abaf_273e512e2a91, &GUID_ae8be46e_c53f_4d3c_bca2_52b917ba6d04, &v12);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v8 = v12;
      v12 = 0LL;
      *a2 = v8;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x194,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v7,
        ppv);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x192,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3,
      ppv);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  return v4;
}
