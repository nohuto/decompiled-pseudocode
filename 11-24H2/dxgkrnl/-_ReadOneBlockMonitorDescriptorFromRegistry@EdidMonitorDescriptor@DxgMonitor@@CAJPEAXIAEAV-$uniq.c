/*
 * XREFs of ?_ReadOneBlockMonitorDescriptorFromRegistry@EdidMonitorDescriptor@DxgMonitor@@CAJPEAXIAEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x14027EA78
 * Callers:
 *     ?LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x14027E170 (-LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x14001EE78 (-reset@-$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U-$byte_array_deleter@U_KEY_VALUE_PARTIAL_I.c)
 *     ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x140021E58 (-DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV-$unique_ptr@U_KEY_VALUE_PARTIAL.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x140052E4C (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??4?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140055C94 (--4-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x140055CF8 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::_ReadOneBlockMonitorDescriptorFromRegistry(
        HANDLE KeyHandle,
        unsigned int a2,
        void **a3)
{
  __int64 v4; // rsi
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  _DWORD *v10; // rbx
  __int64 v11; // rax
  _DWORD *v12; // rdi
  char *v13; // rax
  char *v14; // [rsp+20h] [rbp-30h] BYREF
  _DWORD *v15; // [rsp+28h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  WCHAR SourceString; // [rsp+40h] [rbp-10h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  v4 = a2;
  DestinationString = 0LL;
  if ( !KeyHandle )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 688;
  }
  wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
    a3,
    0LL);
  v6 = RtlStringCbPrintfW(&SourceString, 8uLL, (size_t *)L"%d", (unsigned int)v4);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
    WdLogGlobalForLineNumber = 701;
LABEL_5:
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      (void **)&v14,
      0LL);
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      (void **)&v15,
      0LL);
    return v7;
  }
  RtlInitUnicodeString(&DestinationString, &SourceString);
  v9 = DxgkRetrieveValueFromRegistry(KeyHandle, &DestinationString, (void **)&v15);
  v7 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(7LL, v9);
    WdLogGlobalForLineNumber = 717;
    goto LABEL_5;
  }
  v10 = v15;
  if ( v15[1] == 3 && v15[2] == 128 )
  {
    v11 = operator new(0x98uLL, 0x4D677844u, 256LL);
    v12 = (_DWORD *)v11;
    if ( v11 )
    {
      memset((void *)(v11 + 24), 0, 0x80uLL);
      *(_QWORD *)v12 = 0LL;
      v12[2] = 0;
      v12[3] = 0;
      *((_QWORD *)v12 + 2) = 128LL;
    }
    else
    {
      v12 = 0LL;
    }
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      (void **)&v14,
      v12);
    v13 = v14;
    if ( !v14 )
    {
      v7 = -1073741801;
      WdLogSingleEntry1(2LL, -1073741801LL);
      WdLogGlobalForLineNumber = 739;
      goto LABEL_5;
    }
    *(_OWORD *)(v14 + 24) = *(_OWORD *)(v10 + 3);
    *(_OWORD *)(v13 + 40) = *(_OWORD *)(v10 + 7);
    *(_OWORD *)(v13 + 56) = *(_OWORD *)(v10 + 11);
    *(_OWORD *)(v13 + 72) = *(_OWORD *)(v10 + 15);
    *(_OWORD *)(v13 + 88) = *(_OWORD *)(v10 + 19);
    *(_OWORD *)(v13 + 104) = *(_OWORD *)(v10 + 23);
    *(_OWORD *)(v13 + 120) = *(_OWORD *)(v10 + 27);
    *(_OWORD *)(v13 + 136) = *(_OWORD *)(v10 + 31);
    *((_DWORD *)v13 + 2) = 3;
    *((_DWORD *)v13 + 3) = (_DWORD)v4 != 0 ? 255 : 1;
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
      a3,
      (void **)&v14);
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      (void **)&v14,
      0LL);
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      (void **)&v15,
      0LL);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, v4);
    WdLogGlobalForLineNumber = 729;
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      (void **)&v14,
      0LL);
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      (void **)&v15,
      0LL);
    return 3223126017LL;
  }
}
