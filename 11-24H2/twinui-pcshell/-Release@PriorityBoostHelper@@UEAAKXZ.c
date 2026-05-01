/*
 * XREFs of ?Release@PriorityBoostHelper@@UEAAKXZ @ 0x180392110
 * Callers:
 *     ?Release@PriorityBoostHelper@@W7EAAKXZ @ 0x1803C6CD0 (-Release@PriorityBoostHelper@@W7EAAKXZ.c)
 *     ?Release@PriorityBoostHelper@@WBA@EAAKXZ @ 0x1803C6CE0 (-Release@PriorityBoostHelper@@WBA@EAAKXZ.c)
 *     ?Release@PriorityBoostHelper@@WBI@EAAKXZ @ 0x1803C6CF0 (-Release@PriorityBoostHelper@@WBI@EAAKXZ.c)
 *     ?Release@PriorityBoostHelper@@WCA@EAAKXZ @ 0x1803C6D00 (-Release@PriorityBoostHelper@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall PriorityBoostHelper::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::Release(this);
}
