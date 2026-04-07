/*
 * XREFs of ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x1800085D0
 * Callers:
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x180008590 (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800D5E78 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_WillWindowEndCloaked@CStoryboard@@KA_NPEBVCWindowData@@@Z @ 0x1800DE9F0 (-_WillWindowEndCloaked@CStoryboard@@KA_NPEBVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E0E10 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x180008650 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CWindowPropertyTracker::GetWindowEndCloak(CWindowPropertyTracker *this, HWND a2, bool *a3)
{
  unsigned int v5; // ebx
  int Record; // eax
  __int64 v8; // rcx

  v5 = -2147467259;
  Record = CWindowPropertyTracker::_FindRecord(this, a2);
  if ( Record >= 0 )
  {
    _mm_lfence();
    v8 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    if ( (*(_BYTE *)(v8 + 40) & 1) != 0 )
    {
      v5 = 0;
      *a3 = *(_BYTE *)(v8 + 100);
    }
  }
  return v5;
}
