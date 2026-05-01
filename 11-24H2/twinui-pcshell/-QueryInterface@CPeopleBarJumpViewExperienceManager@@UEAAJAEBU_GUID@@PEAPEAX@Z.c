/*
 * XREFs of ?QueryInterface@CPeopleBarJumpViewExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18022D9E0
 * Callers:
 *     ?QueryInterface@CPeopleBarJumpViewExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18038BB50 (-QueryInterface@CPeopleBarJumpViewExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleBarJumpViewExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18038BB60 (-QueryInterface@CPeopleBarJumpViewExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleBarJumpViewExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18038BB70 (-QueryInterface@CPeopleBarJumpViewExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleBarJumpViewExperienceManager::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>>(
           this,
           a2,
           a3);
}
