/*
 * XREFs of _lambda_53a10622b8c115a42f3ae5bcca2992b2_::operator() @ 0x18004AEC4
 * Callers:
 *     ?Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ @ 0x18004B190 (-Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180017420 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180018D78 (-GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_53a10622b8c115a42f3ae5bcca2992b2_::operator()(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int RedirectedPathIfNeeded; // ebx
  void *v7; // rdi
  _QWORD *v8; // rbx
  void *v9; // rcx
  void *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  RedirectedPathIfNeeded = Windows::Internal::AssignedAccess::PersistentLocationHelper::GetRedirectedPathIfNeeded(
                             L"SOFTWARE\\Microsoft\\Windows\\AssignedAccessConfiguration",
                             (__int64)L"AssignedAccessConfiguration",
                             (char *)&v10,
                             a4);
  if ( RedirectedPathIfNeeded >= 0 )
  {
    v7 = v10;
    if ( v10 )
    {
      v8 = *(_QWORD **)a1;
      v10 = 0LL;
      v9 = (void *)v8[1];
      if ( v9 )
        CoTaskMemFree(v9);
      v8[1] = v7;
      v8[3] = -1LL;
      v8[2] = -1LL;
      **(_BYTE **)(a1 + 8) = 1;
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v10);
    return 0LL;
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v10);
    return (unsigned int)RedirectedPathIfNeeded;
  }
}
