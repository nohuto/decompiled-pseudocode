/*
 * XREFs of AvrfMiniLoadDll @ 0x18010B9A4
 * Callers:
 *     AVrfInitializeVerifier @ 0x18011B9E0 (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpGenRandom @ 0x180002BC0 (LdrpGenRandom.c)
 *     LdrpGetProcedureAddress @ 0x1800149E0 (LdrpGetProcedureAddress.c)
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     RtlInsertInvertedFunctionTable @ 0x180020C04 (RtlInsertInvertedFunctionTable.c)
 *     LdrpCfgProcessLoadConfig @ 0x1800212A0 (LdrpCfgProcessLoadConfig.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180022070 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     LdrInitSecurityCookie @ 0x1800223C0 (LdrInitSecurityCookie.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180022E90 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x18002422C (LdrpUnsuppressAddressTakenIat.c)
 *     RtlAppendUnicodeStringToString @ 0x1800709D0 (RtlAppendUnicodeStringToString.c)
 *     LdrpLogDllState @ 0x180071900 (LdrpLogDllState.c)
 *     LdrpCallInitRoutine @ 0x180074730 (LdrpCallInitRoutine.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x180163880 (NtOpenFile.c)
 *     ZwQueryAttributesFile @ 0x1801639C0 (ZwQueryAttributesFile.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 *     NtQuerySection @ 0x180163C40 (NtQuerySection.c)
 *     ZwOpenDirectoryObject @ 0x180163D20 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x180165910 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x180165F70 (NtQuerySymbolicLinkObject.c)
 *     ZwSystemDebugControl @ 0x180166C10 (ZwSystemDebugControl.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall AvrfMiniLoadDll(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 *v5; // r13
  size_t v6; // rax
  int appended; // esi
  size_t v8; // rax
  size_t v9; // rax
  int v10; // eax
  NTSTATUS v11; // eax
  void *v12; // rdi
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned __int64 v15; // rbx
  struct _TEB *v16; // rdi
  void *ArbitraryUserPointer; // rbx
  int v18; // eax
  _DWORD *v19; // rdi
  unsigned __int64 v20; // r10
  __int128 v21; // xmm0
  unsigned __int16 v22; // r9
  unsigned __int64 v23; // r8
  _WORD *i; // rdx
  __int16 v25; // ax
  _WORD *v26; // rdx
  __int16 v27; // cx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  unsigned int *v32; // rax
  unsigned int *v33; // r12
  _QWORD *v34; // rbx
  __int64 v35; // r15
  unsigned __int64 v36; // rsi
  __int64 v37; // rdx
  unsigned __int64 v38; // r12
  __int64 v39; // r15
  int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 (__fastcall *v43)(__int64, _QWORD, __int64); // rcx
  _DWORD *v44; // rdx
  _OWORD *v45; // rcx
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int64 v55; // rcx
  _DWORD v56[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v57; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v58; // [rsp+70h] [rbp-90h] BYREF
  const void *v59[2]; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  int v61; // [rsp+90h] [rbp-70h]
  unsigned __int64 v62; // [rsp+98h] [rbp-68h]
  _DWORD *v63; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE FileHandle; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE v65; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE v66; // [rsp+B8h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v68; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE *v69; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v70; // [rsp+100h] [rbp+0h] BYREF
  __int128 v71; // [rsp+108h] [rbp+8h] BYREF
  _WORD v72[2]; // [rsp+118h] [rbp+18h] BYREF
  int v73; // [rsp+11Ch] [rbp+1Ch]
  const wchar_t *v74; // [rsp+120h] [rbp+20h]
  __int64 v75; // [rsp+128h] [rbp+28h] BYREF
  __int64 v76; // [rsp+130h] [rbp+30h]
  __int64 v77; // [rsp+138h] [rbp+38h]
  __int128 v78; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v79[2]; // [rsp+150h] [rbp+50h] BYREF
  __int64 (__fastcall *v80)(); // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v81)(); // [rsp+160h] [rbp+60h]
  __int64 (__fastcall *v82)(int); // [rsp+168h] [rbp+68h]
  __int64 v83; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v84)(); // [rsp+178h] [rbp+78h]
  __int64 (__fastcall *v85)(); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v86)(__int64, __int64, unsigned int, __int64, int, __int64); // [rsp+188h] [rbp+88h]
  __int128 v87; // [rsp+190h] [rbp+90h]
  _DWORD *v88; // [rsp+1A0h] [rbp+A0h]
  __int64 v89; // [rsp+1A8h] [rbp+A8h]
  unsigned __int64 v90; // [rsp+1B0h] [rbp+B0h]
  __int64 (__fastcall *v91)(unsigned __int16, unsigned __int16); // [rsp+1B8h] [rbp+B8h]
  __int64 (__fastcall *v92)(); // [rsp+1C0h] [rbp+C0h]
  __int64 (__fastcall *v93)(__int64, unsigned __int64, unsigned __int64, _QWORD *); // [rsp+1C8h] [rbp+C8h]
  __int64 (__fastcall *v94)(_QWORD); // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v95)(__int64, int); // [rsp+1D8h] [rbp+D8h]
  __int64 (__fastcall *v96)(__int64, __int64); // [rsp+1E0h] [rbp+E0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v98[56]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v99; // [rsp+238h] [rbp+138h]
  _QWORD *v100; // [rsp+258h] [rbp+158h]
  int v101; // [rsp+268h] [rbp+168h]
  __int64 v102; // [rsp+270h] [rbp+170h] BYREF
  char v103[16]; // [rsp+278h] [rbp+178h] BYREF
  unsigned int *v104; // [rsp+288h] [rbp+188h]
  unsigned int v105; // [rsp+290h] [rbp+190h]
  _BYTE v106[48]; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned __int64 v107; // [rsp+300h] [rbp+200h]
  int v108; // [rsp+310h] [rbp+210h]
  int v109; // [rsp+338h] [rbp+238h]
  _OWORD v110[2]; // [rsp+410h] [rbp+310h] BYREF
  __int64 v111; // [rsp+430h] [rbp+330h]
  _DWORD v112[2]; // [rsp+440h] [rbp+340h] BYREF
  _BYTE Src[520]; // [rsp+448h] [rbp+348h] BYREF

  v77 = a3;
  v76 = a2;
  v62 = a4;
  v65 = 0LL;
  v66 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v5 = (__int64 *)(a5 + 312);
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(v110, 0, sizeof(v110));
  v111 = 0LL;
  Handle = 0LL;
  v71 = 0LL;
  FileHandle = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  IoStatusBlock = 0LL;
  v75 = 0LL;
  memset_thunk_772440563353939046(v106, 0, 0x138uLL);
  v69 = 0LL;
  v63 = 0LL;
  v70 = 0LL;
  memset_thunk_772440563353939046(v98, 0, 0xD0uLL);
  v61 = 0;
  v79[1] = 0;
  v78 = 0LL;
  memset_thunk_772440563353939046(v79, 0, 0x94uLL);
  v68 = 0LL;
  v74 = L"\\KnownDlls";
  v56[0] = 0;
  v73 = 0;
  v6 = 2 * wcslen(L"\\KnownDlls");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  if ( v6 >= 0xFFFE )
    LOWORD(v6) = -4;
  v72[0] = v6;
  v72[1] = v6 + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v72;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  appended = ZwOpenDirectoryObject(&v65, 3LL, &ObjectAttributes);
  if ( appended >= 0 )
  {
    DWORD1(v71) = 0;
    *((_QWORD *)&v71 + 1) = L"KnownDllPath";
    v8 = 2 * wcslen(L"KnownDllPath");
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    if ( v8 >= 0xFFFE )
      LOWORD(v8) = -4;
    LOWORD(v71) = v8;
    WORD1(v71) = v8 + 2;
    ObjectAttributes.RootDirectory = v65;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v71;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenSymbolicLinkObject(&v66, 1LL, &ObjectAttributes);
    if ( appended >= 0 )
    {
      v112[0] = 4128860;
      WORD1(v57) = 512;
      v112[1] = 6029375;
      *((_QWORD *)&v57 + 1) = Src;
      appended = NtQuerySymbolicLinkObject(v66, &v57, 0LL);
      if ( appended >= 0 )
      {
        HIDWORD(v59[0]) = 0;
        *((_QWORD *)&v57 + 1) = v112;
        LOWORD(v57) = v57 + 8;
        WORD1(v57) += 8;
        v59[1] = L"\\";
        v9 = 2 * wcslen(L"\\");
        if ( v9 >= 0xFFFE )
          LOWORD(v9) = -4;
        LOWORD(v59[0]) = v9;
        WORD1(v59[0]) = v9 + 2;
        appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v57, v59);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v57, &VerifierDllString);
          if ( appended >= 0 )
          {
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
            {
              v78 = v57;
              ZwSystemDebugControl(38LL, &v78, 16LL);
            }
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v57;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v10 = ZwQueryAttributesFile(&ObjectAttributes, v110);
            if ( v10 < 0 && v10 != -1073741790 && v10 != -1073741757 )
            {
LABEL_63:
              appended = -1073741515;
              goto LABEL_33;
            }
            v11 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            appended = v11;
            if ( v11 < 0 )
            {
              if ( v11 != -1073741772 )
                goto LABEL_33;
              goto LABEL_63;
            }
            appended = NtCreateSection(&Handle, 13LL, 0LL);
            if ( appended >= 0 )
            {
              *(_WORD *)(a5 + 394) = 520;
              *(_QWORD *)(a5 + 400) = a5 + 408;
              *((_QWORD *)&v57 + 1) = Src;
              v12 = *(void **)(a5 + 400);
              v13 = (unsigned __int16)(v57 - 8);
              WORD1(v57) -= 8;
              v14 = *(unsigned __int16 *)(a5 + 394);
              LOWORD(v57) = v13;
              if ( (unsigned __int16)v13 <= (unsigned __int16)v14 )
                v14 = v13;
              v15 = v14;
              *(_WORD *)(a5 + 392) = v14;
              memmove(v12, Src, v14);
              if ( (unsigned __int64)*(unsigned __int16 *)(a5 + 392) + 2 <= *(unsigned __int16 *)(a5 + 394) )
                *((_WORD *)v12 + (v15 >> 1)) = 0;
              v16 = NtCurrentTeb();
              ArbitraryUserPointer = v16->NtTib.ArbitraryUserPointer;
              v16->NtTib.ArbitraryUserPointer = (void *)*((_QWORD *)&v57 + 1);
              v18 = ZwMapViewOfSection(Handle, -1LL, &v58, 0LL, 0LL, 0LL, &v75, 1, 0x800000, 2);
              v16->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
              appended = v18;
              if ( v18 >= 0 )
              {
                v59[0] = 0LL;
                RtlImageNtHeaderEx(1, v58, 0LL, v59);
                v19 = v59[0];
                if ( !v59[0] )
                  goto LABEL_61;
                v20 = v58;
                *(_QWORD *)(a5 + 48) = v58;
                *(_DWORD *)(a5 + 64) = v19[20];
                *(_DWORD *)(a5 + 128) = v19[2];
                *(_QWORD *)(a5 + 144) = 0LL;
                v21 = *(_OWORD *)(a5 + 392);
                *(_DWORD *)(a5 + 104) = 0;
                *(_OWORD *)(a5 + 72) = v21;
                v22 = *(_WORD *)(a5 + 72);
                v23 = *(_QWORD *)(a5 + 80);
                for ( i = (_WORD *)(v23 + 2 * (((unsigned __int64)v22 >> 1) - 1)); (unsigned __int64)i > v23; --i )
                {
                  if ( *i == 92 )
                    goto LABEL_28;
                }
                if ( *i == 92 )
                {
LABEL_28:
                  v25 = *(_WORD *)(a5 + 74);
                  v26 = i + 1;
                  *(_QWORD *)(a5 + 96) = v26;
                  v27 = 2 * ((__int64)((__int64)v26 - v23) >> 1);
                  *(_WORD *)(a5 + 88) = v22 - v27;
                  *(_WORD *)(a5 + 90) = v25 - v27;
                  goto LABEL_29;
                }
                *(_OWORD *)(a5 + 88) = v21;
LABEL_29:
                if ( v19[10] )
                  v28 = v20 + (unsigned int)v19[10];
                else
                  v28 = 0LL;
                *(_QWORD *)(a5 + 56) = v28;
                *(_QWORD *)(a5 + 248) = *((_QWORD *)v19 + 6);
                *(_QWORD *)(a5 + 152) = v5;
                memset_thunk_772440563353939046(v5, 0, 0x50uLL);
                *(_QWORD *)(a5 + 160) = v5;
                *(_QWORD *)(a5 + 168) = v5;
                *v5 = a5 + 160;
                *(_QWORD *)(a5 + 320) = a5 + 160;
                *(_DWORD *)(a5 + 276) = 2;
                v29 = *v5;
                *(_DWORD *)(a5 + 336) = -1;
                *(_WORD *)(v29 - 52) = -1;
                v30 = NtQuerySection(Handle, 2LL, &v68);
                if ( v30 < 0 )
                {
                  appended = v30;
                  goto LABEL_33;
                }
                if ( v68 )
                  *(_QWORD *)(a5 + 248) -= v68;
                if ( (*((_WORD *)v19 + 11) & 0x2000) != 0 )
                  *(_DWORD *)(a5 + 104) |= 4u;
                if ( (*(_BYTE *)(a5 + 104) & 4) == 0 )
                  *(_QWORD *)(a5 + 56) = 0LL;
                if ( RtlImageDirectoryEntryToData(*(_QWORD *)(a5 + 48), 1, 9u, v56) && v56[0] )
                {
                  DbgPrintEx(93, 0, "AVRF: Verifier .dlls must not have thread locals\n");
                  __debugbreak();
                }
                v32 = (unsigned int *)RtlImageDirectoryEntryToData(*(_QWORD *)(a5 + 48), 1, 1u, v56);
                v33 = v32;
                if ( !v32 )
                {
LABEL_61:
                  appended = -1073741701;
                  goto LABEL_33;
                }
                v34 = (_QWORD *)(*(_QWORD *)(a5 + 48) + *v32);
                v35 = *(_QWORD *)(a5 + 48) + v32[4];
                if ( *v34 )
                {
                  v36 = v62;
                  v59[0] = 0LL;
                  *(_QWORD *)(a5 + 176) = v98;
                  v99 = a5;
                  v69 = v106;
                  RtlImageNtHeaderEx(1, v36, 0LL, v59);
                  v109 = 33554436;
                  v107 = v36;
                  v108 = *((_DWORD *)v59[0] + 20);
                  v100 = &v69;
                  v104 = v33;
                  v101 = 1;
                  appended = LdrpPrepareImportAddressTableForSnap((__int64)v98, v37);
                  if ( appended >= 0 )
                  {
                    if ( v102 )
                    {
                      v38 = v62;
                      v39 = v35 - (_QWORD)v34;
                      while ( 1 )
                      {
                        appended = LdrpGetProcedureAddress(
                                     v38,
                                     (unsigned __int8 *)(*(_QWORD *)(a5 + 48) + *(unsigned int *)v34 + 2LL),
                                     0,
                                     (_QWORD *)((char *)v34 + v39));
                        if ( appended < 0 )
                          break;
                        if ( !*++v34 )
                        {
                          ZwProtectVirtualMemory(-1LL, &v102, v103, v105);
                          if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
                          {
                            appended = LdrpUnsuppressAddressTakenIat(*(_QWORD *)(v99 + 48), 0, 0);
                            if ( appended < 0 )
                              break;
                          }
                          goto LABEL_69;
                        }
                      }
                    }
                    else
                    {
                      appended = -1073741701;
                    }
                  }
                }
                else
                {
                  v38 = v62;
LABEL_69:
                  v40 = *(_DWORD *)(a5 + 104);
                  if ( (v40 & 0x2004) == 4 )
                  {
                    v41 = LdrpGenRandom();
                    LdrInitSecurityCookie(
                      *(_QWORD *)(a5 + 48),
                      *(_DWORD *)(a5 + 64),
                      0LL,
                      v41 ^ (unsigned int)dword_1801EC4D8,
                      &v70);
                    appended = LdrpCfgProcessLoadConfig(a5, (__int64)v19, v70);
                    if ( appended < 0 )
                      goto LABEL_33;
                    v40 = *(_DWORD *)(a5 + 104) | 0x2000;
                    *(_DWORD *)(a5 + 104) = v40;
                  }
                  if ( (v40 & 0x200) == 0 )
                  {
                    RtlInsertInvertedFunctionTable(v58, *(unsigned int *)(a5 + 64));
                    *(_DWORD *)(a5 + 104) |= 0x200u;
                  }
                  v42 = *(_QWORD *)(a5 + 48);
                  v43 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a5 + 56);
                  v80 = RtlpGetStackTraceAddress;
                  v79[0] = 152;
                  v91 = RtlpGetStackTraceAddressEx;
                  v90 = v38;
                  v81 = AVrfInternalHeapFreeNotification;
                  v82 = RtlLogStackTrace;
                  v92 = RtlReleaseStackTrace;
                  v93 = RtlStdInitializeStackDatabase;
                  v94 = RtlStdDeleteStackDatabase;
                  v95 = RtlStdLogStackTrace;
                  v96 = RtlStdReleaseStackTrace;
                  v83 = v76;
                  v89 = v77;
                  v84 = RtlCommitDebugInfo;
                  v85 = RtlSetProcessDebugInformation;
                  v86 = RtlQueryImageFileExecutionOptions;
                  v63 = v79;
                  v87 = 0LL;
                  v88 = 0LL;
                  if ( (unsigned __int8)LdrpCallInitRoutine(v43, v42, 5u, (__int64)&v63)
                    && v63 == v79
                    && (v44 = v88) != 0LL
                    && *v88 == 80
                    && (v45 = (_OWORD *)*((_QWORD *)&v87 + 1)) != 0LL
                    && **((_DWORD **)&v87 + 1) == 176 )
                  {
                    v46 = *(_OWORD *)(*((_QWORD *)&v87 + 1) + 16LL);
                    *(_OWORD *)&dword_1801CE588 = **((_OWORD **)&v87 + 1);
                    v47 = *(_OWORD *)(*((_QWORD *)&v87 + 1) + 32LL);
                    *((_OWORD *)&dword_1801CE588 + 1) = v46;
                    v48 = v45[3];
                    *((_OWORD *)&dword_1801CE588 + 2) = v47;
                    v49 = v45[4];
                    *((_OWORD *)&dword_1801CE588 + 3) = v48;
                    v50 = v45[5];
                    *((_OWORD *)&dword_1801CE588 + 4) = v49;
                    v51 = v45[6];
                    *((_OWORD *)&dword_1801CE588 + 5) = v50;
                    v52 = v45[8];
                    *((_OWORD *)&dword_1801CE588 + 6) = v51;
                    *((_OWORD *)&dword_1801CE588 + 7) = v45[7];
                    v53 = v45[9];
                    *((_OWORD *)&dword_1801CE588 + 8) = v52;
                    v54 = v45[10];
                    *((_OWORD *)&dword_1801CE588 + 9) = v53;
                    *((_OWORD *)&dword_1801CE588 + 10) = v54;
                    RtlpDebugPageHeapTable = (_UNKNOWN *)v87;
                    v44[10] = AVrfpVerifierFlags;
                    v44[11] = AVrfpDebug;
                    v55 = *(_QWORD *)(a5 + 48);
                    v58 = 0LL;
                    LdrpLogDllState(v55, (unsigned __int16 *)(a5 + 72), 5294);
                    *(_DWORD *)(a5 + 368) = 9;
                    *(_QWORD *)(a5 + 176) = 0LL;
                  }
                  else
                  {
                    appended = -1073741502;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_33:
  if ( v58 )
  {
    NtUnmapViewOfSection(-1LL);
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Handle )
    NtClose(Handle);
  if ( v65 )
    NtClose(v65);
  if ( v66 )
    NtClose(v66);
  return (unsigned int)appended;
}
