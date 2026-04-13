/*
 * XREFs of ?GetRuntimeClassName@AppInstallInfoRecordImpl@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180043ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::AppInstallInfoRecordImpl::GetRuntimeClassName(__int64 a1, HSTRING *a2)
{
  return ContentManagement::AppInstallInfoRecordImpl::GetRuntimeClassName(
           (ContentManagement::AppInstallInfoRecordImpl *)(a1 - 48),
           a2);
}
