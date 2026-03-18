/*
 * XREFs of ?_UpdateMonitorEDIDRegistryForGDI@MonitorDescriptorState@DxgMonitor@@AEBAJXZ @ 0x1403F0054
 * Callers:
 *     ?OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z @ 0x14028A57C (-OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140058224 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::_UpdateMonitorEDIDRegistryForGDI(
        DxgMonitor::MonitorDescriptorState *this)
{
  __int64 v2; // rcx
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  NTSTATUS v8; // eax
  PVOID v9; // rcx
  ULONG ValueLength; // [rsp+40h] [rbp+10h] BYREF
  PCWSTR Path; // [rsp+48h] [rbp+18h] BYREF
  PVOID ValueData; // [rsp+50h] [rbp+20h] BYREF

  v2 = *((_QWORD *)this + 16);
  if ( !v2 )
    return 3223126017LL;
  ValueLength = 0;
  (*(void (__fastcall **)(__int64, PVOID *, ULONG *))(*(_QWORD *)v2 + 232LL))(v2, &ValueData, &ValueLength);
  v4 = (__int64 *)*((_QWORD *)this + 15);
  v5 = *v4;
  Path = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, PCWSTR *))(v5 + 16))(v4, 0LL, 1LL, &Path);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( ValueLength )
    {
      RtlDeleteRegistryValue(0x40000000u, Path, L"BAD_EDID");
      v8 = RtlWriteRegistryValue(0x40000000u, Path, L"EDID", 3u, ValueData, ValueLength);
    }
    else
    {
      RtlDeleteRegistryValue(0x40000000u, Path, L"EDID");
      v8 = RtlWriteRegistryValue(0x40000000u, Path, L"BAD_EDID", 3u, 0LL, 0);
    }
    v7 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(2LL, v8);
      WdLogGlobalForLineNumber = 1743;
    }
    if ( Path )
      ZwClose((HANDLE)Path);
    v9 = ValueData;
    ValueData = 0LL;
    if ( v9 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
  }
  else
  {
    WdLogSingleEntry1(2LL, v6);
    WdLogGlobalForLineNumber = 1710;
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&Path);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&ValueData);
  }
  return v7;
}
