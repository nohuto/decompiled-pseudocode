/*
 * XREFs of ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKAEAV?$unique_ptr@U_KEY_BASIC_INFORMATION@@U?$byte_array_deleter@U_KEY_BASIC_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x1400544D4
 * Callers:
 *     ?RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1403530A4 (-RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@U_KEY_BASIC_INFORMATION@@U?$byte_array_deleter@U_KEY_BASIC_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1400545E8 (-reset@-$unique_ptr@U_KEY_BASIC_INFORMATION@@U-$byte_array_deleter@U_KEY_BASIC_INFORMATION@@@Dxg.c)
 */

__int64 __fastcall DxgkRetrieveSubkeyInfoFromRegistry(HANDLE KeyHandle, ULONG Index, void **a3)
{
  void *v5; // rbx
  ULONG Length; // esi
  __int64 v8; // r9
  void *v9; // rbp
  NTSTATUS v10; // eax
  unsigned int v11; // edi
  void *v13; // rcx
  ULONG ResultLength; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0LL;
  Length = 1024;
  wistd::unique_ptr<_KEY_BASIC_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_BASIC_INFORMATION>>::reset(a3, 0LL);
  while ( 1 )
  {
    v9 = v5;
    v5 = (void *)operator new[](Length, 0x4D677844u, 256LL, v8);
    if ( v9 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
    if ( !v5 )
      break;
    ResultLength = 0;
    v10 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, v5, Length, &ResultLength);
    Length = ResultLength;
    v11 = v10;
    if ( v10 != -2147483643 && v10 != -1073741789 )
      goto LABEL_7;
  }
  WdLogSingleEntry1(2LL, Length);
  WdLogGlobalForLineNumber = 225;
  v11 = -1073741801;
LABEL_7:
  if ( (v11 & 0x80000000) == 0 )
  {
    v13 = *a3;
    *a3 = v5;
    if ( !v13 )
      return v11;
LABEL_14:
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v13);
    return v11;
  }
  if ( v5 )
  {
    v13 = v5;
    goto LABEL_14;
  }
  return v11;
}
