/*
 * XREFs of EtwpAddLogHeaderToLogFile @ 0x1800824C0
 * Callers:
 *     EtwpStartUmLogger @ 0x1800B598C (EtwpStartUmLogger.c)
 *     EtwpLogger @ 0x1800B6AE0 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x18015D778 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlCreateUnicodeString @ 0x180082430 (RtlCreateUnicodeString.c)
 *     StringCbPrintfW @ 0x180083268 (StringCbPrintfW.c)
 *     RtlFreeAnsiString @ 0x1800832E0 (RtlFreeAnsiString.c)
 *     EtwpAddDebugInfoEvents @ 0x18008330C (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x180083460 (EtwpAddBinaryInfoEvents.c)
 *     EtwpGetTimeZoneInformation @ 0x1800835F4 (EtwpGetTimeZoneInformation.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180083784 (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x1800838D4 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180083A7C (EtwpGetRegDwordValue.c)
 *     StringToGuidNoBrackets @ 0x180083C44 (StringToGuidNoBrackets.c)
 *     wcschr @ 0x180129180 (wcschr.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     wcsrchr @ 0x180129730 (wcsrchr.c)
 *     wcsstr @ 0x180129860 (wcsstr.c)
 *     NtReadFile @ 0x1801632E0 (NtReadFile.c)
 *     NtWriteFile @ 0x180163320 (NtWriteFile.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 *     ZwSetInformationFile @ 0x180163700 (ZwSetInformationFile.c)
 *     NtQuerySystemInformation @ 0x1801638E0 (NtQuerySystemInformation.c)
 *     ZwQueryVolumeInformationFile @ 0x180163B40 (ZwQueryVolumeInformationFile.c)
 *     ZwCreateFile @ 0x180163CC0 (ZwCreateFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memcmp @ 0x180168C50 (memcmp.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall EtwpAddLogHeaderToLogFile(__int64 a1, void *a2, unsigned int a3, bool a4)
{
  size_t v4; // r13
  bool v5; // zf
  wchar_t *v9; // rdi
  NTSTATUS v10; // ecx
  unsigned __int64 v11; // r14
  const wchar_t *v12; // rsi
  int v13; // edx
  BOOL v14; // edx
  __int64 Heap; // rdi
  size_t v16; // rax
  void *v17; // r15
  unsigned __int16 v18; // cx
  size_t v19; // rax
  __int64 v20; // r9
  int v21; // esi
  char *v22; // rsi
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r14
  int v26; // eax
  char v27; // al
  char v28; // r8
  int v29; // ecx
  unsigned int v30; // ecx
  _QWORD *v31; // rsi
  _QWORD *v32; // rax
  __int64 v33; // rcx
  NTSTATUS result; // eax
  struct _PEB *v35; // rcx
  char v36; // al
  char v37; // dl
  __int64 v38; // rcx
  __int64 v39; // r8
  _DWORD *v40; // rcx
  size_t v41; // rax
  int v42; // r13d
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r13
  int v47; // r14d
  int v48; // eax
  int v49; // edx
  int v50; // eax
  int v51; // ecx
  __int64 v52; // r13
  size_t v53; // rax
  __int64 v54; // r9
  int RegString; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  int RegDwordValue; // eax
  _OWORD *v59; // r13
  _OWORD *v60; // r13
  __int64 v61; // [rsp+20h] [rbp-E0h]
  unsigned int v62; // [rsp+60h] [rbp-A0h] BYREF
  int v63; // [rsp+68h] [rbp-98h]
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  BOOL v65; // [rsp+78h] [rbp-88h]
  int v66; // [rsp+7Ch] [rbp-84h]
  void *Src; // [rsp+80h] [rbp-80h] BYREF
  _OWORD *v68; // [rsp+88h] [rbp-78h]
  __int64 v69; // [rsp+90h] [rbp-70h]
  void *v70; // [rsp+98h] [rbp-68h] BYREF
  __int128 v71; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v72; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v73[2]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v74[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v75; // [rsp+D4h] [rbp-2Ch]
  const wchar_t *v76; // [rsp+D8h] [rbp-28h]
  _WORD v77[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v78; // [rsp+E4h] [rbp-1Ch]
  const wchar_t *v79; // [rsp+E8h] [rbp-18h]
  _QWORD v80[2]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v81[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE *v82; // [rsp+108h] [rbp+8h]
  __int128 v83; // [rsp+110h] [rbp+10h] BYREF
  __int128 v84; // [rsp+120h] [rbp+20h] BYREF
  __int128 v85; // [rsp+130h] [rbp+30h]
  __int128 v86; // [rsp+140h] [rbp+40h]
  __int128 v87; // [rsp+150h] [rbp+50h] BYREF
  __int128 v88; // [rsp+160h] [rbp+60h]
  __int64 v89; // [rsp+170h] [rbp+70h]
  int v90; // [rsp+178h] [rbp+78h]
  _QWORD v91[4]; // [rsp+180h] [rbp+80h] BYREF
  __int128 v92; // [rsp+1A0h] [rbp+A0h]
  __int128 v93; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v94; // [rsp+1D0h] [rbp+D0h]
  __int128 v95; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v96; // [rsp+1F0h] [rbp+F0h]
  _OWORD SystemInformation[4]; // [rsp+200h] [rbp+100h] BYREF
  _OWORD v98[2]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v99; // [rsp+260h] [rbp+160h]
  _OWORD v100[2]; // [rsp+268h] [rbp+168h] BYREF
  __int128 v101; // [rsp+288h] [rbp+188h]
  _BYTE v102[80]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v103[80]; // [rsp+2F0h] [rbp+1F0h] BYREF
  wchar_t pszDest[1024]; // [rsp+340h] [rbp+240h] BYREF

  v4 = a3;
  Src = a2;
  v62 = 0;
  v5 = (*(_BYTE *)(a1 + 308) & 8) == 0;
  v96 = 0LL;
  v89 = 0LL;
  v90 = 0;
  v69 = 0LL;
  v95 = 0LL;
  v72 = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  memset(v100, 0, sizeof(v100));
  v101 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
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
        RtlCreateUnicodeString(a1 + 152, pszDest);
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
  LODWORD(Handle) = *(_DWORD *)(a1 + 192);
  if ( a2 )
  {
    LODWORD(v68) = v4;
    v13 = v4 + 79;
    goto LABEL_10;
  }
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    result = ZwQueryInformationThread(-2LL, 0LL, &v87);
    if ( result >= 0 )
    {
      v61 = 0LL;
      result = ZwQueryInformationThread(-2LL, 1LL, &v93);
      if ( result >= 0 )
      {
        result = NtQuerySystemInformation(SystemTimeOfDayInformation, v100, 0x30u, 0LL);
        if ( result >= 0 )
        {
          result = EtwpGetCpuSpeedFromRegistry(&v62);
          if ( result >= 0 )
          {
            v49 = *(unsigned __int16 *)(a1 + 136) + *(unsigned __int16 *)(a1 + 152);
            v50 = v49 + 316;
            v13 = v49 + 395;
            LODWORD(v68) = v50;
LABEL_10:
            v66 = v13;
            Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v11);
            if ( !Heap )
              return -1073741801;
            *(_QWORD *)&v86 = 0LL;
            DWORD2(v86) = 0;
            v70 = 0LL;
            LODWORD(v16) = 3;
            v17 = 0LL;
            if ( !a4 )
              LODWORD(v16) = 5;
            v18 = 0;
            v63 = v16;
            LOWORD(v16) = 0;
            v84 = 0LL;
            v85 = 0LL;
            v83 = 0LL;
            if ( v12 )
            {
              v16 = 2 * wcslen(v12);
              if ( v16 >= 0xFFFE )
                LOWORD(v16) = -4;
              v18 = v16;
            }
            LOBYTE(v14) = 0;
            v71 = 0uLL;
            v65 = v14;
            if ( (unsigned __int16)v16 > 1u )
              v65 = v12[((unsigned __int64)v18 >> 1) - 1] == 92;
            v73[0] = 0LL;
            v73[1] = v12;
            if ( v12 )
            {
              v19 = wcslen(v12);
              if ( v19 > 0x7FFE )
              {
                v21 = -1073741562;
                goto LABEL_29;
              }
              LOWORD(v73[0]) = 2 * v19;
              WORD1(v73[0]) = 2 * v19 + 2;
            }
            v21 = RtlpDosPathNameToRelativeNtPathName(
                    0,
                    (unsigned __int16 *)v73,
                    0LL,
                    (unsigned __int16 *)&v71,
                    0LL,
                    0LL,
                    0LL);
            if ( v21 >= 0 )
            {
              LODWORD(v84) = 48;
              *(_QWORD *)&v85 = &v71;
              *((_QWORD *)&v84 + 1) = 0LL;
              DWORD2(v85) = 64;
              v86 = 0LL;
              v21 = ZwCreateFile(&v70, 3222274176LL, &v84, &v83, 0LL, 128, 5, v63, 104, 0LL, 0);
              if ( v21 >= 0 )
              {
                if ( a4 )
                  a4 = *((_QWORD *)&v83 + 1) != 2LL;
                if ( !v65 )
                {
                  v99 = 0x2000LL;
                  memset(v98, 0, sizeof(v98));
                  v21 = ZwSetInformationFile(v70, &v83, v98, 40LL, 4);
                }
                v17 = v70;
              }
            }
LABEL_29:
            if ( *((_QWORD *)&v71 + 1) )
            {
              RtlpSysVolFree(*((__int64 *)&v71 + 1));
              v71 = 0LL;
            }
            if ( v21 >= 0 )
            {
              if ( !a4 )
              {
                v22 = (char *)Src;
                v23 = v66 & 0xFFFFFFF8;
                *(_DWORD *)Heap = v11;
                *(_DWORD *)(Heap + 52) = 262145;
                *(_DWORD *)(Heap + 48) = v23;
                if ( v22 )
                {
                  v24 = 0LL;
                  if ( (_DWORD)v4 )
                  {
                    do
                    {
                      v25 = (__int64)&v22[(unsigned int)v24 + 32];
                      v26 = *(_DWORD *)(a1 + 308) & 0x4101000 | 0x10001;
                      v69 = v25;
                      *(_DWORD *)(v25 + 32) = v26;
                      *(_DWORD *)(v25 + 36) = 1;
                      *(_DWORD *)v25 = *(_DWORD *)(a1 + 192);
                      if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0
                        || *(_DWORD *)(a1 + 192) > 0x100000u
                        || *(_DWORD *)(v25 + 12) > 0x100u )
                      {
                        v27 = 0;
                        v28 = 2;
                      }
                      else
                      {
                        v27 = 5;
                        v28 = 1;
                      }
                      *(_BYTE *)(v25 + 6) = v28;
                      *(_BYTE *)(v25 + 7) = v27;
                      LODWORD(v24) = ((*(unsigned __int16 *)&v22[v24 + 4] + 7) & 0xFFFFFFF8) + v24;
                    }
                    while ( (unsigned int)v24 < (unsigned int)v4 );
                    LODWORD(v11) = (_DWORD)Handle;
                  }
                  if ( *(_DWORD *)(v69 + 44) == 4 )
                    v29 = *(_DWORD *)(v69 + 264);
                  else
                    v29 = *(_DWORD *)(v69 + 272);
                  *(_DWORD *)(a1 + 16) = v29;
                  memmove((void *)(Heap + 72), v22, v4);
                }
                else
                {
                  *(_DWORD *)(Heap + 76) = (_DWORD)v68;
                  *(_DWORD *)(Heap + 72) = -1073610752;
                  *(_DWORD *)(Heap + 84) = v88;
                  *(_DWORD *)(Heap + 80) = DWORD2(v88);
                  *(_DWORD *)(Heap + 96) = (__int64)v94 / DWORD1(SystemInformation[0]);
                  *(_DWORD *)(Heap + 100) = *((_QWORD *)&v94 + 1) / (__int64)DWORD1(SystemInformation[0]);
                  *(_QWORD *)(Heap + 88) = *(_QWORD *)(a1 + 8);
                  v35 = NtCurrentPeb();
                  *(_BYTE *)(Heap + 108) = v35->OSMajorVersion;
                  *(_BYTE *)(Heap + 109) = v35->OSMinorVersion;
                  if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0
                    || *(_DWORD *)(a1 + 192) > 0x100000u
                    || *(_DWORD *)(a1 + 188) > 0x100u )
                  {
                    v36 = 0;
                    v37 = 2;
                  }
                  else
                  {
                    v36 = 5;
                    v37 = 1;
                  }
                  *(_BYTE *)(Heap + 110) = v37;
                  *(_BYTE *)(Heap + 111) = v36;
                  *(_DWORD *)(Heap + 112) = v35->OSBuildNumber;
                  *(_DWORD *)(Heap + 376) = *(_DWORD *)(a1 + 16);
                  *(_DWORD *)(Heap + 116) = *(_DWORD *)(a1 + 188);
                  *(_DWORD *)(Heap + 148) = 8;
                  *(_DWORD *)(Heap + 144) = 1;
                  *(_DWORD *)(Heap + 104) = v11;
                  *(_DWORD *)(Heap + 140) = 1;
                  *(_DWORD *)(Heap + 132) = *(_DWORD *)(a1 + 304);
                  *(_DWORD *)(Heap + 136) = *(_DWORD *)(a1 + 308);
                  *(_DWORD *)(Heap + 128) = DWORD1(SystemInformation[0]);
                  *(_QWORD *)(Heap + 352) = *(_QWORD *)&v100[0] - v101;
                  *(_DWORD *)(Heap + 156) = v62;
                  *(_QWORD *)(Heap + 160) = 0LL;
                  *(_QWORD *)(Heap + 168) = 0LL;
                  memmove((void *)(Heap + 384), *(const void **)(a1 + 144), *(unsigned __int16 *)(a1 + 136) + 2LL);
                  memmove(
                    (void *)(Heap + *(unsigned __int16 *)(a1 + 136) + 386LL),
                    *(const void **)(a1 + 160),
                    *(unsigned __int16 *)(a1 + 152) + 2LL);
                  EtwpGetTimeZoneInformation((void *)(Heap + 176));
                  *(_QWORD *)(Heap + 360) = MEMORY[0x7FFE0300];
                  *(_QWORD *)(Heap + 368) = *(_QWORD *)a1;
                  v38 = *(unsigned int *)(Heap + 48);
                  if ( (unsigned int)(v38 + 80) <= *(_DWORD *)Heap )
                  {
                    v39 = Heap + v38;
                    v80[0] = 4980812LL;
                    *(_DWORD *)(v39 + 4) = 5242960;
                    *(_DWORD *)v39 = -1073610750;
                    *(_DWORD *)(v39 + 8) = DWORD2(v88);
                    *(_DWORD *)(v39 + 12) = v88;
                    v69 = Heap + v38;
                    v81[1] = 0;
                    *(_DWORD *)(v39 + 24) = (__int64)v94 / DWORD1(SystemInformation[0]);
                    v40 = (_DWORD *)(Heap + v38 + 36);
                    *(_DWORD *)(v39 + 28) = *((_QWORD *)&v94 + 1) / (__int64)DWORD1(SystemInformation[0]);
                    *(_QWORD *)(v39 + 16) = *(_QWORD *)(a1 + 8);
                    *(_DWORD *)(v39 + 32) = 0;
                    *v40 = 0;
                    Src = v40;
                    v68 = (_OWORD *)(v39 + 64);
                    memset_thunk_772440563353939046(v102, 0, 0x4CuLL);
                    memset_thunk_772440563353939046(v103, 0, 0x4CuLL);
                    v62 = 38;
                    v80[1] = v102;
                    HIDWORD(v91[0]) = 0;
                    Handle = 0LL;
                    v75 = 0;
                    v76 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control";
                    v41 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
                    v91[0] = 48LL;
                    v91[3] = 64LL;
                    v91[1] = 0LL;
                    if ( v41 >= 0xFFFE )
                      LOWORD(v41) = -4;
                    v74[0] = v41;
                    v74[1] = v41 + 2;
                    v91[2] = v74;
                    v92 = 0LL;
                    v42 = NtOpenKey(&Handle, 131097LL, v91);
                    if ( v42 >= 0 )
                    {
                      v43 = 2LL * v62;
                      if ( v43 > 0xFFFFFFFF || (v63 = v43 + 12, (int)v43 + 12 < (unsigned int)v43) )
                      {
                        NtClose(Handle);
                        goto LABEL_44;
                      }
                      v52 = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v43 + 12));
                      if ( v52 )
                      {
                        v78 = 0;
                        v79 = L"ContainerId";
                        v53 = 2 * wcslen(L"ContainerId");
                        if ( v53 >= 0xFFFE )
                          LOWORD(v53) = -4;
                        v77[0] = v53;
                        v77[1] = v53 + 2;
                        v63 = NtQueryValueKey(Handle, v77, 2LL, v52, v63, &v62);
                        if ( v63 >= 0 )
                          memmove(v102, (const void *)(v52 + 12), *(unsigned int *)(v52 + 8));
                        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v52, v54);
                        v42 = v63;
                      }
                      else
                      {
                        v42 = -1073741801;
                      }
                      NtClose(Handle);
                    }
                    if ( !v42 || v42 == -1073741772 )
                    {
                      v81[0] = 4980812;
                      v82 = v103;
                      RegString = EtwpQueryRegString(
                                    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control",
                                    L"ContainerCorrelationId",
                                    v103,
                                    38LL,
                                    v61);
                      if ( !RegString || RegString == -1073741772 )
                      {
                        RegDwordValue = EtwpGetRegDwordValue(v57, v56, Src);
                        if ( !RegDwordValue || RegDwordValue == -1073741772 )
                        {
                          v59 = (_OWORD *)(v69 + 48);
                          *(_QWORD *)(v69 + 40) = 0LL;
                          if ( (unsigned int)StringToGuidNoBrackets(v80, v59) )
                            *v59 = NullGuid;
                          v60 = v68;
                          if ( (unsigned int)StringToGuidNoBrackets(v81, v68) )
                            *v60 = NullGuid;
                          *(_DWORD *)(Heap + 48) += 80;
                        }
                      }
                    }
                  }
                }
LABEL_44:
                if ( (*(_DWORD *)(a1 + 308) & 0x4000000) != 0 )
                {
                  *(_DWORD *)(Heap + 44) = 3;
                  LODWORD(v61) = 3;
                  if ( (int)ZwQueryVolumeInformationFile(v17, &v72, &v95, 24LL, v61) >= 0 )
                  {
                    v51 = *(_DWORD *)(Heap + 48) + 80;
                    if ( !v22 )
                      v51 = *(_DWORD *)(Heap + 48);
                    LODWORD(v11) = -HIDWORD(v96) & (v51 + HIDWORD(v96) - 1);
                    *(_DWORD *)Heap = v11;
                  }
                }
                v30 = *(_DWORD *)(Heap + 48);
                v31 = (_QWORD *)(a1 + 464);
                *(_DWORD *)(Heap + 4) = v30;
                v32 = (_QWORD *)(a1 + 448);
                if ( ((_QWORD *)*v31 != v31 || (_QWORD *)*v32 != v32) && v30 < (unsigned int)v11 && v30 >= 0x180 )
                {
                  if ( (_QWORD *)*v32 != v32 )
                    EtwpAddDebugInfoEvents(a1, Heap, (unsigned int)v11);
                  if ( (_QWORD *)*v31 != v31 )
                    EtwpAddBinaryInfoEvents(a1, Heap, (unsigned int)v11);
                }
                v33 = *(unsigned int *)(Heap + 48);
                if ( (unsigned int)v33 < (unsigned int)v11 && (unsigned int)v33 > 0x48 )
                  memset_thunk_772440563353939046((void *)(Heap + v33), 255, (unsigned int)(v11 - v33));
                v21 = NtWriteFile(v17, 0LL, 0LL, 0LL, &v72, Heap, v11, 0LL, 0LL);
                if ( v21 >= 0 )
                {
                  v44 = *(unsigned int *)(a1 + 304);
                  if ( !(_DWORD)v44 || (*(_DWORD *)(a1 + 308) & 0x20) == 0 )
                    goto LABEL_76;
                  v45 = 1024LL;
                  if ( (*(_DWORD *)(a1 + 308) & 0x2000) == 0 )
                    v45 = 0x100000LL;
                  Src = (void *)(v44 * v45);
                  v21 = ZwSetInformationFile(v17, &v72, &Src, 8LL, 20);
                  if ( v21 >= 0 )
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
              Handle = 0LL;
              v21 = NtReadFile(v17, 0LL, 0LL, 0LL, &v72, Heap, v11, &Handle, 0LL);
              if ( v21 >= 0 )
              {
                if ( (*(_BYTE *)(Heap + 136) & 2) == 0
                  && *(_BYTE *)(Heap + 108) == MEMORY[0x7FFE026C]
                  && *(_BYTE *)(Heap + 109) == MEMORY[0x7FFE0270]
                  && *(_DWORD *)(Heap + 148) == 8 )
                {
                  v46 = *(unsigned int *)(Heap + 104);
                  v47 = *(_DWORD *)(Heap + 140);
                  if ( (unsigned int)(v46 - 1024) <= 0xFFFC00
                    && v47
                    && *(_QWORD *)(Heap + 120)
                    && *(_DWORD *)(Heap + 116) == *(_DWORD *)(a1 + 188) )
                  {
                    *(_QWORD *)(Heap + 120) = 0LL;
                    v48 = NtWriteFile(v17, 0LL, 0LL, 0LL, &v72, Heap, *(_DWORD *)(a1 + 192), &Handle, 0LL);
                    *(_DWORD *)(a1 + 376) = v47;
                    v21 = v48;
                    *(_DWORD *)(a1 + 320) = v47;
                    *(_DWORD *)(a1 + 192) = v46;
                    *(_QWORD *)(a1 + 336) = v46;
                    *(_QWORD *)(a1 + 128) = v17;
                    *(_QWORD *)(a1 + 344) = (unsigned int)(v46 * v47);
LABEL_57:
                    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v20);
                    return v21;
                  }
                }
                v21 = -1073741811;
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
