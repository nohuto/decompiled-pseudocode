/*
 * XREFs of ?DoesStringSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x18004EA00
 * Callers:
 *     ?GetUniqueTimestamp@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z @ 0x180052F94 (-GetUniqueTimestamp@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18003A238 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::DoesStringSettingExist(
        const WCHAR *this,
        LPCWSTR lpValue,
        unsigned __int16 *a3,
        bool *a4)
{
  LSTATUS ValueW; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0;
  *(_BYTE *)a3 = 0;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, this, lpValue, 2u, 0LL, 0LL, &v11);
  v8 = ValueW;
  if ( ValueW > 0 )
    v8 = (unsigned __int16)ValueW | 0x80070000;
  if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147024894 )
  {
    *(_BYTE *)a3 = (v8 & 0x80000000) == 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xEC,
      (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
      (const char *)v8,
      (unsigned __int64)"RegKey: %ws %ws",
      (const char *)this,
      lpValue);
    return v8;
  }
}
