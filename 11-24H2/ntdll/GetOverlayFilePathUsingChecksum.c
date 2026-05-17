/*
 * XREFs of GetOverlayFilePathUsingChecksum @ 0x1800B25C0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180077E08 (RtlpGetMUIRedirectedFilePath.c)
 * Callees:
 *     _IsProgramFilesPath @ 0x180086E7C (_IsProgramFilesPath.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x1800B283C (_GetOverlayPackageKeyForLanguage.c)
 *     RtlAppendUnicodeToString @ 0x1800B2BB0 (RtlAppendUnicodeToString.c)
 *     RtlGetNtSystemRoot @ 0x1800B2C70 (RtlGetNtSystemRoot.c)
 *     _BuildStandardOverlayFilePath @ 0x1800B2CB0 (_BuildStandardOverlayFilePath.c)
 *     _GetOverlayPackageTypeFromKey @ 0x1800B2D20 (_GetOverlayPackageTypeFromKey.c)
 *     _GetOverlayPackagePathFromKey @ 0x1800B2E64 (_GetOverlayPackagePathFromKey.c)
 *     _BuildCumulativeOverlayFilePath @ 0x1800B2F38 (_BuildCumulativeOverlayFilePath.c)
 *     _wcsnicmp @ 0x180122DB0 (_wcsnicmp.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  const wchar_t *NtSystemRoot; // rax
  __int64 v13; // rdi
  size_t v14; // rbx
  wchar_t *v15; // r14
  wchar_t v16; // cx
  const wchar_t *v17; // rsi
  wchar_t *v18; // rbx
  unsigned int v19; // r14d
  int OverlayPackageKeyForLanguage; // ebp
  int OverlayPackagePathFromKey; // eax
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned int v24; // edi
  HANDLE Handle; // [rsp+50h] [rbp-348h] BYREF
  unsigned int v26; // [rsp+58h] [rbp-340h] BYREF
  int v27; // [rsp+5Ch] [rbp-33Ch] BYREF
  __int64 v28; // [rsp+60h] [rbp-338h] BYREF
  wchar_t *String1; // [rsp+68h] [rbp-330h]
  __int64 v30; // [rsp+70h] [rbp-328h]
  char v31; // [rsp+80h] [rbp-318h] BYREF

  v30 = a4;
  v28 = 46006272LL;
  String1 = (wchar_t *)&v31;
  if ( !a1 || !a2 || !a5 )
    return 3221225485LL;
  result = RtlAppendUnicodeToString(&v28, a2);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741789 )
      return result;
    return 3221225659LL;
  }
  Handle = 0LL;
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot(v10, v9, v11);
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( NtSystemRoot[v14] );
  v15 = String1;
  if ( !wcsnicmp(String1, NtSystemRoot, v14) )
  {
    v16 = *(_WORD *)L"\\Windows";
    v17 = (const wchar_t *)L"\\Windows";
    goto LABEL_9;
  }
  if ( (int)IsProgramFilesPath(v15, (size_t *)&Handle) < 0 )
    return 3221225659LL;
  v16 = aProgramFiles[0];
  v17 = L"\\Program Files";
  v14 = (size_t)Handle;
LABEL_9:
  v18 = &v15[v14];
  result = 0LL;
  if ( v16 != 92 || *v18 != 92 )
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    v19 = *a5;
    v26 = *a5;
    v27 = 0;
    if ( Destination && v19 >= 2 )
      *Destination = 0;
    Handle = 0LL;
    OverlayPackageKeyForLanguage = GetOverlayPackageKeyForLanguage(a1, &Handle);
    if ( OverlayPackageKeyForLanguage >= 0 )
    {
      OverlayPackageKeyForLanguage = GetOverlayPackageTypeFromKey(Handle, &v27);
      if ( OverlayPackageKeyForLanguage >= 0 )
      {
        OverlayPackagePathFromKey = GetOverlayPackagePathFromKey(Handle, &v26, Destination);
        v19 = v26;
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
      v22 = -1LL;
      do
        ++v22;
      while ( v18[v22] );
      v23 = (unsigned int)(2 * v22);
      do
        ++v13;
      while ( v17[v13] );
      v24 = 2 * v13;
      if ( (v27 & 1) != 0 && v30 && a3 )
        return BuildCumulativeOverlayFilePath(v19, (__int64)v17, a3, v30, (__int64)a5, Destination);
      else
        return BuildStandardOverlayFilePath(v19, v23, v18, v24, v17, a5, Destination);
    }
    else
    {
      return (unsigned int)OverlayPackageKeyForLanguage;
    }
  }
  return result;
}
