/*
 * XREFs of ??1CBitmapLock@@MEAA@XZ @ 0x18004345C
 * Callers:
 *     ??_GCBitmapLock@@MEAAPEAXI@Z @ 0x180043420 (--_GCBitmapLock@@MEAAPEAXI@Z.c)
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x180261670 (--1CBitmapLockUnaligned@@UEAA@XZ.c)
 * Callees:
 *     ?Unlock@CBitmapLock@@IEAAXXZ @ 0x18004349C (-Unlock@CBitmapLock@@IEAAXXZ.c)
 */

void __fastcall CBitmapLock::~CBitmapLock(CBitmapLock *this)
{
  *(_QWORD *)this = &CBitmapLock::`vftable'{for `CMILCOMBaseT<IBitmapLock,IBitmapLock,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CBitmapLockUnaligned::`vftable'{for `IWICBitmapLock'};
  CBitmapLock::Unlock(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
}
