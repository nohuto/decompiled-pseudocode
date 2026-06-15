/*
 * XREFs of ?GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x1400234C4
 * Callers:
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140022FF0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140023638 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?InnerGetAPOProperties@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x1400236AC (-InnerGetAPOProperties@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

__int64 __fastcall GetAPOPropertiesInternal(HKEY hKey, const struct _GUID *a2, struct APO_REG_PROPERTIES *a3)
{
  __int64 v6; // rdx
  OLECHAR *v7; // rax
  signed int APOProperties; // ebx
  HKEY hKeya; // [rsp+30h] [rbp-138h] BYREF
  OLECHAR sz[40]; // [rsp+40h] [rbp-128h] BYREF
  WCHAR SubKey[80]; // [rsp+90h] [rbp-D8h] BYREF

  if ( StringFromGUID2(a2, sz, 39) <= 0 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v6 = 39LL;
    v7 = sz;
    do
    {
      if ( !*v7 )
        break;
      ++v7;
      --v6;
    }
    while ( v6 );
    APOProperties = v6 == 0 ? 0x80070057 : 0;
    if ( v6 )
    {
      if ( ((39 - v6) & -(__int64)(v6 != 0)) == 0x26 )
      {
        APOProperties = StringCchPrintfW(SubKey, 0x4BuLL, L"%s\\%s", L"AudioEngine\\AudioProcessingObjects", sz);
        if ( APOProperties >= 0 )
        {
          hKeya = 0LL;
          if ( RegOpenKeyExW(hKey, SubKey, 0, 0x20019u, &hKeya) )
          {
            return (unsigned int)-2005139398;
          }
          else
          {
            APOProperties = InnerGetAPOProperties(hKeya, a2, a3);
            RegCloseKey(hKeya);
          }
        }
      }
      else
      {
        return (unsigned int)-2147418113;
      }
    }
  }
  return (unsigned int)APOProperties;
}
