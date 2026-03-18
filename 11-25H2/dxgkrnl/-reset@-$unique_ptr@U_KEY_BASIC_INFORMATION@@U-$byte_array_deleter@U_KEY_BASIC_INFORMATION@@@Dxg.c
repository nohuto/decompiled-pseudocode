/*
 * XREFs of ?reset@?$unique_ptr@U_KEY_BASIC_INFORMATION@@U?$byte_array_deleter@U_KEY_BASIC_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1400545E8
 * Callers:
 *     ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKAEAV?$unique_ptr@U_KEY_BASIC_INFORMATION@@U?$byte_array_deleter@U_KEY_BASIC_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x1400544D4 (-DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKAEAV-$unique_ptr@U_KEY_BASIC_INFORMATION@@U-$byte_a.c)
 *     ?RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1403530A4 (-RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall wistd::unique_ptr<_KEY_BASIC_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_BASIC_INFORMATION>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
}
