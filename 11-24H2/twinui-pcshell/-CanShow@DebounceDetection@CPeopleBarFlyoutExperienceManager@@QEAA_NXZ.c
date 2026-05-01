/*
 * XREFs of ?CanShow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAA_NXZ @ 0x18038832C
 * Callers:
 *     ?IsFlyoutOpen@CPeopleBarFlyoutExperienceManager@@UEAAJPEAE@Z @ 0x180388AE0 (-IsFlyoutOpen@CPeopleBarFlyoutExperienceManager@@UEAAJPEAE@Z.c)
 *     ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x180389900 (-ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPeopleBarFlyoutExperienceManager::DebounceDetection::CanShow(
        CPeopleBarFlyoutExperienceManager::DebounceDetection *this)
{
  return GetTickCount64() - *(_QWORD *)this > 0x64;
}
