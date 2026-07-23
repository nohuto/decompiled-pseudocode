/*
 * XREFs of SdbpGetManifestedMergeStubAlloc @ 0x140801BA0
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x140801F44 (SdbpGetMergeRedirectPathInternal.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwEnumerateValueKey @ 0x1406A7610 (ZwEnumerateValueKey.c)
 *     SdbpGetMergeSdbsDisabled @ 0x1408024EC (SdbpGetMergeSdbsDisabled.c)
 *     AslRegistryGetKey @ 0x140809214 (AslRegistryGetKey.c)
 *     AslPathToSystemPath @ 0x14080A620 (AslPathToSystemPath.c)
 *     AslStringDuplicate @ 0x140942210 (AslStringDuplicate.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     RtlGetNtSystemRoot @ 0x140A0AB50 (RtlGetNtSystemRoot.c)
 */

__int64 __fastcall SdbpGetManifestedMergeStubAlloc(_QWORD *a1, const wchar_t *a2)
{
  __int64 v3; // rsi
  __int64 v4; // r13
  wchar_t *v5; // r15
  NTSTATUS MergeSdbsDisabled; // ebx
  int Key; // eax
  int v9; // r14d
  const wchar_t **v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rax
  ULONG Length; // ebx
  ULONG v14; // eax
  const char *v15; // r9
  int v16; // r8d
  NTSTATUS v17; // eax
  __int64 v18; // rax
  ULONG v19; // ebx
  unsigned __int64 v20; // r12
  const wchar_t *NtSystemRoot; // rax
  const wchar_t *v22; // rbx
  size_t v23; // r8
  const char *v24; // r9
  int v25; // r8d
  HANDLE v26; // rcx
  ULONG v27; // [rsp+30h] [rbp-20h]
  __int64 v28; // [rsp+38h] [rbp-18h] BYREF
  HANDLE KeyHandle[2]; // [rsp+40h] [rbp-10h] BYREF
  ULONG Index; // [rsp+A0h] [rbp+50h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp+58h] BYREF

  Index = 0;
  v3 = 0LL;
  ResultLength = 0;
  v4 = 0LL;
  v5 = 0LL;
  v28 = 0LL;
  KeyHandle[0] = 0LL;
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  MergeSdbsDisabled = SdbpGetMergeSdbsDisabled(&Index);
  if ( MergeSdbsDisabled < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetManifestedMergeStubAlloc",
      1137,
      (unsigned int)"SdbpGetMergeSdbsDisabled failed [%x]");
    return (unsigned int)MergeSdbsDisabled;
  }
  if ( Index )
    return (unsigned int)-1073741772;
  Key = AslRegistryGetKey(
          KeyHandle,
          L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\SdbUpdates\\ManifestedMergeStubSdbs",
          2147483904LL,
          1LL);
  MergeSdbsDisabled = Key;
  if ( Key < 0 )
  {
    if ( Key != -1073741772 )
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetManifestedMergeStubAlloc",
        1153,
        (unsigned int)"AslRegistryGetKey failed to open ManifestedMergeStubSdbs key [%x]");
    goto LABEL_49;
  }
  v9 = 1;
  v10 = (const wchar_t **)&off_140009778;
  do
  {
    if ( !wcsicmp(a2, *v10) )
      break;
    ++v9;
    v10 += 4;
  }
  while ( (__int64)v10 < (__int64)&qword_140009898 );
  v3 = 0LL;
  v5 = 0LL;
  if ( v9 >= 10 )
  {
LABEL_48:
    MergeSdbsDisabled = -1073741772;
    goto LABEL_49;
  }
  v11 = -1LL;
  v12 = -1LL;
  do
    ++v12;
  while ( a2[v12] );
  Length = 2 * v12 + 18;
  v27 = Length;
  v4 = AslAlloc(0LL, Length);
  v14 = 0;
  if ( !v4 )
  {
    v15 = "Failed to allocate partial info.";
    v16 = 1173;
    goto LABEL_18;
  }
  while ( 1 )
  {
    Index = v14;
    v17 = ZwEnumerateValueKey(KeyHandle[0], v14, KeyValuePartialInformation, (PVOID)v4, Length, &ResultLength);
    MergeSdbsDisabled = v17;
    if ( v17 != -2147483643 && v17 != -1073741789 )
      break;
LABEL_26:
    Length = v27;
    v14 = Index + 1;
  }
  if ( v17 == -2147483622 )
    goto LABEL_48;
  if ( v17 >= 0 )
  {
    if ( *(_DWORD *)(v4 + 4) != 1 || wcsicmp(a2, (const wchar_t *)(v4 + 12)) )
      goto LABEL_26;
    v18 = -1LL;
    do
      ++v18;
    while ( a2[v18] );
    v19 = 2 * v18 + 538;
    v20 = v19;
    v5 = (wchar_t *)AslAlloc(0LL, v19);
    if ( !v5 )
    {
      v15 = "Failed to allocate basic info.";
      v16 = 1209;
      goto LABEL_18;
    }
    MergeSdbsDisabled = ZwEnumerateValueKey(KeyHandle[0], Index, KeyValueBasicInformation, v5, v19, &ResultLength);
    if ( MergeSdbsDisabled < 0 )
    {
      v15 = "Failed to query basic info.";
      v16 = 1220;
      goto LABEL_19;
    }
    if ( (unsigned __int64)ResultLength + 2 > v20 )
    {
      MergeSdbsDisabled = -1073741789;
      v15 = "Buffer too small to query basic info.";
      v16 = 1225;
      goto LABEL_19;
    }
    NtSystemRoot = RtlGetNtSystemRoot();
    v22 = NtSystemRoot;
    v23 = -1LL;
    do
      ++v23;
    while ( NtSystemRoot[v23] );
    if ( wcsnicmp(NtSystemRoot, v5 + 6, v23) )
    {
      MergeSdbsDisabled = AslStringDuplicate(&v28, v5 + 6);
      if ( MergeSdbsDisabled < 0 )
      {
        v24 = "Failed to duplicate stub path.";
        v25 = 1252;
        goto LABEL_41;
      }
    }
    else
    {
      do
        ++v11;
      while ( v22[v11] );
      MergeSdbsDisabled = AslPathToSystemPath(&v28, &v5[v11 + 6]);
      if ( MergeSdbsDisabled < 0 )
      {
        v24 = "Failed to allocate or convert stub path.";
        v25 = 1245;
LABEL_41:
        AslLogCallPrintf(1, (unsigned int)"SdbpGetManifestedMergeStubAlloc", v25, (_DWORD)v24);
        v3 = v28;
        goto LABEL_49;
      }
    }
    v3 = v28;
    if ( v28 )
    {
      MergeSdbsDisabled = 0;
      *a1 = v28;
      v3 = 0LL;
      goto LABEL_49;
    }
    v15 = "Failed to allocate stub path.";
    v16 = 1259;
LABEL_18:
    MergeSdbsDisabled = -1073741801;
    goto LABEL_19;
  }
  v15 = "Failed to query partial info.";
  v16 = 1192;
LABEL_19:
  AslLogCallPrintf(1, (unsigned int)"SdbpGetManifestedMergeStubAlloc", v16, (_DWORD)v15);
LABEL_49:
  v26 = KeyHandle[0];
  if ( (unsigned __int64)KeyHandle[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(KeyHandle[0]);
  if ( v3 )
    AslFree(v26);
  if ( v4 )
    AslFree(v26);
  if ( v5 )
    AslFree(v26);
  return (unsigned int)MergeSdbsDisabled;
}
