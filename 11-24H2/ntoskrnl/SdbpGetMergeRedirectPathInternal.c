/*
 * XREFs of SdbpGetMergeRedirectPathInternal @ 0x140801F44
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x14080154C (SdbGetMergeRedirectPath.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140420BA0 (RtlStringCchLengthW.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     SdbpGetFileTimestamp @ 0x14080199C (SdbpGetFileTimestamp.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140801BA0 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpSafeAllocAndConcatW @ 0x1408025DC (SdbpSafeAllocAndConcatW.c)
 *     AslRegistryGetKey @ 0x140809214 (AslRegistryGetKey.c)
 *     AslRegistryGetString @ 0x140809334 (AslRegistryGetString.c)
 *     AslRegistryGetUInt32 @ 0x1408094D8 (AslRegistryGetUInt32.c)
 *     AslPathGetFileNamePart @ 0x14080A524 (AslPathGetFileNamePart.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMergeRedirectPathInternal(const WCHAR **a1, _DWORD *a2, int a3, const wchar_t *a4)
{
  wchar_t *v6; // r14
  const WCHAR *v7; // r13
  int v9; // ebx
  __int64 FileNamePart; // rax
  const wchar_t *v11; // r15
  const wchar_t *i; // rdi
  HANDLE v13; // rcx
  const wchar_t *v14; // rdi
  int Key; // eax
  const char *v16; // r9
  int v17; // r8d
  int String; // eax
  HANDLE v19; // rdi
  int UInt32; // eax
  unsigned int v21; // r14d
  const char *v22; // r9
  int v23; // r8d
  const WCHAR *v24; // r15
  const WCHAR *v25; // r14
  int FileTimestamp; // eax
  int ManifestedMergeStubAlloc; // eax
  unsigned __int64 v28; // rax
  const WCHAR *v29; // [rsp+30h] [rbp-79h] BYREF
  wchar_t *Str1; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v31; // [rsp+40h] [rbp-69h] BYREF
  int v32; // [rsp+44h] [rbp-65h]
  unsigned int v33; // [rsp+48h] [rbp-61h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-59h] BYREF
  size_t pcchLength; // [rsp+58h] [rbp-51h] BYREF
  const WCHAR *v36; // [rsp+60h] [rbp-49h] BYREF
  __int64 v37; // [rsp+68h] [rbp-41h] BYREF
  const wchar_t *v38; // [rsp+70h] [rbp-39h] BYREF
  size_t v39; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int64 v40; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int64 v41; // [rsp+88h] [rbp-21h] BYREF
  unsigned __int64 v42; // [rsp+90h] [rbp-19h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+98h] [rbp-11h]
  const WCHAR **v44; // [rsp+A0h] [rbp-9h]
  wchar_t Str2[12]; // [rsp+A8h] [rbp-1h] BYREF

  v6 = 0LL;
  psz = a4;
  v7 = 0LL;
  v32 = a3;
  v44 = a1;
  v31 = 0;
  Handle = 0LL;
  Str1 = 0LL;
  v39 = 0LL;
  pcchLength = 0LL;
  v33 = 0;
  v36 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  v29 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  wcscpy(Str2, L"\\AppPatch\\");
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  if ( a2 && a3 )
    *a2 = 0;
  v9 = -1073741772;
  FileNamePart = AslPathGetFileNamePart(a4);
  v11 = (const wchar_t *)FileNamePart;
  if ( (const wchar_t *)FileNamePart != a4 )
  {
    for ( i = (const wchar_t *)(FileNamePart - 4); ; --i )
    {
      if ( i < a4 )
        return (unsigned int)v9;
      if ( (*i == 92 || *i == 47) && !wcsnicmp(i, Str2, 0xAuLL) )
        break;
    }
    v9 = RtlStringCchLengthW(v11, 0x7FFFFFFFuLL, &pcchLength);
    if ( v9 < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetMergeRedirectPathInternal",
        1817,
        (unsigned int)"RtlStringCchLengthW failed [%x]");
      return (unsigned int)v9;
    }
    if ( v32 )
    {
      v9 = SdbpSafeAllocAndConcatW(&v38, L"StagedDelete_", 13LL, v11, pcchLength);
      if ( v9 < 0 )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpGetMergeRedirectPathInternal",
          1829,
          (unsigned int)"Failed to alloc and cat file to prefix [%x]");
LABEL_53:
        if ( v38 )
          AslFree(v13);
        return (unsigned int)v9;
      }
      v14 = v38;
    }
    else
    {
      v14 = v11;
    }
    Key = AslRegistryGetKey(
            &Handle,
            L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\SdbUpdates",
            2147483904LL,
            1LL);
    v9 = Key;
    if ( Key < 0 )
    {
      if ( Key == -1073741772 )
      {
LABEL_42:
        v24 = v29;
LABEL_43:
        v13 = Handle;
        if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          ZwClose(Handle);
        if ( v6 )
          AslFree(v13);
        if ( v7 )
          AslFree(v13);
        if ( v24 )
          AslFree(v13);
        if ( v37 )
          AslFree(v13);
        goto LABEL_53;
      }
      v16 = "AslRegistryGetKey failed to open SdbUpdates key [%x]";
      v17 = 1846;
LABEL_23:
      AslLogCallPrintf(1, (unsigned int)"SdbpGetMergeRedirectPathInternal", v17, (_DWORD)v16);
      goto LABEL_42;
    }
    String = AslRegistryGetString(&Str1, Handle, v14);
    v6 = Str1;
    v9 = String;
    if ( String < 0 )
      goto LABEL_42;
    if ( !wcsicmp(Str1, v11) )
    {
      v9 = -1073741772;
      goto LABEL_42;
    }
    if ( v32 && !wcsicmp(v6, L"__NotRedirected__") && a2 )
    {
      *a2 = 1;
      v9 = 0;
      goto LABEL_42;
    }
    v9 = SdbpSafeAllocAndConcatW(&v37, L"MergeVer_", 9LL, v14, 0LL);
    if ( v9 < 0 )
    {
      v16 = "Failed to alloc and cat file to prefix [%x]";
      v17 = 1880;
      goto LABEL_23;
    }
    v19 = Handle;
    UInt32 = AslRegistryGetUInt32(&v33, Handle, v37);
    v9 = UInt32;
    if ( UInt32 == -1073741772 )
    {
      v21 = 0;
    }
    else
    {
      if ( UInt32 < 0 )
      {
        v16 = "Failed to query reg value. [%x]";
        v17 = 1889;
        goto LABEL_23;
      }
      v21 = v33;
    }
    v9 = AslRegistryGetUInt32(&v31, v19, L"MergeVer");
    if ( v9 < 0 )
    {
      v22 = "Failed to query reg value. [%x]";
      v23 = 1895;
LABEL_40:
      AslLogCallPrintf(1, (unsigned int)"SdbpGetMergeRedirectPathInternal", v23, (_DWORD)v22);
LABEL_41:
      v6 = Str1;
      goto LABEL_42;
    }
    if ( v31 < v21 )
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetMergeRedirectPathInternal",
        1904,
        (unsigned int)"Merge target is too high of a version, this code might not handle it correctly.");
    v9 = AslRegistryGetUInt32(&v31, Handle, L"MinMergeVer");
    if ( v9 < 0 )
    {
      v22 = "Failed to query reg value. [%x]";
      v23 = 1910;
      goto LABEL_40;
    }
    if ( v21 < v31 )
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetMergeRedirectPathInternal",
        1919,
        (unsigned int)"Merge target is too low of a version, it might not be possible to handle correctly.");
    v25 = psz;
    v9 = RtlStringCchLengthW(psz, 0x7FFFFFFFuLL, &v39);
    if ( v9 < 0 )
    {
      v22 = "RtlStringCchLengthW failed [%x]";
      v23 = 1926;
      goto LABEL_40;
    }
    if ( v39 < pcchLength )
    {
      v9 = -1073741675;
      v22 = "RtlSizeTSub failed [%x]";
      v23 = 1933;
      goto LABEL_40;
    }
    v9 = SdbpSafeAllocAndConcatW(&v36, v25, v39 - pcchLength, Str1, 0LL);
    if ( v9 < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetMergeRedirectPathInternal",
        1943,
        (unsigned int)"Failed to alloc and cat file to prefix [%x]");
      v7 = v36;
      goto LABEL_41;
    }
    v7 = v36;
    FileTimestamp = SdbpGetFileTimestamp(&v41, v36, 1);
    v9 = FileTimestamp;
    if ( FileTimestamp < 0 )
    {
      if ( FileTimestamp == -1073741772 )
        goto LABEL_41;
      v22 = "Failed to check timestamp [%x]";
      v23 = 1954;
      goto LABEL_40;
    }
    v9 = SdbpGetFileTimestamp(&v42, v25, 0);
    if ( v9 < 0 )
    {
      v22 = "Failed to check timestamp [%x]";
      v23 = 1965;
      goto LABEL_40;
    }
    ManifestedMergeStubAlloc = SdbpGetManifestedMergeStubAlloc(&v29, v11);
    v9 = ManifestedMergeStubAlloc;
    if ( ManifestedMergeStubAlloc == -1073741772 )
    {
      v24 = v29;
      v28 = 0LL;
    }
    else
    {
      if ( ManifestedMergeStubAlloc < 0 )
      {
        v22 = "Failed to get manifested stub [%x]";
        v23 = 1979;
        goto LABEL_40;
      }
      v24 = v29;
      v9 = SdbpGetFileTimestamp(&v40, v29, 0);
      if ( v9 < 0 )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpGetMergeRedirectPathInternal",
          1989,
          (unsigned int)"Failed to check timestamp [%x]");
LABEL_78:
        v6 = Str1;
        goto LABEL_43;
      }
      v28 = v40;
    }
    if ( v41 < v42 || v41 < v28 )
    {
      v9 = -1073741772;
    }
    else
    {
      *v44 = v7;
      if ( a2 && v32 )
        *a2 = 1;
      v7 = 0LL;
      v9 = 0;
    }
    goto LABEL_78;
  }
  return (unsigned int)v9;
}
