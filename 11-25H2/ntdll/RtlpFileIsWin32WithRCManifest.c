/*
 * XREFs of RtlpFileIsWin32WithRCManifest @ 0x1800AA648
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800A9A40 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpSearchResourceSection_U @ 0x18001DC50 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001F4B0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlInitUnicodeStringEx @ 0x18006CCF0 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x1800A2FC0 (RtlReleaseRelativeName.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 *     ZwCreateFile @ 0x180163CC0 (ZwCreateFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

char __fastcall RtlpFileIsWin32WithRCManifest(const wchar_t *a1)
{
  char v1; // di
  char v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // esi
  __int64 v6; // r9
  int v7; // ebx
  unsigned __int64 v8; // rbx
  unsigned __int64 v10; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE v12; // [rsp+70h] [rbp-90h] BYREF
  __int128 v13; // [rsp+78h] [rbp-88h] BYREF
  unsigned int *v14; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v15; // [rsp+90h] [rbp-70h] BYREF
  __int128 v16; // [rsp+98h] [rbp-68h] BYREF
  __int64 v17; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v18; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v19; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v20; // [rsp+C8h] [rbp-38h]
  __int128 v21; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v22; // [rsp+E8h] [rbp-18h]
  __int128 v23; // [rsp+F8h] [rbp-8h]
  __int128 v24; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v25[3]; // [rsp+118h] [rbp+18h] BYREF

  v1 = 0;
  v17 = 0LL;
  v12 = 0LL;
  Handle = 0LL;
  v2 = 0;
  v10 = 0LL;
  v15 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  *(_QWORD *)&v23 = 0LL;
  v21 = 0LL;
  DWORD2(v23) = 0;
  v22 = 0LL;
  v14 = 0LL;
  v24 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v13 = 0LL;
  if ( (int)RtlInitUnicodeStringEx((__int64)&v13, a1) >= 0
    && (int)RtlpDosPathNameToRelativeNtPathName(
              2,
              (unsigned __int16 *)&v13,
              0LL,
              (unsigned __int16 *)&v16,
              0LL,
              0LL,
              (__int64)&v19) >= 0 )
  {
    v3 = *((_QWORD *)&v16 + 1);
    if ( (_WORD)v19 )
    {
      v4 = v20;
      v16 = v19;
    }
    else
    {
      v4 = 0LL;
      *(_QWORD *)&v20 = 0LL;
    }
    LODWORD(v21) = 48;
    DWORD2(v22) = 64;
    *((_QWORD *)&v21 + 1) = v4 & -(__int64)(v3 != 0);
    *(_QWORD *)&v22 = &v16;
    v23 = 0LL;
    v5 = ZwCreateFile(&v12, 2148532352LL, &v21, &v24, 0LL, 0, 5, 1, 0, 0LL, 0);
    if ( v3 )
    {
      RtlReleaseRelativeName((__int64)&v19);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3, v6);
    }
    if ( v5 >= 0 )
    {
      v2 = 1;
      if ( (int)NtCreateSection(&Handle, 983045LL, 0LL) >= 0 )
      {
        v7 = ZwMapViewOfSection(Handle, -1LL, &v10, 0LL, 0LL, &v18, &v17, 1, 0, 8);
        NtClose(Handle);
        if ( v7 >= 0 )
        {
          *(_QWORD *)&v13 = 0LL;
          RtlImageNtHeaderEx(1, v10, 0LL, &v13);
          if ( (_QWORD)v13 )
          {
            v25[0] = L"MUI";
            v25[1] = 1LL;
            v8 = v10 | 1;
            v25[2] = 0LL;
            if ( (int)LdrpSearchResourceSection_U(v10 | 1, (__int64)v25, 3u, 0x30u, (unsigned __int64 *)&v14) >= 0
              && (int)LdrpAccessResourceDataNoMultipleLanguage(v8, v14, (unsigned __int64 *)&v15, &v13) >= 0
              && *v15 == -20054323 )
            {
              v1 = 1;
            }
          }
        }
      }
    }
  }
  if ( v10 )
    NtUnmapViewOfSection(-1LL);
  if ( v2 )
    NtClose(v12);
  return v1;
}
