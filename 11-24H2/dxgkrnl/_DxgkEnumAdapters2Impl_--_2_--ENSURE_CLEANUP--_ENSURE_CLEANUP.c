/*
 * XREFs of _DxgkEnumAdapters2Impl_::_2_::ENSURE_CLEANUP::_ENSURE_CLEANUP @ 0x14018445C
 * Callers:
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x140349F80 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall DxgkEnumAdapters2Impl_::_2_::ENSURE_CLEANUP::_ENSURE_CLEANUP(WatchdogTimeoutReport **a1)
{
  WatchdogTimeoutReport *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    WatchdogTimeoutReport::~WatchdogTimeoutReport(*a1);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v1);
  }
}
