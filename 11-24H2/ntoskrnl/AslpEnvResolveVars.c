/*
 * XREFs of AslpEnvResolveVars @ 0x14080C8B8
 * Callers:
 *     AslEnvExpandStrings2 @ 0x14080C17C (AslEnvExpandStrings2.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1404B73B0 (RtlStringCchCatW.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpEnvResolveVars(
        NTSTRSAFE_PCWSTR pszSrc,
        unsigned int a2,
        wchar_t *a3,
        unsigned int a4,
        __int16 a5,
        __int16 a6,
        unsigned int *a7)
{
  int v7; // ebx
  size_t v8; // r13
  int v9; // r15d
  unsigned int v10; // esi
  unsigned __int64 v12; // r14
  const wchar_t *v14; // r9
  unsigned int v15; // ecx
  __int64 v16; // r11
  unsigned __int64 i; // rdi
  NTSTATUS v18; // ebx
  __int64 v19; // r11
  const char *v20; // r9
  int v21; // r8d

  v7 = 0;
  v8 = a4;
  v9 = 0;
  v10 = 0;
  v12 = 0LL;
  v14 = pszSrc;
  while ( v12 < 4 )
  {
    if ( v7 )
      goto LABEL_38;
    v15 = dword_140E0A190[6 * v12];
    if ( a2 > v15 )
    {
      if ( !wcsnicmp(v14, off_140E0A180[3 * v12], v15) )
      {
        v16 = 3 * v12;
        v10 = a2 + dword_140E0A194[6 * v12] - dword_140E0A190[6 * v12];
        if ( v10 > (unsigned int)v8 )
        {
          v18 = -1073741789;
          goto LABEL_39;
        }
        if ( v12 )
        {
          if ( !v9 )
            goto LABEL_20;
        }
        else
        {
          for ( i = 0LL; i < 16; i += 2LL )
          {
            if ( *(_WORD *)((char *)&unk_140E0A1E0 + i * 8) == a5 && *(_WORD *)((char *)&unk_140E0A1E2 + i * 8) == a6 )
            {
              v18 = RtlStringCchCopyW(a3, v8, L"%systemroot%");
              if ( v18 < 0 )
              {
                v21 = 940;
                goto LABEL_28;
              }
              v18 = RtlStringCchCatW(a3, v8, (&off_140E0A1E8)[i]);
              if ( v18 < 0 )
              {
                v20 = "RtlStringCchCatW failed [%x]";
                v21 = 946;
                goto LABEL_29;
              }
              v18 = RtlStringCchCatW(a3, v8, &pszSrc[dword_140E0A190[0]]);
              if ( v18 < 0 )
              {
                v20 = "RtlStringCchCatW failed [%x]";
                v21 = 952;
                goto LABEL_29;
              }
              v9 = 1;
            }
          }
          if ( v9 )
            goto LABEL_22;
          AslLogCallPrintf(
            1,
            (unsigned int)"AslpEnvResolveVars",
            963,
            (unsigned int)"Invalid combination of Host/Current processor architectures passed to AslpEnvResolveVars Host:"
                          " %x4 Current: %x4");
          v16 = 0LL;
LABEL_20:
          v18 = RtlStringCchCopyW(a3, v8, (&off_140E0A188)[v16]);
          if ( v18 < 0 )
          {
            v21 = 980;
LABEL_28:
            v20 = "RtlStringCchCopyW failed [%x]";
LABEL_29:
            AslLogCallPrintf(1, (unsigned int)"AslpEnvResolveVars", v21, (_DWORD)v20);
            return (unsigned int)v18;
          }
          v18 = RtlStringCchCatW(a3, v8, &pszSrc[dword_140E0A190[2 * v19]]);
          if ( v18 < 0 )
          {
            v20 = "RtlStringCchCatW failed [%x]";
            v21 = 986;
            goto LABEL_29;
          }
        }
LABEL_22:
        v7 = 1;
      }
      v14 = pszSrc;
    }
    ++v12;
  }
  if ( !v7 )
  {
    v10 = a2;
    if ( a2 > (unsigned int)v8 )
    {
      v18 = -1073741789;
      *a7 = a2;
      return (unsigned int)v18;
    }
    v18 = RtlStringCchCopyW(a3, v8, v14);
    if ( v18 < 0 )
    {
      v21 = 1018;
      goto LABEL_28;
    }
  }
LABEL_38:
  v18 = 0;
LABEL_39:
  *a7 = v10;
  return (unsigned int)v18;
}
