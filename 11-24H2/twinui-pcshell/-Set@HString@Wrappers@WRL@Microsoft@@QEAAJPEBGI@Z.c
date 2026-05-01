/*
 * XREFs of ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z @ 0x1800576AC
 * Callers:
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z @ 0x1800555D0 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z.c)
 *     ?GetStringWithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@PEBG@Z @ 0x1800577B8 (-GetStringWithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA-AVHString@Wrappers@W.c)
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x1801BF8D0 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 *     ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x180217B80 (--$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180245020 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802503A0 (-OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@S.c)
 *     ?Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x180367824 (-Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV-$ComPtr@UIAudioSessionControl2@@@WRL@.c)
 *     ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x18037F3BC (-_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellEx.c)
 *     ?_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1803AC4F4 (-_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL::Wrappers::HString::Set(HSTRING *this, const unsigned __int16 *a2, UINT32 a3)
{
  WindowsDeleteString(*this);
  *this = 0LL;
  return WindowsCreateString(a2, a3, this);
}
