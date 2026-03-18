/*
 * XREFs of ?ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ @ 0x140024030
 * Callers:
 *     _DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE @ 0x14039E65C (_DXGDEVICE--OpenResourceObject_--_2_--ENSURE_LOCK_RELEASE--_ENSURE_LOCK_RELEASE.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGAUTOMUTEX::ReleaseIfAcquired(DXGAUTOMUTEX *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    *((_BYTE *)this + 8) = 0;
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)this);
  }
}
