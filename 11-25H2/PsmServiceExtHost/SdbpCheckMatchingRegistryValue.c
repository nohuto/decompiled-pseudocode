/*
 * XREFs of SdbpCheckMatchingRegistryValue @ 0x180099C90
 * Callers:
 *     SdbpCheckMatchingRegistryEntry @ 0x180099A8C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x18009A94C (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
 *     AslStringDuplicate @ 0x18009E218 (AslStringDuplicate.c)
 *     AslStringPatternMatchExW @ 0x18009E3B8 (AslStringPatternMatchExW.c)
 *     memcmp_0 @ 0x1800A77F6 (memcmp_0.c)
 *     memmove_0 @ 0x1800A780E (memmove_0.c)
 */

__int64 __fastcall SdbpCheckMatchingRegistryValue(
        HANDLE KeyHandle,
        wchar_t *String1,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  _WORD *v13; // rsi
  _DWORD *v14; // rdi
  unsigned int v15; // ebx
  const WCHAR *v16; // rdx
  NTSTATUS v17; // eax
  _DWORD *Heap; // rax
  int v19; // eax
  _DWORD *v20; // r14
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  bool v26; // zf
  _WORD *v27; // rax
  _WORD *v28; // rcx
  _WORD *v29; // rax
  PCWSTR SourceString; // [rsp+38h] [rbp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp+38h] BYREF

  SourceString = 0LL;
  ResultLength = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  DestinationString = 0LL;
  if ( !String1 || !*String1 )
    goto LABEL_44;
  if ( _wcsicmp(String1, L"dbRegistryDefaultName") )
  {
    if ( (int)AslStringDuplicate(&SourceString, String1) < 0 )
      goto LABEL_48;
    v16 = SourceString;
  }
  else
  {
    v16 = 0LL;
  }
  RtlInitUnicodeString(&DestinationString, v16);
  v17 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, 0LL, 0, &ResultLength);
  if ( v17 < 0 && v17 != -2147483643 && v17 != -1073741789 )
  {
    v15 = 1;
    goto LABEL_48;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ResultLength);
  v14 = Heap;
  if ( !Heap )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_48;
  }
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, Heap, ResultLength, &ResultLength) < 0 )
    goto LABEL_15;
  v19 = v14[1];
  if ( !a3 )
  {
    *a9 = 1;
LABEL_18:
    v15 = 1;
    goto LABEL_45;
  }
  if ( v19 != a3 )
    goto LABEL_18;
  v20 = (_DWORD *)((char *)v14 + (unsigned int)v14[2]);
  v21 = v19 - 1;
  if ( !v21 || (v22 = v21 - 1) == 0 )
  {
    v29 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v14[3] + 2LL);
    v13 = v29;
    if ( !v29 )
      goto LABEL_15;
    memmove_0(v29, v20, (unsigned int)v14[3]);
    v13[(unsigned __int64)(unsigned int)v14[3] >> 1] = 0;
LABEL_42:
    if ( (unsigned int)AslStringPatternMatchExW(a4, v13) )
      goto LABEL_44;
LABEL_43:
    v15 = 1;
    goto LABEL_45;
  }
  v23 = v22 - 1;
  if ( !v23 )
  {
    if ( Size != v14[3] )
      goto LABEL_43;
    v26 = memcmp_0(Buf1, (char *)v14 + (unsigned int)v14[2], Size) == 0;
LABEL_35:
    if ( !v26 )
      goto LABEL_43;
LABEL_44:
    *a9 = 1;
    v15 = 1;
    if ( !v14 )
      goto LABEL_46;
    goto LABEL_45;
  }
  v24 = v23 - 1;
  if ( !v24 )
  {
    v26 = a5 == *v20;
    goto LABEL_35;
  }
  v25 = v24 - 3;
  if ( !v25 )
  {
    v27 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v14[3] + 2LL);
    v13 = v27;
    if ( !v27 )
      goto LABEL_15;
    memmove_0(v27, v20, (unsigned int)v14[3]);
    v28 = v13;
    for ( v13[(unsigned __int64)(unsigned int)v14[3] >> 1] = 0; v28 < (_WORD *)((char *)v13 + (v14[3] & 0xFFFFFFFE)); ++v28 )
    {
      if ( !*v28 )
      {
        if ( !v28[1] )
          goto LABEL_42;
        *v28 = 59;
      }
    }
    goto LABEL_42;
  }
  if ( v25 == 4 )
  {
    v26 = a6 == *(_QWORD *)v20;
    goto LABEL_35;
  }
LABEL_15:
  AslLogCallPrintf(1LL);
LABEL_45:
  AslFree(NtCurrentPeb()->ProcessHeap, v14);
LABEL_46:
  if ( v13 )
    AslFree(NtCurrentPeb()->ProcessHeap, v13);
LABEL_48:
  if ( SourceString )
    AslFree(NtCurrentPeb()->ProcessHeap, SourceString);
  return v15;
}
