/*
 * XREFs of ?GetVolume@GamingOverlayExperienceManager@@UEAAJHPEAH@Z @ 0x180350FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GamingOverlayExperienceManager::GetVolume(GamingOverlayExperienceManager *this, int a2, int *a3)
{
  GamingAudio::AppList *v3; // rcx

  v3 = (GamingAudio::AppList *)*((_QWORD *)this + 161);
  if ( v3 )
    return GamingAudio::AppList::GetVolume(v3, a2, a3);
  else
    return 0LL;
}
