/*
 * XREFs of ?OnStoryboardCompleted@HostingAnimationListener@@UEAAXXZ @ 0x180473410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HostingAnimationListener::OnStoryboardCompleted(HostingAnimationListener *this)
{
  TouchKeyboardExperienceManager::OnSizeOrModeChangeStoryboardCompleted(*((_QWORD *)this + 4), *((_DWORD *)this + 10));
}
