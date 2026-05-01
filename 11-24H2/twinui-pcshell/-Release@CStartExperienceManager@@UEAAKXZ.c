/*
 * XREFs of ?Release@CStartExperienceManager@@UEAAKXZ @ 0x18021AD10
 * Callers:
 *     ?Release@CStartExperienceManager@@W7EAAKXZ @ 0x1803920A0 (-Release@CStartExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WCA@EAAKXZ @ 0x1803920B0 (-Release@CStartExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WCI@EAAKXZ @ 0x1803920C0 (-Release@CStartExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WDA@EAAKXZ @ 0x1803920D0 (-Release@CStartExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WDI@EAAKXZ @ 0x1803920E0 (-Release@CStartExperienceManager@@WDI@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WEA@EAAKXZ @ 0x1803920F0 (-Release@CStartExperienceManager@@WEA@EAAKXZ.c)
 *     ?Release@CStartExperienceManager@@WEI@EAAKXZ @ 0x180392100 (-Release@CStartExperienceManager@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CStartExperienceManager::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::Release(this);
}
