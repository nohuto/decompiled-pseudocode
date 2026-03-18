/*
 * XREFs of ?_ReadOneBlockMonitorDescriptorFromRegistry@EdidMonitorDescriptor@DxgMonitor@@CAJPEAXIAEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x140277578
 * Callers:
 *     ?LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x140276C70 (-LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x14000F9E8 (-reset@-$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U-$byte_array_deleter@U_KEY_VALUE_PARTIAL_I.c)
 *     ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x1400129C8 (-DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV-$unique_ptr@U_KEY_VALUE_PARTIAL.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x14005319C (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??4?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1400564E4 (--4-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x140056548 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
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
  __int64 v10; // r9
  _DWORD *v11; // rbx
  __int64 v12; // rax
  _DWORD *v13; // rdi
  char *v14; // rax
  char *v15; // [rsp+20h] [rbp-30h] BYREF
  _DWORD *v16; // [rsp+28h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  WCHAR SourceString; // [rsp+40h] [rbp-10h] BYREF

  v16 = 0LL;
  v15 = 0LL;
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
      (void **)&v15,
      0LL);
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      (void **)&v16,
      0LL);
    return v7;
  }
  RtlInitUnicodeString(&DestinationString, &SourceString);
  v9 = DxgkRetrieveValueFromRegistry(KeyHandle, &DestinationString, (void **)&v16);
  v7 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(7LL, v9);
    WdLogGlobalForLineNumber = 717;
    goto LABEL_5;
  }
  v11 = v16;
  if ( v16[1] == 3 && v16[2] == 128 )
  {
    v12 = operator new(0x98uLL, 0x4D677844u, 256LL, v10);
    v13 = (_DWORD *)v12;
    if ( v12 )
    {
      memset((void *)(v12 + 24), 0, 0x80uLL);
      *(_QWORD *)v13 = 0LL;
      v13[2] = 0;
      v13[3] = 0;
      *((_QWORD *)v13 + 2) = 128LL;
    }
    else
    {
      v13 = 0LL;
    }
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      (void **)&v15,
      v13);
    v14 = v15;
    if ( !v15 )
    {
      v7 = -1073741801;
      WdLogSingleEntry1(2LL, -1073741801LL);
      WdLogGlobalForLineNumber = 739;
      goto LABEL_5;
    }
    *(_OWORD *)(v15 + 24) = *(_OWORD *)(v11 + 3);
    *(_OWORD *)(v14 + 40) = *(_OWORD *)(v11 + 7);
    *(_OWORD *)(v14 + 56) = *(_OWORD *)(v11 + 11);
    *(_OWORD *)(v14 + 72) = *(_OWORD *)(v11 + 15);
    *(_OWORD *)(v14 + 88) = *(_OWORD *)(v11 + 19);
    *(_OWORD *)(v14 + 104) = *(_OWORD *)(v11 + 23);
    *(_OWORD *)(v14 + 120) = *(_OWORD *)(v11 + 27);
    *(_OWORD *)(v14 + 136) = *(_OWORD *)(v11 + 31);
    *((_DWORD *)v14 + 2) = 3;
    *((_DWORD *)v14 + 3) = (_DWORD)v4 != 0 ? 255 : 1;
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
      a3,
      (void **)&v15);
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      (void **)&v15,
      0LL);
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      (void **)&v16,
      0LL);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, v4);
    WdLogGlobalForLineNumber = 729;
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      (void **)&v15,
      0LL);
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      (void **)&v16,
      0LL);
    return 3223126017LL;
  }
}
