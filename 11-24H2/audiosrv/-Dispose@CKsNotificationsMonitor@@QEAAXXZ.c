/*
 * XREFs of ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x180059C78
 * Callers:
 *     ?KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z @ 0x180059BC0 (-KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z.c)
 *     ??1CKsNotificationsMonitor@@MEAA@XZ @ 0x18006BB8C (--1CKsNotificationsMonitor@@MEAA@XZ.c)
 *     ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x180089860 (-KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z.c)
 *     ?KsNotifications_ServiceStop@@YAXXZ @ 0x18011EFCC (-KsNotifications_ServiceStop@@YAXXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A320 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ @ 0x1800E2450 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CKsNotificationsMonitor::Dispose(CKsNotificationsMonitor *this)
{
  void *v2; // rcx

  if ( *((_DWORD *)this + 3) )
  {
    (*(void (__fastcall **)(_QWORD, CKsNotificationsMonitor *))(**((_QWORD **)this + 11) + 120LL))(
      *((_QWORD *)this + 11),
      this);
    *((_DWORD *)this + 3) = 0;
  }
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56664216>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56664216>::GetImpl'::`2'::impl) )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)this + 9,
      0LL);
}
