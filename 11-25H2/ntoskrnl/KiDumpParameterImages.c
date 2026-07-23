/*
 * XREFs of KiDumpParameterImages @ 0x1405B02A8
 * Callers:
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     KiDisplayBlueScreen @ 0x1405AFF14 (KiDisplayBlueScreen.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402AA5A0 (MmIsAddressValidEx.c)
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     RtlStringCbPrintfA @ 0x140537888 (RtlStringCbPrintfA.c)
 *     KiBugCheckUnicodeToAnsi @ 0x1405AF724 (KiBugCheckUnicodeToAnsi.c)
 *     KiPcToFileHeader @ 0x1405B082C (KiPcToFileHeader.c)
 *     MmLocateUnloadedDriver @ 0x1406608B8 (MmLocateUnloadedDriver.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall KiDumpParameterImages(NTSTRSAFE_PSTR pszDest, const void **a2, unsigned int a3, char a4)
{
  __int64 v6; // r15
  const void *v7; // rbx
  unsigned int TimeDateStamp; // r13d
  const void *v9; // r14
  __int64 UnloadedDriver; // rax
  unsigned __int16 *v11; // rdi
  unsigned __int16 *v12; // rcx
  __int64 v13; // rdi
  void *v14; // rdx
  ULONG v15; // ebx
  const char *v16; // r9
  const void *v17; // rbx
  unsigned int v18; // r13d
  const void *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  void *v23; // rdx
  ULONG v24; // ebx
  const char *v25; // r9
  char v26; // [rsp+40h] [rbp-89h]
  _BYTE v27[7]; // [rsp+41h] [rbp-88h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+48h] [rbp-81h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-79h] BYREF
  char v30[128]; // [rsp+60h] [rbp-69h] BYREF

  v29[0] = 0LL;
  v26 = 1;
  v27[0] = 0;
  if ( pszDest )
    *pszDest = 0;
  if ( a3 )
  {
    v6 = a3;
    if ( a4 )
    {
      while ( 1 )
      {
        v7 = *a2;
        TimeDateStamp = 0;
        v9 = (const void *)KiPcToFileHeader(*a2, v29, 1LL, v27);
        if ( v9 )
          break;
        UnloadedDriver = MmLocateUnloadedDriver(v7);
        v11 = (unsigned __int16 *)UnloadedDriver;
        if ( UnloadedDriver )
        {
          v9 = *(const void **)(UnloadedDriver + 16);
          v12 = (unsigned __int16 *)UnloadedDriver;
LABEL_12:
          v15 = (_DWORD)v7 - (_DWORD)v9;
          KiBugCheckUnicodeToAnsi(v12, v30);
          if ( pszDest )
          {
            v16 = "\r\n*";
            if ( !v26 )
              v16 = "*";
            RtlStringCbPrintfA(
              pszDest,
              0x80uLL,
              "%s**  %12s - Address %p base at %p, DateStamp %08lx\r\n",
              v16,
              v30,
              *a2,
              v9,
              TimeDateStamp);
          }
          *(_QWORD *)&KiBugCheckDriver = v11;
          KiBugCheckDriverOffset = v15;
          v26 = 0;
        }
        ++a2;
        if ( !--v6 )
          return;
      }
      v13 = v29[0];
      if ( MmIsAddressValidEx(*(_QWORD *)(v29[0] + 48LL)) )
      {
        v14 = *(void **)(v13 + 48);
        OutHeaders = 0LL;
        RtlImageNtHeaderEx(1u, v14, 0LL, &OutHeaders);
        if ( OutHeaders )
          TimeDateStamp = OutHeaders->FileHeader.TimeDateStamp;
      }
      v11 = (unsigned __int16 *)(v13 + 88);
      v12 = v11;
      goto LABEL_12;
    }
    while ( 1 )
    {
      v17 = *a2;
      v18 = 0;
      v19 = (const void *)KiPcToFileHeader(*a2, v29, 1LL, v27);
      if ( v19 )
        break;
      v20 = MmLocateUnloadedDriver(v17);
      v21 = v20;
      if ( v20 )
      {
        v19 = *(const void **)(v20 + 16);
LABEL_26:
        v24 = (_DWORD)v17 - (_DWORD)v19;
        if ( pszDest )
        {
          v25 = "\r\n*";
          if ( !v26 )
            v25 = "*";
          RtlStringCbPrintfA(
            pszDest,
            0x80uLL,
            "%s**  %12s - Address %p base at %p, DateStamp %08lx\r\n",
            v25,
            v30,
            *a2,
            v19,
            v18);
        }
        *(_QWORD *)&KiBugCheckDriver = v21;
        KiBugCheckDriverOffset = v24;
        v26 = 0;
      }
      ++a2;
      if ( !--v6 )
        return;
    }
    v22 = v29[0];
    if ( MmIsAddressValidEx(*(_QWORD *)(v29[0] + 48LL)) )
    {
      v23 = *(void **)(v22 + 48);
      OutHeaders = 0LL;
      RtlImageNtHeaderEx(1u, v23, 0LL, &OutHeaders);
      if ( OutHeaders )
        v18 = OutHeaders->FileHeader.TimeDateStamp;
    }
    v21 = v22 + 88;
    goto LABEL_26;
  }
}
