/*
 * XREFs of RtlGetPersistedStateLocation @ 0x180080A00
 * Callers:
 *     _GetOverlayPackageKeyForLanguage @ 0x18006C1FC (_GetOverlayPackageKeyForLanguage.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x180085124 (RtlpGetTimeZoneInfoHandle.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18008A784 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlpGetPersistedRegistryLocation @ 0x18011C240 (RtlpGetPersistedRegistryLocation.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x180133490 (LdrpAppxGetRemediationRegistryKey.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlExpandEnvironmentStrings @ 0x1800AD3A0 (RtlExpandEnvironmentStrings.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __cdecl RtlGetPersistedStateLocation(
        PCWSTR SourceID,
        PCWSTR CustomValue,
        PCWSTR DefaultPath,
        STATE_LOCATION_TYPE StateLocationType,
        PWCHAR TargetPath,
        ULONG BufferLengthIn,
        PULONG BufferLengthOut)
{
  WCHAR *Heap; // rsi
  signed int v11; // edi
  __int64 v12; // r8
  unsigned int v13; // r8d
  ULONG v14; // eax
  ULONG v16; // ecx
  size_t v17; // r8
  const WCHAR *v18; // rdx
  NTSTATUS v19; // eax
  size_t v20; // rax
  NTSTATUS v21; // eax
  size_t v22; // rax
  unsigned __int64 v23; // rbx
  ULONG Length; // edi
  NTSTATUS v25; // eax
  ULONG v26; // ecx
  SIZE_T v27; // r8
  HANDLE Handle; // [rsp+38h] [rbp-41h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-39h] BYREF
  ULONG_PTR ReturnLength; // [rsp+48h] [rbp-31h] BYREF
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp-29h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+E0h] [rbp+67h] BYREF

  Handle = 0LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  Heap = 0LL;
  ReturnLength = 0LL;
  memset(&ObjectAttributes, 0, 44);
  ValueName = 0LL;
  if ( (unsigned int)StateLocationType > LocationTypeFileSystem )
    return -1073741583;
  if ( byte_1801D05D1 )
  {
    v11 = -1073741772;
    goto LABEL_4;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)((char *)&unk_180175430 + 16 * StateLocationType);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v19 = NtOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  v11 = v19;
  if ( v19 == -1073741772 )
  {
    byte_1801D05D1 = 1;
  }
  else
  {
    if ( v19 < 0 )
      goto LABEL_9;
    ValueName.Buffer = (wchar_t *)SourceID;
    if ( SourceID )
    {
      v20 = 2 * wcslen(SourceID);
      if ( v20 >= 0xFFFE )
        LOWORD(v20) = -4;
      ValueName.Length = v20;
      ValueName.MaximumLength = v20 + 2;
    }
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &ValueName;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v21 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    v11 = v21;
    if ( v21 != -1073741772 )
    {
      if ( v21 < 0 )
        goto LABEL_9;
      *(_QWORD *)&ValueName.Length = 0LL;
      if ( !CustomValue )
        CustomValue = L"TargetPath";
      ValueName.Buffer = (wchar_t *)CustomValue;
      if ( CustomValue )
      {
        v22 = 2 * wcslen(CustomValue);
        if ( v22 >= 0xFFFE )
          LOWORD(v22) = -4;
        ValueName.Length = v22;
        ValueName.MaximumLength = v22 + 2;
      }
      v23 = BufferLengthIn;
      Length = BufferLengthIn + 16;
      if ( BufferLengthIn + 16 < BufferLengthIn )
      {
        v11 = -1073741675;
        goto LABEL_9;
      }
      Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Length);
      if ( !Heap )
      {
        v11 = -1073741801;
        goto LABEL_9;
      }
      v25 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Length, &ResultLength);
      v11 = v25;
      if ( v25 < 0 )
      {
        if ( v25 != -2147483643 )
          goto LABEL_9;
        v26 = *((_DWORD *)Heap + 2);
        v18 = Heap + 6;
        ResultLength = v26;
        goto LABEL_40;
      }
      if ( (unsigned int)(*((_DWORD *)Heap + 1) - 1) > 1 )
      {
        v11 = -1073741788;
        goto LABEL_9;
      }
      v18 = Heap + 6;
      ResultLength = *((_DWORD *)Heap + 2);
      v26 = ResultLength;
      if ( Heap[((unsigned __int64)ResultLength >> 1) + 5] )
      {
        v26 = ResultLength + 2;
        ResultLength = v26;
        if ( (unsigned int)v23 < v26 )
        {
          v11 = -2147483643;
LABEL_40:
          if ( BufferLengthOut )
            *BufferLengthOut = v26;
          if ( v11 < 0 )
            goto LABEL_9;
          v17 = v26;
          goto LABEL_20;
        }
        v18[((unsigned __int64)v26 >> 1) - 1] = 0;
        v26 = ResultLength;
      }
      if ( *((_DWORD *)Heap + 1) == 2 )
      {
        v27 = -1LL;
        do
          ++v27;
        while ( v18[v27] );
        v11 = RtlExpandEnvironmentStrings(0LL, v18, v27, TargetPath, v23 >> 1, &ReturnLength);
        if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
        {
          if ( BufferLengthOut )
            *BufferLengthOut = 2 * ReturnLength;
          if ( v11 == -1073741789 )
            v11 = -2147483643;
        }
        goto LABEL_9;
      }
      goto LABEL_40;
    }
  }
LABEL_4:
  if ( DefaultPath )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( DefaultPath[v12] );
    v13 = v12 + 1;
    v14 = 2 * v13;
    ResultLength = 2 * v13;
    if ( 2 * v13 < v13 )
    {
      v11 = -1073741675;
      goto LABEL_9;
    }
    v16 = BufferLengthIn;
    v11 = BufferLengthIn < v14 ? 0x80000005 : 0;
    if ( BufferLengthOut )
      *BufferLengthOut = v14;
    if ( v14 > v16 )
      goto LABEL_9;
    v17 = v14;
    v18 = DefaultPath;
LABEL_20:
    memmove(TargetPath, v18, v17);
  }
LABEL_9:
  if ( Handle )
    NtClose(Handle);
  if ( KeyHandle )
    NtClose(KeyHandle);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v11;
}
