/*
 * XREFs of ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180023630
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800234B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800237CC (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800251C4 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x180025264 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18002555C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::LockForRead(__int64 a1, _DWORD *a2, CBitmapLock **a3)
{
  _DWORD *v6; // rdx
  unsigned __int8 PixelFormatSize; // al
  _DWORD *v8; // rdx
  unsigned int v9; // ebp
  CBitmapLock *v10; // rax
  CBitmapLock *v11; // rax
  CBitmapLock *v12; // rbx
  int v13; // eax
  unsigned int v14; // edi

  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(a1 + 24)
    || TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v6) )
  {
    v14 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x84u, 0LL);
  }
  else
  {
    PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 124));
    v9 = *(_DWORD *)(a1 + 120) * v8[1] + *v8 * (PixelFormatSize >> 3);
    v10 = (CBitmapLock *)operator new(0x80uLL);
    if ( v10 && (v11 = CBitmapLock::CBitmapLock(v10), (v12 = v11) != 0LL) )
    {
      (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v11 + 8LL))(v11);
      v13 = CBitmapLock::HrInit(
              v12,
              (struct IBitmapUnlock *)((a1 + 16) & -(__int64)(a1 != 0)),
              a2[2] - *a2,
              a2[3] - a2[1],
              (const struct PixelFormatInfo *)(a1 + 124),
              *(_DWORD *)(a1 + 120),
              *(_DWORD *)(a1 + 144) - v9,
              (void *)(v9 + *(_QWORD *)(a1 + 136)),
              WICBitmapLockRead,
              0,
              0LL);
      v14 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x98u, 0LL);
        (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      else
      {
        *a3 = v12;
      }
    }
    else
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x8Du, 0LL);
    }
  }
  return v14;
}
