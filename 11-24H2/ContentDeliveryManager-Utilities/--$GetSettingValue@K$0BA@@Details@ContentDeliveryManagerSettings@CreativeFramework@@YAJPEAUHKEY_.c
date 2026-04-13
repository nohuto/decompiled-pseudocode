/*
 * XREFs of ??$GetSettingValue@K$0BA@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x18004611C
 * Callers:
 *     ?IsContentDeliveryAllowedOverrideInEffect@ContentDeliveryManagerDebugSettings@CreativeFramework@@YA_NPEA_N@Z @ 0x1800535A4 (-IsContentDeliveryAllowedOverrideInEffect@ContentDeliveryManagerDebugSettings@CreativeFramework@.c)
 *     ?GetBoolSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEA_N@Z @ 0x18006175C (-GetBoolSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEA_N@Z.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18003A238 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::Details::GetSettingValue<unsigned long,16>(
        HKEY a1,
        const WCHAR *a2,
        const WCHAR *a3,
        __int64 a4,
        _DWORD *a5,
        DWORD a6)
{
  _DWORD *v6; // rsi
  wchar_t *v7; // rdi
  LSTATUS ValueW; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+68h] [rbp+20h] BYREF

  v6 = a5;
  v13 = 0;
  v7 = (wchar_t *)a3;
  a6 = 4;
  *a5 = 0;
  ValueW = RegGetValueW(a1, a2, a3, 0x10u, 0LL, &v13, &a6);
  v10 = ValueW;
  if ( ValueW > 0 )
    v10 = (unsigned __int16)ValueW | 0x80070000;
  if ( (v10 & 0x80000000) == 0 )
  {
    *v6 = v13;
    return 0LL;
  }
  if ( v10 == -2147024894 )
    return 0LL;
  if ( !v7 )
    v7 = word_1800E78BC;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x51,
    (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
    (const char *)v10,
    (unsigned __int64)"RegKey: %ws %ws",
    (const char *)a2,
    v7);
  return v10;
}
