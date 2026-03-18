/*
 * XREFs of _DxgkEnumAdapters2Impl_::_2_::ENSURE_CLEANUP::_ENSURE_CLEANUP @ 0x140181F94
 * Callers:
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x14031EA60 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
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
