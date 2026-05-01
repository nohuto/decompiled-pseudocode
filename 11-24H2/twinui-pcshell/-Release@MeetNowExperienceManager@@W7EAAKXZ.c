/*
 * XREFs of ?Release@MeetNowExperienceManager@@W7EAAKXZ @ 0x1803CB650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MeetNowExperienceManager::Release(__int64 a1)
{
  return Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::Release(a1 - 8);
}
