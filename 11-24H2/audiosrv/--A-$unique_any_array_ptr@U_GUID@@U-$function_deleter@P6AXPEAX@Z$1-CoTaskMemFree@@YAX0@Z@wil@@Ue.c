/*
 * XREFs of ??A?$unique_any_array_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAAEAU_GUID@@_K@Z @ 0x1800C8578
 * Callers:
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x1800A11B4 (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_any_array_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
        _QWORD *a1,
        __int64 a2)
{
  return *a1 + 16 * a2;
}
