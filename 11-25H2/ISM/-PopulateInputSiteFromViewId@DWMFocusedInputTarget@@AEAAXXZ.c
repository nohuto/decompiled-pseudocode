/*
 * XREFs of ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x180014640
 * Callers:
 *     ?GetInputSite@DWMFocusedInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x180015040 (-GetInputSite@DWMFocusedInputTarget@@UEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@XZ.c)
 *     ??0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KK_K@Z @ 0x180022604 (--0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KK_K@Z.c)
 * Callees:
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18001AE40 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180022740 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002582C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180025F94 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800263B0 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x18005BCC0 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z @ 0x18009AA28 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B5DC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DWMFocusedInputTarget::PopulateInputSiteFromViewId(DWMFocusedInputTarget *this)
{
  unsigned int v2; // ebx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned __int64 WindowIdFromViewId; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 InputSiteFromId; // rax
  __int64 v7; // rcx
  struct InputSiteManager *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rsi
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v2);
    InputSiteManager = ISMStatics::GetInputSiteManager();
    InputSiteFromId = InputSiteManager::GetInputSiteFromId(InputSiteManager, &v11, 1LL, WindowIdFromViewId);
    Microsoft::WRL::ComPtr<InputSite>::operator=((char *)this + 80, InputSiteFromId);
    v7 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( !*((_QWORD *)this + 10) )
    {
      v8 = ISMStatics::GetInputSiteManager();
      v9 = (_QWORD *)*((_QWORD *)v8 + 7);
      v10 = (_QWORD *)*((_QWORD *)v8 + 8);
      while ( v9 != v10 )
      {
        if ( *(_BYTE *)(*v9 + 480LL)
          && *LegacyInputSinkData::GetViewInstanceId((LegacyInputSinkData *)(*v9 + 48LL)) == *((_DWORD *)this + 17) )
        {
          Microsoft::WRL::ComPtr<InputSite>::operator=((char *)this + 80, *v9);
          return;
        }
        ++v9;
      }
    }
  }
}
