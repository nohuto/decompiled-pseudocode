/*
 * XREFs of ?IsExclusiveModeDisabled@@YAHPEBG@Z @ 0x18010D2D0
 * Callers:
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18000CF44 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 * Callees:
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180106258 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall IsExclusiveModeDisabled(const unsigned __int16 *a1, __int64 a2, const struct _tagpropertykey *a3)
{
  unsigned int v3; // ebx
  int PropertyStoreProperty; // eax
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  memset(&pvar, 0, sizeof(pvar));
  PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(a1, a2, a3, &pvar);
  if ( PropertyStoreProperty >= 0 )
  {
    if ( pvar.vt )
      LOBYTE(v3) = pvar.iVal == 0;
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      (__int64)&WPP_74ab4d28651a3ef962dcd31efa958cf9_Traceguids,
      PropertyStoreProperty);
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, (__int64)&WPP_74ab4d28651a3ef962dcd31efa958cf9_Traceguids, v3);
  }
  return v3;
}
