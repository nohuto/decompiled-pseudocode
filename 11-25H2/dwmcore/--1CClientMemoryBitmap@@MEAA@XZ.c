/*
 * XREFs of ??1CClientMemoryBitmap@@MEAA@XZ @ 0x1802010EC
 * Callers:
 *     ??_ECClientMemoryBitmap@@MEAAPEAXI@Z @ 0x1802010B0 (--_ECClientMemoryBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CClientMemoryBitmap::~CClientMemoryBitmap(CClientMemoryBitmap *this)
{
  __int64 v2; // rcx

  *((_QWORD *)this + 17) = 0LL;
  *(_QWORD *)this = &CClientMemoryBitmap::`vftable'{for `CMILCOMBaseT<IBitmapSource,IBitmapSource,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 4) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 15) = &CSystemMemoryBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 16) = &CClientMemoryBitmap::`vftable'{for `IPixelColor'};
  v2 = *((_QWORD *)this + 19);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CSystemMemoryBitmap::~CSystemMemoryBitmap(this);
}
