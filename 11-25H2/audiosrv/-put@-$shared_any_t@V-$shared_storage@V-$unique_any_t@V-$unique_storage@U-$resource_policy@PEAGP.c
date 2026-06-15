/*
 * XREFs of ?put@?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18005F1BC
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x180012EB4 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18008BB8C (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?OnClientInvalidation@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18010499C (-OnClientInvalidation@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005DEC4 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::put(
        _QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx
  std::_Ref_count_base *v5[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v5 = 0LL;
  std::shared_ptr<std::function<void (void)>>::operator=(a1, (__int64 *)v5);
  if ( v5[1] )
    std::_Ref_count_base::_Decref(v5[1]);
  if ( !*a1 )
  {
    v2 = operator new(0x18uLL);
    v3 = v2;
    if ( v2 )
    {
      v2[2] = 0LL;
      *((_DWORD *)v2 + 2) = 1;
      *((_DWORD *)v2 + 3) = 1;
      *v2 = &std::_Ref_count_obj2<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::`vftable';
    }
    else
    {
      v3 = 0LL;
    }
    v5[1] = (std::_Ref_count_base *)v3;
    v5[0] = (std::_Ref_count_base *)(v3 + 2);
    std::shared_ptr<std::function<void (void)>>::operator=(a1, (__int64 *)v5);
    if ( v5[1] )
      std::_Ref_count_base::_Decref(v5[1]);
  }
  return *a1;
}
