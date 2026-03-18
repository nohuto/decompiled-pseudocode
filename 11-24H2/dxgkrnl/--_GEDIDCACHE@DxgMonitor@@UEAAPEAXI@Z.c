/*
 * XREFs of ??_GEDIDCACHE@DxgMonitor@@UEAAPEAXI@Z @ 0x1400911F0
 * Callers:
 *     ?DeleteGlobalCache@EDIDCACHE@DxgMonitor@@SAXXZ @ 0x14026FF24 (-DeleteGlobalCache@EDIDCACHE@DxgMonitor@@SAXXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1EDIDCACHE@DxgMonitor@@UEAA@XZ @ 0x14026FCE8 (--1EDIDCACHE@DxgMonitor@@UEAA@XZ.c)
 */

DxgMonitor::EDIDCACHE *__fastcall DxgMonitor::EDIDCACHE::`scalar deleting destructor'(
        DxgMonitor::EDIDCACHE *this,
        char a2)
{
  DxgMonitor::EDIDCACHE::~EDIDCACHE(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
