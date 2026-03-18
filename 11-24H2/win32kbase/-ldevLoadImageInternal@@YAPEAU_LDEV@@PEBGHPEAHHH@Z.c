/*
 * XREFs of ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x14010204C
 * Callers:
 *     ldevLoadImage @ 0x140101890 (ldevLoadImage.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x14004F4DC (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     MakeSystemRelativePath @ 0x140101F10 (MakeSystemRelativePath.c)
 *     ldevTryReferenceLoadedDisplayDriver @ 0x14012834C (ldevTryReferenceLoadedDisplayDriver.c)
 *     FreeSystemRelativePath @ 0x140146330 (FreeSystemRelativePath.c)
 *     MakeSystemDriversRelativePath @ 0x14015C610 (MakeSystemDriversRelativePath.c)
 *     wcsrchr @ 0x1401A05F8 (wcsrchr.c)
 *     _strnicmp @ 0x1401A071C (_strnicmp.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

struct _LDEV *__fastcall ldevLoadImageInternal(PCWSTR Source, int a2, int *a3, int a4, int a5)
{
  struct _LDEV *v5; // rbx
  int v7; // esi
  __int64 v10; // r12
  BOOL v11; // r15d
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // ebx
  SYSTEM_INFORMATION_CLASS v19; // ecx
  NTSTATUS v20; // esi
  wchar_t *v21; // rax
  const WCHAR *v22; // rax
  int v23; // ebx
  char *v24; // rax
  char *v25; // r14
  unsigned int i; // r12d
  _DWORD *j; // rbx
  unsigned int v28; // eax
  char *v29; // rbx
  char *v30; // rcx
  int v31; // eax
  unsigned int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rax
  struct _LDEV *result; // rax
  int v36; // [rsp+20h] [rbp-E0h]
  ULONG ReturnLength; // [rsp+24h] [rbp-DCh] BYREF
  int v38; // [rsp+28h] [rbp-D8h]
  UNICODE_STRING String2; // [rsp+30h] [rbp-D0h] BYREF
  BOOL v40; // [rsp+40h] [rbp-C0h]
  ULONG Size; // [rsp+44h] [rbp-BCh] BYREF
  _STRING AnsiString; // [rsp+48h] [rbp-B8h] BYREF
  int *v43; // [rsp+60h] [rbp-A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _DWORD SystemInformation[76]; // [rsp+80h] [rbp-80h] BYREF

  v5 = 0LL;
  v7 = 0;
  String2 = 0LL;
  v43 = a3;
  v38 = a5;
  v10 = a4;
  WdLogSingleEntry3(4LL, Source, a2, a4);
  *a3 = 0;
  WdLogGlobalForLineNumber = 998;
  v11 = a2 == 0;
  v40 = v11;
  if ( !(unsigned int)MakeSystemRelativePath(Source, &String2, v11) )
    goto LABEL_57;
  v13 = 1;
  while ( 1 )
  {
    v14 = *(_QWORD *)(W32GetSessionState(v12) + 88);
    v5 = (struct _LDEV *)ldevTryReferenceLoadedDisplayDriver(&String2);
    if ( v5 )
    {
      *v43 = 1;
      goto LABEL_56;
    }
    if ( v10 )
      break;
    if ( !v13 )
    {
      if ( v7 )
      {
        FreeSystemRelativePath(&String2);
        if ( !(unsigned int)MakeSystemRelativePath(Source, &String2, v11) )
          goto LABEL_56;
      }
      break;
    }
    v13 = 0;
    FreeSystemRelativePath(&String2);
    if ( !(unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
      break;
    v7 = 1;
  }
  v15 = PALLOCMEM(48LL, 0x76646C47u);
  v16 = PALLOCMEM(912LL, 0x76646C47u);
  v17 = v16;
  v18 = 1;
  if ( v15 )
  {
    if ( !v16 )
    {
LABEL_22:
      GreDeleteFastMutex((char *)v15);
      goto LABEL_23;
    }
    *(_DWORD *)(v16 + 68) = 0;
    *(_QWORD *)(v16 + 904) = v16 + 72;
    while ( 1 )
    {
      *(UNICODE_STRING *)v15 = String2;
      *(_DWORD *)(v14 + 1056) = 0;
      v19 = SystemLoadGdiDriverInformation;
      if ( !v10 )
        v19 = SystemLoadGdiDriverInSystemSpaceInformation;
      v20 = ZwSetSystemInformation(v19, (PVOID)v15, 0x30uLL);
      if ( v20 >= 0 )
        goto LABEL_50;
      if ( v20 != -1073741554 )
        *(_DWORD *)(v14 + 1056) = 3;
      if ( v10 )
        goto LABEL_53;
      if ( v20 != -1073741772 )
        break;
      if ( v18 )
      {
        v18 = 0;
        FreeSystemRelativePath(&String2);
        if ( (unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
          continue;
      }
      goto LABEL_22;
    }
    if ( v20 != -1073741554 )
      goto LABEL_53;
    memset(SystemInformation, 0, sizeof(SystemInformation));
    ReturnLength = 0;
    v36 = 0;
    AnsiString = 0LL;
    DestinationString = 0LL;
    v21 = wcsrchr(Source, 0x5Cu);
    v22 = v21 ? v21 + 1 : Source;
    RtlInitUnicodeString(&DestinationString, v22);
    v20 = RtlUnicodeStringToAnsiString(&AnsiString, &DestinationString, 1u);
    if ( v20 < 0 )
    {
LABEL_53:
      if ( v20 == -1073741702 )
        DrvLogDisplayDriverEvent(3LL);
      goto LABEL_22;
    }
    v20 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &ReturnLength);
    if ( (int)(v20 + 0x80000000) < 0 || v20 == -1073741820 )
    {
      v23 = 296 * SystemInformation[0];
      v24 = (char *)PALLOCNOZ((unsigned int)(296 * SystemInformation[0] + 8), 0x706D7447u);
      v25 = v24;
      if ( v24 )
      {
        v20 = ZwQuerySystemInformation(SystemModuleInformation, v24, v23 + 8, &ReturnLength);
        if ( v20 >= 0 )
        {
          for ( i = 0; i < *(_DWORD *)v25; ++i )
          {
            if ( !strnicmp(
                    &v25[296 * i + 48 + *(unsigned __int16 *)&v25[296 * i + 46]],
                    AnsiString.Buffer,
                    AnsiString.Length) )
            {
              v36 = 0;
              Size = 0;
              for ( j = RtlImageDirectoryEntryToData(gpvWin32kImageBase, 1u, 1u, &Size); j; j += 5 )
              {
                v28 = j[3];
                if ( !v28 || !*j )
                  break;
                if ( !strnicmp((const char *)gpvWin32kImageBase + v28, AnsiString.Buffer, AnsiString.Length) )
                {
                  v36 = 1;
                  v29 = *(char **)&v25[296 * i + 24];
                  v30 = &v29[RtlImageNtHeader(v29)->OptionalHeader.AddressOfEntryPoint];
                  *(_QWORD *)(v15 + 16) = v29;
                  *(_QWORD *)(v15 + 24) = 0LL;
                  *(_QWORD *)(v15 + 32) = v30;
                  goto LABEL_46;
                }
              }
              goto LABEL_46;
            }
          }
        }
      }
      else
      {
LABEL_46:
        if ( !v25 )
          goto LABEL_48;
      }
      GreDeleteFastMutex(v25);
    }
LABEL_48:
    RtlFreeAnsiString(&AnsiString);
    if ( v36 )
    {
      *(_DWORD *)(v17 + 40) |= 2u;
LABEL_50:
      v31 = v38;
      *(_DWORD *)(v17 + 64) = -1;
      v31 *= 4;
      *(_QWORD *)(v17 + 16) = v15;
      v32 = (*(_DWORD *)(v17 + 40) ^ v31) & 0xFFFFFFFB;
      *(_DWORD *)(v17 + 36) = 1;
      *(_DWORD *)(v17 + 32) = 5;
      *(_DWORD *)(v17 + 40) = v31 ^ v32;
      v33 = *(_QWORD *)(v14 + 1728);
      if ( v33 )
        *(_QWORD *)(v33 + 8) = v17;
      v34 = *(_QWORD *)(v14 + 1728);
      *(_QWORD *)(v17 + 8) = 0LL;
      *(_QWORD *)v17 = v34;
      *(_QWORD *)(v14 + 1728) = v17;
      WdLogSingleEntry1(5LL, v17);
      result = (struct _LDEV *)v17;
      WdLogGlobalForLineNumber = 1166;
      return result;
    }
    goto LABEL_53;
  }
LABEL_23:
  if ( v17 )
    GreDeleteFastMutex((char *)v17);
  v5 = 0LL;
LABEL_56:
  FreeSystemRelativePath(&String2);
LABEL_57:
  WdLogSingleEntry1(5LL, v5);
  result = v5;
  WdLogGlobalForLineNumber = 1368;
  return result;
}
