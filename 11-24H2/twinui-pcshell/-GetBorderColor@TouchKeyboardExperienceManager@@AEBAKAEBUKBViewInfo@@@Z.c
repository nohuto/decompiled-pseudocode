/*
 * XREFs of ?GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z @ 0x1801A88D4
 * Callers:
 *     ?UpdateBorderStyle@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@AEBUKBViewInfo@@@Z @ 0x1801A8784 (-UpdateBorderStyle@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@AEBUKBViewInfo@@@Z.c)
 *     ?UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1801E2D68 (-UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x180112FA4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 */

DWORD __fastcall TouchKeyboardExperienceManager::GetBorderColor(
        TouchKeyboardExperienceManager *this,
        const struct KBViewInfo *a2)
{
  DWORD result; // eax
  unsigned int v4; // r9d
  __int64 v5; // rdx
  __int128 pvParam; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF

  result = -2;
  if ( *((_DWORD *)a2 + 40) == 1 )
  {
    pvParam = 0LL;
    LODWORD(pvParam) = 16;
    if ( SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0) && (BYTE4(pvParam) & 1) != 0 )
    {
      return GetSysColor(8);
    }
    else
    {
      v7 = 1;
      SHRegGetBOOLWithREGSAM(
        HKEY_CURRENT_USER,
        L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
        L"AppsUseLightTheme",
        v4,
        &v7);
      if ( *((_BYTE *)this + (-(__int64)(v7 != 0) & 0x210) + 1548)
        && *(_QWORD *)((char *)this + (-(__int64)(v7 != 0) & 0x210) + 1072) )
      {
        LOBYTE(v5) = -(v7 != 0);
        return GetColorFromColorString((char *)this + (-(__int64)(v7 != 0) & 0x210) + 1056, v5);
      }
      else
      {
        return -1;
      }
    }
  }
  return result;
}
