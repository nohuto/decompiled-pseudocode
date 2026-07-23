/*
 * XREFs of GetLCIDFromLangListNodeWithLICCheck @ 0x18001D670
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B3A0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x18001DC50 (LdrpSearchResourceSection_U.c)
 *     LdrResFallbackLangList @ 0x18008ADF0 (LdrResFallbackLangList.c)
 *     LdrLoadAlternateResourceModule @ 0x1800F3250 (LdrLoadAlternateResourceModule.c)
 *     RtlGetThreadLangIdByIndex @ 0x180114F10 (RtlGetThreadLangIdByIndex.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180089DF0 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpIsALicensedLIPLanguage @ 0x180089EE8 (RtlpIsALicensedLIPLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180089F60 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall GetLCIDFromLangListNodeWithLICCheck(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 *a4,
        bool *a5)
{
  unsigned __int64 v5; // r14
  unsigned int v7; // edi
  _QWORD *v9; // rax
  _QWORD *v10; // rbp
  LCID v11; // eax
  unsigned __int16 *v12; // r9
  int v13; // ecx
  unsigned __int16 v14; // ax
  __int64 v15; // rax
  int v17; // ecx
  unsigned __int16 v18; // ax
  __int64 v19; // r8
  wchar_t *Buffer; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int16 v24[2]; // [rsp+20h] [rbp-118h] BYREF
  DWORD Lcid; // [rsp+24h] [rbp-114h] BYREF
  _UNICODE_STRING String; // [rsp+28h] [rbp-110h] BYREF
  _BYTE v27[176]; // [rsp+40h] [rbp-F8h] BYREF

  v5 = a3;
  v7 = 0;
  Lcid = 0;
  v24[0] = 0;
  String = 0LL;
  memset_thunk_772440563353939046(v27, 0, 0xAAuLL);
  if ( !a2 || !a4 || !a5 || (unsigned __int16)v5 >= *(_WORD *)(a2 + 4) )
    return (unsigned int)-1073741811;
  v9 = *(_QWORD **)(a2 + 16);
  v10 = g_RegInfo;
  *a5 = 0;
  if ( v9 )
    v10 = v9;
  v11 = *a4;
  if ( !(_WORD)v11 )
  {
    *a4 = 0;
    v12 = (unsigned __int16 *)(*(_QWORD *)(a2 + 24) + 6 * v5);
    v13 = *v12;
    if ( v13 == 2 )
    {
      v14 = *(_WORD *)(28LL * (__int16)v12[2] + *(_QWORD *)(v10[3] + 16LL) + 4);
      *a4 = v14;
      if ( v14 )
      {
LABEL_10:
        v15 = *(_QWORD *)(a2 + 32);
        *a5 = !_bittest64(&v15, v5);
        return v7;
      }
      v22 = 28LL * (__int16)v12[2];
      v23 = *(_QWORD *)(v10[3] + 16LL);
      if ( *(__int16 *)(v22 + v23 + 6) <= 0 )
        return (unsigned int)-1073741595;
      v21 = *(__int16 *)(v22 + v23 + 6);
    }
    else
    {
      v17 = v13 - 1;
      if ( !v17 )
      {
        v18 = v12[2];
LABEL_14:
        *a4 = v18;
        goto LABEL_10;
      }
      if ( v17 != 2 )
        return (unsigned int)-1073741595;
      v21 = (__int16)v12[2];
    }
    RtlInitUnicodeString(
      &String,
      (PCWSTR)(*(_QWORD *)(v10[4] + 24LL) + 2LL * *(__int16 *)(*(_QWORD *)(v10[4] + 16LL) + 2 * v21)));
    if ( RtlCultureNameToLCID(&String, &Lcid) )
    {
      v18 = Lcid;
      goto LABEL_14;
    }
    return (unsigned int)-1073741595;
  }
  String.MaximumLength = 170;
  String.Buffer = (wchar_t *)v27;
  if ( RtlLCIDToCultureName(v11, &String) )
  {
    if ( *((_DWORD *)v10 + 30) >= 0x3E8u )
    {
      Buffer = String.Buffer;
      if ( (int)RtlpIsALicensedRegularLanguage(v10, String.Buffer) < 0
        && (int)RtlpIsALicensedLIPLanguage(v10, Buffer) < 0 )
      {
        *a5 = 1;
      }
    }
    else
    {
      LOBYTE(v19) = 1;
      if ( (int)((__int64 (__fastcall *)(_QWORD *, wchar_t *, __int64, __int16 *))RtlpMuiRegGetInstalledLanguageIndexByName)(
                  v10,
                  String.Buffer,
                  v19,
                  v24) < 0 )
        *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v7;
}
