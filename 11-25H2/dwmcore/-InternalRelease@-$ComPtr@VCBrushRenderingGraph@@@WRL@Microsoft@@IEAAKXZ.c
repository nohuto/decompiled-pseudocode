/*
 * XREFs of ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180133FE8
 * Callers:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021400 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18007123C (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x1800724A0 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?NotifyOnChanged@CGradientBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180132580 (-NotifyOnChanged@CGradientBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x180132E3C (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ??1CBrush@@MEAA@XZ @ 0x180133F8C (--1CBrush@@MEAA@XZ.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x1802288B0 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z @ 0x18022B220 (-EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z @ 0x18029F650 (-EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z @ 0x1802AC760 (-EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1802B4758 (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAP.c)
 * Callees:
 *     ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x180134060 (-Release@CEffectCompilationTask@@UEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(CInteractionContextWrapper **a1)
{
  unsigned int result; // eax
  CInteractionContextWrapper *v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 8LL);
    if ( (char *)v4 == (char *)CMILRefCountBaseT<IInteractionContextWrapper,CMilObjectDeleter>::InternalRelease )
    {
      return CMILRefCountBaseT<IInteractionContextWrapper,CMilObjectDeleter>::InternalRelease(v3);
    }
    else if ( v4 == CMILRefCountBaseT<IInteractionResource,CMilObjectDeleter>::Release )
    {
      return CMILRefCountBaseT<IInteractionResource,CMilObjectDeleter>::Release();
    }
    else if ( (char *)v4 == (char *)CEffectCompilationTask::Release )
    {
      return CEffectCompilationTask::Release(v3);
    }
    else
    {
      return v4();
    }
  }
  return result;
}
