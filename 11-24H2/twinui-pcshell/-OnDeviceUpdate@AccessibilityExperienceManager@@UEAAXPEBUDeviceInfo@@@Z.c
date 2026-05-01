/*
 * XREFs of ?OnDeviceUpdate@AccessibilityExperienceManager@@UEAAXPEBUDeviceInfo@@@Z @ 0x18048FA70
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@AccessibilityExperienceManager@@UEAAJH@Z @ 0x1802589F0 (-Show@AccessibilityExperienceManager@@UEAAJH@Z.c)
 */

void __fastcall AccessibilityExperienceManager::OnDeviceUpdate(
        AccessibilityExperienceManager *this,
        const struct DeviceInfo *a2)
{
  int v2; // eax

  v2 = 0;
  if ( a2 )
  {
    if ( (*((_DWORD *)a2 + 1) & 0x4000) != 0 )
    {
      LOBYTE(v2) = *((_BYTE *)a2 + 1548) == 1;
      AccessibilityExperienceManager::Show((AccessibilityExperienceManager *)((char *)this - 8), v2);
    }
  }
}
