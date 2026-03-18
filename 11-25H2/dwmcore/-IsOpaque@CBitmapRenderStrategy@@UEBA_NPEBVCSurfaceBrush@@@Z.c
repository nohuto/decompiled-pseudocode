/*
 * XREFs of ?IsOpaque@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z @ 0x1801D8320
 * Callers:
 *     ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x1801D8180 (-IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ?InternalQueryInterface@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CF0A0 (-InternalQueryInterface@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D0690 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18014A270 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CBitmapRenderStrategy::IsOpaque(CBitmapRenderStrategy *this, const struct CSurfaceBrush *a2)
{
  CMaskBrush *v2; // rcx
  __int64 (__fastcall *v3)(CMaskBrush *, const struct _GUID *, void **); // rax
  __int64 (*v4)(void); // rax
  char IsOpaque; // al
  char v6; // bl
  CCompositionSurfaceBitmap *v8; // [rsp+38h] [rbp+10h] BYREF
  CResource *v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = (CMaskBrush *)*((_QWORD *)a2 + 16);
  v8 = 0LL;
  v9 = 0LL;
  v3 = **(__int64 (__fastcall ***)(CMaskBrush *, const struct _GUID *, void **))v2;
  if ( v3 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface(
      v2,
      &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c,
      (void **)&v8);
  else
    v3(v2, &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c, (void **)&v8);
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
