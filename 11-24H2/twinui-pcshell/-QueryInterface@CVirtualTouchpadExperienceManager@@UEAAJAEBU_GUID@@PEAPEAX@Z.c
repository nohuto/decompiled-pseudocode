/*
 * XREFs of ?QueryInterface@CVirtualTouchpadExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802203A0
 * Callers:
 *     ?QueryInterface@CVirtualTouchpadExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18039F810 (-QueryInterface@CVirtualTouchpadExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CVirtualTouchpadExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18039F820 (-QueryInterface@CVirtualTouchpadExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CVirtualTouchpadExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18039F830 (-QueryInterface@CVirtualTouchpadExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CVirtualTouchpadExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18039F840 (-QueryInterface@CVirtualTouchpadExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CVirtualTouchpadExperienceManager::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>>(
           this,
           a2,
           a3);
}
