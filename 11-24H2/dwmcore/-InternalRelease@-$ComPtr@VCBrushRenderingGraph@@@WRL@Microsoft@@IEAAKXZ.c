/*
 * XREFs of ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x18008F428
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18004708C (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x180048430 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CGradientBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008DA70 (-NotifyOnChanged@CGradientBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x18008E4FC (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ??1CBrush@@MEAA@XZ @ 0x18008F3CC (--1CBrush@@MEAA@XZ.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x18021CF70 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z @ 0x18021FFB0 (-EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z @ 0x180293D00 (-EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z @ 0x1802A2C40 (-EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1802AAC98 (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAP.c)
 * Callees:
 *     ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x18008F4A0 (-Release@CEffectCompilationTask@@UEAAKXZ.c)
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
