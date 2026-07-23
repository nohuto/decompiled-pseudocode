/*
 * XREFs of SbSelectProcedure @ 0x180038D30
 * Callers:
 *     SwitchedRtlGetVersion @ 0x180038AB0 (SwitchedRtlGetVersion.c)
 *     RtlInitializeHeapManager @ 0x18011BFFC (RtlInitializeHeapManager.c)
 *     SbExecuteProcedure @ 0x18015DFA0 (SbExecuteProcedure.c)
 * Callees:
 *     RtlGetVersion @ 0x180039460 (RtlGetVersion.c)
 *     SbpUpdateCache @ 0x180039890 (SbpUpdateCache.c)
 *     EtwNotificationRegister @ 0x180045640 (EtwNotificationRegister.c)
 *     EtwNotificationUnregister @ 0x180045F20 (EtwNotificationUnregister.c)
 *     RtlSetLastWin32Error @ 0x180046B80 (RtlSetLastWin32Error.c)
 *     EtwpEventWriteFull @ 0x18008EAC0 (EtwpEventWriteFull.c)
 *     SbpTraceContextUpdate @ 0x1800BE8A4 (SbpTraceContextUpdate.c)
 *     SbpResolveBasedOnName @ 0x18011B468 (SbpResolveBasedOnName.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall SbSelectProcedure(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 v5; // r13
  __int64 v6; // r15
  unsigned int v7; // r14d
  __int64 v8; // r12
  char *pShimData; // r8
  char *v10; // r8
  char *v11; // rax
  char *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rdi
  char *v16; // rbx
  char *v17; // rbx
  __int64 *v18; // rdi
  char *v19; // rbx
  char *v20; // rbx
  ULONGLONG v22; // rsi
  LONG v23; // eax
  ULONGLONG v24; // rsi
  LONG v25; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r9
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // eax
  _RTL_USER_PROCESS_PARAMETERS *v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // eax
  _WORD *v38; // rcx
  __int64 v39; // rbx
  unsigned __int64 v40; // rax
  unsigned __int16 v41; // dx
  bool v42; // cf
  bool v43; // zf
  _QWORD *v44; // rbx
  unsigned int v45; // r12d
  unsigned int *v46; // rcx
  __int64 v47; // rsi
  unsigned int v48; // edi
  unsigned int i; // r8d
  __int64 v50; // rax
  __int64 v51; // r14
  unsigned int v52; // ecx
  unsigned int j; // edi
  __int64 v54; // r14
  __int64 v55; // rax
  __int64 v56; // rax
  __int16 v57; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v58; // [rsp+54h] [rbp-ACh] BYREF
  __int16 v59; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 v60; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v61; // [rsp+60h] [rbp-A0h]
  ULONGLONG RegHandle; // [rsp+68h] [rbp-98h] BYREF
  ULONGLONG v63[2]; // [rsp+70h] [rbp-90h] BYREF
  _OSVERSIONINFOEXW VersionInformation; // [rsp+80h] [rbp-80h] BYREF
  __int128 v65; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v66; // [rsp+1B0h] [rbp+B0h]
  __int128 v67; // [rsp+1C0h] [rbp+C0h]
  __int128 v68; // [rsp+1D0h] [rbp+D0h]
  __int128 v69; // [rsp+1E0h] [rbp+E0h]
  __int128 v70; // [rsp+1F0h] [rbp+F0h]
  __int128 v71; // [rsp+200h] [rbp+100h]
  __int128 v72; // [rsp+210h] [rbp+110h]
  _QWORD v73[5]; // [rsp+220h] [rbp+120h] BYREF
  int v74; // [rsp+248h] [rbp+148h]
  int v75; // [rsp+24Ch] [rbp+14Ch]
  unsigned __int16 *v76; // [rsp+250h] [rbp+150h]
  __int64 v77; // [rsp+258h] [rbp+158h]
  __int64 v78; // [rsp+260h] [rbp+160h]
  int v79; // [rsp+268h] [rbp+168h]
  int v80; // [rsp+26Ch] [rbp+16Ch]
  __int128 v81; // [rsp+270h] [rbp+170h]
  __int128 v82; // [rsp+280h] [rbp+180h]
  __int128 v83; // [rsp+290h] [rbp+190h]

  v4 = a3;
  v5 = *(_QWORD *)(a3 + 8);
  v6 = 0LL;
  v61 = a3;
  v7 = a4;
  v58 = a4;
  v8 = -1LL;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v10 = pShimData + 2016;
    if ( v10 )
    {
      if ( *((_DWORD *)v10 + 12) )
      {
        v11 = (char *)NtCurrentPeb()->pShimData;
        if ( v11 && (v12 = v11 + 2016) != 0LL && *((_DWORD *)v12 + 12) )
          v13 = *(_QWORD *)v12;
        else
          v13 = 0LL;
        if ( v13 == *(_QWORD *)v5 && a2 == *(_DWORD *)(v5 + 8) )
          goto LABEL_10;
        if ( !(unsigned int)SbpUpdateCache(v5, v4, v10 + 24, a2) )
          return 0LL;
LABEL_24:
        v4 = v61;
        goto LABEL_10;
      }
    }
  }
  memset_thunk_772440563353939046(&VersionInformation, 0, 0x11CuLL);
  if ( RtlGetVersion(&VersionInformation) < 0 )
    goto LABEL_24;
  v38 = &unk_180175306;
  v39 = -1LL;
  v40 = 0LL;
  while ( 1 )
  {
    v41 = *(v38 - 1);
    v42 = LOWORD(VersionInformation.dwMajorVersion) < v41;
    v43 = LOWORD(VersionInformation.dwMajorVersion) == v41;
    if ( LOWORD(VersionInformation.dwMajorVersion) <= v41 )
    {
      if ( LOWORD(VersionInformation.dwMajorVersion) != v41 )
        goto LABEL_77;
      if ( LOWORD(VersionInformation.dwMinorVersion) < *v38 )
        break;
    }
    v39 = v40;
LABEL_54:
    ++v40;
    v38 += 16;
    if ( v40 >= 5 )
      goto LABEL_55;
  }
  v42 = LOWORD(VersionInformation.dwMajorVersion) < v41;
  v43 = LOWORD(VersionInformation.dwMajorVersion) == v41;
LABEL_77:
  if ( !v42 && (!v43 || LOWORD(VersionInformation.dwMinorVersion) >= *v38) )
    goto LABEL_54;
LABEL_55:
  if ( v39 == -1 )
    v44 = &unk_1801752F4;
  else
    v44 = (_QWORD *)((char *)&unk_1801752F4 + 32 * v39);
  v4 = v61;
  v45 = 0;
  v46 = *(unsigned int **)(v61 + 24);
  if ( *v46 )
  {
    do
    {
      v47 = *(_QWORD *)&v46[2 * v45 + 2];
      if ( v47 )
      {
        v48 = 0;
LABEL_60:
        if ( v48 < *(_DWORD *)(v47 + 68) )
        {
          for ( i = 0; ; ++i )
          {
            if ( i >= 4 )
            {
              ++v48;
              goto LABEL_60;
            }
            v50 = *(_QWORD *)(v47 + 16 * (i + 8LL * v48) + 120) - *v44;
            if ( !v50 )
              v50 = *(_QWORD *)(v47 + 16 * (i + 8LL * v48) + 128) - v44[1];
            if ( !v50 )
              break;
          }
          v51 = v47 + ((unsigned __int64)v48 << 7);
          if ( !*(_QWORD *)(v51 + 80) && *(_DWORD *)(v51 + 88) == 2 )
          {
            v55 = SbpResolveBasedOnName(*(_QWORD *)(v51 + 72));
            v4 = v61;
            *(_QWORD *)(v51 + 80) = v55;
          }
          *(_QWORD *)(v5 + 8LL * v45 + 16) = v51 + 72;
        }
        v52 = *(_DWORD *)(v47 + 68);
        if ( v48 >= v52 )
        {
          for ( j = 0; j < v52; ++j )
          {
            v54 = v47 + ((unsigned __int64)j << 7);
            if ( *(_DWORD *)(v54 + 104) )
            {
              if ( !*(_QWORD *)(v54 + 80) && *(_DWORD *)(v54 + 88) == 2 )
              {
                v56 = SbpResolveBasedOnName(*(_QWORD *)(v54 + 72));
                v4 = v61;
                *(_QWORD *)(v54 + 80) = v56;
              }
              *(_QWORD *)(v5 + 8LL * v45 + 16) = v54 + 72;
              break;
            }
          }
          if ( j >= *(_DWORD *)(v47 + 68) )
            break;
        }
      }
      v46 = *(unsigned int **)(v4 + 24);
      ++v45;
    }
    while ( v45 < *v46 );
    v7 = v58;
  }
  v8 = -1LL;
LABEL_10:
  if ( v7 < *(_DWORD *)(v5 + 12) )
  {
    _mm_lfence();
    v14 = *(_QWORD *)(v4 + 24);
    v65 = 0LL;
    v57 = 0;
    v66 = 0LL;
    v15 = *(__int64 **)(v14 + 8LL * v7 + 8);
    v67 = 0LL;
    LOWORD(v58) = 0;
    v68 = 0LL;
    v69 = 0LL;
    v70 = 0LL;
    v71 = 0LL;
    v72 = 0LL;
    if ( *((_DWORD *)v15 + 11) )
    {
      RegHandle = 0LL;
      v16 = (char *)NtCurrentPeb()->pShimData;
      if ( v16 )
      {
        v17 = v16 + 2016;
        if ( v17 )
        {
          if ( *((_DWORD *)v17 + 12) && *((_DWORD *)v17 + 3) )
          {
            v22 = *((_QWORD *)v17 + 2);
            if ( v22 )
              goto LABEL_35;
            v23 = EtwNotificationRegister(&MS_Windows_AeSwitchBack_Provider, 3u, 0LL, 0LL, &RegHandle);
            if ( v23 )
            {
              RtlSetLastWin32Error(v23);
              goto LABEL_16;
            }
            v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v17 + 2, RegHandle, 0LL);
            if ( v22 )
            {
              EtwNotificationUnregister(RegHandle, 0LL);
            }
            else
            {
              v22 = RegHandle;
              ProcessParameters = NtCurrentPeb()->ProcessParameters;
              SbpTraceContextUpdate(
                RegHandle,
                (_DWORD)v17 + 48,
                0,
                ProcessParameters->ImagePathName.Length,
                (__int64)ProcessParameters->ImagePathName.Buffer);
            }
            if ( v22 )
            {
LABEL_35:
              v27 = *v15;
              *(_QWORD *)&v65 = (char *)v15 + 52;
              v28 = -1LL;
              *((_QWORD *)&v65 + 1) = 16LL;
              do
                ++v28;
              while ( *(_WORD *)(v27 + 2 * v28) );
              *(_QWORD *)&v67 = v27;
              v29 = v15[1];
              *(_QWORD *)&v66 = &v57;
              v30 = (unsigned __int16)(2 * (v28 + 1));
              v57 = v30;
              *((_QWORD *)&v67 + 1) = v30;
              v31 = -1LL;
              *((_QWORD *)&v66 + 1) = 2LL;
              do
                ++v31;
              while ( *(_WORD *)(v29 + 2 * v31) );
              *(_QWORD *)&v69 = v29;
              *((_QWORD *)&v68 + 1) = 2LL;
              v32 = (unsigned __int16)(2 * (v31 + 1));
              LOWORD(v58) = v32;
              *((_QWORD *)&v69 + 1) = v32;
              *(_QWORD *)&v68 = &v58;
              EtwpEventWriteFull(v22, (unsigned int)&AeSbCallEvent, 0, 0, 0, 0LL, 0LL, 5, (__int64)&v65);
            }
          }
        }
      }
    }
LABEL_16:
    v81 = 0LL;
    v82 = 0LL;
    v83 = 0LL;
    v18 = *(__int64 **)(v5 + 8LL * v7 + 16);
    if ( *((_DWORD *)v18 + 10) )
    {
      v63[0] = 0LL;
      v19 = (char *)NtCurrentPeb()->pShimData;
      if ( v19 )
      {
        v20 = v19 + 2016;
        if ( v20 )
        {
          if ( *((_DWORD *)v20 + 12) && *((_DWORD *)v20 + 3) )
          {
            v24 = *((_QWORD *)v20 + 2);
            if ( v24 )
              goto LABEL_44;
            v25 = EtwNotificationRegister(&MS_Windows_AeSwitchBack_Provider, 3u, 0LL, 0LL, v63);
            if ( v25 )
            {
              RtlSetLastWin32Error(v25);
              return v18[1];
            }
            v24 = _InterlockedCompareExchange64((volatile signed __int64 *)v20 + 2, v63[0], 0LL);
            if ( v24 )
            {
              EtwNotificationUnregister(v63[0], 0LL);
            }
            else
            {
              v24 = v63[0];
              v33 = NtCurrentPeb()->ProcessParameters;
              SbpTraceContextUpdate(
                v63[0],
                (_DWORD)v20 + 48,
                0,
                v33->ImagePathName.Length,
                (__int64)v33->ImagePathName.Buffer);
            }
            if ( v24 )
            {
LABEL_44:
              v34 = *v18;
              v73[0] = v18 + 14;
              v35 = -1LL;
              v73[1] = 16LL;
              do
                ++v35;
              while ( *(_WORD *)(v34 + 2 * v35) );
              v73[4] = v34;
              v36 = v18[3];
              v73[2] = &v59;
              v37 = (unsigned __int16)(2 * (v35 + 1));
              v59 = v37;
              v74 = v37;
              v73[3] = 2LL;
              v75 = 0;
              do
                ++v8;
              while ( *(_WORD *)(v36 + 2 * v8) );
              v78 = v36;
              v77 = 2LL;
              v60 = 2 * (v8 + 1);
              v79 = v60;
              v76 = &v60;
              v80 = 0;
              EtwpEventWriteFull(v24, (unsigned int)&AeSbImplEvent, 0, 0, 0, 0LL, 0LL, 5, (__int64)v73);
            }
          }
        }
      }
    }
    return v18[1];
  }
  return v6;
}
