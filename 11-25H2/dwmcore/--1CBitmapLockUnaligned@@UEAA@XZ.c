/*
 * XREFs of ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x180261670
 * Callers:
 *     ??_GCBitmapLockUnaligned@@UEAAPEAXI@Z @ 0x1802616B0 (--_GCBitmapLockUnaligned@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ @ 0x1802619C0 (-UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ.c)
 */

void __fastcall CBitmapLockUnaligned::~CBitmapLockUnaligned(CBitmapLockUnaligned *this)
{
  *(_QWORD *)this = &CBitmapLockUnaligned::`vftable'{for `CMILCOMBaseT<IBitmapLock,IBitmapLock,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CBitmapLockUnaligned::`vftable'{for `IWICBitmapLock'};
  CBitmapLockUnaligned::UnlockUnaligned(this);
  CBitmapLock::~CBitmapLock(this);
}
