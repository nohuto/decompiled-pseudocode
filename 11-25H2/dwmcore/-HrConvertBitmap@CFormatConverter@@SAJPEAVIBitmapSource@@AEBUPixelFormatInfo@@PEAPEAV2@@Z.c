/*
 * XREFs of ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802E5E94
 * Callers:
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x180186BB4 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x180236CD0 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Release@CBitmapLock@@UEAAKXZ @ 0x1801DD4C0 (-Release@CBitmapLock@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??0CFormatConverter@@QEAA@XZ @ 0x1802E55EC (--0CFormatConverter@@QEAA@XZ.c)
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x1802E6018 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFormatConverter::HrConvertBitmap(
        struct IBitmapSource *a1,
        const struct PixelFormatInfo *a2,
        struct IBitmapSource **a3)
{
  unsigned int v6; // ebx
  CFormatConverter *v7; // rax
  CFormatConverter *v8; // rax
  CFormatConverter *v9; // rdi
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  v6 = 0;
  (*(void (__fastcall **)(struct IBitmapSource *, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, &v12);
  if ( v12 == *(_QWORD *)a2 )
  {
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a1 + 8LL))(a1);
    *a3 = a1;
  }
  else
  {
    v7 = (CFormatConverter *)DefaultHeap::AllocClear(0x310uLL);
    if ( !v7 )
      ModuleFailFastForHRESULT(0x8007000E, retaddr);
    v8 = CFormatConverter::CFormatConverter(v7);
    v9 = v8;
    if ( v8 )
    {
      CMILRefCountImpl::AddReference((CFormatConverter *)((char *)v8 + 8));
      v10 = CFormatConverter::Initialize(v9, a1, a2, 0.0);
      v6 = v10;
      if ( v10 >= 0 )
      {
        *a3 = v9;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x232u, 0LL);
        CBitmapLock::Release(v9);
      }
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x23Fu, 0LL);
    }
  }
  return v6;
}
