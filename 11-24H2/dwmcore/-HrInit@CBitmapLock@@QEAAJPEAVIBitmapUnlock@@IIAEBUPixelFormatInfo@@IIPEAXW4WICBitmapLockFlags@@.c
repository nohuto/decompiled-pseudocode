/*
 * XREFs of ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x180025264
 * Callers:
 *     ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180023630 (-LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180195500 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 *     ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x1802560CC (-HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlag.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18002555C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapLock::HrInit(
        CBitmapLock *this,
        struct IBitmapUnlock *a2,
        unsigned int a3,
        int a4,
        enum DXGI_FORMAT *a5,
        unsigned int a6,
        unsigned int a7,
        void *a8,
        enum WICBitmapLockFlags a9,
        bool a10,
        struct IUnknown *a11)
{
  unsigned int v11; // edi
  unsigned int v12; // eax
  unsigned __int64 v17; // r8
  unsigned int v18; // r9d
  unsigned int v19; // eax
  int v20; // ebx
  unsigned int v21; // eax
  unsigned int v23; // edx
  unsigned __int64 v24; // rcx

  v11 = 0;
  v12 = 0;
  if ( a4 )
  {
    v17 = a3 * (unsigned __int64)GetPixelFormatSize(*a5);
    if ( v17 > 0xFFFFFFFF )
    {
      v19 = 1632;
LABEL_4:
      v20 = -2147024362;
LABEL_5:
      v11 = v20;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, v19, 0LL);
      v21 = 1678;
LABEL_6:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, v21, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x5Cu, 0LL);
      return v11;
    }
    if ( (int)v17 + 7 < (unsigned int)v17 )
    {
      v19 = 1633;
      goto LABEL_4;
    }
    v23 = (unsigned int)(v17 + 7) >> 3;
    if ( a6 < v23 )
    {
      v20 = -2147024809;
      v19 = 1638;
      goto LABEL_5;
    }
    v24 = a6 * (unsigned __int64)v18;
    if ( v24 > 0xFFFFFFFF )
    {
      v19 = 1641;
      goto LABEL_4;
    }
    v12 = v24 + v23;
    if ( (unsigned int)v24 + v23 < (unsigned int)v24 )
    {
      v19 = 1642;
      goto LABEL_4;
    }
  }
  if ( v12 > a7 )
  {
    v11 = -2003292276;
    v21 = 1682;
    v20 = -2003292276;
    goto LABEL_6;
  }
  *((_BYTE *)this + 124) = 1;
  *((_BYTE *)this + 125) = a10;
  *((_QWORD *)this + 8) = a11;
  if ( a11 )
    ((void (__fastcall *)(struct IUnknown *))a11->lpVtbl->AddRef)(a11);
  *((_DWORD *)this + 20) = a3;
  *((_DWORD *)this + 21) = a4;
  *(_QWORD *)((char *)this + 92) = *(_QWORD *)a5;
  *((enum DXGI_FORMAT *)this + 25) = a5[2];
  *((_QWORD *)this + 13) = a8;
  *((_DWORD *)this + 22) = a6;
  *((_DWORD *)this + 28) = a7;
  *((_QWORD *)this + 9) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IBitmapUnlock *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_DWORD *)this + 30) = a9;
  return v11;
}
