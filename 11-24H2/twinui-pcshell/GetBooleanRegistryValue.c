/*
 * XREFs of GetBooleanRegistryValue @ 0x1802C0C6C
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800EF2C4 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x180112FA4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 */

bool *__fastcall GetBooleanRegistryValue(bool *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // r9d
  bool v6; // zf
  int v8; // [rsp+50h] [rbp+18h] BYREF
  int v9; // [rsp+54h] [rbp+1Ch]

  v9 = HIDWORD(a3);
  v8 = 0;
  if ( (int)SHRegGetBOOLWithREGSAM(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
              L"EnableDesktopModePenAutoInvoke",
              a4,
              &v8) >= 0
    || (int)SHRegGetBOOLWithREGSAM(
              HKEY_LOCAL_MACHINE,
              L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
              L"EnableDesktopModePenAutoInvoke",
              v5,
              &v8) >= 0 )
  {
    v6 = v8 == 0;
    a1[1] = 1;
    *a1 = !v6;
  }
  else
  {
    a1[1] = 0;
  }
  return a1;
}
