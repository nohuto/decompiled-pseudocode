/*
 * XREFs of ??1Lockable@@UEAA@XZ @ 0x14018B0D4
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x14008E23C (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??_ELockable@@UEAAPEAXI@Z @ 0x1400900B0 (--_ELockable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005D990 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall Lockable::~Lockable(struct _KTHREAD **this)
{
  DXGFASTMUTEX *v1; // rbx

  *this = (struct _KTHREAD *)&Lockable::`vftable';
  v1 = (DXGFASTMUTEX *)(this + 3);
  if ( this[6] == KeGetCurrentThread() )
    DXGFASTMUTEX::Release(this + 3);
  DXGFASTMUTEX::~DXGFASTMUTEX(v1);
}
