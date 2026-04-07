/*
 * XREFs of ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A13B4
 * Callers:
 *     ?SetOpacity@CSpriteVisual@@UEAAXN@Z @ 0x18000BAB0 (-SetOpacity@CSpriteVisual@@UEAAXN@Z.c)
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180025430 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 *     ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x1800255C4 (--0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     ?CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x180025940 (-CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     ?CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x1800259B4 (-CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     ?CreateSolidColorBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Composition@34@@Z @ 0x180026454 (-CreateSolidColorBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@PEAPEAUICompositionBrush@C.c)
 *     ?ValidateVisual@CDWriteText@@UEAAJXZ @ 0x180030C40 (-ValidateVisual@CDWriteText@@UEAAJXZ.c)
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x180043FC4 (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 *     ?OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ @ 0x18006CB50 (-OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18009EFF0 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A4E00 (-InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A5500 (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ @ 0x1800A5614 (-OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ.c)
 *     ??1CDisplayDisconnectAnimatedVisual@@MEAA@XZ @ 0x1800B892C (--1CDisplayDisconnectAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800B8CDC (--1CDisplayDuplicateAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ @ 0x1800B950C (--1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayExtendAnimatedVisual@@MEAA@XZ @ 0x1800BA3EC (--1CDisplayExtendAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayExtendToDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800BAE70 (--1CDisplayExtendToDuplicateAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayMixedModeAnimatedVisual@@MEAA@XZ @ 0x1800BB7C0 (--1CDisplayMixedModeAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ @ 0x1800BD488 (--1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplaySecondaryOnlyAnimatedVisual@@MEAA@XZ @ 0x1800BD85C (--1CDisplaySecondaryOnlyAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800BE078 (--1CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplaySecondaryOnlyToExtendAnimatedVisual@@MEAA@XZ @ 0x1800BE71C (--1CDisplaySecondaryOnlyToExtendAnimatedVisual@@MEAA@XZ.c)
 *     ?RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ @ 0x1800C116C (-RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ.c)
 * Callees:
 *     ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180099094 (--$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFast_Hr(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        int a5)
{
  int v5; // [rsp+20h] [rbp-28h]
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v6) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<3>((__int64)this, (int)a2, a3, (__int64)a4, v5, retaddr, v6);
}
