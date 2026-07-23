/*
 * XREFs of LdrpSearchPath @ 0x180091DD0
 * Callers:
 *     LdrpFindLoadedDll @ 0x180036E00 (LdrpFindLoadedDll.c)
 *     LdrpMapDllSearchPath @ 0x180091810 (LdrpMapDllSearchPath.c)
 *     LdrpFindLoadedDllInternal @ 0x1800C73E0 (LdrpFindLoadedDllInternal.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     LdrpComputeLazyDllPath @ 0x180005C40 (LdrpComputeLazyDllPath.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlCompareUnicodeStrings @ 0x18008EE30 (RtlCompareUnicodeStrings.c)
 *     RtlAppendUnicodeStringToString @ 0x180092390 (RtlAppendUnicodeStringToString.c)
 *     LdrpResolveDllName @ 0x180092430 (LdrpResolveDllName.c)
 *     LdrpAllocateUnicodeString @ 0x1800929C0 (LdrpAllocateUnicodeString.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x180092A4C (LdrpIsSecurityEtwLoggingEnabled.c)
 *     EtwEventWriteNoRegistration @ 0x1800AE4F0 (EtwEventWriteNoRegistration.c)
 *     RtlCopyUnicodeString @ 0x1800D7160 (RtlCopyUnicodeString.c)
 *     LdrpSaveLocationsSearched @ 0x18010B430 (LdrpSaveLocationsSearched.c)
 *     RtlpLookupSafeCurDirList @ 0x18010F9B4 (RtlpLookupSafeCurDirList.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpSearchPath(
        PCUNICODE_STRING Source,
        wchar_t **a2,
        char a3,
        wchar_t **a4,
        _WORD *a5,
        __int64 a6,
        const UNICODE_STRING *a7,
        bool *a8,
        __int64 a9)
{
  const UNICODE_STRING *v12; // r14
  unsigned int v13; // edx
  wchar_t *v14; // r9
  wchar_t *v15; // rcx
  wchar_t v16; // ax
  int v17; // r8d
  wchar_t v18; // ax
  int v19; // edi
  wchar_t *Buffer; // rbp
  wchar_t *v21; // r15
  wchar_t *v22; // rbx
  wchar_t v23; // ax
  wchar_t *v24; // rcx
  bool v25; // si
  __int16 v26; // ax
  int v27; // eax
  _QWORD *v28; // rsi
  __int64 v29; // rsi
  unsigned int v31; // eax
  int v32; // eax
  int Length; // eax
  const EVENT_DESCRIPTOR *v34; // rdx
  __int64 *v35; // rax
  __int64 *v36; // r14
  __int64 *i; // rsi
  _UNICODE_STRING *Heap; // rax
  _UNICODE_STRING *v39; // rsi
  unsigned __int16 v40; // cx
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-B8h] BYREF
  PCUNICODE_STRING v43; // [rsp+50h] [rbp-A8h]
  _WORD *v44; // [rsp+58h] [rbp-A0h]
  PVOID BaseAddress; // [rsp+60h] [rbp-98h]
  __int64 v46; // [rsp+68h] [rbp-90h]
  bool *v47; // [rsp+70h] [rbp-88h]
  __int64 v48; // [rsp+78h] [rbp-80h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-78h] BYREF
  __int64 v50; // [rsp+90h] [rbp-68h]
  int v51; // [rsp+98h] [rbp-60h]
  int v52; // [rsp+9Ch] [rbp-5Ch]
  wchar_t *v53; // [rsp+A0h] [rbp-58h]
  int v54; // [rsp+A8h] [rbp-50h]
  int v55; // [rsp+ACh] [rbp-4Ch]

  v44 = a5;
  v46 = a6;
  v12 = Source;
  v47 = a8;
  v48 = a9;
  v43 = Source;
  Destination = 0LL;
  BaseAddress = 0LL;
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1212, (__int64)"LdrpSearchPath", 3, "DLL name: %wZ\n", Source);
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1213, (__int64)"LdrpSearchPath", 5, "%wZ\n", v12);
  if ( !*a2 )
  {
    v19 = LdrpComputeLazyDllPath((__int64)a2);
    if ( v19 < 0 )
      goto LABEL_47;
  }
  v13 = 0;
  if ( a4 )
  {
    v14 = *a4;
    if ( *a4 )
    {
      v15 = a4[1];
      goto LABEL_7;
    }
  }
  v14 = a2[2];
  if ( v14 )
    goto LABEL_6;
  do
  {
    v14 = *a2;
LABEL_6:
    v15 = v14;
LABEL_7:
    if ( *v15 )
    {
      do
      {
        v16 = *v15;
        v17 = (int)v15;
        do
        {
          if ( v16 == 59 )
            break;
          v16 = v15[1];
          ++v15;
        }
        while ( v16 );
        if ( (int)v15 - v17 > v13 )
          v13 = (_DWORD)v15 - v17;
        v18 = *v15;
        if ( *v15 == 59 )
        {
          v18 = v15[1];
          ++v15;
        }
      }
      while ( v18 );
    }
  }
  while ( v14 == a2[2] && !a3 );
  v19 = LdrpAllocateUnicodeString(&Destination, v12->Length + 2 + v13);
  if ( v19 < 0 )
    goto LABEL_47;
  Buffer = Destination.Buffer;
  if ( a4 && (v21 = *a4) != 0LL )
  {
    v22 = a4[1];
  }
  else
  {
    v21 = a2[2];
    if ( !v21 )
      v21 = *a2;
    v22 = v21;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v23 = *v22;
      if ( !*v22 )
        break;
      if ( v23 == 59 )
      {
        ++v22;
      }
      else
      {
        v24 = Buffer;
        v25 = v22 == a2[1];
        do
        {
          ++v22;
          if ( v23 == 59 )
            break;
          *v24++ = v23;
          v23 = *v22;
        }
        while ( *v22 );
        if ( v24 != Buffer )
        {
          v26 = *(v24 - 1);
          if ( v26 != 92 && v26 != 47 )
          {
            *v24 = 92;
            LOWORD(v24) = (_WORD)v24 + 2;
          }
          Destination.Length = (_WORD)v24 - (_WORD)Buffer;
          RtlAppendUnicodeStringToString(&Destination, v12);
          v27 = LdrpResolveDllName((unsigned int)&Destination, (_DWORD)v44, v46, (_DWORD)a7, 0);
          v19 = v27;
          if ( v25 )
          {
            if ( v27 >= 0 )
            {
              v35 = (__int64 *)RtlpLookupSafeCurDirList();
              v36 = v35;
              if ( v35 )
              {
                for ( i = (__int64 *)*v35; i != v36; i = (__int64 *)*i )
                {
                  v40 = *((_WORD *)i + 8) >> 1;
                  if ( (unsigned __int16)(a7->Length >> 1) > v40
                    && !RtlCompareUnicodeStrings(a7->Buffer, v40, (PCWCH)i[3], v40, 1u) )
                  {
                    goto LABEL_38;
                  }
                }
              }
              Heap = (_UNICODE_STRING *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, a7->Length + 18LL);
              BaseAddress = Heap;
              v39 = Heap;
              if ( Heap )
              {
                Heap->Length = 0;
                Heap->MaximumLength = a7->Length;
                Heap->Buffer = &Heap[1].Length;
                RtlCopyUnicodeString(Heap, a7);
                v39->Buffer[(unsigned __int64)a7->Length >> 1] = 0;
              }
              v12 = v43;
              goto LABEL_35;
            }
          }
          else if ( v27 >= 0 )
          {
            goto LABEL_38;
          }
          if ( v27 != -1073741515 && v27 != -1073741790 && v27 != -1073741757 && v27 != -1073741715 )
            goto LABEL_38;
LABEL_35:
          *v44 = 0;
        }
      }
    }
    if ( v21 != a2[2] || a3 )
      break;
    v21 = *a2;
    v22 = *a2;
  }
  v19 = -1073741515;
LABEL_38:
  v28 = BaseAddress;
  if ( BaseAddress )
  {
    if ( v19 < 0
      || RtlCompareUnicodeStrings(
           a7->Buffer,
           (unsigned __int64)a7->Length >> 1,
           *((PCWCH *)BaseAddress + 1),
           (unsigned __int64)*(unsigned __int16 *)BaseAddress >> 1,
           1u) )
    {
      UserData.Ptr = *(_QWORD *)(LdrpImageEntry + 80);
      v31 = *(unsigned __int16 *)(LdrpImageEntry + 72) + 2;
      UserData.Reserved = 0;
      UserData.Size = v31;
      v50 = v28[1];
      v32 = *(unsigned __int16 *)v28 + 2;
      v52 = 0;
      v51 = v32;
      if ( v19 >= 0 )
      {
        v53 = a7->Buffer;
        Length = a7->Length;
        v55 = 0;
        v54 = Length + 2;
      }
      v34 = (const EVENT_DESCRIPTOR *)"\v";
      if ( v19 < 0 )
        v34 = &CurDirDllLoadFailureError;
      EtwEventWriteNoRegistration(&UserLoaderGuid, v34, (v19 >> 31) + 3, &UserData);
    }
    RtlFreeHeap(LdrpHeap, 0, v28);
  }
  if ( Destination.Buffer )
  {
    RtlpSysVolFree(Destination.Buffer);
    Destination.Buffer = 0LL;
  }
  *(_DWORD *)&Destination.Length = 0;
  if ( v19 >= 0 )
  {
    if ( a4 )
    {
      *a4 = v21;
      a4[1] = v22;
    }
    if ( v47 )
      *v47 = v21 == a2[2];
  }
  v29 = v48;
  if ( v48 && (unsigned __int8)LdrpIsSecurityEtwLoggingEnabled() )
    LdrpSaveLocationsSearched(a2, v22, v29);
LABEL_47:
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1533, (__int64)"LdrpSearchPath", 4, "Status: 0x%08lx\n", v19);
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1534, (__int64)"LdrpSearchPath", 6, "%x\n", v19);
  return (unsigned int)v19;
}
