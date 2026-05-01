/*
 * XREFs of ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?SetupDiDestroyDeviceInfoList@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180347E04
 * Callers:
 *     ?GetDedicatedVideoMemoryCap@GamingOverlayExperienceManager@@AEAA_KXZ @ 0x18034F6A8 (-GetDedicatedVideoMemoryCap@GamingOverlayExperienceManager@@AEAA_KXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int SetupDiDestroyDeviceInfoList(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int SetupDiDestroyDeviceInfoList(void *)>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return SetupDiDestroyDeviceInfoList(v1);
  return result;
}
