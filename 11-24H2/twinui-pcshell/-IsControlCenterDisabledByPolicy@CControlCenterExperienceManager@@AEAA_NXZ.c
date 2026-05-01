/*
 * XREFs of ?IsControlCenterDisabledByPolicy@CControlCenterExperienceManager@@AEAA_NXZ @ 0x180375118
 * Callers:
 *     ?ShowExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x1802C74C0 (-ShowExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x18018ED94 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

char __fastcall CControlCenterExperienceManager::IsControlCenterDisabledByPolicy(CControlCenterExperienceManager *this)
{
  char v2; // bl
  int pvData; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-BCh] BYREF
  DWORD v5; // [rsp+48h] [rbp-B8h] BYREF
  void *v6[4]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v7[264]; // [rsp+70h] [rbp-90h] BYREF

  pvData = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Policies\\Microsoft\\Windows\\Explorer",
          L"DisableControlCenter",
          0x10u,
          0LL,
          &pvData,
          &pcbData) )
    return pvData == 1;
  memset_0(v7, 0, 0x208uLL);
  v5 = 520;
  if ( RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Policies\\Microsoft\\Windows\\Explorer",
         L"DisableControlCenter",
         2u,
         0LL,
         v7,
         &v5) )
  {
    return 0;
  }
  std::wstring::wstring((char **)v6, v7);
  v2 = std::wstring::_Equal((char *)v6, (char *)L"1");
  std::wstring::_Tidy_deallocate(v6);
  return v2;
}
