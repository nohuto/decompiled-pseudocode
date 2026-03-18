/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAXP6AKPEAX@Z$1?PowerSettingUnregisterNotification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180254C60
 * Callers:
 *     ?RegisterMonitorPowerNotification@CComposition@@IEAAJXZ @ 0x180252420 (-RegisterMonitorPowerNotification@CComposition@@IEAAJXZ.c)
 *     ?UpdatePowerNotifications@CComposition@@QEAAJXZ @ 0x180254B48 (-UpdatePowerNotifications@CComposition@@QEAAJXZ.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AKPEAX@Z$1?PowerSettingUnregisterNotification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18025A67C (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AKPEAX@Z$1-PowerSett.c)
 * Callees:
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1802273D8 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1802273FC (--0last_error_context@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,unsigned long (*)(void *),&unsigned long PowerSettingUnregisterNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rdi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v5);
    PowerSettingUnregisterNotification(v2);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v5);
  }
  *a1 = a2;
}
