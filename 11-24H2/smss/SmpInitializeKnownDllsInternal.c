/*
 * XREFs of SmpInitializeKnownDllsInternal @ 0x140008F30
 * Callers:
 *     SmpInitializeKnownDlls @ 0x1400158F0 (SmpInitializeKnownDlls.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     SmpFindRegistryValueEx @ 0x1400095D4 (SmpFindRegistryValueEx.c)
 *     SmpFindModuleInModuleList @ 0x140009630 (SmpFindModuleInModuleList.c)
 *     SmpRandomizeDllList @ 0x1400096F0 (SmpRandomizeDllList.c)
 *     SmpFreeSavedRegistryEntry @ 0x14000D6BC (SmpFreeSavedRegistryEntry.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpTerminate @ 0x14001913C (SmpTerminate.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpInitializeKnownDllsInternal(__int64 a1, void *a2, int a3, int a4, char a5)
{
  int v5; // r15d
  unsigned __int8 v8; // r12
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // r14
  _WORD *v15; // rsi
  int v16; // edx
  _WORD *v17; // rax
  __m128i *Heap; // rsi
  __int16 v19; // cx
  __int16 v20; // ax
  int v21; // eax
  signed int v22; // esi
  __int64 v23; // rcx
  __int64 *v24; // rbx
  unsigned int v25; // edi
  __int64 *v26; // rsi
  int v27; // eax
  _QWORD *v28; // rcx
  __int64 *v29; // rdx
  __int64 v30; // r8
  char v32[4]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ObjectInformationLength; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v34; // [rsp+38h] [rbp-C8h] BYREF
  int v35; // [rsp+3Ch] [rbp-C4h]
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v37; // [rsp+48h] [rbp-B8h]
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  void *FileHandle; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+60h] [rbp-A0h] BYREF
  __int128 ObjectInformation; // [rsp+70h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v43[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-48h]
  __int64 v45; // [rsp+C0h] [rbp-40h]
  int v46; // [rsp+C8h] [rbp-38h]
  int v47; // [rsp+CCh] [rbp-34h]
  _WORD *v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  _QWORD v50[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v52[2]; // [rsp+100h] [rbp+0h] BYREF
  int (__fastcall *v53)(_QWORD *, const char *); // [rsp+108h] [rbp+8h]
  _QWORD *v54; // [rsp+110h] [rbp+10h]
  HANDLE Handle; // [rsp+118h] [rbp+18h]
  int v56; // [rsp+120h] [rbp+20h]
  int v57; // [rsp+124h] [rbp+24h]
  _DWORD *v58; // [rsp+128h] [rbp+28h]
  int v59; // [rsp+130h] [rbp+30h]
  __int64 v60; // [rsp+134h] [rbp+34h]
  int v61; // [rsp+13Ch] [rbp+3Ch]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 Parameters[3]; // [rsp+150h] [rbp+50h] BYREF

  v35 = a3;
  FileHandle = 0LL;
  v5 = a3;
  v50[0] = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ObjectInformationLength = 0;
  v43[1] = 0;
  v47 = 0;
  v32[0] = 0;
  DestinationString = 0LL;
  v8 = 0;
  Handle = 0LL;
  IoStatusBlock = 0LL;
  v57 = 0;
  ObjectInformation = 0LL;
  v60 = 0LL;
  Destination = 0LL;
  v61 = 0;
  BaseAddress = 0LL;
  v34 = 0;
  v10 = SmpRandomizeDllList(&SmpKnownDllsList, &BaseAddress, &v34);
  v11 = v10;
  if ( v10 >= 0 )
  {
    ObjectAttributes.Length = 48;
    v50[1] = &v36;
    ObjectAttributes.RootDirectory = a2;
    v54 = v50;
    v53 = SmpProcessModuleImports;
    v48 = SmpKnownDllSecurityDescriptor;
    v58 = v43;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v52[0] = 64;
    v52[1] = 7;
    v43[0] = 48;
    v44 = a1;
    v46 = 80;
    v45 = 0LL;
    v49 = 0LL;
    v56 = 983071;
    v59 = 16;
    while ( 1 )
    {
      v12 = 0;
      v37 = &v36;
      v36 = (__int64)&v36;
      while ( v12 < v34 )
      {
        v13 = SmpExcludeKnownDllsList;
        v14 = *((_QWORD *)BaseAddress + 2 * v12 + 1);
        v15 = (_WORD *)(v14 + 16);
        while ( 1 )
        {
          if ( (__int64 *)v13 == &SmpExcludeKnownDllsList )
            goto LABEL_11;
          v15 = (_WORD *)(v14 + 16);
          if ( !RtlCompareUnicodeString((PCUNICODE_STRING)(v13 + 16), (PCUNICODE_STRING)(v14 + 16), 1u) )
            break;
          v13 = *(_QWORD *)v13;
        }
        if ( !v13 )
        {
LABEL_11:
          if ( SmpFindRegistryValueEx(&SmpExcludeKnownDllsList, v14 + 32) )
            goto LABEL_45;
          v16 = 0;
          if ( *v15 >= 2u )
          {
            v17 = *(_WORD **)(v14 + 24);
            LOBYTE(v16) = *v17 == 95;
            if ( *v17 == 42 )
            {
              if ( (a5 & 2) != 0 )
                goto LABEL_45;
            }
            else if ( (a5 & 3) == 1 )
            {
              goto LABEL_45;
            }
          }
          LODWORD(v60) = 0x1000000;
          if ( v16 )
          {
            if ( v5 || !a4 )
              goto LABEL_45;
            LODWORD(v60) = 17825792;
          }
          ObjectAttributes.ObjectName = (PUNICODE_STRING)(v14 + 32);
          if ( (*(_DWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 188LL) & 0x40000) != 0 )
          {
            LODWORD(ObjectInformation) = 0;
            *((_QWORD *)&ObjectInformation + 1) = 0LL;
            ObjectInformationLength = 0;
            if ( NtQueryObject(
                   ObjectAttributes.RootDirectory,
                   ObjectNameInformation,
                   &ObjectInformation,
                   0,
                   &ObjectInformationLength) == -1073741820 )
            {
              ObjectInformationLength += 2;
              ObjectInformationLength += ObjectAttributes.ObjectName->Length;
              Heap = (__m128i *)RtlAllocateHeap(
                                  *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                  0,
                                  ObjectInformationLength);
              if ( Heap )
              {
                if ( NtQueryObject(
                       ObjectAttributes.RootDirectory,
                       ObjectNameInformation,
                       Heap,
                       ObjectInformationLength,
                       &ObjectInformationLength) >= 0 )
                {
                  v19 = _mm_cvtsi128_si32(*Heap);
                  Destination = (struct _UNICODE_STRING)*Heap;
                  Destination.MaximumLength = ObjectAttributes.ObjectName->Length + v19 + 2;
                  if ( RtlAppendUnicodeToString(&Destination, L"\\") >= 0
                    && RtlAppendUnicodeStringToString(&Destination, ObjectAttributes.ObjectName) >= 0 )
                  {
                    NtSystemDebugControl(SysDbgClearUmAttachPid|SysDbgSetTracepoint, &Destination, 0x10u, 0LL, 0, 0LL);
                  }
                }
                RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
              }
              v5 = v35;
            }
          }
          if ( NtOpenFile(&FileHandle, 0x120020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0 )
          {
            v45 = v14 + 32;
            v50[0] = v14 + 32;
            if ( v48 )
            {
              v20 = v48[1];
              v8 = v20 & 8;
              v48[1] = v20 | 8;
            }
            v21 = LdrVerifyImageMatchesChecksumEx((unsigned __int64)FileHandle | 1, v52);
            v22 = v21;
            if ( v48 )
              v48[1] ^= (v8 ^ (unsigned __int8)v48[1]) & 8;
            if ( v21 >= 0 )
            {
              if ( (v60 & 0x200000000000LL) == 0 )
              {
                RtlInitUnicodeString(&DestinationString, L"Non-DLL file included in KnownDLL list.");
                v22 = -1073740945;
LABEL_61:
                Parameters[2] = v14 + 32;
                Parameters[0] = (unsigned __int64)&DestinationString;
                Parameters[1] = v22;
                SmpLogFailureString((__int64)"SmpInitializeKnownDllsInternal", 0x145Du, *(_QWORD *)(v14 + 24), v22);
                SmpTerminate(Parameters, 5u, 3u);
                __debugbreak();
              }
              NtClose(Handle);
            }
            else
            {
              v32[0] = 1;
              if ( v21 == -1073740760 )
              {
                if ( (int)RtlAppxIsFileOwnedByTrustedInstaller(FileHandle, v32) < 0 || v32[0] )
                {
LABEL_39:
                  RtlInitUnicodeString(&DestinationString, L"Verification of a KnownDLL failed.");
                  goto LABEL_61;
                }
              }
              else if ( v21 != -1073741771 )
              {
                goto LABEL_39;
              }
            }
            NtClose(FileHandle);
          }
        }
LABEL_45:
        ++v12;
      }
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
      v24 = (__int64 *)v36;
      BaseAddress = 0LL;
      v25 = 0;
      v34 = 0;
      if ( (__int64 *)v36 == &v36 )
        return 0;
      do
      {
        v26 = v24;
        v24 = (__int64 *)*v24;
        if ( SmpFindModuleInModuleList(v23, v26 + 2) )
          SmpFreeSavedRegistryEntry(v26);
        else
          ++v25;
      }
      while ( v24 != &v36 );
      v34 = v25;
      if ( !v25 )
        return 0;
      v27 = SmpRandomizeDllList(&v36, &BaseAddress, &v34);
      v28 = (_QWORD *)v36;
      v11 = v27;
      v29 = v37;
      if ( *(__int64 **)(v36 + 8) != &v36
        || (__int64 *)*v37 != &v36
        || (*v37 = v36, v28[1] = v29, v30 = qword_140032AB8, *(__int64 **)(SmpKnownDllsList + 8) != &SmpKnownDllsList)
        || *(__int64 **)qword_140032AB8 != &SmpKnownDllsList
        || *(_QWORD **)(*v28 + 8LL) != v28
        || (_QWORD *)*v29 != v28 )
      {
        __fastfail(3u);
      }
      *(_QWORD *)qword_140032AB8 = v28;
      qword_140032AB8 = v28[1];
      *(_QWORD *)v28[1] = &SmpKnownDllsList;
      v28[1] = v30;
      if ( v27 < 0 )
      {
        SmpLogFailure("SmpInitializeKnownDllsInternal", 5265LL, (unsigned int)v27);
        return v11;
      }
    }
  }
  SmpLogFailure("SmpInitializeKnownDllsInternal", 4938LL, (unsigned int)v10);
  return v11;
}
