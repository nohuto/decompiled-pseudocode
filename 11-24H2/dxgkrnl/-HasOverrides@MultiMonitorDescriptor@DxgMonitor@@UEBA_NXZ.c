/*
 * XREFs of ?HasOverrides@MultiMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x140092150
 * Callers:
 *     <none>
 * Callees:
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007DD5C (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

char __fastcall DxgMonitor::MultiMonitorDescriptor::HasOverrides(DxgMonitor::MultiMonitorDescriptor *this)
{
  char v2; // bl
  bool v3; // zf
  __int64 (*v4)(void); // rax

  v2 = 0;
  v3 = (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() == 0;
  v4 = *(__int64 (**)(void))(**((_QWORD **)this + 1) + 56LL);
  if ( v3 )
    return v4();
  if ( (unsigned __int8)v4()
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 56LL))(*((_QWORD *)this + 2)) )
  {
    return 1;
  }
  return v2;
}
