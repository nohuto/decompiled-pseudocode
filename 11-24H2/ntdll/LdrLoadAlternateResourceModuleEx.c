/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x180075B00
 * Callers:
 *     LdrResSearchResource @ 0x18002D200 (LdrResSearchResource.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180075320 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResSearchResourceMappedFile @ 0x180096010 (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModule @ 0x1800EC360 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003BF70 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180074D00 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetRcConfig @ 0x180077060 (LdrpGetRcConfig.c)
 *     LdrpGetFromMUIMemCache @ 0x1800771B0 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetLoadAsEntry @ 0x18007A2FC (LdrpGetLoadAsEntry.c)
 *     LdrFindEntryForAddress @ 0x18007AA10 (LdrFindEntryForAddress.c)
 *     GetOverlayFilePathUsingChecksum @ 0x18007EE60 (GetOverlayFilePathUsingChecksum.c)
 *     RtlAppendUnicodeToString @ 0x18007F450 (RtlAppendUnicodeToString.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18008CC80 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpMapResourceFile @ 0x180093250 (LdrpMapResourceFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x180094588 (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrpTraceLoadMUIDll @ 0x18009540C (LdrpTraceLoadMUIDll.c)
 *     RtlLcidToLocaleName @ 0x180099060 (RtlLcidToLocaleName.c)
 *     LdrpQuerySxSMUIFile @ 0x18009A09C (LdrpQuerySxSMUIFile.c)
 *     LdrpGetFileDriverStoreRoot @ 0x1800E8774 (LdrpGetFileDriverStoreRoot.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x18010C6A0 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1801118CC (LdrpCnvrtShortToLongFileName.c)
 *     __report_rangecheckfailure @ 0x18011EC5C (__report_rangecheckfailure.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     wcsrchr @ 0x180125E80 (wcsrchr.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwQueryVirtualMemory @ 0x1801604B0 (ZwQueryVirtualMemory.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModuleEx(
        PVOID DllHandle,
        LANGID LanguageId,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  LCID v7; // edi
  unsigned int v9; // r12d
  PVOID EntryPointActivationContext; // r15
  void *v11; // rax
  ULONG v13; // eax
  PVOID Heap; // r15
  NTSTATUS v15; // r15d
  __int64 v16; // rax
  ULONG_PTR v17; // r8
  wchar_t *v18; // rax
  wchar_t *v19; // rcx
  __int64 v20; // rax
  PVOID v21; // rax
  NTSTATUS EntryForAddress; // eax
  wchar_t *v23; // rax
  ULONG_PTR v24; // rax
  const wchar_t *Buffer; // rcx
  __int64 v26; // r12
  unsigned int v27; // eax
  unsigned __int64 v28; // rax
  const wchar_t *v29; // rcx
  char *v30; // rax
  unsigned __int16 v31; // r12
  size_t v32; // rax
  int v33; // eax
  int v34; // ecx
  size_t v35; // rax
  ULONG_PTR v36; // r8
  int v37; // eax
  __int16 v38; // r12
  unsigned __int16 v39; // cx
  unsigned __int16 v40; // r12
  bool v41; // cf
  int v42; // r12d
  char v43; // dl
  unsigned __int16 v44; // r15
  unsigned __int16 MaximumLength; // r12
  size_t v46; // rax
  void *v47; // rax
  int v48; // ecx
  size_t v49; // rax
  void *v50; // rdx
  int v51; // eax
  unsigned __int64 v52; // r12
  __int64 RcConfig; // rax
  int OverlayFilePathUsingChecksum; // eax
  wchar_t *v55; // r12
  size_t v56; // rax
  __int64 v57; // rcx
  size_t v58; // rax
  __int64 v59; // rax
  wchar_t *i; // rcx
  __int64 v61; // rax
  int v62; // edx
  __int64 v63; // rax
  __int64 v64; // rax
  size_t v65; // rax
  ULONG_PTR v66; // r8
  int v67; // eax
  __int16 v68; // r12
  __int64 v69; // r15
  __int64 v70; // rdx
  __int64 v71; // rax
  unsigned int v72; // r15d
  __int64 v73; // rax
  size_t v74; // rax
  unsigned __int16 v75; // r12
  int v76; // eax
  wchar_t *v77; // rax
  __int64 v78; // r12
  unsigned int Length; // edx
  unsigned int v80; // eax
  PLDR_DATA_TABLE_ENTRY v81; // r15
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  unsigned __int8 v85; // [rsp+40h] [rbp-AE8h]
  NTSTATUS v86; // [rsp+44h] [rbp-AE4h]
  ULONG_PTR ReturnLength; // [rsp+48h] [rbp-AE0h] BYREF
  ULONG v88; // [rsp+50h] [rbp-AD8h]
  PLDR_DATA_TABLE_ENTRY Entry; // [rsp+58h] [rbp-AD0h] BYREF
  PVOID v90; // [rsp+60h] [rbp-AC8h] BYREF
  _UNICODE_STRING Destination; // [rsp+68h] [rbp-AC0h] BYREF
  unsigned __int64 v92; // [rsp+78h] [rbp-AB0h]
  wchar_t *String; // [rsp+80h] [rbp-AA8h]
  PVOID v94; // [rsp+88h] [rbp-AA0h]
  void *v95; // [rsp+90h] [rbp-A98h] BYREF
  PLDR_DATA_TABLE_ENTRY v96; // [rsp+98h] [rbp-A90h]
  SIZE_T Size; // [rsp+A0h] [rbp-A88h] BYREF
  _UNICODE_STRING StringToFind; // [rsp+A8h] [rbp-A80h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+B8h] [rbp-A70h] BYREF
  ULONG_PTR v100; // [rsp+C8h] [rbp-A60h] BYREF
  ULONG v101; // [rsp+D0h] [rbp-A58h]
  PVOID BaseAddress; // [rsp+D8h] [rbp-A50h]
  PVOID v103; // [rsp+E0h] [rbp-A48h] BYREF
  size_t v104; // [rsp+E8h] [rbp-A40h]
  _QWORD v105[2]; // [rsp+F0h] [rbp-A38h] BYREF
  PUNICODE_STRING v106; // [rsp+100h] [rbp-A28h] BYREF
  PVOID v107; // [rsp+108h] [rbp-A20h]
  __int128 v108; // [rsp+110h] [rbp-A18h]
  wchar_t *v109[2]; // [rsp+120h] [rbp-A08h] BYREF
  __int128 v110; // [rsp+130h] [rbp-9F8h]
  __int128 v111; // [rsp+140h] [rbp-9E8h]
  _QWORD v112[2]; // [rsp+150h] [rbp-9D8h] BYREF
  __int128 v113; // [rsp+160h] [rbp-9C8h]
  __int128 v114; // [rsp+170h] [rbp-9B8h]
  __int128 v115; // [rsp+180h] [rbp-9A8h]
  __int64 v116; // [rsp+190h] [rbp-998h]
  __int128 v117; // [rsp+1A0h] [rbp-988h] BYREF
  wchar_t Str[352]; // [rsp+1B0h] [rbp-978h] BYREF
  char v119; // [rsp+470h] [rbp-6B8h] BYREF
  _WORD v120[352]; // [rsp+4B0h] [rbp-678h] BYREF
  char v121; // [rsp+770h] [rbp-3B8h] BYREF
  _BYTE v122[704]; // [rsp+820h] [rbp-308h] BYREF

  v7 = LanguageId;
  v100 = 0LL;
  Destination = 0LL;
  v88 = 0;
  ReturnLength = 0LL;
  v9 = 0;
  v107 = 0LL;
  v96 = 0LL;
  v108 = 0LL;
  v117 = 0LL;
  v106 = 0LL;
  v112[0] = 72LL;
  v112[1] = 1LL;
  v113 = 0LL;
  v114 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v85 = 0;
  v103 = 0LL;
  BaseAddress = 0LL;
  EntryPointActivationContext = 0LL;
  v90 = 0LL;
  String = (wchar_t *)v122;
  Size = 0x1000002BELL;
  if ( !DllHandle || !LanguageId || !ResourceDllBase )
    return -1073741811;
  v11 = (void *)LdrpGetFromMUIMemCache(DllHandle);
  if ( v11 == (void *)-1LL )
  {
    v13 = Flags & 0x400000;
    v101 = Flags & 0x400000;
    if ( (Flags & 0x400000) == 0 )
    {
      *ResourceDllBase = 0LL;
      return -1073020922;
    }
  }
  else
  {
    if ( v11 )
    {
      *ResourceDllBase = v11;
      if ( ResourceOffset )
        *ResourceOffset = (ULONG_PTR)v96;
      return 0;
    }
    v13 = Flags & 0x400000;
    v101 = Flags & 0x400000;
  }
  v95 = 0LL;
  if ( v13 )
    goto LABEL_13;
  Entry = 0LL;
  *(_OWORD *)v109 = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  if ( ((unsigned __int8)DllHandle & 3) == 0 )
  {
    EntryForAddress = LdrFindEntryForAddress(DllHandle, &Entry);
    LODWORD(v94) = EntryForAddress;
    if ( EntryForAddress >= 0 )
    {
      Length = Entry->FullDllName.Length;
      v80 = Length - Entry->BaseDllName.Length;
      v88 = v80;
      if ( v80 <= Length && v80 < 0x2BE )
      {
        v81 = Entry;
        memmove(Str, Entry->FullDllName.Buffer, v80);
        Buffer = v81->BaseDllName.Buffer;
        ReturnLength = (ULONG_PTR)Buffer;
        v9 = v81->BaseDllName.Length;
        EntryPointActivationContext = v81->EntryPointActivationContext;
        v90 = EntryPointActivationContext;
        goto LABEL_198;
      }
      EntryForAddress = -2147483643;
    }
LABEL_31:
    Buffer = 0LL;
    goto LABEL_32;
  }
  EntryForAddress = LdrpGetLoadAsEntry(DllHandle, v109);
  LODWORD(v94) = EntryForAddress;
  if ( EntryForAddress < 0 )
    goto LABEL_31;
  v23 = wcsrchr(v109[1], 0x5Cu);
  if ( !v23 )
  {
    EntryForAddress = -1073741767;
    goto LABEL_31;
  }
  v24 = (ULONG_PTR)(v23 + 1);
  Buffer = (const wchar_t *)v24;
  ReturnLength = v24;
  v26 = -1LL;
  do
    ++v26;
  while ( *(_WORD *)(v24 + 2 * v26) );
  v9 = 2 * v26;
  v27 = 2 * ((__int64)(v24 - (unsigned __int64)v109[1]) >> 1);
  v88 = v27;
  if ( v27 >= 0x2BE )
  {
    EntryForAddress = -2147483643;
    goto LABEL_32;
  }
  memmove(Str, v109[1], v27);
  Buffer = (const wchar_t *)ReturnLength;
  if ( *((_QWORD *)&v111 + 1) != -1LL )
  {
    EntryPointActivationContext = (PVOID)*((_QWORD *)&v111 + 1);
    v90 = (PVOID)*((_QWORD *)&v111 + 1);
    EntryForAddress = (int)v94;
    goto LABEL_32;
  }
LABEL_198:
  EntryForAddress = (int)v94;
LABEL_32:
  if ( EntryForAddress >= 0 )
    goto LABEL_33;
LABEL_13:
  ReturnLength = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x2BEuLL);
  v94 = Heap;
  if ( !Heap )
  {
LABEL_22:
    v15 = -1073741801;
    goto LABEL_190;
  }
  v15 = ZwQueryVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          DllHandle,
          MemoryMappedFilenameInformation,
          Heap,
          0x2BEuLL,
          &ReturnLength);
  if ( v15 >= 0 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)(*((_QWORD *)v94 + 1) + 2 * v16) );
    v17 = 2 * v16 + 2;
    ReturnLength = v17;
    if ( v17 >= 0x2BE )
    {
      v15 = -2147483643;
      goto LABEL_190;
    }
    memmove(Str, *((const void **)v94 + 1), v17);
    v18 = wcsrchr(Str, 0x5Cu);
    if ( !v18 )
    {
      v15 = -1073741767;
      goto LABEL_190;
    }
    v19 = v18 + 1;
    Entry = (PLDR_DATA_TABLE_ENTRY)(v18 + 1);
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v92 = (unsigned int)(2 * v20);
    v104 = v92 + 2;
    v21 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v92 + 2);
    BaseAddress = v21;
    if ( v21 )
    {
      memmove(v21, Entry, v104);
      v9 = v92;
      v88 = 2 * (((char *)Entry - (char *)Str) >> 1);
      v85 = 1;
      goto LABEL_190;
    }
    goto LABEL_22;
  }
LABEL_190:
  if ( v94 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v94);
  v86 = v15;
  if ( v15 < 0 )
    goto LABEL_106;
  Buffer = (const wchar_t *)BaseAddress;
  ReturnLength = (ULONG_PTR)BaseAddress;
  EntryPointActivationContext = v90;
LABEL_33:
  v28 = v88 & 0xFFFFFFFE;
  if ( v28 >= 0x2BE )
    _report_rangecheckfailure(Buffer);
  *(wchar_t *)((char *)Str + v28) = 0;
  if ( wcsrchr(Buffer, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(Str, ReturnLength, &v103) >= 0 )
  {
    v29 = (const wchar_t *)v103;
    ReturnLength = (ULONG_PTR)v103;
    v78 = -1LL;
    do
      ++v78;
    while ( *((_WORD *)v103 + v78) );
    v9 = 2 * v78;
  }
  else
  {
    v29 = (const wchar_t *)ReturnLength;
  }
  *(_QWORD *)&StringToFind.Length = 0LL;
  StringToFind.Buffer = 0LL;
  *(_QWORD *)&LocaleName.Length = 0LL;
  LocaleName.Buffer = 0LL;
  *((_QWORD *)&v108 + 1) = v120;
  LODWORD(v108) = 46006272;
  if ( (unsigned __int64)v9 + 12 > 0x3C )
  {
    v30 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v9 + 10);
    v107 = v30;
    if ( !v30 )
    {
      v15 = -1073741801;
      goto LABEL_105;
    }
    v31 = 2 * (v9 + 5);
    EntryPointActivationContext = v90;
    v29 = (const wchar_t *)ReturnLength;
  }
  else
  {
    v30 = &v119;
    v31 = 60;
  }
  StringToFind.MaximumLength = v31;
  StringToFind.Buffer = (wchar_t *)v30;
  LODWORD(v94) = 0;
  if ( v29 )
  {
    v32 = wcslen(v29);
    if ( v32 > 0x7FFE )
    {
      v34 = -1073741562;
      LOWORD(v33) = 0;
      LODWORD(v94) = 0;
    }
    else
    {
      v33 = 2 * v32;
      v34 = 0;
      LODWORD(v94) = v33;
    }
    if ( v34 < 0 )
      goto LABEL_229;
    v88 = (unsigned __int16)v33;
    LODWORD(Entry) = v31;
    if ( (unsigned __int16)v33 > (unsigned int)v31 )
      goto LABEL_229;
    memmove(StringToFind.Buffer, (const void *)ReturnLength, (unsigned __int16)v33);
    if ( v88 + 1 < (unsigned int)Entry )
      StringToFind.Buffer[(unsigned __int64)(unsigned __int16)v94 >> 1] = 0;
  }
  v88 = Flags & 0x1000000;
  if ( (Flags & 0x1000000) == 0 )
  {
    v35 = wcslen(L".mui");
    if ( v35 > 0x7FFE )
    {
      v37 = -1073741562;
      v36 = 0LL;
    }
    else
    {
      v36 = 2 * v35;
      v37 = 0;
    }
    ReturnLength = v36;
    if ( v37 >= 0 )
    {
      LODWORD(Entry) = v31;
      v38 = (__int16)v94;
      if ( (unsigned __int16)v94 + (unsigned int)(unsigned __int16)v36 <= (unsigned int)Entry )
      {
        v92 = (unsigned __int64)&StringToFind.Buffer[(unsigned __int64)(unsigned __int16)v94 >> 1];
        memmove((void *)v92, L".mui", (unsigned __int16)v36);
        v39 = ReturnLength;
        v40 = ReturnLength + v38;
        v41 = (unsigned int)v40 + 1 < (unsigned int)Entry;
        goto LABEL_52;
      }
    }
LABEL_229:
    v15 = -1073741789;
    goto LABEL_105;
  }
  v65 = wcslen(L".mun");
  if ( v65 > 0x7FFE )
  {
    v67 = -1073741562;
    v66 = 0LL;
  }
  else
  {
    v66 = 2 * v65;
    v67 = 0;
  }
  ReturnLength = v66;
  if ( v67 < 0 )
    goto LABEL_229;
  LODWORD(Entry) = v31;
  v68 = (__int16)v94;
  if ( (unsigned __int16)v94 + (unsigned int)(unsigned __int16)v66 > (unsigned int)Entry )
    goto LABEL_229;
  v92 = (unsigned __int64)&StringToFind.Buffer[(unsigned __int64)(unsigned __int16)v94 >> 1];
  memmove((void *)v92, L".mun", (unsigned __int16)v66);
  v39 = ReturnLength;
  v40 = ReturnLength + v68;
  v41 = (unsigned int)v40 + 1 < (unsigned int)Entry;
LABEL_52:
  StringToFind.Length = v40;
  if ( v41 )
    *(_WORD *)(v92 + 2 * ((unsigned __int64)v39 >> 1)) = 0;
  if ( EntryPointActivationContext )
    RtlActivateActivationContextUnsafeFast(v112, EntryPointActivationContext);
  v42 = LdrpQuerySxSMUIFile(&StringToFind, &v106);
  if ( EntryPointActivationContext )
    RtlDeactivateActivationContextUnsafeFast((__int64)v112);
  if ( v42 < 0 )
  {
    v43 = 0;
  }
  else
  {
    v43 = 1;
    Destination.Buffer = v106->Buffer;
    Destination.Length = v106->Length;
    Destination.MaximumLength = v106->MaximumLength;
  }
  if ( v43 )
  {
    HIDWORD(Size) = 0;
LABEL_142:
    v55 = String;
    goto LABEL_143;
  }
  Destination.Buffer = v120;
  v44 = 0;
  *(_DWORD *)&Destination.Length = 46006272;
  MaximumLength = 702;
  if ( !v88 )
  {
    v46 = wcslen(Str);
    if ( v46 > 0x7FFE )
    {
      v48 = -1073741562;
      v47 = 0LL;
    }
    else
    {
      v47 = (void *)(2 * v46);
      v48 = 0;
    }
    v90 = v47;
    if ( v48 >= 0 && (unsigned __int16)v47 <= 0x2BEu )
    {
      memmove(v120, Str, (unsigned __int16)v47);
      v44 = (unsigned __int16)v90;
      Destination.Length = (unsigned __int16)v90;
      if ( (unsigned int)(unsigned __int16)v90 + 1 < 0x2BE )
        v120[(unsigned __int64)(unsigned __int16)v90 >> 1] = 0;
    }
    goto LABEL_68;
  }
  v59 = -1LL;
  do
    ++v59;
  while ( Str[v59] );
  for ( i = &Str[(unsigned int)v59 - 2]; i > Str; --i )
  {
    if ( *i == 92 )
      break;
  }
  if ( i <= Str )
  {
    v15 = -1073741686;
LABEL_105:
    v86 = v15;
LABEL_106:
    v55 = String;
    goto LABEL_107;
  }
  i[1] = 0;
  v74 = wcslen(Str);
  if ( v74 > 0x7FFE )
  {
    v76 = -1073741562;
    v75 = 0;
  }
  else
  {
    v75 = 2 * v74;
    v76 = 0;
  }
  if ( v76 >= 0 && v75 <= 0x2BEu )
  {
    memmove(v120, Str, v75);
    Destination.Length = v75;
    if ( (unsigned int)v75 + 1 < 0x2BE )
      v120[(unsigned __int64)v75 >> 1] = 0;
  }
  RtlAppendUnicodeToString(&Destination, L"SystemResources\\");
  MaximumLength = Destination.MaximumLength;
  v44 = Destination.Length;
LABEL_68:
  if ( v88 )
    goto LABEL_80;
  LocaleName.Buffer = (wchar_t *)&v121;
  LocaleName.MaximumLength = 170;
  if ( RtlLcidToLocaleName(v7, &LocaleName, 2u, 0) < 0 )
  {
    v15 = -1073741811;
    goto LABEL_105;
  }
  if ( LocaleName.Length )
  {
    if ( v44 + (unsigned int)LocaleName.Length <= MaximumLength )
    {
      v104 = (size_t)&Destination.Buffer[(unsigned __int64)v44 >> 1];
      v92 = LocaleName.Length;
      memmove((void *)v104, LocaleName.Buffer, LocaleName.Length);
      v44 += LocaleName.Length;
      Destination.Length = v44;
      if ( (unsigned int)v44 + 1 < MaximumLength )
        *(_WORD *)(v104 + 2 * (v92 >> 1)) = 0;
    }
  }
  v49 = wcslen(L"\\");
  if ( v49 > 0x7FFE )
  {
    v50 = 0LL;
    v51 = -1073741562;
  }
  else
  {
    v50 = (void *)(2 * v49);
    v51 = 0;
  }
  v90 = v50;
  if ( v51 >= 0 )
  {
    LODWORD(Entry) = MaximumLength;
    if ( v44 + (unsigned int)(unsigned __int16)v50 <= MaximumLength )
    {
      v92 = (unsigned __int64)&Destination.Buffer[(unsigned __int64)v44 >> 1];
      v52 = (unsigned __int16)v50;
      memmove((void *)v92, L"\\", (unsigned __int16)v50);
      Destination.Length = (_WORD)v90 + v44;
      if ( (unsigned int)(unsigned __int16)((_WORD)v90 + v44) + 1 < (unsigned int)Entry )
        *(_WORD *)(v92 + 2 * (v52 >> 1)) = 0;
    }
  }
LABEL_80:
  RtlAppendUnicodeToString(&Destination, StringToFind.Buffer);
  if ( v88 )
    goto LABEL_142;
  RcConfig = LdrpGetRcConfig(DllHandle);
  if ( !RcConfig )
    goto LABEL_142;
  v92 = RcConfig + 28;
  OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(LocaleName.Buffer, (__int64)&Size, v122);
  if ( OverlayFilePathUsingChecksum == -1073741789 )
  {
    v77 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Size);
    v55 = v77;
    String = v77;
    if ( v77 )
      OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(LocaleName.Buffer, (__int64)&Size, v77);
    else
      OverlayFilePathUsingChecksum = -1073741789;
  }
  else
  {
    v55 = String;
  }
  if ( OverlayFilePathUsingChecksum >= 0 )
  {
    v105[0] = 0LL;
    v105[1] = v55;
    if ( !v55 )
    {
LABEL_88:
      ReturnLength = 0LL;
      v90 = 0LL;
      Entry = 0LL;
      v96 = 0LL;
      if ( RtlGetCurrentServiceSessionId() )
        v57 = (__int64)NtCurrentPeb()->SharedData + 555;
      else
        v57 = 2147353477LL;
      if ( (*(_BYTE *)v57 & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v83 = (__int64)NtCurrentPeb()->SharedData + 554;
        else
          v83 = 2147353476LL;
        LdrpTraceLoadMUIDll(v105, *(unsigned __int8 *)v83);
      }
      v15 = LdrpMapResourceFile(
              (_DWORD)DllHandle,
              (unsigned int)v105,
              v85,
              (unsigned int)&ReturnLength,
              (__int64)&v90,
              (__int64)&Entry);
      if ( v15 >= 0 )
      {
        v92 = (unsigned __int64)v90 | 1;
        if ( (unsigned __int8)LdrpVerifyAlternateResourceModuleEx(
                                DllHandle,
                                (unsigned __int64)v90 | 1,
                                v105,
                                LocaleName.Buffer,
                                Flags,
                                2) )
        {
          v100 = ReturnLength;
          v96 = Entry;
          v95 = (void *)v92;
        }
        else
        {
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v90);
          NtClose((HANDLE)ReturnLength);
          v15 = -1073020926;
        }
      }
      v86 = v15;
      if ( v15 >= 0 )
      {
        *(_QWORD *)&Destination.Length = 0LL;
        Destination.Buffer = v55;
        if ( v55 )
        {
          v58 = wcslen(v55);
          if ( v58 <= 0x7FFE )
          {
            Destination.Length = 2 * v58;
            Destination.MaximumLength = 2 * v58 + 2;
          }
        }
        goto LABEL_107;
      }
      if ( v15 != -1073741766 && v15 != -1073741772 )
        LdrpLogMapAndVerifyResourceFileFailure(v15, (unsigned int)v105, v85, Flags, (__int64)&LocaleName);
      goto LABEL_143;
    }
    v56 = wcslen(v55);
    if ( v56 <= 0x7FFE )
    {
      LOWORD(v105[0]) = 2 * v56;
      WORD1(v105[0]) = 2 * v56 + 2;
      goto LABEL_88;
    }
  }
LABEL_143:
  v69 = 2147353477LL;
  ReturnLength = 0LL;
  v90 = 0LL;
  Entry = 0LL;
  v100 = 0LL;
  v96 = 0LL;
  v95 = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v69 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v69 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v82 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v82 = 2147353476LL;
    LdrpTraceLoadMUIDll(&Destination, *(unsigned __int8 *)v82);
  }
  v15 = LdrpMapResourceFile(
          (_DWORD)DllHandle,
          (unsigned int)&Destination,
          v85,
          (unsigned int)&ReturnLength,
          (__int64)&v90,
          (__int64)&Entry);
  if ( v15 >= 0 )
  {
    v92 = (unsigned __int64)v90 | 1;
    if ( (unsigned __int8)LdrpVerifyAlternateResourceModuleEx(
                            DllHandle,
                            (unsigned __int64)v90 | 1,
                            &Destination,
                            LocaleName.Buffer,
                            Flags,
                            HIDWORD(Size)) )
    {
      v100 = ReturnLength;
      v96 = Entry;
      v95 = (void *)v92;
    }
    else
    {
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v90);
      NtClose((HANDLE)ReturnLength);
      v15 = -1073020926;
    }
  }
  v86 = v15;
  if ( v88 || v15 != -1073741772 && v15 != -1073741766 || !(unsigned __int8)LdrpGetFileDriverStoreRoot(Str, v70, v120) )
    goto LABEL_107;
  Destination.Buffer = v120;
  v71 = -1LL;
  do
    ++v71;
  while ( v120[v71] );
  Destination.Length = 2 * v71;
  Destination.MaximumLength = 702;
  RtlAppendUnicodeToString(&Destination, L"\\");
  v72 = LocaleName.Length;
  if ( LocaleName.Length )
  {
    if ( Destination.Length + (unsigned int)LocaleName.Length <= Destination.MaximumLength )
    {
      v92 = (unsigned __int64)&Destination.Buffer[(unsigned __int64)Destination.Length >> 1];
      memmove((void *)v92, LocaleName.Buffer, LocaleName.Length);
      Destination.Length += v72;
      if ( (unsigned int)Destination.Length + 1 < Destination.MaximumLength )
        *(_WORD *)(v92 + 2 * ((unsigned __int64)v72 >> 1)) = 0;
    }
  }
  RtlAppendUnicodeToString(&Destination, L"\\");
  RtlAppendUnicodeToString(&Destination, StringToFind.Buffer);
  ReturnLength = 0LL;
  v90 = 0LL;
  Entry = 0LL;
  v100 = 0LL;
  v96 = 0LL;
  v95 = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v73 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v73 = 2147353477LL;
  if ( (*(_BYTE *)v73 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v84 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v84 = 2147353476LL;
    LdrpTraceLoadMUIDll(&Destination, *(unsigned __int8 *)v84);
  }
  v15 = LdrpMapResourceFile(
          (_DWORD)DllHandle,
          (unsigned int)&Destination,
          v85,
          (unsigned int)&ReturnLength,
          (__int64)&v90,
          (__int64)&Entry);
  if ( v15 >= 0 )
  {
    v92 = (unsigned __int64)v90 | 1;
    if ( !(unsigned __int8)LdrpVerifyAlternateResourceModuleEx(
                             DllHandle,
                             (unsigned __int64)v90 | 1,
                             &Destination,
                             LocaleName.Buffer,
                             Flags,
                             HIDWORD(Size)) )
    {
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v90);
      NtClose((HANDLE)ReturnLength);
      v15 = -1073020926;
      v86 = -1073020926;
      goto LABEL_107;
    }
    v100 = ReturnLength;
    v96 = Entry;
    v95 = (void *)v92;
  }
  v86 = v15;
LABEL_107:
  v61 = (__int64)v95;
  if ( !v95 )
    v61 = -1LL;
  v95 = (void *)v61;
  if ( v15 != -1073741659 && v15 != -1073741801 && v15 != -1073741523 )
  {
    v62 = 33;
    if ( !v101 )
      v62 = 1;
    LdrpSetAlternateResourceModuleHandle((__int64)DllHandle, &v95, (HANDLE *)&v100, 0LL, v7, v62, v15, (__int64)v96);
  }
  if ( v95 == (void *)-1LL )
  {
    *ResourceDllBase = 0LL;
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v63 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v63 = 2147353477LL;
    if ( (*(_BYTE *)v63 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v64 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v64 = 2147353476LL;
      LdrpTraceLoadMUIDll(&Destination, *(unsigned __int8 *)v64);
    }
    *ResourceDllBase = v95;
    if ( ResourceOffset )
      *ResourceOffset = (ULONG_PTR)v96;
    v15 = 0;
    v86 = 0;
  }
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v15 = v86;
  }
  if ( v103 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v103);
    v15 = v86;
  }
  if ( v107 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v107);
    v15 = v86;
  }
  if ( v55 && v122 != (_BYTE *)v55 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v55);
    return v86;
  }
  return v15;
}
