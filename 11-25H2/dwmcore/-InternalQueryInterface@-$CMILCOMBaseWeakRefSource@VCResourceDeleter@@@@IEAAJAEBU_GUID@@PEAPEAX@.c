/*
 * XREFs of ?InternalQueryInterface@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CF0A0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800CEB80 (-GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z @ 0x1800CF250 (-DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180108570 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Resolve@CMILCOMWeakRef@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180173F80 (-Resolve@CMILCOMWeakRef@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetDirtyRegion@CMaskBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1801911E0 (-GetDirtyRegion@CMaskBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180191B24 (-GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD.c)
 *     ?IsOpaque@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z @ 0x1801D8320 (-IsOpaque@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z.c)
 *     ?QueryInterface@CVisualGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18021DE10 (-QueryInterface@CVisualGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?HrFindInterface@CMaskBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BE870 (-HrFindInterface@CMaskBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface(
        CMaskBrush *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 (__fastcall *v7)(CCompositionSurfaceBitmap *__hidden, const struct _GUID *, void **); // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // esi
  __int64 v12; // rax
  int Interface; // eax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
    return 2147942487LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_73f2a332_aba0_4b29_88bc_6ee79b3941bc.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_73f2a332_aba0_4b29_88bc_6ee79b3941bc.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_73f2a332_aba0_4b29_88bc_6ee79b3941bc.Data4;
  if ( v5 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v6 )
    {
      *a3 = this;
      v10 = 0;
      goto LABEL_19;
    }
    v7 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *__hidden, const struct _GUID *, void **))(*(_QWORD *)this + 48LL);
    if ( v7 == CCompositionSurfaceBitmap::HrFindInterface )
    {
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data4;
      if ( !v8 )
      {
        v10 = 0;
        *a3 = (char *)this + 72;
        goto LABEL_18;
      }
      v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec27.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec27.Data1 )
        v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c155b649_2c5b_416a_b836_bbda56b2ec27.Data4;
      if ( !v9 )
      {
        v10 = 0;
        *a3 = (char *)this + 88;
        goto LABEL_18;
      }
      goto LABEL_27;
    }
    if ( v7 == CGdiSpriteBitmap::HrFindInterface )
    {
      v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1 )
        v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data4;
      if ( v12 )
      {
LABEL_27:
        v10 = -2147467262;
        goto LABEL_18;
      }
      v10 = 0;
      *a3 = (char *)this + 104;
    }
    else
    {
      if ( v7 == CMaskBrush::HrFindInterface )
        Interface = CMaskBrush::HrFindInterface(this, a2, a3);
      else
        Interface = ((__int64 (__fastcall *)(CMaskBrush *))v7)(this);
      v10 = Interface;
    }
LABEL_18:
    if ( v10 < 0 )
    {
      *a3 = 0LL;
      return (unsigned int)v10;
    }
LABEL_19:
    if ( _InterlockedAdd((volatile signed __int32 *)this + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v14);
    return (unsigned int)v10;
  }
  *a3 = this;
  CMILRefCountImpl::AddReference((CMaskBrush *)((char *)this + 8));
  return 0LL;
}
