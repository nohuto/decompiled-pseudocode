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

__int64 __fastcall AvrfMiniLoadDll(__int64 a1, __int64 a2, __int64 a3, void *a4, __int64 a5)
{
  __int64 *v5; // r13
  size_t v6; // rax
  int appended; // esi
  size_t v8; // rax
  size_t v9; // rax
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  void *v12; // rdi
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned __int64 v15; // rbx
  struct _TEB *v16; // rdi
  void *ArbitraryUserPointer; // rbx
  NTSTATUS v18; // eax
  __int64 v19; // rdi
  char *v20; // r10
  __int128 v21; // xmm0
  unsigned __int16 v22; // r9
  unsigned __int64 v23; // r8
  _WORD *i; // rdx
  __int16 v25; // ax
  _WORD *v26; // rdx
  __int16 v27; // cx
  char *v28; // rax
  __int64 v29; // rax
  NTSTATUS v30; // eax
  unsigned int *v32; // rax
  ULONG_PTR v33; // r12
  _QWORD *v34; // rbx
  __int64 v35; // r15
  PVOID v36; // rsi
  PVOID v37; // r12
  __int64 v38; // r15
  int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 (__fastcall *v42)(__int64, _QWORD, __int64); // rcx
  _DWORD *v43; // rdx
  _OWORD *v44; // rcx
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int64 v54; // rcx
  ULONG Size[4]; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING LinkTarget; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING Source; // [rsp+78h] [rbp-88h] BYREF
  HANDLE SectionHandle; // [rsp+88h] [rbp-78h] BYREF
  ULONG OldProtect; // [rsp+90h] [rbp-70h] BYREF
  PVOID BaseOfImage; // [rsp+98h] [rbp-68h]
  _DWORD *v62; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE FileHandle; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE DirectoryHandle; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE LinkHandle; // [rsp+B8h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  __int64 SectionInformation; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE *v68; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v69; // [rsp+100h] [rbp+0h] BYREF
  __int128 v70; // [rsp+108h] [rbp+8h] BYREF
  _WORD v71[2]; // [rsp+118h] [rbp+18h] BYREF
  int v72; // [rsp+11Ch] [rbp+1Ch]
  const wchar_t *v73; // [rsp+120h] [rbp+20h]
  ULONG_PTR ViewSize; // [rsp+128h] [rbp+28h] BYREF
  __int64 v75; // [rsp+130h] [rbp+30h]
  __int64 v76; // [rsp+138h] [rbp+38h]
  _UNICODE_STRING InputBuffer; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v78[2]; // [rsp+150h] [rbp+50h] BYREF
  __int64 (__fastcall *v79)(); // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v80)(); // [rsp+160h] [rbp+60h]
  __int64 (__fastcall *v81)(int); // [rsp+168h] [rbp+68h]
  __int64 v82; // [rsp+170h] [rbp+70h]
  PVOID (__cdecl *v83)(PRTL_DEBUG_INFORMATION, SIZE_T); // [rsp+178h] [rbp+78h]
  NTSTATUS (__cdecl *v84)(HANDLE, ULONG, PRTL_DEBUG_INFORMATION); // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v85)(__int64, wchar_t *, __int64, __int64, int, __int64); // [rsp+188h] [rbp+88h]
  __int128 v86; // [rsp+190h] [rbp+90h]
  _DWORD *v87; // [rsp+1A0h] [rbp+A0h]
  __int64 v88; // [rsp+1A8h] [rbp+A8h]
  PVOID v89; // [rsp+1B0h] [rbp+B0h]
  __int64 (__fastcall *v90)(unsigned __int16, unsigned __int16); // [rsp+1B8h] [rbp+B8h]
  __int64 (__fastcall *v91)(); // [rsp+1C0h] [rbp+C0h]
  NTSTATUS (__fastcall *v92)(void *, ULONG_PTR, ULONG_PTR, _QWORD *); // [rsp+1C8h] [rbp+C8h]
  __int64 (__fastcall *v93)(_QWORD); // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v94)(__int64, int); // [rsp+1D8h] [rbp+D8h]
  void (__fastcall *v95)(__int64, __int64); // [rsp+1E0h] [rbp+E0h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v97[56]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v98; // [rsp+238h] [rbp+138h]
  _QWORD *v99; // [rsp+258h] [rbp+158h]
  int v100; // [rsp+268h] [rbp+168h]
  PVOID v101; // [rsp+270h] [rbp+170h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+278h] [rbp+178h] BYREF
  ULONG NewProtect; // [rsp+290h] [rbp+190h]
  _BYTE v104[48]; // [rsp+2D0h] [rbp+1D0h] BYREF
  PVOID v105; // [rsp+300h] [rbp+200h]
  int v106; // [rsp+310h] [rbp+210h]
  int v107; // [rsp+338h] [rbp+238h]
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+410h] [rbp+310h] BYREF
  _DWORD v109[2]; // [rsp+440h] [rbp+340h] BYREF
  _BYTE Src[520]; // [rsp+448h] [rbp+348h] BYREF

  v76 = a3;
  v75 = a2;
  BaseOfImage = a4;
  DirectoryHandle = 0LL;
  LinkHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v5 = (__int64 *)(a5 + 312);
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(&FileInformation, 0, sizeof(FileInformation));
  SectionHandle = 0LL;
  v70 = 0LL;
  FileHandle = 0LL;
  LinkTarget = 0LL;
  BaseAddress = 0LL;
  IoStatusBlock = 0LL;
  ViewSize = 0LL;
  memset_thunk_772440563353939046(v104, 0, 0x138uLL);
  v68 = 0LL;
  v62 = 0LL;
  v69 = 0LL;
  memset_thunk_772440563353939046(v97, 0, 0xD0uLL);
  OldProtect = 0;
  v78[1] = 0;
  InputBuffer = 0LL;
  memset_thunk_772440563353939046(v78, 0, 0x94uLL);
  SectionInformation = 0LL;
  v73 = L"\\KnownDlls";
  Size[0] = 0;
  v72 = 0;
  v6 = 2 * wcslen(L"\\KnownDlls");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  if ( v6 >= 0xFFFE )
    LOWORD(v6) = -4;
  v71[0] = v6;
  v71[1] = v6 + 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v71;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  appended = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes);
  if ( appended >= 0 )
  {
    DWORD1(v70) = 0;
    *((_QWORD *)&v70 + 1) = L"KnownDllPath";
    v8 = 2 * wcslen(L"KnownDllPath");
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    if ( v8 >= 0xFFFE )
      LOWORD(v8) = -4;
    LOWORD(v70) = v8;
    WORD1(v70) = v8 + 2;
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v70;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( appended >= 0 )
    {
      v109[0] = 4128860;
      LinkTarget.MaximumLength = 512;
      v109[1] = 6029375;
      LinkTarget.Buffer = (wchar_t *)Src;
      appended = NtQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
      if ( appended >= 0 )
      {
        *(_DWORD *)(&Source.MaximumLength + 1) = 0;
        LinkTarget.Buffer = (wchar_t *)v109;
        LinkTarget.Length += 8;
        LinkTarget.MaximumLength += 8;
        Source.Buffer = (wchar_t *)L"\\";
        v9 = 2 * wcslen(L"\\");
        if ( v9 >= 0xFFFE )
          LOWORD(v9) = -4;
        Source.Length = v9;
        Source.MaximumLength = v9 + 2;
        appended = RtlAppendUnicodeStringToString(&LinkTarget, &Source);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&LinkTarget, &VerifierDllString);
          if ( appended >= 0 )
          {
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
            {
              InputBuffer = LinkTarget;
              ZwSystemDebugControl(SysDbgKdPullRemoteFile, &InputBuffer, 0x10u, 0LL, 0, 0LL);
            }
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &LinkTarget;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v10 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
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
            appended = NtCreateSection(&SectionHandle, 0xDu, 0LL, 0LL, 0x10u, 0x1000000u, FileHandle);
            if ( appended >= 0 )
            {
              *(_WORD *)(a5 + 394) = 520;
              *(_QWORD *)(a5 + 400) = a5 + 408;
              LinkTarget.Buffer = (wchar_t *)Src;
              v12 = *(void **)(a5 + 400);
              v13 = (unsigned __int16)(LinkTarget.Length - 8);
              LinkTarget.MaximumLength -= 8;
              v14 = *(unsigned __int16 *)(a5 + 394);
              LinkTarget.Length = v13;
              if ( (unsigned __int16)v13 <= (unsigned __int16)v14 )
                v14 = v13;
              v15 = v14;
              *(_WORD *)(a5 + 392) = v14;
              memmove(v12, Src, v14);
              if ( (unsigned __int64)*(unsigned __int16 *)(a5 + 392) + 2 <= *(unsigned __int16 *)(a5 + 394) )
                *((_WORD *)v12 + (v15 >> 1)) = 0;
              v16 = NtCurrentTeb();
              ArbitraryUserPointer = v16->NtTib.ArbitraryUserPointer;
              v16->NtTib.ArbitraryUserPointer = LinkTarget.Buffer;
              v18 = ZwMapViewOfSection(
                      SectionHandle,
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      &BaseAddress,
                      0LL,
                      0LL,
                      0LL,
                      &ViewSize,
                      ViewShare,
                      0x800000u,
                      2u);
              v16->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
              appended = v18;
              if ( v18 >= 0 )
              {
                *(_QWORD *)&Source.Length = 0LL;
                RtlImageNtHeaderEx(1u, BaseAddress, 0LL, (PIMAGE_NT_HEADERS *)&Source);
                v19 = *(_QWORD *)&Source.Length;
                if ( !*(_QWORD *)&Source.Length )
                  goto LABEL_61;
                v20 = (char *)BaseAddress;
                *(_QWORD *)(a5 + 48) = BaseAddress;
                *(_DWORD *)(a5 + 64) = *(_DWORD *)(v19 + 80);
                *(_DWORD *)(a5 + 128) = *(_DWORD *)(v19 + 8);
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
                if ( *(_DWORD *)(v19 + 40) )
                  v28 = &v20[*(unsigned int *)(v19 + 40)];
                else
                  v28 = 0LL;
                *(_QWORD *)(a5 + 56) = v28;
                *(_QWORD *)(a5 + 248) = *(_QWORD *)(v19 + 48);
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
                v30 = NtQuerySection(SectionHandle, SectionRelocationInformation, &SectionInformation, 8uLL, 0LL);
                if ( v30 < 0 )
                {
                  appended = v30;
                  goto LABEL_33;
                }
                if ( SectionInformation )
                  *(_QWORD *)(a5 + 248) -= SectionInformation;
                if ( (*(_WORD *)(v19 + 22) & 0x2000) != 0 )
                  *(_DWORD *)(a5 + 104) |= 4u;
                if ( (*(_BYTE *)(a5 + 104) & 4) == 0 )
                  *(_QWORD *)(a5 + 56) = 0LL;
                if ( RtlImageDirectoryEntryToData(*(PVOID *)(a5 + 48), 1u, 9u, Size) && Size[0] )
                {
                  DbgPrintEx(0x5Du, 0, "AVRF: Verifier .dlls must not have thread locals\n");
                  __debugbreak();
                }
                v32 = (unsigned int *)RtlImageDirectoryEntryToData(*(PVOID *)(a5 + 48), 1u, 1u, Size);
                v33 = (ULONG_PTR)v32;
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
                  v36 = BaseOfImage;
                  *(_QWORD *)&Source.Length = 0LL;
                  *(_QWORD *)(a5 + 176) = v97;
                  v98 = a5;
                  v68 = v104;
                  RtlImageNtHeaderEx(1u, v36, 0LL, (PIMAGE_NT_HEADERS *)&Source);
                  v107 = 33554436;
                  v105 = v36;
                  v106 = *(_DWORD *)(*(_QWORD *)&Source.Length + 80LL);
                  v99 = &v68;
                  RegionSize[2] = v33;
                  v100 = 1;
                  appended = LdrpPrepareImportAddressTableForSnap((__int64)v97);
                  if ( appended >= 0 )
                  {
                    if ( v101 )
                    {
                      v37 = BaseOfImage;
                      v38 = v35 - (_QWORD)v34;
                      while ( 1 )
                      {
                        appended = LdrpGetProcedureAddress(
                                     (unsigned __int64)v37,
                                     (const char *)(*(_QWORD *)(a5 + 48) + *(unsigned int *)v34 + 2LL),
                                     0,
                                     (char **)((char *)v34 + v38));
                        if ( appended < 0 )
                          break;
                        if ( !*++v34 )
                        {
                          ZwProtectVirtualMemory(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            &v101,
                            RegionSize,
                            NewProtect,
                            &OldProtect);
                          if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
                          {
                            appended = LdrpUnsuppressAddressTakenIat(*(char **)(v98 + 48), 0, 0);
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
                  v37 = BaseOfImage;
LABEL_69:
                  v39 = *(_DWORD *)(a5 + 104);
                  if ( (v39 & 0x2004) == 4 )
                  {
                    v40 = LdrpGenRandom();
                    LdrInitSecurityCookie(
                      *(unsigned __int64 **)(a5 + 48),
                      *(_DWORD *)(a5 + 64),
                      0LL,
                      v40 ^ LdrSystemDllInitBlock.RngData,
                      &v69);
                    appended = LdrpCfgProcessLoadConfig(a5, v19, v69);
                    if ( appended < 0 )
                      goto LABEL_33;
                    v39 = *(_DWORD *)(a5 + 104) | 0x2000;
                    *(_DWORD *)(a5 + 104) = v39;
                  }
                  if ( (v39 & 0x200) == 0 )
                  {
                    RtlInsertInvertedFunctionTable(BaseAddress, *(_DWORD *)(a5 + 64));
                    *(_DWORD *)(a5 + 104) |= 0x200u;
                  }
                  v41 = *(_QWORD *)(a5 + 48);
                  v42 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a5 + 56);
                  v79 = RtlpGetStackTraceAddress;
                  v78[0] = 152;
                  v90 = RtlpGetStackTraceAddressEx;
                  v89 = v37;
                  v80 = AVrfInternalHeapFreeNotification;
                  v81 = RtlLogStackTrace;
                  v91 = RtlReleaseStackTrace;
                  v92 = RtlStdInitializeStackDatabase;
                  v93 = RtlStdDeleteStackDatabase;
                  v94 = RtlStdLogStackTrace;
                  v95 = RtlStdReleaseStackTrace;
                  v82 = v75;
                  v88 = v76;
                  v83 = RtlCommitDebugInfo;
                  v84 = RtlSetProcessDebugInformation;
                  v85 = RtlQueryImageFileExecutionOptions;
                  v62 = v78;
                  v86 = 0LL;
                  v87 = 0LL;
                  if ( (unsigned __int8)LdrpCallInitRoutine(v42, v41, 5u, (__int64)&v62)
                    && v62 == v78
                    && (v43 = v87) != 0LL
                    && *v87 == 80
                    && (v44 = (_OWORD *)*((_QWORD *)&v86 + 1)) != 0LL
                    && **((_DWORD **)&v86 + 1) == 176 )
                  {
                    v45 = *(_OWORD *)(*((_QWORD *)&v86 + 1) + 16LL);
                    *(_OWORD *)&dword_1801CE588 = **((_OWORD **)&v86 + 1);
                    v46 = *(_OWORD *)(*((_QWORD *)&v86 + 1) + 32LL);
                    *((_OWORD *)&dword_1801CE588 + 1) = v45;
                    v47 = v44[3];
                    *((_OWORD *)&dword_1801CE588 + 2) = v46;
                    v48 = v44[4];
                    *((_OWORD *)&dword_1801CE588 + 3) = v47;
                    v49 = v44[5];
                    *((_OWORD *)&dword_1801CE588 + 4) = v48;
                    v50 = v44[6];
                    *((_OWORD *)&dword_1801CE588 + 5) = v49;
                    v51 = v44[8];
                    *((_OWORD *)&dword_1801CE588 + 6) = v50;
                    *((_OWORD *)&dword_1801CE588 + 7) = v44[7];
                    v52 = v44[9];
                    *((_OWORD *)&dword_1801CE588 + 8) = v51;
                    v53 = v44[10];
                    *((_OWORD *)&dword_1801CE588 + 9) = v52;
                    *((_OWORD *)&dword_1801CE588 + 10) = v53;
                    RtlpDebugPageHeapTable = (_UNKNOWN *)v86;
                    v43[10] = AVrfpVerifierFlags;
                    v43[11] = AVrfpDebug;
                    v54 = *(_QWORD *)(a5 + 48);
                    BaseAddress = 0LL;
                    LdrpLogDllState(v54, (unsigned __int16 *)(a5 + 72), 5294);
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
  if ( BaseAddress )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    *(_QWORD *)(a5 + 48) = 0LL;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( DirectoryHandle )
    NtClose(DirectoryHandle);
  if ( LinkHandle )
    NtClose(LinkHandle);
  return (unsigned int)appended;
}
