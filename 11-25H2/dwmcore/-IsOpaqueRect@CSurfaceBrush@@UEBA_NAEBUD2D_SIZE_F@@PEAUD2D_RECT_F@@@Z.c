/*
 * XREFs of ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x1801D8180
 * Callers:
 *     ?IsOpaqueRect@CNineGridBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x1801D8120 (-IsOpaqueRect@CNineGridBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180015130 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x180073CD0 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18007BD70 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008B4A0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x1800D10D0 (-IsEmptyDrawing@CBrush@@UEBA_NXZ.c)
 *     ?IsOpaque@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z @ 0x1801D8320 (-IsOpaque@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CSurfaceBrush::IsOpaqueRect(
        CBitmapRenderStrategy **this,
        const struct D2D_SIZE_F *a2,
        struct D2D_RECT_F *a3)
{
  CBitmapRenderStrategy *v6; // rcx
  bool (__fastcall *v7)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *); // rax
  CBitmapRenderStrategy *v10; // rcx
  int v11; // ebx
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  CShape *v14; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v15[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v16; // [rsp+48h] [rbp-38h]
  struct CShape *v17[2]; // [rsp+50h] [rbp-30h] BYREF
  char v18; // [rsp+60h] [rbp-20h]
  __int128 v19; // [rsp+68h] [rbp-18h] BYREF

  if ( CBrush::IsEmptyDrawing((CBrush *)this) )
    return 0;
  v6 = this[17];
  v7 = *(bool (__fastcall **)(CBitmapRenderStrategy *__hidden, const struct CSurfaceBrush *))(*(_QWORD *)v6 + 8LL);
  if ( !(v7 == CBitmapRenderStrategy::IsOpaque
       ? CBitmapRenderStrategy::IsOpaque(v6, (const struct CSurfaceBrush *)this)
       : v7(v6, (const struct CSurfaceBrush *)this)) )
    return 0;
  v10 = this[17];
  v19 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(CBitmapRenderStrategy *, CBitmapRenderStrategy **, __int128 *))(*(_QWORD *)v10 + 24LL))(
         v10,
         this,
         &v19)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v19 + 3) - 1.0) & _xmm) < 0.0000011920929 )
  {
    width = a2->width;
    height = a2->height;
    a3->left = 0.0;
    a3->top = 0.0;
    a3->right = width;
    a3->bottom = height;
    return 0;
  }
  v17[1] = 0LL;
  v18 = 1;
  v14 = 0LL;
  v16 = 0LL;
  v17[0] = (struct CShape *)&v14;
  memset(v15, 0, sizeof(v15));
  v11 = CSurfaceBrush::ComputeLayout((CSurfaceBrush *)this, a2, (struct CContent::LayoutData *)v15, &v17[1]);
  wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)v17);
  if ( v11 < 0
    || !CShape::IsAxisAlignedRectangle(v14)
    || (*(_OWORD *)v17 = 0LL,
        (*(int (__fastcall **)(CShape *, struct CShape **, _QWORD))(*(_QWORD *)v14 + 48LL))(v14, v17, 0LL) < 0) )
  {
    std::unique_ptr<CShape>::~unique_ptr<CShape>(&v14);
    return 0;
  }
  *a3 = *(struct D2D_RECT_F *)v17;
  std::unique_ptr<CShape>::~unique_ptr<CShape>(&v14);
  return 1;
}
