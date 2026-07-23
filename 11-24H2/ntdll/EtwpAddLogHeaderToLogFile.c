/*
 * XREFs of EtwpAddLogHeaderToLogFile @ 0x180080610
 * Callers:
 *     EtwpStartUmLogger @ 0x1800A879C (EtwpStartUmLogger.c)
 *     EtwpLogger @ 0x1800A9700 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x18015A5D8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x180049020 (RtlNtStatusToDosError.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlCreateUnicodeString @ 0x180054A50 (RtlCreateUnicodeString.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18006F820 (RtlpDosPathNameToRelativeNtPathName.c)
 *     StringCbPrintfW @ 0x1800813B8 (StringCbPrintfW.c)
 *     RtlFreeAnsiString @ 0x180081430 (RtlFreeAnsiString.c)
 *     EtwpAddDebugInfoEvents @ 0x18008145C (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x1800815B0 (EtwpAddBinaryInfoEvents.c)
 *     EtwpGetTimeZoneInformation @ 0x180081744 (EtwpGetTimeZoneInformation.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x1800818D4 (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x180081A24 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180081BCC (EtwpGetRegDwordValue.c)
 *     StringToGuidNoBrackets @ 0x180081D94 (StringToGuidNoBrackets.c)
 *     wcschr @ 0x1801258D0 (wcschr.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     wcsrchr @ 0x180125E80 (wcsrchr.c)
 *     wcsstr @ 0x180125FB0 (wcsstr.c)
 *     NtReadFile @ 0x180160110 (NtReadFile.c)
 *     NtWriteFile @ 0x180160150 (NtWriteFile.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180160330 (NtQueryValueKey.c)
 *     ZwQueryInformationThread @ 0x1801604F0 (ZwQueryInformationThread.c)
 *     ZwSetInformationFile @ 0x180160530 (ZwSetInformationFile.c)
 *     NtQuerySystemInformation @ 0x180160710 (NtQuerySystemInformation.c)
 *     ZwQueryVolumeInformationFile @ 0x180160970 (ZwQueryVolumeInformationFile.c)
 *     ZwCreateFile @ 0x180160AF0 (ZwCreateFile.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memcmp @ 0x180165A90 (memcmp.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall EtwpAddLogHeaderToLogFile(__int64 a1, void *a2, unsigned int a3, bool a4)
{
  size_t v4; // r13
  bool v5; // zf
  wchar_t *v9; // rdi
  NTSTATUS v10; // ecx
  SIZE_T v11; // r14
  const wchar_t *v12; // rsi
  int v13; // edx
  BOOL v14; // edx
  _DWORD *Heap; // rdi
  size_t v16; // rax
  HANDLE v17; // r15
  unsigned __int16 v18; // cx
  size_t v19; // rax
  int v20; // esi
  char *v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r14
  int v25; // eax
  char v26; // al
  char v27; // r8
  unsigned int Data1; // ecx
  unsigned int v29; // ecx
  _QWORD *v30; // rsi
  _QWORD *v31; // rax
  __int64 v32; // rcx
  NTSTATUS result; // eax
  struct _PEB *v34; // rcx
  char v35; // al
  char v36; // dl
  __int64 v37; // rcx
  GUID *v38; // r8
  _DWORD *v39; // rcx
  size_t v40; // rax
  int v41; // r13d
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r13
  int v46; // r14d
  NTSTATUS v47; // eax
  int v48; // edx
  int v49; // eax
  int v50; // ecx
  unsigned int *v51; // r13
  size_t v52; // rax
  int RegString; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  int RegDwordValue; // eax
  GUID *v57; // r13
  GUID *v58; // r13
  ULONG ResultLength; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Length; // [rsp+68h] [rbp-98h]
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  BOOL v62; // [rsp+78h] [rbp-88h]
  int v63; // [rsp+7Ch] [rbp-84h]
  void *Src; // [rsp+80h] [rbp-80h] BYREF
  GUID *v65; // [rsp+88h] [rbp-78h]
  GUID *v66; // [rsp+90h] [rbp-70h]
  HANDLE FileHandle; // [rsp+98h] [rbp-68h] BYREF
  __int128 v68; // [rsp+A0h] [rbp-60h] BYREF
  _IO_STATUS_BLOCK v69; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v70[2]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v71[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v72; // [rsp+D4h] [rbp-2Ch]
  const wchar_t *v73; // [rsp+D8h] [rbp-28h]
  _UNICODE_STRING ValueName; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v75[2]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v76[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE *v77; // [rsp+108h] [rbp+8h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+110h] [rbp+10h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+120h] [rbp+20h] BYREF
  __int128 ThreadInformation; // [rsp+150h] [rbp+50h] BYREF
  __int128 v81; // [rsp+160h] [rbp+60h]
  __int64 v82; // [rsp+170h] [rbp+70h]
  int v83; // [rsp+178h] [rbp+78h]
  _OBJECT_ATTRIBUTES v84; // [rsp+180h] [rbp+80h] BYREF
  __int128 v85; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v86; // [rsp+1D0h] [rbp+D0h]
  __int128 FsInformation; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v88; // [rsp+1F0h] [rbp+F0h]
  _OWORD SystemInformation[4]; // [rsp+200h] [rbp+100h] BYREF
  _OWORD FileInformation[2]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v91; // [rsp+260h] [rbp+160h]
  _OWORD v92[2]; // [rsp+268h] [rbp+168h] BYREF
  __int128 v93; // [rsp+288h] [rbp+188h]
  _BYTE v94[80]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v95[80]; // [rsp+2F0h] [rbp+1F0h] BYREF
  wchar_t pszDest[1024]; // [rsp+340h] [rbp+240h] BYREF

  v4 = a3;
  Src = a2;
  ResultLength = 0;
  v5 = (*(_BYTE *)(a1 + 308) & 8) == 0;
  v88 = 0LL;
  v82 = 0LL;
  v83 = 0;
  v66 = 0LL;
  FsInformation = 0LL;
  v69 = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  memset(v92, 0, sizeof(v92));
  v93 = 0LL;
  ThreadInformation = 0LL;
  v81 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  if ( !v5 )
  {
    v9 = wcschr(*(const wchar_t **)(a1 + 176), 0x25u);
    if ( v9 && v9 == wcsrchr(*(const wchar_t **)(a1 + 176), 0x25u) && wcsstr(*(const wchar_t **)(a1 + 176), L"%d") )
    {
      if ( !StringCbPrintfW(
              pszDest,
              0x800uLL,
              *(STRSAFE_LPCWSTR *)(a1 + 176),
              (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 184)))
        && memcmp(*(const void **)(a1 + 176), pszDest, *(unsigned __int16 *)(a1 + 168)) )
      {
        RtlFreeAnsiString((PUNICODE_STRING)(a1 + 152));
        RtlCreateUnicodeString((PUNICODE_STRING)(a1 + 152), pszDest);
        goto LABEL_8;
      }
      v10 = -1073741776;
    }
    else
    {
      v10 = -1073741773;
    }
    RtlNtStatusToDosError(v10);
  }
LABEL_8:
  v11 = *(unsigned int *)(a1 + 192);
  v12 = *(const wchar_t **)(a1 + 160);
  LODWORD(KeyHandle) = *(_DWORD *)(a1 + 192);
  if ( a2 )
  {
    LODWORD(v65) = v4;
    v13 = v4 + 79;
    goto LABEL_10;
  }
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    result = ZwQueryInformationThread(
               (HANDLE)0xFFFFFFFFFFFFFFFELL,
               ThreadBasicInformation,
               &ThreadInformation,
               0x30u,
               0LL);
    if ( result >= 0 )
    {
      result = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadTimes, &v85, 0x20u, 0LL);
      if ( result >= 0 )
      {
        result = NtQuerySystemInformation(SystemTimeOfDayInformation, v92, 0x30u, 0LL);
        if ( result >= 0 )
        {
          result = EtwpGetCpuSpeedFromRegistry(&ResultLength);
          if ( result >= 0 )
          {
            v48 = *(unsigned __int16 *)(a1 + 136) + *(unsigned __int16 *)(a1 + 152);
            v49 = v48 + 316;
            v13 = v48 + 395;
            LODWORD(v65) = v49;
LABEL_10:
            v63 = v13;
            Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v11);
            if ( !Heap )
              return -1073741801;
            ObjectAttributes.SecurityDescriptor = 0LL;
            LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
            FileHandle = 0LL;
            LODWORD(v16) = 3;
            v17 = 0LL;
            if ( !a4 )
              LODWORD(v16) = 5;
            v18 = 0;
            Length = v16;
            LOWORD(v16) = 0;
            memset(&ObjectAttributes, 0, 32);
            IoStatusBlock = 0LL;
            if ( v12 )
            {
              v16 = 2 * wcslen(v12);
              if ( v16 >= 0xFFFE )
                LOWORD(v16) = -4;
              v18 = v16;
            }
            LOBYTE(v14) = 0;
            v68 = 0uLL;
            v62 = v14;
            if ( (unsigned __int16)v16 > 1u )
              v62 = v12[((unsigned __int64)v18 >> 1) - 1] == 92;
            v70[0] = 0LL;
            v70[1] = v12;
            if ( v12 )
            {
              v19 = wcslen(v12);
              if ( v19 > 0x7FFE )
              {
                v20 = -1073741562;
                goto LABEL_29;
              }
              LOWORD(v70[0]) = 2 * v19;
              WORD1(v70[0]) = 2 * v19 + 2;
            }
            v20 = RtlpDosPathNameToRelativeNtPathName(
                    0,
                    (unsigned __int16 *)v70,
                    0LL,
                    (unsigned __int16 *)&v68,
                    0LL,
                    0LL,
                    0LL);
            if ( v20 >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&v68;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 64;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              v20 = ZwCreateFile(
                      &FileHandle,
                      0xC0100080,
                      &ObjectAttributes,
                      &IoStatusBlock,
                      0LL,
                      0x80u,
                      5u,
                      Length,
                      0x68u,
                      0LL,
                      0);
              if ( v20 >= 0 )
              {
                if ( a4 )
                  a4 = IoStatusBlock.Information != 2;
                if ( !v62 )
                {
                  v91 = 0x2000LL;
                  memset(FileInformation, 0, sizeof(FileInformation));
                  v20 = ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
                }
                v17 = FileHandle;
              }
            }
LABEL_29:
            if ( *((_QWORD *)&v68 + 1) )
            {
              RtlpSysVolFree(*((void **)&v68 + 1));
              v68 = 0LL;
            }
            if ( v20 >= 0 )
            {
              if ( !a4 )
              {
                v21 = (char *)Src;
                v22 = v63 & 0xFFFFFFF8;
                *Heap = v11;
                Heap[13] = 262145;
                Heap[12] = v22;
                if ( v21 )
                {
                  v23 = 0LL;
                  if ( (_DWORD)v4 )
                  {
                    do
                    {
                      v24 = (__int64)&v21[(unsigned int)v23 + 32];
                      v25 = *(_DWORD *)(a1 + 308) & 0x4101000 | 0x10001;
                      v66 = (GUID *)v24;
                      *(_DWORD *)(v24 + 32) = v25;
                      *(_DWORD *)(v24 + 36) = 1;
                      *(_DWORD *)v24 = *(_DWORD *)(a1 + 192);
                      if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0
                        || *(_DWORD *)(a1 + 192) > 0x100000u
                        || *(_DWORD *)(v24 + 12) > 0x100u )
                      {
                        v26 = 0;
                        v27 = 2;
                      }
                      else
                      {
                        v26 = 5;
                        v27 = 1;
                      }
                      *(_BYTE *)(v24 + 6) = v27;
                      *(_BYTE *)(v24 + 7) = v26;
                      LODWORD(v23) = ((*(unsigned __int16 *)&v21[v23 + 4] + 7) & 0xFFFFFFF8) + v23;
                    }
                    while ( (unsigned int)v23 < (unsigned int)v4 );
                    LODWORD(v11) = (_DWORD)KeyHandle;
                  }
                  if ( *(_DWORD *)&v66[2].Data4[4] == 4 )
                    Data1 = *(_DWORD *)v66[16].Data4;
                  else
                    Data1 = v66[17].Data1;
                  *(_DWORD *)(a1 + 16) = Data1;
                  memmove(Heap + 18, v21, v4);
                }
                else
                {
                  Heap[19] = (_DWORD)v65;
                  Heap[18] = -1073610752;
                  Heap[21] = v81;
                  Heap[20] = DWORD2(v81);
                  Heap[24] = (__int64)v86 / DWORD1(SystemInformation[0]);
                  Heap[25] = *((_QWORD *)&v86 + 1) / (__int64)DWORD1(SystemInformation[0]);
                  *((_QWORD *)Heap + 11) = *(_QWORD *)(a1 + 8);
                  v34 = NtCurrentPeb();
                  *((_BYTE *)Heap + 108) = v34->OSMajorVersion;
                  *((_BYTE *)Heap + 109) = v34->OSMinorVersion;
                  if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0
                    || *(_DWORD *)(a1 + 192) > 0x100000u
                    || *(_DWORD *)(a1 + 188) > 0x100u )
                  {
                    v35 = 0;
                    v36 = 2;
                  }
                  else
                  {
                    v35 = 5;
                    v36 = 1;
                  }
                  *((_BYTE *)Heap + 110) = v36;
                  *((_BYTE *)Heap + 111) = v35;
                  Heap[28] = v34->OSBuildNumber;
                  Heap[94] = *(_DWORD *)(a1 + 16);
                  Heap[29] = *(_DWORD *)(a1 + 188);
                  Heap[37] = 8;
                  Heap[36] = 1;
                  Heap[26] = v11;
                  Heap[35] = 1;
                  Heap[33] = *(_DWORD *)(a1 + 304);
                  Heap[34] = *(_DWORD *)(a1 + 308);
                  Heap[32] = DWORD1(SystemInformation[0]);
                  *((_QWORD *)Heap + 44) = *(_QWORD *)&v92[0] - v93;
                  Heap[39] = ResultLength;
                  *((_QWORD *)Heap + 20) = 0LL;
                  *((_QWORD *)Heap + 21) = 0LL;
                  memmove(Heap + 96, *(const void **)(a1 + 144), *(unsigned __int16 *)(a1 + 136) + 2LL);
                  memmove(
                    (char *)Heap + *(unsigned __int16 *)(a1 + 136) + 386,
                    *(const void **)(a1 + 160),
                    *(unsigned __int16 *)(a1 + 152) + 2LL);
                  EtwpGetTimeZoneInformation(Heap + 44);
                  *((_QWORD *)Heap + 45) = MEMORY[0x7FFE0300];
                  *((_QWORD *)Heap + 46) = *(_QWORD *)a1;
                  v37 = (unsigned int)Heap[12];
                  if ( (unsigned int)(v37 + 80) <= *Heap )
                  {
                    v38 = (GUID *)((char *)Heap + v37);
                    v75[0] = 4980812LL;
                    *(_DWORD *)&v38->Data2 = 5242960;
                    v38->Data1 = -1073610750;
                    *(_DWORD *)v38->Data4 = DWORD2(v81);
                    *(_DWORD *)&v38->Data4[4] = v81;
                    v66 = (GUID *)((char *)Heap + v37);
                    v76[1] = 0;
                    *(_DWORD *)v38[1].Data4 = (__int64)v86 / DWORD1(SystemInformation[0]);
                    v39 = (_DWORD *)((char *)Heap + v37 + 36);
                    *(_DWORD *)&v38[1].Data4[4] = *((_QWORD *)&v86 + 1) / (__int64)DWORD1(SystemInformation[0]);
                    *(_QWORD *)&v38[1].Data1 = *(_QWORD *)(a1 + 8);
                    v38[2].Data1 = 0;
                    *v39 = 0;
                    Src = v39;
                    v65 = v38 + 4;
                    memset_thunk_772440563353939046(v94, 0, 0x4CuLL);
                    memset_thunk_772440563353939046(v95, 0, 0x4CuLL);
                    ResultLength = 38;
                    v75[1] = v94;
                    *(&v84.Length + 1) = 0;
                    KeyHandle = 0LL;
                    v72 = 0;
                    v73 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control";
                    v40 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
                    *(_QWORD *)&v84.Length = 48LL;
                    *(_QWORD *)&v84.Attributes = 64LL;
                    v84.RootDirectory = 0LL;
                    if ( v40 >= 0xFFFE )
                      LOWORD(v40) = -4;
                    v71[0] = v40;
                    v71[1] = v40 + 2;
                    v84.ObjectName = (PUNICODE_STRING)v71;
                    *(_OWORD *)&v84.SecurityDescriptor = 0LL;
                    v41 = NtOpenKey(&KeyHandle, 0x20019u, &v84);
                    if ( v41 >= 0 )
                    {
                      v42 = 2LL * ResultLength;
                      if ( v42 > 0xFFFFFFFF || (Length = v42 + 12, (int)v42 + 12 < (unsigned int)v42) )
                      {
                        NtClose(KeyHandle);
                        goto LABEL_44;
                      }
                      v51 = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v42 + 12));
                      if ( v51 )
                      {
                        *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
                        ValueName.Buffer = (wchar_t *)L"ContainerId";
                        v52 = 2 * wcslen(L"ContainerId");
                        if ( v52 >= 0xFFFE )
                          LOWORD(v52) = -4;
                        ValueName.Length = v52;
                        ValueName.MaximumLength = v52 + 2;
                        Length = NtQueryValueKey(
                                   KeyHandle,
                                   &ValueName,
                                   KeyValuePartialInformation,
                                   v51,
                                   Length,
                                   &ResultLength);
                        if ( (Length & 0x80000000) == 0 )
                          memmove(v94, v51 + 3, v51[2]);
                        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v51);
                        v41 = Length;
                      }
                      else
                      {
                        v41 = -1073741801;
                      }
                      NtClose(KeyHandle);
                    }
                    if ( !v41 || v41 == -1073741772 )
                    {
                      v76[0] = 4980812;
                      v77 = v95;
                      RegString = EtwpQueryRegString(
                                    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control",
                                    L"ContainerCorrelationId",
                                    v95,
                                    38LL);
                      if ( !RegString || RegString == -1073741772 )
                      {
                        RegDwordValue = EtwpGetRegDwordValue(v55, v54, Src);
                        if ( !RegDwordValue || RegDwordValue == -1073741772 )
                        {
                          v57 = v66 + 3;
                          *(_QWORD *)v66[2].Data4 = 0LL;
                          if ( (unsigned int)StringToGuidNoBrackets(v75, v57) )
                            *v57 = NullGuid;
                          v58 = v65;
                          if ( (unsigned int)StringToGuidNoBrackets(v76, v65) )
                            *v58 = NullGuid;
                          Heap[12] += 80;
                        }
                      }
                    }
                  }
                }
LABEL_44:
                if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0 )
                {
                  Heap[11] = 3;
                  if ( ZwQueryVolumeInformationFile(v17, &v69, &FsInformation, 0x18u, FileFsSizeInformation) >= 0 )
                  {
                    v50 = Heap[12] + 80;
                    if ( !v21 )
                      v50 = Heap[12];
                    LODWORD(v11) = -HIDWORD(v88) & (v50 + HIDWORD(v88) - 1);
                    *Heap = v11;
                  }
                }
                v29 = Heap[12];
                v30 = (_QWORD *)(a1 + 464);
                Heap[1] = v29;
                v31 = (_QWORD *)(a1 + 448);
                if ( ((_QWORD *)*v30 != v30 || (_QWORD *)*v31 != v31) && v29 < (unsigned int)v11 && v29 >= 0x180 )
                {
                  if ( (_QWORD *)*v31 != v31 )
                    EtwpAddDebugInfoEvents(a1, Heap, (unsigned int)v11);
                  if ( (_QWORD *)*v30 != v30 )
                    EtwpAddBinaryInfoEvents(a1, Heap, (unsigned int)v11);
                }
                v32 = (unsigned int)Heap[12];
                if ( (unsigned int)v32 < (unsigned int)v11 && (unsigned int)v32 > 0x48 )
                  memset_thunk_772440563353939046((char *)Heap + v32, 255, (unsigned int)(v11 - v32));
                v20 = NtWriteFile(v17, 0LL, 0LL, 0LL, &v69, Heap, v11, 0LL, 0LL);
                if ( v20 >= 0 )
                {
                  v43 = *(unsigned int *)(a1 + 304);
                  if ( !(_DWORD)v43 || (*(_DWORD *)(a1 + 308) & 0x20) == 0 )
                    goto LABEL_76;
                  v44 = 1024LL;
                  if ( (*(_DWORD *)(a1 + 308) & 0x2000) == 0 )
                    v44 = 0x100000LL;
                  Src = (void *)(v43 * v44);
                  v20 = ZwSetInformationFile(v17, &v69, &Src, 8u, FileEndOfFileInformation);
                  if ( v20 >= 0 )
                  {
LABEL_76:
                    v5 = (*(_DWORD *)(a1 + 308) & 0x4000000) == 0;
                    *(_DWORD *)(a1 + 376) = 1;
                    *(_DWORD *)(a1 + 320) = 1;
                    *(_QWORD *)(a1 + 344) = (unsigned int)v11;
                    *(_QWORD *)(a1 + 336) = (unsigned int)v11;
                    *(_QWORD *)(a1 + 128) = v17;
                    if ( !v5 )
                    {
                      *(_QWORD *)(a1 + 440) = 0LL;
                      *(_DWORD *)(a1 + 436) = 0;
                    }
                    goto LABEL_57;
                  }
                }
                goto LABEL_55;
              }
              KeyHandle = 0LL;
              v20 = NtReadFile(v17, 0LL, 0LL, 0LL, &v69, Heap, v11, (PLARGE_INTEGER)&KeyHandle, 0LL);
              if ( v20 >= 0 )
              {
                if ( (Heap[34] & 2) == 0
                  && *((_BYTE *)Heap + 108) == MEMORY[0x7FFE026C]
                  && *((_BYTE *)Heap + 109) == MEMORY[0x7FFE0270]
                  && Heap[37] == 8 )
                {
                  v45 = (unsigned int)Heap[26];
                  v46 = Heap[35];
                  if ( (unsigned int)(v45 - 1024) <= 0xFFFC00
                    && v46
                    && *((_QWORD *)Heap + 15)
                    && Heap[29] == *(_DWORD *)(a1 + 188) )
                  {
                    *((_QWORD *)Heap + 15) = 0LL;
                    v47 = NtWriteFile(
                            v17,
                            0LL,
                            0LL,
                            0LL,
                            &v69,
                            Heap,
                            *(_DWORD *)(a1 + 192),
                            (PLARGE_INTEGER)&KeyHandle,
                            0LL);
                    *(_DWORD *)(a1 + 376) = v46;
                    v20 = v47;
                    *(_DWORD *)(a1 + 320) = v46;
                    *(_DWORD *)(a1 + 192) = v45;
                    *(_QWORD *)(a1 + 336) = v45;
                    *(_QWORD *)(a1 + 128) = v17;
                    *(_QWORD *)(a1 + 344) = (unsigned int)(v45 * v46);
LABEL_57:
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
                    return v20;
                  }
                }
                v20 = -1073741811;
              }
            }
LABEL_55:
            if ( v17 )
              NtClose(v17);
            goto LABEL_57;
          }
        }
      }
    }
  }
  return result;
}
