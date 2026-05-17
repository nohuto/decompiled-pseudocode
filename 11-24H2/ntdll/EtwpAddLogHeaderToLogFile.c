/*
 * XREFs of EtwpAddLogHeaderToLogFile @ 0x1800B3D70
 * Callers:
 *     EtwpStartUmLogger @ 0x18008CCDC (EtwpStartUmLogger.c)
 *     EtwpLogger @ 0x18008DC40 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x18015C218 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x18001C620 (RtlNtStatusToDosError.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlCreateUnicodeString @ 0x180028050 (RtlCreateUnicodeString.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180059C40 (RtlpDosPathNameToRelativeNtPathName.c)
 *     StringCbPrintfW @ 0x1800B4B18 (StringCbPrintfW.c)
 *     RtlFreeAnsiString @ 0x1800B4B90 (RtlFreeAnsiString.c)
 *     EtwpAddDebugInfoEvents @ 0x1800B4BBC (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x1800B4D10 (EtwpAddBinaryInfoEvents.c)
 *     EtwpGetTimeZoneInformation @ 0x1800B4EA4 (EtwpGetTimeZoneInformation.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x1800B5034 (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x1800B5184 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x1800B532C (EtwpGetRegDwordValue.c)
 *     StringToGuidNoBrackets @ 0x1800B54F4 (StringToGuidNoBrackets.c)
 *     wcschr @ 0x1801276A0 (wcschr.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     wcsrchr @ 0x180127C50 (wcsrchr.c)
 *     wcsstr @ 0x180127D80 (wcsstr.c)
 *     NtReadFile @ 0x180161D50 (NtReadFile.c)
 *     NtWriteFile @ 0x180161D90 (NtWriteFile.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     ZwQueryInformationThread @ 0x180162130 (ZwQueryInformationThread.c)
 *     ZwSetInformationFile @ 0x180162170 (ZwSetInformationFile.c)
 *     NtQuerySystemInformation @ 0x180162350 (NtQuerySystemInformation.c)
 *     ZwQueryVolumeInformationFile @ 0x1801625B0 (ZwQueryVolumeInformationFile.c)
 *     ZwCreateFile @ 0x180162730 (ZwCreateFile.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memcmp @ 0x1801676D0 (memcmp.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
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
  unsigned __int64 Heap; // rdi
  size_t v16; // rax
  void *v17; // r15
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
  int v28; // ecx
  unsigned int v29; // ecx
  _QWORD *v30; // rsi
  _QWORD *v31; // rax
  __int64 v32; // rcx
  NTSTATUS result; // eax
  struct _PEB *v34; // rcx
  char v35; // al
  char v36; // dl
  __int64 v37; // rcx
  __int64 v38; // r8
  _DWORD *v39; // rcx
  size_t v40; // rax
  int v41; // r13d
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r13
  int v46; // r14d
  int v47; // eax
  int v48; // edx
  int v49; // eax
  int v50; // ecx
  unsigned __int64 v51; // r13
  size_t v52; // rax
  int RegString; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  int RegDwordValue; // eax
  _OWORD *v57; // r13
  _OWORD *v58; // r13
  unsigned int v59; // [rsp+60h] [rbp-A0h] BYREF
  int v60; // [rsp+68h] [rbp-98h]
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  BOOL v62; // [rsp+78h] [rbp-88h]
  int v63; // [rsp+7Ch] [rbp-84h]
  void *Src; // [rsp+80h] [rbp-80h] BYREF
  _OWORD *v65; // [rsp+88h] [rbp-78h]
  __int64 v66; // [rsp+90h] [rbp-70h]
  void *v67; // [rsp+98h] [rbp-68h] BYREF
  __int128 v68; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v69; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v70[2]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v71[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v72; // [rsp+D4h] [rbp-2Ch]
  const wchar_t *v73; // [rsp+D8h] [rbp-28h]
  _WORD v74[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v75; // [rsp+E4h] [rbp-1Ch]
  const wchar_t *v76; // [rsp+E8h] [rbp-18h]
  _QWORD v77[2]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v78[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE *v79; // [rsp+108h] [rbp+8h]
  __int128 v80; // [rsp+110h] [rbp+10h] BYREF
  __int128 v81; // [rsp+120h] [rbp+20h] BYREF
  __int128 v82; // [rsp+130h] [rbp+30h]
  __int128 v83; // [rsp+140h] [rbp+40h]
  __int128 v84; // [rsp+150h] [rbp+50h] BYREF
  __int128 v85; // [rsp+160h] [rbp+60h]
  __int64 v86; // [rsp+170h] [rbp+70h]
  int v87; // [rsp+178h] [rbp+78h]
  _QWORD v88[4]; // [rsp+180h] [rbp+80h] BYREF
  __int128 v89; // [rsp+1A0h] [rbp+A0h]
  __int128 v90; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v91; // [rsp+1D0h] [rbp+D0h]
  __int128 v92; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v93; // [rsp+1F0h] [rbp+F0h]
  _OWORD SystemInformation[4]; // [rsp+200h] [rbp+100h] BYREF
  _OWORD v95[2]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v96; // [rsp+260h] [rbp+160h]
  _OWORD v97[2]; // [rsp+268h] [rbp+168h] BYREF
  __int128 v98; // [rsp+288h] [rbp+188h]
  _BYTE v99[80]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v100[80]; // [rsp+2F0h] [rbp+1F0h] BYREF
  wchar_t pszDest[1024]; // [rsp+340h] [rbp+240h] BYREF

  v4 = a3;
  Src = a2;
  v59 = 0;
  v5 = (*(_BYTE *)(a1 + 308) & 8) == 0;
  v93 = 0LL;
  v86 = 0LL;
  v87 = 0;
  v66 = 0LL;
  v92 = 0LL;
  v69 = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  memset(v97, 0, sizeof(v97));
  v98 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
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
    LODWORD(v65) = v4;
    v13 = v4 + 79;
    goto LABEL_10;
  }
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    result = ZwQueryInformationThread(-2LL, 0LL, &v84, 48LL, 0LL);
    if ( result >= 0 )
    {
      result = ZwQueryInformationThread(-2LL, 1LL, &v90, 32LL, 0LL);
      if ( result >= 0 )
      {
        result = NtQuerySystemInformation(SystemTimeOfDayInformation, v97, 0x30u, 0LL);
        if ( result >= 0 )
        {
          result = EtwpGetCpuSpeedFromRegistry(&v59);
          if ( result >= 0 )
          {
            v48 = *(unsigned __int16 *)(a1 + 136) + *(unsigned __int16 *)(a1 + 152);
            v49 = v48 + 316;
            v13 = v48 + 395;
            LODWORD(v65) = v49;
LABEL_10:
            v63 = v13;
            Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v11);
            if ( !Heap )
              return -1073741801;
            *(_QWORD *)&v83 = 0LL;
            DWORD2(v83) = 0;
            v67 = 0LL;
            LODWORD(v16) = 3;
            v17 = 0LL;
            if ( !a4 )
              LODWORD(v16) = 5;
            v18 = 0;
            v60 = v16;
            LOWORD(v16) = 0;
            v81 = 0LL;
            v82 = 0LL;
            v80 = 0LL;
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
              LODWORD(v81) = 48;
              *(_QWORD *)&v82 = &v68;
              *((_QWORD *)&v81 + 1) = 0LL;
              DWORD2(v82) = 64;
              v83 = 0LL;
              v20 = ZwCreateFile(&v67, 3222274176LL, &v81, &v80, 0LL, 128, 5, v60, 104, 0LL);
              if ( v20 >= 0 )
              {
                if ( a4 )
                  a4 = *((_QWORD *)&v80 + 1) != 2LL;
                if ( !v62 )
                {
                  v96 = 0x2000LL;
                  memset(v95, 0, sizeof(v95));
                  v20 = ZwSetInformationFile(v67, &v80, v95, 40LL, 4);
                }
                v17 = v67;
              }
            }
LABEL_29:
            if ( *((_QWORD *)&v68 + 1) )
            {
              RtlpSysVolFree(*((__int64 *)&v68 + 1));
              v68 = 0LL;
            }
            if ( v20 >= 0 )
            {
              if ( !a4 )
              {
                v21 = (char *)Src;
                v22 = v63 & 0xFFFFFFF8;
                *(_DWORD *)Heap = v11;
                *(_DWORD *)(Heap + 52) = 262145;
                *(_DWORD *)(Heap + 48) = v22;
                if ( v21 )
                {
                  v23 = 0LL;
                  if ( (_DWORD)v4 )
                  {
                    do
                    {
                      v24 = (__int64)&v21[(unsigned int)v23 + 32];
                      v25 = *(_DWORD *)(a1 + 308) & 0x4101000 | 0x10001;
                      v66 = v24;
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
                    LODWORD(v11) = (_DWORD)Handle;
                  }
                  if ( *(_DWORD *)(v66 + 44) == 4 )
                    v28 = *(_DWORD *)(v66 + 264);
                  else
                    v28 = *(_DWORD *)(v66 + 272);
                  *(_DWORD *)(a1 + 16) = v28;
                  memmove((void *)(Heap + 72), v21, v4);
                }
                else
                {
                  *(_DWORD *)(Heap + 76) = (_DWORD)v65;
                  *(_DWORD *)(Heap + 72) = -1073610752;
                  *(_DWORD *)(Heap + 84) = v85;
                  *(_DWORD *)(Heap + 80) = DWORD2(v85);
                  *(_DWORD *)(Heap + 96) = (__int64)v91 / DWORD1(SystemInformation[0]);
                  *(_DWORD *)(Heap + 100) = *((_QWORD *)&v91 + 1) / (__int64)DWORD1(SystemInformation[0]);
                  *(_QWORD *)(Heap + 88) = *(_QWORD *)(a1 + 8);
                  v34 = NtCurrentPeb();
                  *(_BYTE *)(Heap + 108) = v34->OSMajorVersion;
                  *(_BYTE *)(Heap + 109) = v34->OSMinorVersion;
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
                  *(_BYTE *)(Heap + 110) = v36;
                  *(_BYTE *)(Heap + 111) = v35;
                  *(_DWORD *)(Heap + 112) = v34->OSBuildNumber;
                  *(_DWORD *)(Heap + 376) = *(_DWORD *)(a1 + 16);
                  *(_DWORD *)(Heap + 116) = *(_DWORD *)(a1 + 188);
                  *(_DWORD *)(Heap + 148) = 8;
                  *(_DWORD *)(Heap + 144) = 1;
                  *(_DWORD *)(Heap + 104) = v11;
                  *(_DWORD *)(Heap + 140) = 1;
                  *(_DWORD *)(Heap + 132) = *(_DWORD *)(a1 + 304);
                  *(_DWORD *)(Heap + 136) = *(_DWORD *)(a1 + 308);
                  *(_DWORD *)(Heap + 128) = DWORD1(SystemInformation[0]);
                  *(_QWORD *)(Heap + 352) = *(_QWORD *)&v97[0] - v98;
                  *(_DWORD *)(Heap + 156) = v59;
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
                  v37 = *(unsigned int *)(Heap + 48);
                  if ( (unsigned int)(v37 + 80) <= *(_DWORD *)Heap )
                  {
                    v38 = Heap + v37;
                    v77[0] = 4980812LL;
                    *(_DWORD *)(v38 + 4) = 5242960;
                    *(_DWORD *)v38 = -1073610750;
                    *(_DWORD *)(v38 + 8) = DWORD2(v85);
                    *(_DWORD *)(v38 + 12) = v85;
                    v66 = Heap + v37;
                    v78[1] = 0;
                    *(_DWORD *)(v38 + 24) = (__int64)v91 / DWORD1(SystemInformation[0]);
                    v39 = (_DWORD *)(Heap + v37 + 36);
                    *(_DWORD *)(v38 + 28) = *((_QWORD *)&v91 + 1) / (__int64)DWORD1(SystemInformation[0]);
                    *(_QWORD *)(v38 + 16) = *(_QWORD *)(a1 + 8);
                    *(_DWORD *)(v38 + 32) = 0;
                    *v39 = 0;
                    Src = v39;
                    v65 = (_OWORD *)(v38 + 64);
                    memset_thunk_772440563353939046(v99, 0, 0x4CuLL);
                    memset_thunk_772440563353939046(v100, 0, 0x4CuLL);
                    v59 = 38;
                    v77[1] = v99;
                    HIDWORD(v88[0]) = 0;
                    Handle = 0LL;
                    v72 = 0;
                    v73 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control";
                    v40 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
                    v88[0] = 48LL;
                    v88[3] = 64LL;
                    v88[1] = 0LL;
                    if ( v40 >= 0xFFFE )
                      LOWORD(v40) = -4;
                    v71[0] = v40;
                    v71[1] = v40 + 2;
                    v88[2] = v71;
                    v89 = 0LL;
                    v41 = NtOpenKey(&Handle, 131097LL, v88);
                    if ( v41 >= 0 )
                    {
                      v42 = 2LL * v59;
                      if ( v42 > 0xFFFFFFFF || (v60 = v42 + 12, (int)v42 + 12 < (unsigned int)v42) )
                      {
                        NtClose(Handle);
                        goto LABEL_44;
                      }
                      v51 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v42 + 12));
                      if ( v51 )
                      {
                        v75 = 0;
                        v76 = L"ContainerId";
                        v52 = 2 * wcslen(L"ContainerId");
                        if ( v52 >= 0xFFFE )
                          LOWORD(v52) = -4;
                        v74[0] = v52;
                        v74[1] = v52 + 2;
                        v60 = NtQueryValueKey(Handle, v74, 2LL, v51, v60, &v59);
                        if ( v60 >= 0 )
                          memmove(v99, (const void *)(v51 + 12), *(unsigned int *)(v51 + 8));
                        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v51);
                        v41 = v60;
                      }
                      else
                      {
                        v41 = -1073741801;
                      }
                      NtClose(Handle);
                    }
                    if ( !v41 || v41 == -1073741772 )
                    {
                      v78[0] = 4980812;
                      v79 = v100;
                      RegString = EtwpQueryRegString(
                                    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control",
                                    L"ContainerCorrelationId",
                                    v100,
                                    38LL);
                      if ( !RegString || RegString == -1073741772 )
                      {
                        RegDwordValue = EtwpGetRegDwordValue(v55, v54, Src);
                        if ( !RegDwordValue || RegDwordValue == -1073741772 )
                        {
                          v57 = (_OWORD *)(v66 + 48);
                          *(_QWORD *)(v66 + 40) = 0LL;
                          if ( (unsigned int)StringToGuidNoBrackets(v77, v57) )
                            *v57 = NullGuid;
                          v58 = v65;
                          if ( (unsigned int)StringToGuidNoBrackets(v78, v65) )
                            *v58 = NullGuid;
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
                  if ( (int)ZwQueryVolumeInformationFile(v17, &v69, &v92, 24LL, 3) >= 0 )
                  {
                    v50 = *(_DWORD *)(Heap + 48) + 80;
                    if ( !v21 )
                      v50 = *(_DWORD *)(Heap + 48);
                    LODWORD(v11) = -HIDWORD(v93) & (v50 + HIDWORD(v93) - 1);
                    *(_DWORD *)Heap = v11;
                  }
                }
                v29 = *(_DWORD *)(Heap + 48);
                v30 = (_QWORD *)(a1 + 464);
                *(_DWORD *)(Heap + 4) = v29;
                v31 = (_QWORD *)(a1 + 448);
                if ( ((_QWORD *)*v30 != v30 || (_QWORD *)*v31 != v31) && v29 < (unsigned int)v11 && v29 >= 0x180 )
                {
                  if ( (_QWORD *)*v31 != v31 )
                    EtwpAddDebugInfoEvents(a1, Heap, (unsigned int)v11);
                  if ( (_QWORD *)*v30 != v30 )
                    EtwpAddBinaryInfoEvents(a1, Heap, (unsigned int)v11);
                }
                v32 = *(unsigned int *)(Heap + 48);
                if ( (unsigned int)v32 < (unsigned int)v11 && (unsigned int)v32 > 0x48 )
                  memset_thunk_772440563353939046((void *)(Heap + v32), 255, (unsigned int)(v11 - v32));
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
                  v20 = ZwSetInformationFile(v17, &v69, &Src, 8LL, 20);
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
              Handle = 0LL;
              v20 = NtReadFile(v17, 0LL, 0LL, 0LL, &v69, Heap, v11, &Handle, 0LL);
              if ( v20 >= 0 )
              {
                if ( (*(_BYTE *)(Heap + 136) & 2) == 0
                  && *(_BYTE *)(Heap + 108) == MEMORY[0x7FFE026C]
                  && *(_BYTE *)(Heap + 109) == MEMORY[0x7FFE0270]
                  && *(_DWORD *)(Heap + 148) == 8 )
                {
                  v45 = *(unsigned int *)(Heap + 104);
                  v46 = *(_DWORD *)(Heap + 140);
                  if ( (unsigned int)(v45 - 1024) <= 0xFFFC00
                    && v46
                    && *(_QWORD *)(Heap + 120)
                    && *(_DWORD *)(Heap + 116) == *(_DWORD *)(a1 + 188) )
                  {
                    *(_QWORD *)(Heap + 120) = 0LL;
                    v47 = NtWriteFile(v17, 0LL, 0LL, 0LL, &v69, Heap, *(_DWORD *)(a1 + 192), &Handle, 0LL);
                    *(_DWORD *)(a1 + 376) = v46;
                    v20 = v47;
                    *(_DWORD *)(a1 + 320) = v46;
                    *(_DWORD *)(a1 + 192) = v45;
                    *(_QWORD *)(a1 + 336) = v45;
                    *(_QWORD *)(a1 + 128) = v17;
                    *(_QWORD *)(a1 + 344) = (unsigned int)(v45 * v46);
LABEL_57:
                    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
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
