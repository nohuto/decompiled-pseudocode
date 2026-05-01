/*
 * XREFs of ?GetIids@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180382390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTaskContinuityActivitiesExperienceManager::GetIids(__int64 a1, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::GetIids(
           a1 - 16,
           a2,
           a3);
}
