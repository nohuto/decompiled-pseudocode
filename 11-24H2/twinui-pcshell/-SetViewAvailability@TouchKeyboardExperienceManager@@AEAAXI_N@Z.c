/*
 * XREFs of ?SetViewAvailability@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x18021DA2C
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180253160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180254214 (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateControllerLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180477C14 (-UpdateControllerLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::SetViewAvailability(TouchKeyboardExperienceManager *this)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 73) + 48LL) + 176LL))(*(_QWORD *)(*((_QWORD *)this + 73) + 48LL));
}
