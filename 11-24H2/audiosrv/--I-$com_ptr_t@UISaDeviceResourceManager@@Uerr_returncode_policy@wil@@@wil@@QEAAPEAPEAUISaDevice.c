/*
 * XREFs of ??I?$com_ptr_t@UISaDeviceResourceManager@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUISaDeviceResourceManager@@XZ @ 0x180068360
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180083480 (AudioServerIsFormatSupported.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_ptr_t<ISaDeviceResourceManager,wil::err_returncode_policy>::operator&(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
