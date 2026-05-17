/*
 * XREFs of RtlpFileIsWin32WithRCManifest @ 0x180080844
 * Callers:
 *     RtlGetFileMUIPath @ 0x18007E370 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180059C40 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180063850 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlReleaseRelativeName @ 0x180077830 (RtlReleaseRelativeName.c)
 *     RtlInitUnicodeStringEx @ 0x180082640 (RtlInitUnicodeStringEx.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180162190 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1801625D0 (NtCreateSection.c)
 *     ZwCreateFile @ 0x180162730 (ZwCreateFile.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

char __fastcall RtlpFileIsWin32WithRCManifest(__int64 a1)
{
  char v1; // di
  char v2; // r14
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // esi
  int v6; // ebx
  unsigned __int64 v7; // rbx
  unsigned __int64 v9; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE v11; // [rsp+70h] [rbp-90h] BYREF
  __int128 v12; // [rsp+78h] [rbp-88h] BYREF
  unsigned int *v13; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v14; // [rsp+90h] [rbp-70h] BYREF
  __int128 v15; // [rsp+98h] [rbp-68h] BYREF
  __int64 v16; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v17; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v18; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v19; // [rsp+C8h] [rbp-38h]
  __int128 v20; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v21; // [rsp+E8h] [rbp-18h]
  __int128 v22; // [rsp+F8h] [rbp-8h]
  __int128 v23; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v24[3]; // [rsp+118h] [rbp+18h] BYREF

  v1 = 0;
  v16 = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  v2 = 0;
  v9 = 0LL;
  v14 = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  *(_QWORD *)&v22 = 0LL;
  v20 = 0LL;
  DWORD2(v22) = 0;
  v21 = 0LL;
  v13 = 0LL;
  v23 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v12 = 0LL;
  if ( (int)RtlInitUnicodeStringEx(&v12, a1) >= 0
    && (int)RtlpDosPathNameToRelativeNtPathName(
              2,
              (unsigned __int16 *)&v12,
              0LL,
              (unsigned __int16 *)&v15,
              0LL,
              0LL,
              (__int64)&v18) >= 0 )
  {
    v3 = *((_QWORD *)&v15 + 1);
    if ( (_WORD)v18 )
    {
      v4 = v19;
      v15 = v18;
    }
    else
    {
      v4 = 0LL;
      *(_QWORD *)&v19 = 0LL;
    }
    LODWORD(v20) = 48;
    DWORD2(v21) = 64;
    *((_QWORD *)&v20 + 1) = v4 & -(__int64)(v3 != 0);
    *(_QWORD *)&v21 = &v15;
    v22 = 0LL;
    v5 = ZwCreateFile(&v11, 2148532352LL, &v20, &v23, 0LL, 0, 5, 1, 0, 0LL);
    if ( v3 )
    {
      RtlReleaseRelativeName((__int64)&v18);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
    }
    if ( v5 >= 0 )
    {
      v2 = 1;
      if ( (int)NtCreateSection(&Handle, 983045LL, 0LL, 0LL) >= 0 )
      {
        v6 = ZwMapViewOfSection(Handle, -1LL, &v9, 0LL, 0LL, &v17, &v16, 1, 0, 8, 0);
        NtClose(Handle);
        if ( v6 >= 0 )
        {
          *(_QWORD *)&v12 = 0LL;
          RtlImageNtHeaderEx(1, v9, 0LL, &v12);
          if ( (_QWORD)v12 )
          {
            v24[0] = L"MUI";
            v24[1] = 1LL;
            v7 = v9 | 1;
            v24[2] = 0LL;
            if ( (int)LdrpSearchResourceSection_U(v9 | 1, (__int64)v24, 3u, 0x30u, (unsigned __int64 *)&v13) >= 0
              && (int)LdrpAccessResourceDataNoMultipleLanguage(v7, v13, (unsigned __int64 *)&v14, &v12) >= 0
              && *v14 == -20054323 )
            {
              v1 = 1;
            }
          }
        }
      }
    }
  }
  if ( v9 )
    NtUnmapViewOfSection(-1LL);
  if ( v2 )
    NtClose(v11);
  return v1;
}
