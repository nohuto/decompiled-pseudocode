/*
 * XREFs of _GetOverlayPackageKeyForLanguage @ 0x18007F0DC
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x18007EE60 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x180053020 (RtlGetPersistedStateLocation.c)
 *     RtlAppendUnicodeToString @ 0x18007F450 (RtlAppendUnicodeToString.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

int __fastcall GetOverlayPackageKeyForLanguage(PCWSTR Source, PHANDLE KeyHandle)
{
  size_t v4; // rax
  unsigned int v5; // edi
  wchar_t *v6; // rsi
  int result; // eax
  size_t v8; // rax
  unsigned int v9; // edi
  wchar_t *v10; // rsi
  size_t v11; // rax
  unsigned int v12; // edi
  wchar_t *v13; // rsi
  size_t v14; // rax
  unsigned int v15; // edi
  wchar_t *v16; // rsi
  size_t v17; // rax
  unsigned int v18; // edi
  wchar_t *v19; // rsi
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR String[256]; // [rsp+80h] [rbp-80h] BYREF
  char v23; // [rsp+280h] [rbp+180h] BYREF

  if ( !Source )
    return -1073741811;
  *(_QWORD *)&Destination.Length = 0x2000000LL;
  Destination.Buffer = (wchar_t *)&v23;
  v4 = wcslen(L"\\Registry\\Machine\\");
  if ( v4 > 0x7FFE )
    return -1073741789;
  v5 = (unsigned __int16)(2 * v4);
  if ( v5 + Destination.Length > Destination.MaximumLength )
    return -1073741789;
  v6 = &Destination.Buffer[(unsigned __int64)Destination.Length >> 1];
  memmove(v6, L"\\Registry\\Machine\\", (unsigned __int16)(2 * v4));
  Destination.Length += v5;
  if ( (unsigned int)Destination.Length + 1 < Destination.MaximumLength )
    v6[(unsigned __int64)v5 >> 1] = 0;
  result = RtlGetPersistedStateLocation(
             L"LanguageOverlayKeyName",
             0LL,
             L"Software\\Microsoft\\LanguageOverlay",
             LocationTypeRegistry,
             String,
             0x200u,
             0LL);
  if ( result >= 0 )
  {
    v8 = wcslen(String);
    if ( v8 <= 0x7FFE )
    {
      v9 = (unsigned __int16)(2 * v8);
      if ( v9 + Destination.Length <= Destination.MaximumLength )
      {
        v10 = &Destination.Buffer[(unsigned __int64)Destination.Length >> 1];
        memmove(v10, String, (unsigned __int16)(2 * v8));
        Destination.Length += v9;
        if ( (unsigned int)Destination.Length + 1 < Destination.MaximumLength )
          v10[(unsigned __int64)v9 >> 1] = 0;
        v11 = wcslen(L"\\");
        if ( v11 <= 0x7FFE )
        {
          v12 = (unsigned __int16)(2 * v11);
          if ( v12 + Destination.Length <= Destination.MaximumLength )
          {
            v13 = &Destination.Buffer[(unsigned __int64)Destination.Length >> 1];
            memmove(v13, L"\\", (unsigned __int16)(2 * v11));
            Destination.Length += v12;
            if ( (unsigned int)Destination.Length + 1 < Destination.MaximumLength )
              v13[(unsigned __int64)v12 >> 1] = 0;
            v14 = wcslen(L"OverlayPackages");
            if ( v14 <= 0x7FFE )
            {
              v15 = (unsigned __int16)(2 * v14);
              if ( v15 + Destination.Length <= Destination.MaximumLength )
              {
                v16 = &Destination.Buffer[(unsigned __int64)Destination.Length >> 1];
                memmove(v16, L"OverlayPackages", (unsigned __int16)(2 * v14));
                Destination.Length += v15;
                if ( (unsigned int)Destination.Length + 1 < Destination.MaximumLength )
                  v16[(unsigned __int64)v15 >> 1] = 0;
                v17 = wcslen(L"\\");
                if ( v17 <= 0x7FFE )
                {
                  v18 = (unsigned __int16)(2 * v17);
                  if ( v18 + Destination.Length <= Destination.MaximumLength )
                  {
                    v19 = &Destination.Buffer[(unsigned __int64)Destination.Length >> 1];
                    memmove(v19, L"\\", (unsigned __int16)(2 * v17));
                    Destination.Length += v18;
                    if ( (unsigned int)Destination.Length + 1 < Destination.MaximumLength )
                      v19[(unsigned __int64)v18 >> 1] = 0;
                    result = RtlAppendUnicodeToString(&Destination, Source);
                    if ( result >= 0 )
                    {
                      *(_QWORD *)&ObjectAttributes.Length = 48LL;
                      ObjectAttributes.ObjectName = &Destination;
                      *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
                      *KeyHandle = 0LL;
                      ObjectAttributes.RootDirectory = 0LL;
                      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                      return NtOpenKey(KeyHandle, 0x20019u, &ObjectAttributes);
                    }
                    return result;
                  }
                }
              }
            }
          }
        }
      }
    }
    return -1073741789;
  }
  return result;
}
