/*
 * XREFs of ?Unlock@CBitmapLock@@IEAAXXZ @ 0x18004349C
 * Callers:
 *     ??1CBitmapLock@@MEAA@XZ @ 0x18004345C (--1CBitmapLock@@MEAA@XZ.c)
 * Callees:
 *     ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x180043570 (-UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800435E0 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC850 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC9A0 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBitmapLock::Unlock(CBitmapLock *this)
{
  CBitmap *v2; // rcx
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(CBitmap *__hidden, enum WICBitmapLockFlags); // rax
  struct CMILPoolResource *v5; // rcx
  void (*v6)(void); // rax
  CGlobalDrawingContext *v7; // rcx
  void (*v8)(void); // rax

  v2 = (CBitmap *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    v3 = *((unsigned int *)this + 30);
    v4 = *(__int64 (__fastcall **)(CBitmap *__hidden, enum WICBitmapLockFlags))(*(_QWORD *)v2 + 24LL);
    if ( v4 == CBitmap::UnlockState )
      CBitmap::UnlockState(v2, (enum WICBitmapLockFlags)v3);
    else
      v4(v2, (enum WICBitmapLockFlags)v3);
    v5 = (struct CMILPoolResource *)*((_QWORD *)this + 9);
    if ( v5 )
    {
      v6 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
      if ( (char *)v6 == (char *)CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease )
      {
        CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v5);
      }
      else if ( (char *)v6 == (char *)CMILRefCountBaseT<ID2DBitmapCacheSource,CMilObjectDeleter>::InternalRelease )
      {
        CMILRefCountBaseT<ID2DBitmapCacheSource,CMilObjectDeleter>::InternalRelease();
      }
      else
      {
        v6();
      }
      *((_QWORD *)this + 9) = 0LL;
    }
    v7 = (CGlobalDrawingContext *)*((_QWORD *)this + 8);
    if ( v7 )
    {
      v8 = *(void (**)(void))(*(_QWORD *)v7 + 16LL);
      if ( (char *)v8 == (char *)CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease )
        CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v7);
      else
        v8();
      *((_QWORD *)this + 8) = 0LL;
    }
    if ( *((_BYTE *)this + 125) )
    {
      operator delete(*((void **)this + 13));
      *((_QWORD *)this + 13) = 0LL;
      *((_DWORD *)this + 28) = 0;
    }
  }
  *((_BYTE *)this + 124) = 0;
}
