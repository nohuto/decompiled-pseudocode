/*
 * XREFs of ?ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002387C
 * Callers:
 *     _DXGDEVICE::OpenResourceObject_::_2_::ENSURE_LOCK_RELEASE::_ENSURE_LOCK_RELEASE @ 0x1403AC6BC (_DXGDEVICE--OpenResourceObject_--_2_--ENSURE_LOCK_RELEASE--_ENSURE_LOCK_RELEASE.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGAUTOMUTEX::ReleaseIfAcquired(DXGAUTOMUTEX *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    *((_BYTE *)this + 8) = 0;
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)this);
  }
}
