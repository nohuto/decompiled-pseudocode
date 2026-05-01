/*
 * XREFs of _anonymous_namespace_::IsCtaPolicyActive @ 0x1806970E8
 * Callers:
 *     _anonymous_namespace_::IsAppInstallAllowedByPolicy @ 0x180696F7C (_anonymous_namespace_--IsAppInstallAllowedByPolicy.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?SHRegAllocData@@YAJPEAUHKEY__@@PEBG1HPEAPEAXPEAK@Z @ 0x180697B4C (-SHRegAllocData@@YAJPEAUHKEY__@@PEBG1HPEAPEAXPEAK@Z.c)
 */

bool anonymous_namespace_::IsCtaPolicyActive()
{
  void **v0; // rax
  int v1; // r9d
  bool v2; // bl
  unsigned int *v4; // [rsp+28h] [rbp-10h]
  LPCWCH lpString1; // [rsp+40h] [rbp+8h] BYREF

  lpString1 = 0LL;
  v0 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&lpString1);
  v2 = SHRegAllocData(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\DeviceAccess",
         L"ActivePolicyCode",
         v1,
         v0,
         v4) >= 0
    && CompareStringOrdinal(lpString1, -1, L"zh", -1, 1) == 2;
  if ( lpString1 )
    CoTaskMemFree((LPVOID)lpString1);
  return v2;
}
