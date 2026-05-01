/*
 * XREFs of ?ShowBorder@DesktopSingleViewShellExperiencePersonality@@UEAAJW4Border@CSingleViewShellExperience@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1801D9190
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall DesktopSingleViewShellExperiencePersonality::ShowBorder(
        __int64 a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        int a3,
        unsigned int a4,
        __int64 a5)
{
  char v7; // si
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  int v11; // ecx
  _QWORD v13[3]; // [rsp+20h] [rbp-30h] BYREF
  int v14; // [rsp+38h] [rbp-18h] BYREF
  int v15; // [rsp+3Ch] [rbp-14h]
  __int64 v16; // [rsp+40h] [rbp-10h]

  v7 = (char)a2;
  v10 = ExperienceManagerUtils::WindowFromViewWrapper(*(ExperienceManagerUtils **)(*(_QWORD *)(a1 + 8) + 24LL), a2);
  v11 = 1024;
  if ( a5 )
    v11 = 3584;
  v15 = v11;
  v14 = a3;
  v16 = a4;
  if ( (v7 & 1) != 0 )
  {
    v11 |= 0x20u;
    v15 = v11;
  }
  if ( (v7 & 2) != 0 )
  {
    v11 |= 0x40u;
    v15 = v11;
  }
  if ( (v7 & 4) != 0 )
  {
    v11 |= 0x80u;
    v15 = v11;
  }
  if ( (v7 & 8) != 0 )
    v15 = v11 | 0x100;
  v13[0] = 19LL;
  v13[1] = &v14;
  v13[2] = 16LL;
  SetWindowCompositionAttribute(v10, v13, v8, v9);
  if ( a5 )
    DwmpUpdateAccentBlurRect(v10, a5);
  return 0LL;
}
