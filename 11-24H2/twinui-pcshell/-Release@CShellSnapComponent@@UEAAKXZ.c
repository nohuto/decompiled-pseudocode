/*
 * XREFs of ?Release@CShellSnapComponent@@UEAAKXZ @ 0x180216EC0
 * Callers:
 *     ?Release@CShellSnapComponent@@W7EAAKXZ @ 0x1805A0730 (-Release@CShellSnapComponent@@W7EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WDA@EAAKXZ @ 0x1805A0740 (-Release@CShellSnapComponent@@WDA@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WDI@EAAKXZ @ 0x1805A0750 (-Release@CShellSnapComponent@@WDI@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WHA@EAAKXZ @ 0x1805A0760 (-Release@CShellSnapComponent@@WHA@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WHI@EAAKXZ @ 0x1805A0770 (-Release@CShellSnapComponent@@WHI@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WIA@EAAKXZ @ 0x1805A0780 (-Release@CShellSnapComponent@@WIA@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WII@EAAKXZ @ 0x1805A07A0 (-Release@CShellSnapComponent@@WII@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WJA@EAAKXZ @ 0x1805A07C0 (-Release@CShellSnapComponent@@WJA@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WJI@EAAKXZ @ 0x1805A07E0 (-Release@CShellSnapComponent@@WJI@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WKA@EAAKXZ @ 0x1805A0800 (-Release@CShellSnapComponent@@WKA@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WKI@EAAKXZ @ 0x1805A0820 (-Release@CShellSnapComponent@@WKI@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WLA@EAAKXZ @ 0x1805A0840 (-Release@CShellSnapComponent@@WLA@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WLI@EAAKXZ @ 0x1805A0860 (-Release@CShellSnapComponent@@WLI@EAAKXZ.c)
 *     ?Release@CShellSnapComponent@@WMA@EAAKXZ @ 0x1805A0880 (-Release@CShellSnapComponent@@WMA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CShellSnapComponent::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ISnapComponent,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>::Release(this);
}
