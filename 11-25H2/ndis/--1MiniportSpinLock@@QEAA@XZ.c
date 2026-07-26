/*
 * XREFs of ??1MiniportSpinLock@@QEAA@XZ @ 0x14003DE70
 * Callers:
 *     ndisMIsOidTimedOut @ 0x14003DD40 (ndisMIsOidTimedOut.c)
 * Callees:
 *     <none>
 */

void __fastcall MiniportSpinLock::~MiniportSpinLock(KIRQL *this)
{
  if ( this[8] == 254 )
  {
    *(_QWORD *)(*(_QWORD *)this + 1864LL) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*(_QWORD *)this + 96LL));
  }
  else
  {
    if ( this[8] == 255 )
      return;
    *(_QWORD *)(*(_QWORD *)this + 1864LL) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)this + 96LL), this[8]);
  }
  this[8] = -1;
}
