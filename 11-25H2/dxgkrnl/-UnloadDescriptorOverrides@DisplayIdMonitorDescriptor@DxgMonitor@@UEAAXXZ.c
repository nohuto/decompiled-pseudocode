/*
 * XREFs of ?UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x140279E50
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007D6D4 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1400951AC (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 */

void __fastcall DxgMonitor::DisplayIdMonitorDescriptor::UnloadDescriptorOverrides(
        DxgMonitor::DisplayIdMonitorDescriptor *this)
{
  __int64 v2; // rax
  unsigned __int8 *v3; // rdx
  int v4; // r8d

  if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *((_DWORD *)this + 2) == 1 )
    {
      v2 = *((_QWORD *)this + 2);
      v3 = (unsigned __int8 *)*((_QWORD *)this + 7);
      *((_DWORD *)this + 2) = 0;
      *((_QWORD *)this + 2) = v3;
      *((_QWORD *)this + 7) = v2;
      v4 = *((_DWORD *)this + 12);
      *((_DWORD *)this + 3) = v4;
      DisplayID_Initialize((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), v3, v4);
      wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)this + 7);
      *((_DWORD *)this + 12) = 0;
    }
  }
}
