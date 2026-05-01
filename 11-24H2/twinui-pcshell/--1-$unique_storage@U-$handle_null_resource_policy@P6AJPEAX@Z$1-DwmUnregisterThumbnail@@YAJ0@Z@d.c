/*
 * XREFs of ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?DwmUnregisterThumbnail@@YAJ0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18038ED08
 * Callers:
 *     ??1StartExperienceWallpaperBackground@@UEAA@XZ @ 0x1803C6D10 (--1StartExperienceWallpaperBackground@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long DwmUnregisterThumbnail(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long DwmUnregisterThumbnail(void *)>>(
        void **a1)
{
  char *v1; // rcx
  HRESULT result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return DwmUnregisterThumbnail(v1);
  return result;
}
