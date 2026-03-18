/*
 * XREFs of TmEnableCallbacks @ 0x1404FC410
 * Callers:
 *     CmpLoadKeyCommon @ 0x140464478 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA230 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmEnableCallbacks(
        PKRESOURCEMANAGER ResourceManager,
        PTM_RM_NOTIFICATION CallbackRoutine,
        PVOID RMKey)
{
  return __imp_TmEnableCallbacks(ResourceManager, CallbackRoutine, RMKey);
}
