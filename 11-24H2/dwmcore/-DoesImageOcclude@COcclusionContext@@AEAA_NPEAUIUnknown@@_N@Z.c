/*
 * XREFs of ?DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z @ 0x18004C7F0
 * Callers:
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801009B0 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180100FD4 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT.c)
 * Callees:
 *     ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18004BDD0 (-IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C640 (-InternalQueryInterface@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004DC30 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COcclusionContext::DoesImageOcclude(COcclusionContext *this, struct IUnknown *a2, char a3)
{
  bool v3; // bl
  struct IUnknownVtbl *lpVtbl; // rcx
  int Interface; // eax
  __int64 (*v7)(void); // rax
  char IsOpaque; // al
  CGdiSpriteBitmap *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  v3 = 0;
  if ( a2 )
  {
    if ( a3 )
      return 1;
    lpVtbl = a2->lpVtbl;
    v9 = 0LL;
    if ( (__int64 (__fastcall *)(CMaskBrush *, const struct _GUID *, void **))lpVtbl->QueryInterface == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface )
      Interface = CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface(
                    (CMaskBrush *)a2,
                    &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c,
                    (void **)&v9);
    else
      Interface = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CGdiSpriteBitmap **))lpVtbl->QueryInterface)(
                    a2,
                    &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c,
                    &v9);
    if ( Interface >= 0 )
    {
      v7 = *(__int64 (**)(void))(*(_QWORD *)v9 + 32LL);
      if ( (char *)v7 == (char *)CGdiSpriteBitmap::IsOpaque )
        IsOpaque = CGdiSpriteBitmap::IsOpaque(v9);
      else
        IsOpaque = v7();
      v3 = IsOpaque != 0;
    }
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(&v9);
  }
  return v3;
}
