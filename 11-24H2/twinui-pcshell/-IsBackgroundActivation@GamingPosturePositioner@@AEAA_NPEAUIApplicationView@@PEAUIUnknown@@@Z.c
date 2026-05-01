/*
 * XREFs of ?IsBackgroundActivation@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180501E38
 * Callers:
 *     ?ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804FB790 (-ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITION.c)
 *     ?InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180501A00 (-InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPrese.c)
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18006F2E8 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

bool __fastcall GamingPosturePositioner::IsBackgroundActivation(
        GamingPosturePositioner *this,
        struct IApplicationView *a2,
        __int64 (__fastcall ***a3)(struct IApplicationView *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))
{
  int DetailsForActivation; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown v7; // [rsp+38h] [rbp+10h] BYREF

  HIDWORD(v7.lpVtbl) = HIDWORD(a2);
  LODWORD(v7.lpVtbl) = 0;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(this, a3, &v7, 0LL);
  if ( DetailsForActivation < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE7B,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      v5);
  return ((__int64)v7.lpVtbl & 0x11) != 0;
}
