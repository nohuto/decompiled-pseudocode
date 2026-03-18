/*
 * XREFs of ?LoadDescriptorOverridesFromRegistry@MultiMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x1400921E0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007DD5C (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::LoadDescriptorOverridesFromRegistry(
        DxgMonitor::MultiMonitorDescriptor *this,
        const struct DxgMonitor::IMonitorRegistry *a2)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  bool v7; // zf
  __int64 (__fastcall *v8)(__int64, const struct DxgMonitor::IMonitorRegistry *); // rax
  int v9; // ebp
  int v10; // eax

  IsEnabledDeviceUsageNoInline = Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline();
  v5 = *((_QWORD *)this + 1);
  v6 = 0;
  v7 = IsEnabledDeviceUsageNoInline == 0;
  v8 = *(__int64 (__fastcall **)(__int64, const struct DxgMonitor::IMonitorRegistry *))(*(_QWORD *)v5 + 32LL);
  if ( v7 )
    return v8(v5, a2);
  v9 = v8(v5, a2);
  v10 = (*(__int64 (__fastcall **)(_QWORD, const struct DxgMonitor::IMonitorRegistry *))(**((_QWORD **)this + 2) + 32LL))(
          *((_QWORD *)this + 2),
          a2);
  if ( v9 >= 0 )
    return 0LL;
  if ( v10 < 0 )
    return (unsigned int)v9;
  return v6;
}
