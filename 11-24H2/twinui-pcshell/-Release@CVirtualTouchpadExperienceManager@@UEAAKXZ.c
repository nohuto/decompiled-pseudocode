/*
 * XREFs of ?Release@CVirtualTouchpadExperienceManager@@UEAAKXZ @ 0x180221E80
 * Callers:
 *     ?Release@CVirtualTouchpadExperienceManager@@W7EAAKXZ @ 0x18039F890 (-Release@CVirtualTouchpadExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CVirtualTouchpadExperienceManager@@WBA@EAAKXZ @ 0x18039F8A0 (-Release@CVirtualTouchpadExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CVirtualTouchpadExperienceManager@@WBI@EAAKXZ @ 0x18039F8B0 (-Release@CVirtualTouchpadExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CVirtualTouchpadExperienceManager@@WCA@EAAKXZ @ 0x18039F8C0 (-Release@CVirtualTouchpadExperienceManager@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CVirtualTouchpadExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::Release(this);
}
