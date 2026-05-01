/*
 * XREFs of ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801DB2C0
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18006E9E0 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x1801DB210 (-EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH.c)
 * Callees:
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003DE80 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA-AW4HolographicDetermination@@PEAUI.c)
 *     ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18006F8AC (-_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUI.c)
 *     ?_IsViewTypeHolographicCompatible@HolographicPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1800708E0 (-_IsViewTypeHolographicCompatible@HolographicPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ??$LaunchInHolographic@W4HolographicLaunchReason@@I@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchReason@@$$QEAI@Z @ 0x1802AEEF4 (--$LaunchInHolographic@W4HolographicLaunchReason@@I@HolographicPositionerTelemetry@@SAX$$QEAW4Ho.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1802C7358 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z @ 0x1802C8FD8 (-_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall HolographicPositioner::_IsViewContextHolographic(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 v6; // rax
  unsigned int *p_ApplicationViewUniqueIdForTracing; // rdx
  unsigned int *v8; // rcx
  int IsPropertySetContextHolographic; // eax
  unsigned int ApplicationViewUniqueIdForTracing; // [rsp+20h] [rbp-10h] BYREF
  _DWORD v12[3]; // [rsp+24h] [rbp-Ch] BYREF
  unsigned int v13; // [rsp+58h] [rbp+28h] BYREF

  if ( HolographicPositioner::_IsViewTypeHolographicCompatible(
         this,
         (int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2) )
  {
    v6 = *(_QWORD *)a2;
    v13 = 6;
    if ( (*(int (__fastcall **)(struct IApplicationView *, unsigned int *))(v6 + 400))(a2, &v13) >= 0
      && (v13 == 1 || v13 == 2 || v13 - 3 <= 1) )
    {
      ApplicationViewUniqueIdForTracing = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      p_ApplicationViewUniqueIdForTracing = &ApplicationViewUniqueIdForTracing;
      v8 = v12;
      v12[0] = 1;
LABEL_7:
      HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason,unsigned int>(
        v8,
        p_ApplicationViewUniqueIdForTracing);
      return 1;
    }
    IsPropertySetContextHolographic = HolographicPositioner::_IsPropertySetContextHolographic(
                                        (__int64)this,
                                        (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3);
    if ( IsPropertySetContextHolographic == 2 )
    {
      ApplicationViewUniqueIdForTracing = 0;
      v12[0] = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason,unsigned int>(
        &ApplicationViewUniqueIdForTracing,
        v12);
      if ( (unsigned __int8)HolographicPositioner::_IsViewWin32Slate(a2, v13) )
        *((_BYTE *)this + 312) = 1;
      return 1;
    }
    if ( IsPropertySetContextHolographic != 1
      && HolographicPositioner::_IsViewPropertySetHeuristicHolographic(this, a2, a3) )
    {
      v12[0] = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      p_ApplicationViewUniqueIdForTracing = v12;
      v8 = &ApplicationViewUniqueIdForTracing;
      ApplicationViewUniqueIdForTracing = 2;
      goto LABEL_7;
    }
  }
  return 0;
}
