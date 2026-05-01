/*
 * XREFs of SdbpGetMergeRedirectPathInternal @ 0x180093640
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x180092574 (SdbGetMergeRedirectPath.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     RtlStringCchLengthW @ 0x180092224 (RtlStringCchLengthW.c)
 *     SdbpGetFileTimestamp @ 0x180092F44 (SdbpGetFileTimestamp.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x18009321C (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeSdbsSupported @ 0x180093EF8 (SdbpGetMergeSdbsSupported.c)
 *     SdbpSafeAllocAndConcatW @ 0x1800942C0 (SdbpSafeAllocAndConcatW.c)
 *     AslFree @ 0x18009D9EC (AslFree.c)
 *     AslRegistryGetKey @ 0x18009DBE8 (AslRegistryGetKey.c)
 *     AslRegistryGetString @ 0x18009DCFC (AslRegistryGetString.c)
 *     AslRegistryGetUInt32 @ 0x18009DEDC (AslRegistryGetUInt32.c)
 *     AslPathGetFileNamePart @ 0x1800A4314 (AslPathGetFileNamePart.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall SdbpGetMergeRedirectPathInternal(_QWORD *a1, _DWORD *a2, int a3, unsigned __int64 a4)
{
  int v7; // r14d
  int v8; // edi
  WCHAR *v9; // r12
  int LastError; // ebx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  DWORD FullPathNameW; // eax
  DWORD v15; // edi
  WCHAR *Heap; // rax
  __int64 FileNamePart; // rax
  const wchar_t *v18; // r14
  const wchar_t *i; // rdi
  wchar_t *v20; // rdi
  unsigned __int64 v21; // r12
  const wchar_t *v22; // rdi
  int Key; // eax
  char *v24; // r15
  wchar_t *v25; // rbx
  int UInt32; // eax
  unsigned int v27; // edi
  int FileTimestamp; // eax
  int ManifestedMergeStubAlloc; // eax
  unsigned __int64 v30; // rax
  wchar_t *String1; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-71h] BYREF
  const WCHAR *v33; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-61h] BYREF
  int v35; // [rsp+4Ch] [rbp-5Dh]
  WCHAR *v36; // [rsp+50h] [rbp-59h]
  const WCHAR *v37; // [rsp+58h] [rbp-51h] BYREF
  __int64 v38; // [rsp+60h] [rbp-49h] BYREF
  const wchar_t *v39; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int64 v40; // [rsp+70h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int64 v42; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int64 v43; // [rsp+88h] [rbp-21h] BYREF
  unsigned __int64 v44; // [rsp+90h] [rbp-19h] BYREF
  unsigned __int64 v45; // [rsp+98h] [rbp-11h] BYREF
  _QWORD *v46; // [rsp+A0h] [rbp-9h]
  wchar_t String2[12]; // [rsp+A8h] [rbp-1h] BYREF

  v35 = a3;
  v7 = 0;
  v46 = a1;
  v8 = 0;
  v32 = 0;
  v9 = 0LL;
  Handle = 0LL;
  String1 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  v34 = 0;
  v36 = 0LL;
  v33 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v43 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  wcscpy(String2, L"\\AppPatch\\");
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  if ( a2 && a3 )
    *a2 = 0;
  LastError = -1073741772;
  if ( (unsigned int)SdbpGetMergeSdbsSupported() )
  {
    v12 = -1LL;
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(a4 + 2 * v13) );
    if ( v13 > 3 && *(_WORD *)(a4 + 2) == 58 && *(_WORD *)(a4 + 4) == 92 )
      v7 = 1;
    do
      ++v12;
    while ( *(_WORD *)(a4 + 2 * v12) );
    if ( v12 > 1 && *(_WORD *)a4 == 92 )
      v8 = 1;
    if ( !v7 && !v8 )
    {
      FullPathNameW = GetFullPathNameW((LPCWSTR)a4, 0, 0LL, 0LL);
      v15 = FullPathNameW;
      if ( !FullPathNameW )
      {
        if ( (int)GetLastError() > 0 )
          LastError = (unsigned __int16)GetLastError() | 0xC0070000;
        else
          LastError = GetLastError();
        if ( LastError >= 0 )
          LastError = -1073741595;
        AslLogCallPrintf(1LL);
        return (unsigned int)LastError;
      }
      Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * FullPathNameW);
      v36 = Heap;
      v9 = Heap;
      if ( !Heap )
        return (unsigned int)-1073741801;
      if ( !GetFullPathNameW((LPCWSTR)a4, v15, Heap, 0LL) )
      {
        if ( (int)GetLastError() > 0 )
          LastError = (unsigned __int16)GetLastError() | 0xC0070000;
        else
          LastError = GetLastError();
        if ( LastError >= 0 )
          LastError = -1073741595;
        AslLogCallPrintf(1LL);
LABEL_100:
        AslFree(NtCurrentPeb()->ProcessHeap, v9);
        v20 = String1;
LABEL_101:
        if ( v20 )
          AslFree(NtCurrentPeb()->ProcessHeap, String1);
        if ( v33 )
          AslFree(NtCurrentPeb()->ProcessHeap, v33);
        if ( v37 )
          AslFree(NtCurrentPeb()->ProcessHeap, v37);
        if ( v38 )
          AslFree(NtCurrentPeb()->ProcessHeap, v38);
        if ( v39 )
          AslFree(NtCurrentPeb()->ProcessHeap, v39);
        return (unsigned int)LastError;
      }
      a4 = (unsigned __int64)v9;
    }
    FileNamePart = AslPathGetFileNamePart(a4);
    v18 = (const wchar_t *)FileNamePart;
    if ( FileNamePart == a4 )
    {
LABEL_46:
      v20 = String1;
LABEL_99:
      if ( !v9 )
        goto LABEL_101;
      goto LABEL_100;
    }
    for ( i = (const wchar_t *)(FileNamePart - 4); ; --i )
    {
      if ( (unsigned __int64)i < a4 )
        goto LABEL_46;
      if ( (*i == 92 || *i == 47) && !_wcsnicmp(i, String2, 0xAuLL) )
        break;
    }
    LastError = RtlStringCchLengthW((__int64)v18, 0x7FFFFFFFLL, &v40);
    if ( LastError < 0 )
    {
      AslLogCallPrintf(1LL);
      goto LABEL_46;
    }
    v21 = v40;
    if ( a3 )
    {
      LastError = SdbpSafeAllocAndConcatW((unsigned int)&v39, (unsigned int)L"StagedDelete_", 13, (_DWORD)v18, v40);
      if ( LastError < 0 )
      {
        AslLogCallPrintf(1LL);
        v20 = String1;
LABEL_98:
        v9 = v36;
        goto LABEL_99;
      }
      v22 = v39;
    }
    else
    {
      v22 = v18;
    }
    Key = AslRegistryGetKey(
            &Handle,
            L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\SdbUpdates",
            2147483904LL);
    v24 = (char *)Handle;
    LastError = Key;
    if ( Key < 0 )
    {
      if ( Key != -1073741772 )
        goto LABEL_94;
LABEL_95:
      v20 = String1;
LABEL_96:
      if ( (unsigned __int64)(v24 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        ZwClose(v24);
      goto LABEL_98;
    }
    LastError = AslRegistryGetString(&String1, Handle, v22);
    if ( LastError < 0 )
      goto LABEL_95;
    v25 = String1;
    if ( !_wcsicmp(String1, v18) )
    {
      LastError = -1073741772;
      goto LABEL_95;
    }
    if ( v35 && !_wcsicmp(v25, L"__NotRedirected__") && a2 )
    {
      *a2 = 1;
      LastError = 0;
      goto LABEL_95;
    }
    LastError = SdbpSafeAllocAndConcatW((unsigned int)&v38, (unsigned int)L"MergeVer_", 9, (_DWORD)v22, 0LL);
    if ( LastError >= 0 )
    {
      UInt32 = AslRegistryGetUInt32(&v34, v24, v38);
      LastError = UInt32;
      if ( UInt32 == -1073741772 )
      {
        v27 = 0;
      }
      else
      {
        if ( UInt32 < 0 )
          goto LABEL_94;
        v27 = v34;
      }
      LastError = AslRegistryGetUInt32(&v32, v24, L"MergeVer");
      if ( LastError < 0 )
        goto LABEL_94;
      if ( v32 < v27 )
        AslLogCallPrintf(1LL);
      LastError = AslRegistryGetUInt32(&v32, v24, L"MinMergeVer");
      if ( LastError < 0 )
        goto LABEL_94;
      if ( v27 < v32 )
        AslLogCallPrintf(1LL);
      LastError = RtlStringCchLengthW(a4, 0x7FFFFFFFLL, &v42);
      if ( LastError < 0 )
        goto LABEL_94;
      if ( v42 >= v21 )
      {
        v20 = String1;
        LastError = SdbpSafeAllocAndConcatW((unsigned int)&v33, a4, (int)v42 - (int)v21, (_DWORD)String1, 0LL);
        if ( LastError >= 0 )
        {
          FileTimestamp = SdbpGetFileTimestamp(&v44, v33, 1);
          LastError = FileTimestamp;
          if ( FileTimestamp >= 0 )
          {
            LastError = SdbpGetFileTimestamp(&v45, (const WCHAR *)a4, 0);
            if ( LastError >= 0 )
            {
              ManifestedMergeStubAlloc = SdbpGetManifestedMergeStubAlloc(&v37, v18);
              LastError = ManifestedMergeStubAlloc;
              if ( ManifestedMergeStubAlloc == -1073741772 )
              {
                v30 = 0LL;
              }
              else
              {
                if ( ManifestedMergeStubAlloc < 0 )
                  goto LABEL_76;
                LastError = SdbpGetFileTimestamp(&v43, v37, 0);
                if ( LastError < 0 )
                  goto LABEL_76;
                v30 = v43;
              }
              if ( v44 < v45 || v44 < v30 )
              {
                LastError = -1073741772;
              }
              else
              {
                *v46 = v33;
                if ( a2 && v35 )
                  *a2 = 1;
                v33 = 0LL;
                LastError = 0;
              }
              goto LABEL_96;
            }
          }
          else if ( FileTimestamp == -1073741772 )
          {
            goto LABEL_96;
          }
        }
LABEL_76:
        AslLogCallPrintf(1LL);
        goto LABEL_96;
      }
      LastError = -1073741675;
    }
LABEL_94:
    AslLogCallPrintf(1LL);
    goto LABEL_95;
  }
  return (unsigned int)LastError;
}
