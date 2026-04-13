/*
 * XREFs of ?IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ @ 0x180053144
 * Callers:
 *     ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x18005208C (-GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z.c)
 *     ?IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800AD4A8 (-IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 * Callees:
 *     memset_0 @ 0x180022921 (memset_0.c)
 *     ?GetDomainName@Details@Policy@CreativeFramework@@YA_NPEAGK@Z @ 0x180051588 (-GetDomainName@Details@Policy@CreativeFramework@@YA_NPEAGK@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

bool __fastcall CreativeFramework::Policy::IsAnyMicrosoftDomainAccount(CreativeFramework::Policy *this)
{
  unsigned __int16 *v1; // rdx
  WCHAR StringSource[104]; // [rsp+30h] [rbp-E8h] BYREF

  memset_0(StringSource, 0, 0xC8uLL);
  return CreativeFramework::Policy::Details::GetDomainName(StringSource, v1)
      && FindStringOrdinal(0x200000u, StringSource, -1, L".MICROSOFT.COM", -1, 1) >= 0;
}
