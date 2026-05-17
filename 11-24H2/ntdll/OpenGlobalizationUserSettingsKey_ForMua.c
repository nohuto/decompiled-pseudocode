/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForMua @ 0x180080384
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x180034720 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadLanguageConfigList @ 0x1800347C0 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18007EF80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x18007FDF0 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlGetPersistedStateLocation @ 0x180026620 (RtlGetPersistedStateLocation.c)
 *     RtlConvertSidToUnicodeString @ 0x180038E40 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180075AB0 (RtlAppendUnicodeStringToString.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180080044 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     IdnaMemAlloc @ 0x180080824 (IdnaMemAlloc.c)
 *     RtlInitUnicodeStringEx @ 0x180082640 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeToString @ 0x1800B2BB0 (RtlAppendUnicodeToString.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     NtQueryInformationToken @ 0x1801620B0 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForMua(unsigned int a1, __int64 a2, HANDLE *a3, _DWORD *a4)
{
  unsigned int v4; // esi
  HANDLE *v6; // r12
  int v7; // r13d
  __int64 v8; // r15
  int InformationToken; // ebx
  HANDLE *v10; // rcx
  __int64 v12; // rax
  unsigned __int16 v13; // bx
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned int v16; // esi
  void *v17; // r12
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h]
  HANDLE Handle[2]; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE *v22; // [rsp+68h] [rbp-98h]
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  __int128 v24; // [rsp+80h] [rbp-80h] BYREF
  __int128 v25; // [rsp+90h] [rbp-70h]
  __int128 v26; // [rsp+A0h] [rbp-60h]
  _BYTE Src[528]; // [rsp+B0h] [rbp-50h] BYREF

  v22 = a3;
  v4 = a1;
  *(_QWORD *)&v26 = 0LL;
  v6 = a3;
  DWORD2(v26) = 0;
  UnicodeString = 0LL;
  v7 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v8 = IdnaMemAlloc(84LL);
  if ( v8 )
  {
    LODWORD(Handle[0]) = 0;
    InformationToken = NtQueryInformationToken(-6LL, 1LL, v8, 84LL, Handle);
    if ( InformationToken < 0 )
      goto LABEL_7;
    v12 = *(_QWORD *)v8;
    if ( *(_BYTE *)(*(_QWORD *)v8 + 1LL) < 2u
      || *(_BYTE *)(v12 + 1) == 5 && *(_DWORD *)(v12 + 8) == 21 && *(_DWORD *)(v12 + 24) == 503 )
    {
      *a4 = 0;
      goto LABEL_8;
    }
    InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)v12, 1u);
    if ( InformationToken < 0 )
    {
LABEL_7:
      if ( !v7 )
      {
LABEL_9:
        RtlpSysVolFree(v8);
        return (unsigned int)InformationToken;
      }
LABEL_8:
      InformationToken = OpenGlobalizationUserSettingsKey_ForSingleUserModel(v4, v6);
      goto LABEL_9;
    }
    LODWORD(Handle[0]) = 0;
    InformationToken = RtlGetPersistedStateLocation(
                         (wchar_t *)L"GlobalizationUserSettings",
                         L"TargetNtPath",
                         L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\International",
                         0,
                         Src,
                         0x208u,
                         (unsigned int *)Handle);
    if ( InformationToken >= 0 )
    {
      v13 = LOWORD(Handle[0]) + UnicodeString.Length + 4;
      v14 = IdnaMemAlloc(v13);
      v15 = v14;
      if ( v14 )
      {
        v19 = 0LL;
        WORD1(v19) = v13;
        v20 = v14;
        *(_OWORD *)Handle = 0LL;
        if ( (int)RtlInitUnicodeStringEx(Handle, Src) < 0 )
        {
          InformationToken = -1073741789;
          goto LABEL_4;
        }
        v16 = LOWORD(Handle[0]);
        if ( LOWORD(Handle[0]) + (unsigned int)(unsigned __int16)v19 > WORD1(v19) )
        {
          InformationToken = -1073741789;
        }
        else
        {
          v17 = (void *)(v20 + 2 * ((unsigned __int64)(unsigned __int16)v19 >> 1));
          memmove(v17, Src, LOWORD(Handle[0]));
          LOWORD(v19) = v16 + v19;
          if ( (unsigned int)(unsigned __int16)v19 + 1 < WORD1(v19) )
            *((_WORD *)v17 + ((unsigned __int64)v16 >> 1)) = 0;
          InformationToken = RtlAppendUnicodeToString(&v19, L"\\");
          if ( InformationToken >= 0 )
          {
            InformationToken = RtlAppendUnicodeStringToString((unsigned __int16 *)&v19, (const void **)&UnicodeString);
            if ( InformationToken >= 0 )
            {
              LODWORD(v24) = 48;
              *(_QWORD *)&v25 = &v19;
              *((_QWORD *)&v24 + 1) = 0LL;
              DWORD2(v25) = 576;
              Handle[0] = 0LL;
              v26 = 0LL;
              if ( (int)NtOpenKey(Handle, 131097LL, &v24) >= 0 )
              {
                NtClose(Handle[0]);
                v6 = v22;
                v4 = a1;
                v10 = v22;
                *a4 = 2;
                InformationToken = NtOpenKey(v10, a1, &v24);
LABEL_4:
                RtlpSysVolFree(v15);
                goto LABEL_5;
              }
              *a4 = 1;
              v7 = 1;
            }
          }
          v6 = v22;
        }
        v4 = a1;
        goto LABEL_4;
      }
      InformationToken = -1073741801;
    }
LABEL_5:
    if ( UnicodeString.Buffer )
      RtlpSysVolFree((__int64)UnicodeString.Buffer);
    goto LABEL_7;
  }
  return (unsigned int)-1073741801;
}
