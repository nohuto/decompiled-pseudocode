/*
 * XREFs of GetOverlayFilePathUsingChecksum @ 0x18006BF80
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x1800A1CE0 (RtlpGetMUIRedirectedFilePath.c)
 * Callees:
 *     _GetOverlayPackageKeyForLanguage @ 0x18006C1FC (_GetOverlayPackageKeyForLanguage.c)
 *     RtlAppendUnicodeToString @ 0x18006C570 (RtlAppendUnicodeToString.c)
 *     RtlGetNtSystemRoot @ 0x18006C630 (RtlGetNtSystemRoot.c)
 *     _BuildStandardOverlayFilePath @ 0x18006C670 (_BuildStandardOverlayFilePath.c)
 *     _GetOverlayPackageTypeFromKey @ 0x18006C6E0 (_GetOverlayPackageTypeFromKey.c)
 *     _GetOverlayPackagePathFromKey @ 0x18006C824 (_GetOverlayPackagePathFromKey.c)
 *     _BuildCumulativeOverlayFilePath @ 0x18006C8F8 (_BuildCumulativeOverlayFilePath.c)
 *     _IsProgramFilesPath @ 0x1800AF20C (_IsProgramFilesPath.c)
 *     _wcsnicmp @ 0x180124890 (_wcsnicmp.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall GetOverlayFilePathUsingChecksum(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        _WORD *Destination)
{
  __int64 result; // rax
  const wchar_t *NtSystemRoot; // rax
  __int64 v10; // rdi
  size_t v11; // rbx
  wchar_t *v12; // r14
  wchar_t v13; // cx
  const wchar_t *v14; // rsi
  wchar_t *v15; // rbx
  unsigned int v16; // r14d
  int OverlayPackageKeyForLanguage; // ebp
  int OverlayPackagePathFromKey; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // edi
  HANDLE Handle; // [rsp+50h] [rbp-348h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-340h] BYREF
  int v24; // [rsp+5Ch] [rbp-33Ch] BYREF
  __int64 v25; // [rsp+60h] [rbp-338h] BYREF
  wchar_t *String1; // [rsp+68h] [rbp-330h]
  __int64 v27; // [rsp+70h] [rbp-328h]
  char v28; // [rsp+80h] [rbp-318h] BYREF

  v27 = a4;
  v25 = 46006272LL;
  String1 = (wchar_t *)&v28;
  if ( !a1 || !a2 || !a5 )
    return 3221225485LL;
  result = RtlAppendUnicodeToString(&v25, a2);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741789 )
      return result;
    return 3221225659LL;
  }
  Handle = 0LL;
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot();
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( NtSystemRoot[v11] );
  v12 = String1;
  if ( !wcsnicmp(String1, NtSystemRoot, v11) )
  {
    v13 = *(_WORD *)L"\\Windows";
    v14 = (const wchar_t *)L"\\Windows";
    goto LABEL_9;
  }
  if ( (int)IsProgramFilesPath(v12) < 0 )
    return 3221225659LL;
  v13 = aProgramFiles[0];
  v14 = L"\\Program Files";
  v11 = (size_t)Handle;
LABEL_9:
  v15 = &v12[v11];
  result = 0LL;
  if ( v13 != 92 || *v15 != 92 )
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    v16 = *a5;
    v23 = *a5;
    v24 = 0;
    if ( Destination && v16 >= 2 )
      *Destination = 0;
    Handle = 0LL;
    OverlayPackageKeyForLanguage = GetOverlayPackageKeyForLanguage(a1, &Handle);
    if ( OverlayPackageKeyForLanguage >= 0 )
    {
      OverlayPackageKeyForLanguage = GetOverlayPackageTypeFromKey(Handle, &v24);
      if ( OverlayPackageKeyForLanguage >= 0 )
      {
        OverlayPackagePathFromKey = GetOverlayPackagePathFromKey(Handle, &v23, Destination);
        v16 = v23;
        OverlayPackageKeyForLanguage = OverlayPackagePathFromKey;
      }
      if ( Handle )
        NtClose(Handle);
      if ( OverlayPackageKeyForLanguage >= 0 )
        goto LABEL_21;
    }
    if ( Destination && *a5 >= 2 )
      *Destination = 0;
    if ( OverlayPackageKeyForLanguage == -1073741789 )
    {
LABEL_21:
      v19 = -1LL;
      do
        ++v19;
      while ( v15[v19] );
      v20 = (unsigned int)(2 * v19);
      do
        ++v10;
      while ( v14[v10] );
      v21 = 2 * v10;
      if ( (v24 & 1) != 0 && v27 && a3 )
        return BuildCumulativeOverlayFilePath(v16, (__int64)v14, a3, v27, (__int64)a5, Destination);
      else
        return BuildStandardOverlayFilePath(v16, v20, v15, v21, v14, a5, Destination);
    }
    else
    {
      return (unsigned int)OverlayPackageKeyForLanguage;
    }
  }
  return result;
}
