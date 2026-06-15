/*
 * XREFs of ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x1800916C8
 * Callers:
 *     ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x180042594 (-_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z.c)
 * Callees:
 *     ?StringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1800719A8 (-StringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?sndRegQueryValue@@YAHPEAUHKEY__@@PEBG1KPEAG@Z @ 0x18007F2D0 (-sndRegQueryValue@@YAHPEAUHKEY__@@PEBG1KPEAG@Z.c)
 *     ?GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z @ 0x1800A1E1C (-GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z.c)
 *     ?sndRegQueryUserValue@@YAHPEBG0KPEAG@Z @ 0x1800A44A4 (-sndRegQueryUserValue@@YAHPEBG0KPEAG@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinsoundHKCURead@@@details@wil@@QEAA_NXZ @ 0x1801460DC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WinsoundHKCURead@@@deta.c)
 */

_BOOL8 __fastcall sndQueryRegistry(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned int *a6,
        HKEY hkey)
{
  BOOL v8; // ebx
  const unsigned __int16 *v9; // rdx
  const unsigned __int16 *v10; // r8
  HKEY v12; // rcx
  const unsigned __int16 *v13; // rdx
  const unsigned __int16 *v14; // r8
  int Value; // eax
  int UserValue; // eax
  int pvData; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR String1[2]; // [rsp+44h] [rbp-BCh] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR SubKey[304]; // [rsp+50h] [rbp-B0h] BYREF

  pvData = 0;
  v8 = 0;
  if ( GetSoundRegistryPath(SubKey, (unsigned __int64)a2, a3, a2, a3) )
  {
    if ( hkey
       ? sndRegQueryValue(hkey, SubKey, v10, 0x104u, a4)
       : (unsigned int)sndRegQueryUserValue(SubKey, v9, 0x104u, a4) )
    {
      pcbData = 4;
      v12 = HKEY_CURRENT_USER;
      if ( hkey )
        v12 = hkey;
      if ( !RegGetValueW(v12, SubKey, gszDefaultFlags, 0x10u, 0LL, &pvData, &pcbData) )
        pvData &= 0x380002u;
      if ( !(unsigned int)StringCbCatW(SubKey, 0x25CuLL, (char *)gszSlash)
        && !(unsigned int)StringCbCatW(SubKey, 0x25CuLL, (char *)aszActiveKey) )
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WinsoundHKCURead>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_WinsoundHKCURead>::GetImpl'::`2'::impl) )
        {
          *(_DWORD *)String1 = 0;
          if ( hkey )
            Value = sndRegQueryValue(hkey, SubKey, v14, 4u, String1);
          else
            Value = sndRegQueryUserValue(SubKey, v13, 4u, String1);
          if ( Value && lstrcmpW(String1, aszBoolOne) )
            goto LABEL_25;
          goto LABEL_17;
        }
        if ( hkey )
          UserValue = sndRegQueryValue(hkey, SubKey, v14, 0x12Eu, SubKey);
        else
          UserValue = sndRegQueryUserValue(SubKey, v13, 0x12Eu, SubKey);
        if ( !UserValue )
        {
LABEL_17:
          v8 = 1;
          goto LABEL_25;
        }
        v8 = lstrcmpW(SubKey, aszBoolOne) == 0;
      }
    }
  }
LABEL_25:
  if ( pvData )
    *a6 |= pvData;
  return v8;
}
