/*
 * XREFs of ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1801867E0
 * Callers:
 *     ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180186500 (-LockForRead@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUnique.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1801EABE0 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x1801861AC (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180187810 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HrCreateDestBitmap(unsigned int a1, unsigned int a2, enum DXGI_FORMAT *a3, struct IBitmapDest **a4)
{
  CSystemMemoryBitmap *v8; // rax
  CSystemMemoryBitmap *v9; // rax
  void **v10; // rsi
  int v11; // eax
  unsigned int v12; // ebx
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-28h]

  *a4 = 0LL;
  v8 = (CSystemMemoryBitmap *)operator new(0x98uLL);
  if ( !v8 )
  {
    v10 = 0LL;
    goto LABEL_7;
  }
  v9 = CSystemMemoryBitmap::CSystemMemoryBitmap(v8);
  v10 = (void **)v9;
  if ( !v9 )
  {
LABEL_7:
    v12 = -2147024882;
    v14 = -2147024882;
    v15 = 128;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, v15, 0LL);
    goto LABEL_5;
  }
  (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v9 + 8LL))(v9);
  v11 = CSystemMemoryBitmap::HrInit(v10, a1, a2, a3, 1);
  v12 = v11;
  if ( v11 < 0 )
  {
    v15 = 134;
    goto LABEL_11;
  }
  v11 = (*(__int64 (__fastcall **)(void **, GUID *, struct IBitmapDest **))*v10)(
          v10,
          &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
          a4);
  v12 = v11;
  if ( v11 < 0 )
  {
    v15 = 137;
LABEL_11:
    v14 = v11;
    goto LABEL_8;
  }
LABEL_5:
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v10);
  return v12;
}
