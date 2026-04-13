/*
 * XREFs of ?GetRuntimeClassName@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180043D70
 * Callers:
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180043DA0 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180043DB0 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WEA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180043DC0 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WEA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WEI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180043DD0 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WEI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WFA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180043DE0 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WFA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WFI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180043DF0 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WFI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WGA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180043E00 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WGA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::ContentManagementService::GetRuntimeClassName(
        ContentManagement::ContentManagementService *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.ContentManagementService", 0x2Au, a2);
}
