/*
 * XREFs of wil_details_UpdateFeatureConfiguredStates @ 0x140AA4B68
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1407D6110 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x1403A7E90 (RtlQueryFeatureConfiguration.c)
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1404BDF84 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 (__fastcall **wil_details_UpdateFeatureConfiguredStates())()
{
  __int64 (__fastcall **i)(); // rcx
  unsigned int v1; // ecx
  int v2; // eax
  __int16 v3; // dx
  __int16 v4; // dx
  __int64 (__fastcall **result)(); // rax
  volatile signed __int32 **v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]

  for ( i = (__int64 (__fastcall **)())&wil_details_featureDescriptors_a; ; i = (__int64 (__fastcall **)())(v6 + 7) )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v6 = (volatile signed __int32 **)result;
    if ( !result )
      break;
    if ( !*((_BYTE *)result + 29) && !*((_BYTE *)result + 30) && !*((_BYTE *)result + 28) )
    {
      v1 = *((_DWORD *)result + 6);
      v7 = 0LL;
      v8 = 0LL;
      v9 = 0;
      v2 = RtlQueryFeatureConfiguration(v1, 1u, &v7, (__int64)&v8);
      if ( v2 == -2147483614 || v2 == -1073741275 )
        goto LABEL_12;
      if ( v2 )
      {
        if ( v2 == 279 )
        {
          v3 = BYTE4(v8) & 0x80;
          goto LABEL_11;
        }
LABEL_12:
        v4 = 518;
      }
      else
      {
        v3 = BYTE4(v8) & 0xB0 | (4 * (BYTE4(v8) & 0x40));
LABEL_11:
        v4 = (8 * v3) | 0x206;
      }
      _InterlockedXor(*v6, ((unsigned __int16)v4 ^ (unsigned __int16)**v6) & 0xF80);
      continue;
    }
  }
  return result;
}
