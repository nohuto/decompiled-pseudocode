/*
 * XREFs of ?Release@CJumpViewExperienceManager@@UEAAKXZ @ 0x180224C60
 * Callers:
 *     ?Release@CJumpViewExperienceManager@@W7EAAKXZ @ 0x1803958F0 (-Release@CJumpViewExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WBA@EAAKXZ @ 0x180395900 (-Release@CJumpViewExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WBI@EAAKXZ @ 0x180395910 (-Release@CJumpViewExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WCA@EAAKXZ @ 0x180395920 (-Release@CJumpViewExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WCI@EAAKXZ @ 0x180395930 (-Release@CJumpViewExperienceManager@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CJumpViewExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::Release(this);
}
