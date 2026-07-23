/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x1800A5D14
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800A5A48 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlCompareUnicodeStrings @ 0x18008EE30 (RtlCompareUnicodeStrings.c)
 *     RtlPrefixUnicodeString @ 0x1800A64C0 (RtlPrefixUnicodeString.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180160330 (NtQueryValueKey.c)
 *     NtEnumerateKey @ 0x180160690 (NtEnumerateKey.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpProcessIFEOKeyFilter(void **a1, ACCESS_MASK a2, _UNICODE_STRING *a3)
{
  int v3; // ebx
  ULONG Length; // edi
  void *v7; // rsi
  WCHAR *v8; // r14
  size_t v9; // rax
  void *v10; // rcx
  NTSTATUS result; // eax
  _UNICODE_STRING v12; // xmm0
  size_t v13; // rax
  _BYTE *v14; // rax
  ULONG v15; // r13d
  NTSTATUS v16; // edi
  size_t v17; // rax
  ULONG v18; // ecx
  NTSTATUS v19; // eax
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v22; // eax
  HANDLE *v23; // rsi
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v26; // [rsp+48h] [rbp-B8h]
  _BYTE *v27; // [rsp+50h] [rbp-B0h]
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+60h] [rbp-A0h]
  HANDLE *v30; // [rsp+68h] [rbp-98h]
  _UNICODE_STRING String2; // [rsp+70h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v34; // [rsp+B4h] [rbp-4Ch]
  int v35; // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+BCh] [rbp-44h]

  v3 = 0;
  v30 = a1;
  DesiredAccess = a2;
  ResultLength = 0;
  KeyHandle = 0LL;
  Length = 544;
  ValueName.Buffer = (wchar_t *)L"UseFilter";
  memset(&ObjectAttributes, 0, 44);
  v7 = 0LL;
  v26 = 544;
  v8 = (WCHAR *)KeyValueInformation;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v9 = wcslen(L"UseFilter");
  if ( v9 > 0x7FFE )
    return -1073741562;
  v10 = *a1;
  ValueName.Length = 2 * v9;
  ValueName.MaximumLength = 2 * v9 + 2;
  result = NtQueryValueKey(v10, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x220u, &ResultLength);
  if ( result < 0 )
  {
    if ( result == -1073741772 || result == -1073741789 || result == -2147483643 )
      return v3;
    return result;
  }
  if ( v34 != 4 || v35 != 4 || !v36 )
    return 0;
  v12 = *a3;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = (wchar_t *)L"\\??\\";
  String2 = v12;
  v13 = wcslen(L"\\??\\");
  if ( v13 > 0x7FFE )
    return -1073741562;
  ValueName.Length = 2 * v13;
  ValueName.MaximumLength = 2 * v13 + 2;
  if ( RtlPrefixUnicodeString(&ValueName, &String2, 1u) )
  {
    String2.Length -= 8;
    String2.Buffer += 4;
  }
  v14 = KeyValueInformation;
  v15 = 0;
  v27 = KeyValueInformation;
  while ( 1 )
  {
    v16 = NtEnumerateKey(*v30, v15, KeyBasicInformation, v14, Length, &ResultLength);
    if ( v16 >= 0 )
    {
      ValueName.Length = *((_WORD *)v27 + 6);
      ValueName.MaximumLength = *((_WORD *)v27 + 6);
      ValueName.Buffer = (wchar_t *)(v27 + 16);
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.RootDirectory = *v30;
      ObjectAttributes.ObjectName = &ValueName;
      v16 = NtOpenKey(&KeyHandle, DesiredAccess, &ObjectAttributes);
      if ( v16 >= 0 )
        break;
    }
LABEL_35:
    ++v15;
    if ( v16 < 0 )
      goto LABEL_36;
LABEL_31:
    v14 = v27;
    Length = v26;
  }
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = (wchar_t *)L"FilterFullPath";
  v17 = wcslen(L"FilterFullPath");
  if ( v17 > 0x7FFE )
  {
    v16 = -1073741562;
    NtClose(KeyHandle);
    goto LABEL_36;
  }
  v18 = v26;
  ValueName.Length = 2 * v17;
  ValueName.MaximumLength = 2 * v17 + 2;
  while ( 1 )
  {
    v19 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v8, v18, &ResultLength);
    v16 = v19;
    if ( v19 != -2147483643 && v19 != -1073741789 )
    {
      Heap = v27;
      v18 = v26;
      goto LABEL_24;
    }
    if ( v7 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap )
      break;
    Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, ResultLength);
    v7 = Heap;
    if ( !Heap )
      goto LABEL_47;
    v18 = ResultLength;
    v8 = (WCHAR *)Heap;
    v26 = ResultLength;
    v27 = Heap;
LABEL_24:
    if ( v16 != -2147483643 )
    {
      v27 = Heap;
      v26 = v18;
      if ( v16 != -1073741789 )
        goto LABEL_26;
    }
  }
  v7 = 0LL;
LABEL_47:
  v16 = -1073741801;
LABEL_26:
  if ( v16 < 0 )
  {
    NtClose(KeyHandle);
    v22 = 0;
    if ( v16 != -1073741772 )
      v22 = v16;
    v16 = v22;
    goto LABEL_35;
  }
  if ( *((_DWORD *)v8 + 1) != 1
    || *((_DWORD *)v8 + 2) > 0xFFFEu
    || RtlCompareUnicodeStrings(
         String2.Buffer,
         (unsigned __int64)String2.Length >> 1,
         v8 + 6,
         (unsigned __int64)(unsigned __int16)(v8[4] - 2) >> 1,
         1u) )
  {
    NtClose(KeyHandle);
    ++v15;
    goto LABEL_31;
  }
LABEL_36:
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  if ( v16 >= 0 )
  {
    v23 = v30;
    NtClose(*v30);
    *v23 = KeyHandle;
  }
  if ( v16 != -2147483622 )
    return v16;
  return v3;
}
