/*
 * XREFs of ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180043F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::ContentManagementService::GetRuntimeClassName(__int64 a1, HSTRING *a2)
{
  return ContentManagement::ContentManagementService::GetRuntimeClassName(
           (ContentManagement::ContentManagementService *)(a1 - 48),
           a2);
}
