/*
 * XREFs of ?IsActivatedWithForegroundRights@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180501DF4
 * Callers:
 *     ?ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804FB790 (-ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITION.c)
 *     ?InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180501A00 (-InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPrese.c)
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18006F2E8 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 */

bool __fastcall GamingPosturePositioner::IsActivatedWithForegroundRights(
        GamingPosturePositioner *this,
        struct IApplicationView *a2,
        __int64 (__fastcall ***a3)(struct IApplicationView *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))
{
  struct IUnknown v4; // [rsp+38h] [rbp+10h] BYREF

  HIDWORD(v4.lpVtbl) = HIDWORD(a2);
  LODWORD(v4.lpVtbl) = 0;
  return a3
      && (int)PositionerPropertySetHelpers::GetDetailsForActivation(this, a3, &v4, 0LL) >= 0
      && ((__int64)v4.lpVtbl & 2) == 0;
}
