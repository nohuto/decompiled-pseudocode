/*
 * XREFs of ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x140021E58
 * Callers:
 *     ?_ReadOneBlockMonitorDescriptorFromRegistry@EdidMonitorDescriptor@DxgMonitor@@CAJPEAXIAEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x14027EA78 (-_ReadOneBlockMonitorDescriptorFromRegistry@EdidMonitorDescriptor@DxgMonitor@@CAJPEAXIAEAV-$uniq.c)
 *     ?LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x140281080 (-LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorReg.c)
 *     ?_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x14028BC08 (-_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x14001EE78 (-reset@-$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U-$byte_array_deleter@U_KEY_VALUE_PARTIAL_I.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DxgkRetrieveValueFromRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, void **a3)
{
  void *v5; // rbx
  ULONG Length; // esi
  void *v8; // rdi
  NTSTATUS v9; // eax
  int v10; // edi
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0LL;
  Length = 1024;
  wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
    a3,
    0LL);
  while ( 1 )
  {
    v8 = v5;
    v5 = (void *)operator new[](Length, 1298626628LL, 256LL);
    if ( v8 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
    if ( !v5 )
      break;
    ResultLength = 0;
    v9 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, v5, Length, &ResultLength);
    Length = ResultLength;
    v10 = v9;
    if ( v9 != -2147483643 && v9 != -1073741789 )
      goto LABEL_7;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 158;
  v10 = -1073741801;
LABEL_7:
  if ( v10 >= 0 )
  {
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      a3,
      v5);
  }
  else if ( v5 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
  }
  return (unsigned int)v10;
}
