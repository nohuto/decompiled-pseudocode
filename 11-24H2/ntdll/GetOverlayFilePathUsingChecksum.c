/*
 * XREFs of GetOverlayFilePathUsingChecksum @ 0x18007EE60
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180075B00 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x1800946E8 (RtlpGetMUIRedirectedFilePath.c)
 * Callees:
 *     _IsProgramFilesPath @ 0x180008D2C (_IsProgramFilesPath.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18007F0DC (_GetOverlayPackageKeyForLanguage.c)
 *     RtlAppendUnicodeToString @ 0x18007F450 (RtlAppendUnicodeToString.c)
 *     RtlGetNtSystemRoot @ 0x18007F510 (RtlGetNtSystemRoot.c)
 *     _BuildStandardOverlayFilePath @ 0x18007F550 (_BuildStandardOverlayFilePath.c)
 *     _GetOverlayPackageTypeFromKey @ 0x18007F5C0 (_GetOverlayPackageTypeFromKey.c)
 *     _GetOverlayPackagePathFromKey @ 0x18007F704 (_GetOverlayPackagePathFromKey.c)
 *     _BuildCumulativeOverlayFilePath @ 0x18007F7D8 (_BuildCumulativeOverlayFilePath.c)
 *     _wcsnicmp @ 0x180120FE0 (_wcsnicmp.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall GetOverlayFilePathUsingChecksum(
        PCWSTR Source,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        _WORD *a6)
{
  NTSTATUS result; // eax
  const wchar_t *NtSystemRoot; // rax
  __int64 v10; // rdi
  size_t v11; // rbx
  wchar_t *Buffer; // r14
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
  __int64 v23; // [rsp+58h] [rbp-340h] BYREF
  _UNICODE_STRING Destination; // [rsp+60h] [rbp-338h] BYREF
  __int64 v25; // [rsp+70h] [rbp-328h]
  char v26; // [rsp+80h] [rbp-318h] BYREF

  v25 = a4;
  *(_QWORD *)&Destination.Length = 46006272LL;
  Destination.Buffer = (wchar_t *)&v26;
  if ( !Source || !a2 || !a5 )
    return -1073741811;
  result = RtlAppendUnicodeToString(&Destination, a2);
  if ( result < 0 )
  {
    if ( result != -1073741789 )
      return result;
    return -1073741637;
  }
  Handle = 0LL;
  NtSystemRoot = RtlGetNtSystemRoot();
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( NtSystemRoot[v11] );
  Buffer = Destination.Buffer;
  if ( !wcsnicmp(Destination.Buffer, NtSystemRoot, v11) )
  {
    v13 = *(_WORD *)L"\\Windows";
    v14 = (const wchar_t *)L"\\Windows";
    goto LABEL_9;
  }
  if ( (int)IsProgramFilesPath(Buffer, (size_t *)&Handle) < 0 )
    return -1073741637;
  v13 = aProgramFiles[0];
  v14 = L"\\Program Files";
  v11 = (size_t)Handle;
LABEL_9:
  v15 = &Buffer[v11];
  result = 0;
  if ( v13 != 92 || *v15 != 92 )
    result = -1073741637;
  if ( result >= 0 )
  {
    v16 = *a5;
    v23 = *a5;
    if ( a6 && v16 >= 2 )
      *a6 = 0;
    Handle = 0LL;
    OverlayPackageKeyForLanguage = GetOverlayPackageKeyForLanguage(Source, &Handle);
    if ( OverlayPackageKeyForLanguage >= 0 )
    {
      OverlayPackageKeyForLanguage = GetOverlayPackageTypeFromKey(Handle, (char *)&v23 + 4);
      if ( OverlayPackageKeyForLanguage >= 0 )
      {
        OverlayPackagePathFromKey = GetOverlayPackagePathFromKey(Handle, (__int64)&v23);
        v16 = v23;
        OverlayPackageKeyForLanguage = OverlayPackagePathFromKey;
      }
      if ( Handle )
        NtClose(Handle);
      if ( OverlayPackageKeyForLanguage >= 0 )
        goto LABEL_21;
    }
    if ( a6 && *a5 >= 2 )
      *a6 = 0;
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
      if ( (v23 & 0x100000000LL) != 0 && v25 && a3 )
        return BuildCumulativeOverlayFilePath(v16, (__int64)v14, a3, v25, (__int64)a5, a6);
      else
        return BuildStandardOverlayFilePath(v16, v20, v15, v21, v14, a5, a6);
    }
    else
    {
      return OverlayPackageKeyForLanguage;
    }
  }
  return result;
}
