/*
 * XREFs of ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180036690
 * Callers:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x1800348C4 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180036300 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18003DE40 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18003EF90 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x180108054 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035620 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180036A90 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?CalculateWindowMetrics@CSecondaryWindowRepresentation@@AEAA_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x1800420C0 (-CalculateWindowMetrics@CSecondaryWindowRepresentation@@AEAA_NPEAUtagSIZE@@PEAU_MARGINS@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(
        CSecondaryWindowRepresentation *this,
        __int64 a2)
{
  CWindowData *v2; // rsi
  int v4; // ecx
  CWindowData *v5; // rdi
  _DWORD *v6; // rdx
  struct _MARGINS v7; // xmm0
  __int64 v8; // rcx
  int v9; // ecx
  __int64 v10; // rdi
  struct _MARGINS v11; // [rsp+20h] [rbp-18h] BYREF
  struct tagSIZE v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CWindowData *)*((_QWORD *)this + 8);
  v4 = *((_DWORD *)this + 18);
  v5 = 0LL;
  if ( v4 != 1 )
  {
    v9 = v4 - 2;
    if ( v9 )
    {
      if ( v9 != 1 )
        goto LABEL_3;
      if ( !CWindowData::IsImmersiveWindow(v2) )
      {
        v5 = *(CWindowData **)(*((_QWORD *)v2 + 61) + 80LL);
        goto LABEL_3;
      }
    }
    else
    {
      v10 = *((_QWORD *)v2 + 60);
      if ( v10 )
      {
        v5 = *(CWindowData **)(v10 + 32);
        goto LABEL_3;
      }
    }
  }
  v5 = v2;
LABEL_3:
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
    a2);
  if ( !*((_BYTE *)this + 417) && CSecondaryWindowRepresentation::CalculateWindowMetrics(this, &v12, &v11) )
  {
    if ( v12.cx != *((_DWORD *)this + 20)
      || v12.cy != *((_DWORD *)this + 21)
      || *((_DWORD *)this + 22) != v11.cxLeftWidth
      || *((_DWORD *)this + 23) != v11.cxRightWidth
      || *((_DWORD *)this + 24) != v11.cyTopHeight
      || *((_DWORD *)this + 25) != v11.cyBottomHeight
      || (v6 = (_DWORD *)*((_QWORD *)v5 + 55), *((_DWORD *)this + 26) != v6[161])
      || *((_DWORD *)this + 27) != v6[162]
      || *((_DWORD *)this + 28) != v6[163]
      || *((_DWORD *)this + 29) != v6[164] )
    {
      v7 = v11;
      *((struct tagSIZE *)this + 10) = v12;
      *(struct _MARGINS *)((char *)this + 88) = v7;
      v8 = *((_QWORD *)this + 21);
      *(_OWORD *)((char *)this + 104) = *(_OWORD *)(*((_QWORD *)v5 + 55) + 644LL);
      (*(void (__fastcall **)(__int64, CSecondaryWindowRepresentation *))(*(_QWORD *)v8 + 8LL))(v8, this);
    }
  }
}
