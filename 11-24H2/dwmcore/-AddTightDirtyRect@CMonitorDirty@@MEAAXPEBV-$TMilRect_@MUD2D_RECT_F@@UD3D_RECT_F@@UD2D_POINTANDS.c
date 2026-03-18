/*
 * XREFs of ?AddTightDirtyRect@CMonitorDirty@@MEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18027EEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000A2C0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1801724A0 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?GetClipBox@CMonitorTransform@@QEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801D2100 (-GetClipBox@CMonitorTransform@@QEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ @ 0x18022369C (-SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x18027EE20 (-AddRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMonitorDirty::AddTightDirtyRect(CMonitorDirty *this, const struct D2D_RECT_F *a2, double a3)
{
  _QWORD *v4; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  float v8; // xmm7_4
  float v9; // xmm6_4
  __int64 v10; // rax
  const struct tagRECT *v11; // rax
  _DWORD v12[2]; // [rsp+20h] [rbp-50h] BYREF
  struct D2D_RECT_F v13; // [rsp+28h] [rbp-48h] BYREF
  int v14[4]; // [rsp+38h] [rbp-38h] BYREF

  v4 = (_QWORD *)*((_QWORD *)this + 290);
  if ( a2 )
  {
    (*(void (__fastcall **)(_QWORD *, _DWORD *))(v4[1] + 40LL))(v4 + 1, v12);
    v8 = (float)v12[0];
    v9 = (float)v12[1];
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
    v13 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<1>(v10, a2, &v13.left);
    if ( v13.left < 0.0 )
      v13.left = 0.0;
    if ( v13.top < 0.0 )
      v13.top = 0.0;
    if ( v13.right > v8 )
      v13.right = v8;
    if ( v13.bottom > v9 )
      v13.bottom = v9;
    if ( !IsEmpty(&v13) )
    {
      v11 = (const struct tagRECT *)PixelAlign(v14, (unsigned int *)&v13, a3);
      CRegion::AddRectangle(*((const struct FastRegion::Internal::CRgnData ***)this + 58), v11);
    }
  }
  else
  {
    v6 = (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v4 + 264LL))(v4);
    if ( (_BYTE)v6 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 290) + 256LL))(*((_QWORD *)this + 290));
      CMonitorTransform::GetClipBox(v7, (__int64)&v13, v6);
      CRegion::AddRectangle(*((const struct FastRegion::Internal::CRgnData ***)this + 58), (struct tagRECT *)&v13);
    }
    else
    {
      CMonitorDirty::SetFullTightDirtyRegion(this);
    }
  }
}
