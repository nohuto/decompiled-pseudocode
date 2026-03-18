/*
 * XREFs of ??0CGDISubSectionBitmapRealization@@AEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x1802D6FB4
 * Callers:
 *     ?Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1802D7184 (-Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 * Callees:
 *     ??0CGDISectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x1801A6498 (--0CGDISectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUC.c)
 */

__int64 __fastcall CGDISubSectionBitmapRealization::CGDISubSectionBitmapRealization(
        __int64 a1,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        const struct CSM_SYSMEM_SECTION_INFO *a4,
        __int64 a5,
        __int128 *a6,
        _OWORD *a7)
{
  __int128 v8; // xmm1
  __int64 result; // rax

  CGDISectionBitmapRealization::CGDISectionBitmapRealization((CGDISectionBitmapRealization *)a1, a2, a3, a4);
  *(_QWORD *)a1 = &CGDISubSectionBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *(_QWORD *)(a1 + 16) = &CGDISectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(a1 + 80) = &CGDISubSectionBitmapRealization::`vftable'{for `IBitmapRealization'};
  *(_QWORD *)(a1 + 88) = &CGDISectionBitmapRealization::`vftable'{for `IRemotableBitmapRealization'};
  *(_QWORD *)(a1 + 328) = &CGDISectionBitmapRealization::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(a1 + 336) = &CGDISectionBitmapRealization::`vftable'{for `IPixelColor'};
  *(_QWORD *)(a1 + 392) = &CGDISubSectionBitmapRealization::`vftable';
  *(_OWORD *)(a1 + 416) = *a7;
  v8 = *a6;
  *(_QWORD *)(a1 + 376) = a5;
  result = a1;
  *(_OWORD *)(a1 + 432) = v8;
  return result;
}
