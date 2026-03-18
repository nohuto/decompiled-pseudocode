/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCResourceDeleter@@@@IEAAKXZ @ 0x1800D0F90
 * Callers:
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ @ 0x1800492C0 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--_lambda_invoker_cdecl_.c)
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::operator() @ 0x180049670 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--operator().c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D0690 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z @ 0x1800D0A30 (-IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800E1440 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 * Callees:
 *     ?Delete@CResource@@IEAAXXZ @ 0x180069460 (-Delete@CResource@@IEAAXXZ.c)
 *     ?FinalRelease@CVisual@@MEAAXXZ @ 0x180139580 (-FinalRelease@CVisual@@MEAAXXZ.c)
 *     ?FinalRelease@CCachedVisualImage@@MEAAXXZ @ 0x1801854F0 (-FinalRelease@CCachedVisualImage@@MEAAXXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILRefCountBaseT<IUnknownWeakRefSource,CResourceDeleter>::InternalRelease(CResource *this)
{
  int v2; // ebx
  void (__fastcall *v4)(CVisual *__hidden); // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v2 < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v5);
  if ( !v2 )
  {
    if ( _InterlockedAdd((volatile signed __int32 *)this + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v5);
    v4 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)this + 40LL);
    if ( v4 == CVisual::FinalRelease )
    {
      CVisual::FinalRelease(this);
    }
    else if ( v4 == CCachedVisualImage::FinalRelease )
    {
      CCachedVisualImage::FinalRelease(this);
    }
    else
    {
      v4(this);
    }
    v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
    if ( v2 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v5);
    if ( !v2 )
    {
      if ( _InterlockedDecrement((volatile signed __int32 *)this + 2) < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v5);
      CResource::Delete(this);
    }
  }
  return (unsigned int)v2;
}
