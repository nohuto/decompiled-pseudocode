/*
 * XREFs of SdbpGetManifestedMergeStubAlloc @ 0x18009321C
 * Callers:
 *     SdbGetMergeStubPath @ 0x180092724 (SdbGetMergeStubPath.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x180093640 (SdbpGetMergeRedirectPathInternal.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbpGetMergeSdbsDisabled @ 0x180093DF4 (SdbpGetMergeSdbsDisabled.c)
 *     SdbpGetMergeSdbsSupported @ 0x180093EF8 (SdbpGetMergeSdbsSupported.c)
 *     AslFree @ 0x18009D9EC (AslFree.c)
 *     AslRegistryGetKey @ 0x18009DBE8 (AslRegistryGetKey.c)
 *     AslStringDuplicate @ 0x18009E508 (AslStringDuplicate.c)
 *     AslPathToSystemPath @ 0x1800A434C (AslPathToSystemPath.c)
 *     RtlDownlevelGetNtSystemRoot @ 0x1800A7924 (RtlDownlevelGetNtSystemRoot.c)
 */

__int64 __fastcall SdbpGetManifestedMergeStubAlloc(_QWORD *a1, const wchar_t *a2)
{
  ULONG v2; // r12d
  wchar_t *Heap; // r13
  wchar_t *v5; // r14
  NTSTATUS MergeSdbsDisabled; // ebx
  int Key; // eax
  const wchar_t **v9; // rbx
  int v10; // esi
  __int64 v11; // rsi
  __int64 v12; // rax
  ULONG Length; // ebx
  NTSTATUS v14; // eax
  __int64 v15; // rax
  ULONG v16; // ebx
  unsigned __int64 v17; // r15
  const wchar_t *NtSystemRoot; // rax
  const wchar_t *v19; // rbx
  size_t v20; // r8
  __int64 v21; // rax
  __int64 v22; // [rsp+30h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-8h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+50h] BYREF
  ULONG v26; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  v26 = 0;
  Heap = 0LL;
  ResultLength = 0;
  v5 = 0LL;
  v22 = 0LL;
  KeyHandle = 0LL;
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  if ( (unsigned int)SdbpGetMergeSdbsSupported() )
  {
    MergeSdbsDisabled = SdbpGetMergeSdbsDisabled(&v26);
    if ( MergeSdbsDisabled < 0 )
    {
      AslLogCallPrintf(1LL);
      return (unsigned int)MergeSdbsDisabled;
    }
    if ( !v26 )
    {
      Key = AslRegistryGetKey(
              &KeyHandle,
              L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\SdbUpdates\\ManifestedMergeStubSdbs",
              2147483904LL);
      MergeSdbsDisabled = Key;
      if ( Key < 0 )
      {
        if ( Key == -1073741772 )
        {
LABEL_45:
          if ( (char *)KeyHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            ZwClose(KeyHandle);
          if ( v22 )
            AslFree(NtCurrentPeb()->ProcessHeap, v22);
          if ( Heap )
            AslFree(NtCurrentPeb()->ProcessHeap, Heap);
          if ( v5 )
            AslFree(NtCurrentPeb()->ProcessHeap, v5);
          return (unsigned int)MergeSdbsDisabled;
        }
LABEL_10:
        AslLogCallPrintf(1LL);
        goto LABEL_45;
      }
      v9 = (const wchar_t **)&off_1800BB858;
      v10 = 1;
      do
      {
        if ( !_wcsicmp(a2, *v9) )
          break;
        ++v10;
        v9 += 4;
      }
      while ( (__int64)v9 < (__int64)&qword_1800BB978 );
      v5 = 0LL;
      if ( v10 >= 10 )
      {
LABEL_44:
        MergeSdbsDisabled = -1073741772;
        goto LABEL_45;
      }
      v11 = -1LL;
      v12 = -1LL;
      do
        ++v12;
      while ( a2[v12] );
      Length = 2 * v12 + 18;
      v26 = Length;
      Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
      if ( Heap )
      {
        while ( 1 )
        {
          v14 = ZwEnumerateValueKey(KeyHandle, v2, KeyValuePartialInformation, Heap, Length, &ResultLength);
          MergeSdbsDisabled = v14;
          if ( v14 != -2147483643 && v14 != -1073741789 )
          {
            if ( v14 == -2147483622 )
              goto LABEL_44;
            if ( v14 < 0 )
              goto LABEL_10;
            if ( *((_DWORD *)Heap + 1) == 1 && !_wcsicmp(a2, Heap + 6) )
              break;
          }
          Length = v26;
          ++v2;
        }
        v15 = -1LL;
        do
          ++v15;
        while ( a2[v15] );
        v16 = 2 * v15 + 538;
        v17 = v16;
        v5 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v16);
        if ( !v5 )
        {
          MergeSdbsDisabled = -1073741801;
          goto LABEL_10;
        }
        MergeSdbsDisabled = ZwEnumerateValueKey(KeyHandle, v2, KeyValueBasicInformation, v5, v16, &ResultLength);
        if ( MergeSdbsDisabled < 0 )
        {
LABEL_19:
          AslLogCallPrintf(1LL);
          goto LABEL_45;
        }
        if ( (unsigned __int64)ResultLength + 2 > v17 )
        {
          MergeSdbsDisabled = -1073741789;
          goto LABEL_19;
        }
        NtSystemRoot = (const wchar_t *)RtlDownlevelGetNtSystemRoot();
        v19 = NtSystemRoot;
        v20 = -1LL;
        do
          ++v20;
        while ( NtSystemRoot[v20] );
        if ( _wcsnicmp(NtSystemRoot, v5 + 6, v20) )
        {
          MergeSdbsDisabled = AslStringDuplicate(&v22, v5 + 6);
          if ( MergeSdbsDisabled < 0 )
            goto LABEL_19;
        }
        else
        {
          do
            ++v11;
          while ( v19[v11] );
          MergeSdbsDisabled = AslPathToSystemPath(&v22, &v5[v11 + 6]);
          if ( MergeSdbsDisabled < 0 )
            goto LABEL_19;
        }
        if ( v22 )
        {
          v21 = v22;
          MergeSdbsDisabled = 0;
          v22 = 0LL;
          *a1 = v21;
          goto LABEL_45;
        }
      }
      MergeSdbsDisabled = -1073741801;
      goto LABEL_19;
    }
  }
  return (unsigned int)-1073741772;
}
