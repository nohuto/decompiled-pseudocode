/*
 * XREFs of RtlpLoadInstallLanguageFallback @ 0x18009976C
 * Callers:
 *     RtlpAddNeutralsToMergedList @ 0x180012510 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x180015940 (LdrpMergeLangFallbackLists.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180099AC0 (RtlpGetSystemDefaultUILanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x18011D478 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180148B20 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     _MuiRegAllocArray @ 0x180099020 (_MuiRegAllocArray.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180160330 (NtQueryValueKey.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpLoadInstallLanguageFallback(__int64 a1, _WORD *a2, _WORD *a3)
{
  void *v5; // rsi
  PVOID v6; // rax
  int v7; // r12d
  size_t v8; // rax
  NTSTATUS v9; // ebx
  HANDLE v10; // rbx
  size_t v11; // rax
  _DWORD *Heap; // rdi
  NTSTATUS v13; // eax
  wchar_t *i; // rdi
  wchar_t *v15; // rcx
  wchar_t j; // ax
  size_t v18; // rax
  size_t v19; // rax
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  DWORD Lcid; // [rsp+C0h] [rbp+40h] BYREF
  ULONG ResultLength; // [rsp+D8h] [rbp+58h] BYREF

  KeyHandle = 0LL;
  Lcid = 0;
  v5 = 0LL;
  ValueName = 0LL;
  if ( !a1 || !a2 || !a3 )
  {
    v9 = -1073741811;
    goto LABEL_26;
  }
  v6 = MuiRegAllocArray(a1, 0xACu);
  v5 = v6;
  if ( !v6 )
  {
    v9 = -1073741801;
    goto LABEL_26;
  }
  memset_thunk_772440563353939046(v6, 0, 0x158uLL);
  *a2 = 0;
  ValueName.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language";
  v7 = 0;
  *a3 = 0;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v8 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.RootDirectory = 0LL;
  if ( v8 >= 0xFFFE )
    LOWORD(v8) = -4;
  ValueName.Length = v8;
  ValueName.MaximumLength = v8 + 2;
  ObjectAttributes.ObjectName = &ValueName;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v9 >= 0 )
  {
    *(_QWORD *)&ValueName.Length = 0LL;
    ValueName.Buffer = (wchar_t *)L"InstallLanguageFallback";
    v10 = KeyHandle;
    v11 = 2 * wcslen(L"InstallLanguageFallback");
    ResultLength = 0;
    if ( v11 >= 0xFFFE )
      LOWORD(v11) = -4;
    ValueName.Length = v11;
    ValueName.MaximumLength = v11 + 2;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x164uLL);
    if ( !Heap )
    {
      v9 = -1073741670;
      goto LABEL_26;
    }
    v13 = NtQueryValueKey(v10, &ValueName, KeyValuePartialInformation, Heap, 0x164u, &ResultLength);
    v9 = v13;
    if ( v13 >= 0 )
    {
      if ( Heap[2] > 0x158u )
        v9 = -2147483643;
      else
        memmove(v5, Heap + 3, (unsigned int)Heap[2]);
    }
    else if ( v13 != -2147483643 )
    {
LABEL_17:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      if ( v9 >= 0 )
      {
        if ( v7 != 1 )
          goto LABEL_44;
        for ( i = (wchar_t *)v5; *i; ++i )
        {
          v15 = i + 1;
          if ( *i == 44 )
          {
            *i++ = 0;
            for ( j = *v15; j == 32; j = *i )
              ++i;
            break;
          }
        }
        *(_QWORD *)&ValueName.Length = 0LL;
        ValueName.Buffer = (wchar_t *)v5;
        v18 = 2 * wcslen((const wchar_t *)v5);
        if ( v18 >= 0xFFFE )
          LOWORD(v18) = -4;
        ValueName.Length = v18;
        ValueName.MaximumLength = v18 + 2;
        if ( RtlCultureNameToLCID(&ValueName, &Lcid) )
        {
          *a2 = Lcid;
          if ( *i )
          {
            *(_QWORD *)&ValueName.Length = 0LL;
            ValueName.Buffer = i;
            v19 = 2 * wcslen(i);
            if ( v19 >= 0xFFFE )
              LOWORD(v19) = -4;
            ValueName.Length = v19;
            ValueName.MaximumLength = v19 + 2;
            if ( RtlCultureNameToLCID(&ValueName, &Lcid) )
            {
              *a3 = Lcid;
            }
            else
            {
              v9 = -1073741823;
              *a2 = 0;
            }
          }
        }
        else
        {
LABEL_44:
          v9 = -1073741823;
        }
      }
      goto LABEL_26;
    }
    v7 = Heap[1];
    goto LABEL_17;
  }
LABEL_26:
  if ( KeyHandle )
    NtClose(KeyHandle);
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return (unsigned int)v9;
}
