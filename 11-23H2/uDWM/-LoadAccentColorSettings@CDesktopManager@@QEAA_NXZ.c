/*
 * XREFs of ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ @ 0x180020C8C
 * Callers:
 *     ?HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ @ 0x18001A988 (-HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18002FF48 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ @ 0x180034AC0 (-GetRoundedBorderColor@CTopLevelWindow@@AEAA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800401B0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z @ 0x18006C808 (-GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CDesktopManager::LoadAccentColorSettings(CDesktopManager *this)
{
  char v1; // di
  char v3; // si
  char v4; // r14
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v9; // eax
  int v10; // [rsp+50h] [rbp+30h] BYREF
  int v11; // [rsp+58h] [rbp+38h] BYREF
  int v12; // [rsp+60h] [rbp+40h] BYREF

  v1 = 0;
  v10 = 0;
  v12 = 0;
  v3 = 0;
  v11 = 0;
  v4 = 0;
  (*(void (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 9)
                                                         + 8LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
    L"ColorPrevalence",
    &v10);
  v5 = v10;
  if ( v10 )
  {
    if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 9)
                                                               + 8LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
           L"AccentColor",
           &v12) >= 0 )
      v3 = v12 != 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 9)
                                                                   + 8LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
           L"AccentColorInactive",
           &v11);
    v6 = v11;
    if ( v9 >= 0 && v11 )
      v4 = 1;
    v5 = v10;
  }
  else
  {
    v6 = v11;
  }
  v7 = v12;
  if ( v5 != *((_DWORD *)this + 159)
    || v3 != *((_BYTE *)this + 633)
    || v12 != *((_DWORD *)this + 160)
    || v4 != *((_BYTE *)this + 634)
    || v6 != *((_DWORD *)this + 161) )
  {
    v1 = 1;
    *((_DWORD *)this + 159) = v5;
    *((_DWORD *)this + 160) = v7;
    *((_BYTE *)this + 633) = v3;
    *((_DWORD *)this + 161) = v6;
    *((_BYTE *)this + 634) = v4;
  }
  *((_BYTE *)this + 632) = 1;
  return v1;
}
