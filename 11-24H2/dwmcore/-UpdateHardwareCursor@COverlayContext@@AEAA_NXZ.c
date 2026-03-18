/*
 * XREFs of ?UpdateHardwareCursor@COverlayContext@@AEAA_NXZ @ 0x18026D0CC
 * Callers:
 *     ?SetHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@@Z @ 0x18026CF64 (-SetHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x180060010 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetCursorBounds@COverlayContext@@AEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18026BF8C (-GetCursorBounds@COverlayContext@@AEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?GetMonitorData@CCursorState@@AEBAPEAVMonitorData@1@U_LUID@@I@Z @ 0x18026C038 (-GetMonitorData@CCursorState@@AEBAPEAVMonitorData@1@U_LUID@@I@Z.c)
 *     ?IsCursorScaledByHardware@COverlayContext@@QEBA_NXZ @ 0x18026C508 (-IsCursorScaledByHardware@COverlayContext@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ContentOnTop@@@details@wil@@QEAA_NXZ @ 0x18026D2AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ContentOnTop@@@details@wil@@QEAA_.c)
 *     ?IsMaskInvert@CCursorVisual@@QEBA_NXZ @ 0x180290728 (-IsMaskInvert@CCursorVisual@@QEBA_NXZ.c)
 *     ?EnsureMonitorData@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_NAEBVCMILMatrix@@@Z @ 0x1802B2818 (-EnsureMonitorData@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 *     ?UpdateHardwareCursor@CCursorState@@AEAA_NPEAVMonitorData@1@_N@Z @ 0x1802B49CC (-UpdateHardwareCursor@CCursorState@@AEAA_NPEAVMonitorData@1@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::UpdateHardwareCursor(COverlayContext *this)
{
  bool IsCursorScaledByHardware; // bl
  const struct CMonitorTransform *MonitorTransform; // rax
  const struct CMonitorTransform *v4; // rdi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  char v9; // si
  CCursorState *v10; // rdi
  struct CCursorState::MonitorData *MonitorData; // rbx
  struct D2D_RECT_F *CursorBounds; // rax
  struct D2D_RECT_F v14; // [rsp+38h] [rbp-9h] BYREF
  _OWORD v15[4]; // [rsp+48h] [rbp+7h] BYREF
  int v16; // [rsp+88h] [rbp+47h]

  IsCursorScaledByHardware = COverlayContext::IsCursorScaledByHardware(this);
  MonitorTransform = COverlayContext::GetMonitorTransform(this);
  v4 = MonitorTransform;
  if ( IsCursorScaledByHardware )
    v14 = *(struct D2D_RECT_F *)((char *)this + 18980);
  else
    v14 = *(struct D2D_RECT_F *)((char *)MonitorTransform + 24);
  v5 = *(_OWORD *)((char *)this + 19244);
  v6 = *(_OWORD *)((char *)this + 19260);
  v16 = *((_DWORD *)this + 4827);
  v15[0] = v5;
  v7 = *(_OWORD *)((char *)this + 19276);
  v15[1] = v6;
  v8 = *(_OWORD *)((char *)this + 19292);
  v15[2] = v7;
  v15[3] = v8;
  CMILMatrix::Multiply(
    (CMILMatrix *)v15,
    (const struct CMonitorTransform *)((char *)MonitorTransform + (IsCursorScaledByHardware ? 0x88 : 0) + 52));
  v9 = CCursorState::EnsureMonitorData(
         *(CCursorState **)(*((_QWORD *)this + 2403) + 704LL),
         *((_BYTE *)v4 + 256),
         (__int64)v15);
  v10 = *(CCursorState **)(*((_QWORD *)this + 2403) + 704LL);
  MonitorData = CCursorState::GetMonitorData(v10, *(struct _LUID *)((char *)this + 19232), *((_DWORD *)this + 4810));
  EnterCriticalSection(&g_CursorManager);
  LOBYTE(MonitorData) = CCursorState::UpdateHardwareCursor(v10, MonitorData, v9);
  LeaveCriticalSection(&g_CursorManager);
  if ( (_BYTE)MonitorData )
  {
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)this + 296LL))(*(_QWORD *)this, (char *)this + 19312);
    return 1;
  }
  else
  {
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ContentOnTop>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ContentOnTop>::GetImpl'::`2'::impl)
      && CCursorVisual::IsMaskInvert(*((CCursorVisual **)this + 2403)) )
    {
      CursorBounds = COverlayContext::GetCursorBounds(this, &v14);
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(
        (float *)this + 4836,
        &CursorBounds->left);
    }
    return 0;
  }
}
