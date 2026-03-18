/*
 * XREFs of ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKAEAV?$unique_ptr@U_KEY_BASIC_INFORMATION@@U?$byte_array_deleter@U_KEY_BASIC_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x14002321C
 * Callers:
 *     ?RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x14028BA08 (-RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@U_KEY_BASIC_INFORMATION@@U?$byte_array_deleter@U_KEY_BASIC_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x140023330 (-reset@-$unique_ptr@U_KEY_BASIC_INFORMATION@@U-$byte_array_deleter@U_KEY_BASIC_INFORMATION@@@Dxg.c)
 */

__int64 __fastcall DxgkRetrieveSubkeyInfoFromRegistry(HANDLE KeyHandle, ULONG Index, void **a3)
{
  void *v5; // rbx
  ULONG Length; // esi
  void *v8; // rbp
  NTSTATUS v9; // eax
  unsigned int v10; // edi
  void *v12; // rcx
  ULONG ResultLength; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0LL;
  Length = 1024;
  wistd::unique_ptr<_KEY_BASIC_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_BASIC_INFORMATION>>::reset(a3, 0LL);
  while ( 1 )
  {
    v8 = v5;
    v5 = (void *)operator new[](Length, 0x4D677844u, 256LL);
    if ( v8 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
    if ( !v5 )
      break;
    ResultLength = 0;
    v9 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, v5, Length, &ResultLength);
    Length = ResultLength;
    v10 = v9;
    if ( v9 != -2147483643 && v9 != -1073741789 )
      goto LABEL_7;
  }
  WdLogSingleEntry1(2LL, Length);
  WdLogGlobalForLineNumber = 225;
  v10 = -1073741801;
LABEL_7:
  if ( (v10 & 0x80000000) == 0 )
  {
    v12 = *a3;
    *a3 = v5;
    if ( !v12 )
      return v10;
LABEL_14:
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v12);
    return v10;
  }
  if ( v5 )
  {
    v12 = v5;
    goto LABEL_14;
  }
  return v10;
}
