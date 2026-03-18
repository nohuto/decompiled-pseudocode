/*
 * XREFs of ?IsOpaque@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z @ 0x18004BD40
 * Callers:
 *     ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18004B630 (-IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ?InternalQueryInterface@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C640 (-InternalQueryInterface@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004DC30 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18010E630 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CBitmapRenderStrategy::IsOpaque(CBitmapRenderStrategy *this, const struct CSurfaceBrush *a2)
{
  CMaskBrush *v2; // rcx
  __int64 (__fastcall *v3)(CMaskBrush *); // rax
  __int64 (*v4)(void); // rax
  char IsOpaque; // al
  char v6; // bl
  CCompositionSurfaceBitmap *v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = (CMaskBrush *)*((_QWORD *)a2 + 16);
  v8 = 0LL;
  v9 = 0LL;
  v3 = **(__int64 (__fastcall ***)(CMaskBrush *))v2;
  if ( v3 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface(v2);
  else
    ((void (__fastcall *)(CMaskBrush *, GUID *, CCompositionSurfaceBitmap **))v3)(
      v2,
      &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c,
      &v8);
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(&v9);
  v4 = *(__int64 (**)(void))(*(_QWORD *)v8 + 32LL);
  if ( (char *)v4 == (char *)CCompositionSurfaceBitmap::IsOpaque )
    IsOpaque = CCompositionSurfaceBitmap::IsOpaque(v8);
  else
    IsOpaque = v4();
  v6 = IsOpaque;
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(&v8);
  return v6;
}
