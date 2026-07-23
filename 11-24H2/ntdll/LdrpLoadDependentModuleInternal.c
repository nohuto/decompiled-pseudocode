/*
 * XREFs of LdrpLoadDependentModuleInternal @ 0x180039CE0
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x1800392D0 (LdrpMapAndSnapDependency.c)
 *     LdrpSnapModule @ 0x18006CB10 (LdrpSnapModule.c)
 *     LdrpLoadDependentModuleW @ 0x180111730 (LdrpLoadDependentModuleW.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     LdrpLogEtwEvent @ 0x180030140 (LdrpLogEtwEvent.c)
 *     LdrpDestroyNode @ 0x180031528 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x1800331C8 (LdrpUnmapModule.c)
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003BF70 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     LdrpAllocateModuleEntry @ 0x18003D080 (LdrpAllocateModuleEntry.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllByName @ 0x180044B80 (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x180046500 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     LdrpProcessWork @ 0x18004E860 (LdrpProcessWork.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     ApiSetResolveToHost @ 0x180070C20 (ApiSetResolveToHost.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180070DA0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlGetFullPathName_Ustr @ 0x180071600 (RtlGetFullPathName_Ustr.c)
 *     RtlReleaseActivationContext @ 0x1800740B0 (RtlReleaseActivationContext.c)
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     LdrpLogDllState @ 0x18008D5E0 (LdrpLogDllState.c)
 *     LdrpLoadKnownDll @ 0x180091340 (LdrpLoadKnownDll.c)
 *     LdrpGetFullPath @ 0x1800928D0 (LdrpGetFullPath.c)
 *     LdrpFreeUnicodeString @ 0x180092B3C (LdrpFreeUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800944C0 (RtlDetermineDosPathNameType_Ustr.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x1800C72D0 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpQueueWork @ 0x1800D20D4 (LdrpQueueWork.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D3A60 (LdrpFindOrPrepareEnclaveModule.c)
 *     LdrpFreeReplacedModule @ 0x1800D4518 (LdrpFreeReplacedModule.c)
 *     LdrpReleaseTlsEntry @ 0x1800D73C8 (LdrpReleaseTlsEntry.c)
 *     NtdllpReallocateStringRoutine @ 0x18011CE08 (NtdllpReallocateStringRoutine.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadDependentModuleInternal(
        PUNICODE_STRING OriginalName,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        _QWORD *a6)
{
  int v6; // r12d
  __int64 v8; // r14
  PUNICODE_STRING v9; // r15
  __int64 *v10; // rbx
  _QWORD *v11; // r13
  int v12; // edi
  __int64 v13; // rdx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  unsigned __int64 ActiveFrame; // rcx
  unsigned int v16; // esi
  int appended; // ebx
  char v18; // r13
  _UNICODE_STRING *v19; // r14
  char v20; // r12
  void *ApiSetMap; // rsi
  int *SharedData; // rax
  __int64 v23; // rcx
  int *v24; // rax
  __int64 v25; // rcx
  int *v26; // rax
  __int64 v28; // rsi
  size_t v29; // rax
  unsigned __int64 v30; // rbx
  __int16 v31; // ax
  unsigned int v32; // ecx
  int v33; // r14d
  unsigned int v34; // ecx
  int v35; // ebx
  char *v36; // rdx
  size_t v37; // rsi
  unsigned int v38; // ecx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  int v40; // eax
  unsigned __int16 *p_Length; // r12
  wchar_t *Buffer; // rdx
  wchar_t *v43; // rax
  int Length; // eax
  unsigned int v45; // edx
  unsigned __int64 v46; // rdx
  _WORD *v47; // rax
  __int16 v48; // cx
  _WORD *v49; // rcx
  PVOID Heap; // rax
  __int64 v51; // r13
  unsigned int v52; // r15d
  unsigned __int16 *v53; // r14
  unsigned __int16 i; // dx
  __int16 v55; // r8
  __int64 v56; // rcx
  int v57; // r9d
  char *v58; // r11
  unsigned int v59; // r10d
  unsigned int v60; // eax
  unsigned __int64 v61; // r8
  unsigned int v62; // r15d
  _QWORD **v63; // r12
  char v64; // cl
  _QWORD *j; // r14
  _QWORD *v66; // rsi
  _BYTE *v67; // rax
  unsigned __int16 *v68; // r10
  unsigned __int16 *v69; // rbx
  unsigned __int64 v70; // r8
  unsigned __int64 v71; // r9
  __int64 v72; // rax
  __int64 *v73; // rdx
  int v74; // eax
  int v75; // eax
  int *v76; // rax
  __int64 v77; // rcx
  PVOID *v78; // r13
  __int64 v79; // rdx
  _QWORD *v80; // rcx
  _QWORD *SchedulerSharedDataSlot; // r9
  unsigned int k; // edx
  _QWORD *v84; // rax
  __int64 v85; // rsi
  __int64 v86; // rcx
  _QWORD *v87; // r8
  _DWORD *v88; // rcx
  __int64 v89; // rbx
  __int64 v90; // r14
  _QWORD *v91; // rdx
  _QWORD *v92; // rax
  _QWORD *v93; // rdx
  _QWORD *v94; // rdx
  _QWORD *v95; // r8
  int v96; // edx
  unsigned __int16 *v97; // r10
  unsigned __int16 *v98; // r11
  unsigned __int64 v99; // r8
  unsigned __int64 v100; // r9
  _DWORD *v101; // rax
  _DWORD *v102; // rbx
  __int64 ModuleEntry; // rax
  int v104; // r14d
  int *v105; // rax
  __int64 v106; // rax
  _QWORD *v107; // rcx
  int *v108; // rax
  __int64 v109; // rcx
  char *v110; // rcx
  int v111; // edx
  __int64 v112; // rdx
  int v113; // ecx
  __int64 v114; // rax
  NTSTATUS v115; // r14d
  unsigned int FullPathName_Ustr; // eax
  __int16 v117; // si
  const char *v118; // rax
  char *v119; // rcx
  _DWORD *v120; // rax
  __int64 v121; // rdx
  _QWORD *v122; // rcx
  unsigned int v123; // r14d
  unsigned int v124; // eax
  PVOID v125; // r15
  size_t v126; // rax
  __int16 v127; // cx
  unsigned int v128; // r13d
  unsigned int v129; // eax
  PVOID Atom; // rcx
  unsigned int v131; // esi
  unsigned int v132; // eax
  PVOID v133; // r14
  unsigned int v134; // r15d
  unsigned int v135; // eax
  PVOID v136; // r13
  _WORD *v137; // r15
  __int64 v138; // rbx
  char *v139; // rax
  _QWORD *v140; // rbx
  _QWORD *v141; // rdi
  _ACTIVATION_CONTEXT *v142; // rcx
  int *v143; // rax
  __int64 v144; // rcx
  char *v145; // rcx
  __int16 v146; // cx
  char *v147; // rcx
  char *v148; // rcx
  PULONG NewFlags; // [rsp+30h] [rbp-488h]
  PSIZE_T FileNameSize; // [rsp+38h] [rbp-480h]
  char v152; // [rsp+52h] [rbp-466h] BYREF
  char v153; // [rsp+53h] [rbp-465h]
  char v154; // [rsp+54h] [rbp-464h] BYREF
  char v155; // [rsp+55h] [rbp-463h]
  int v156; // [rsp+58h] [rbp-460h]
  unsigned int v157; // [rsp+5Ch] [rbp-45Ch]
  int v158; // [rsp+60h] [rbp-458h]
  __int16 v159; // [rsp+64h] [rbp-454h]
  __int16 v160; // [rsp+66h] [rbp-452h]
  __int16 v161; // [rsp+68h] [rbp-450h]
  __int16 v162; // [rsp+6Ah] [rbp-44Eh]
  __int16 v163; // [rsp+6Ch] [rbp-44Ch]
  int v164; // [rsp+70h] [rbp-448h]
  int v165; // [rsp+78h] [rbp-440h]
  int v166; // [rsp+80h] [rbp-438h]
  unsigned int v167; // [rsp+84h] [rbp-434h]
  int v168; // [rsp+88h] [rbp-430h] BYREF
  int v169; // [rsp+8Ch] [rbp-42Ch]
  int v170; // [rsp+90h] [rbp-428h]
  int v171; // [rsp+94h] [rbp-424h]
  int v172; // [rsp+98h] [rbp-420h]
  int v173; // [rsp+9Ch] [rbp-41Ch]
  __int64 *v174; // [rsp+A0h] [rbp-418h]
  struct _PEB *v175; // [rsp+A8h] [rbp-410h]
  __int64 v176; // [rsp+B0h] [rbp-408h]
  int v177; // [rsp+B8h] [rbp-400h]
  int v178; // [rsp+C0h] [rbp-3F8h]
  int v179; // [rsp+C4h] [rbp-3F4h]
  int v180; // [rsp+C8h] [rbp-3F0h]
  int v181; // [rsp+D0h] [rbp-3E8h]
  unsigned int v182; // [rsp+D4h] [rbp-3E4h]
  unsigned int v183; // [rsp+D8h] [rbp-3E0h]
  __int64 v184; // [rsp+E0h] [rbp-3D8h]
  int v185; // [rsp+E8h] [rbp-3D0h]
  __int64 v186; // [rsp+F0h] [rbp-3C8h]
  __int64 v187; // [rsp+F8h] [rbp-3C0h]
  int v188; // [rsp+100h] [rbp-3B8h]
  int v189; // [rsp+104h] [rbp-3B4h]
  int v190; // [rsp+108h] [rbp-3B0h]
  __int64 v191; // [rsp+110h] [rbp-3A8h]
  unsigned __int16 *v192; // [rsp+118h] [rbp-3A0h]
  PVOID v193; // [rsp+120h] [rbp-398h]
  __int64 v194; // [rsp+128h] [rbp-390h] BYREF
  __int64 v195; // [rsp+130h] [rbp-388h]
  _UNICODE_STRING DynamicString; // [rsp+138h] [rbp-380h] BYREF
  unsigned __int16 *v197; // [rsp+148h] [rbp-370h]
  PVOID v198; // [rsp+150h] [rbp-368h]
  PVOID v199; // [rsp+158h] [rbp-360h]
  _UNICODE_STRING *v200; // [rsp+160h] [rbp-358h]
  _DWORD *v201; // [rsp+168h] [rbp-350h]
  wchar_t *v202; // [rsp+170h] [rbp-348h]
  PVOID v203; // [rsp+178h] [rbp-340h]
  _WORD *v204; // [rsp+180h] [rbp-338h]
  _WORD *v205; // [rsp+188h] [rbp-330h]
  char *v206; // [rsp+190h] [rbp-328h]
  unsigned __int16 *v207; // [rsp+198h] [rbp-320h]
  unsigned __int16 *v208; // [rsp+1A0h] [rbp-318h]
  unsigned __int16 *v209; // [rsp+1A8h] [rbp-310h]
  _QWORD *v210; // [rsp+1B0h] [rbp-308h]
  __int64 v211; // [rsp+1B8h] [rbp-300h]
  _DWORD *v212; // [rsp+1C0h] [rbp-2F8h]
  void *Src[2]; // [rsp+1C8h] [rbp-2F0h] BYREF
  __int128 v214; // [rsp+1D8h] [rbp-2E0h] BYREF
  __int64 v215; // [rsp+1E8h] [rbp-2D0h]
  __int64 v216; // [rsp+1F0h] [rbp-2C8h]
  __int128 v217; // [rsp+1F8h] [rbp-2C0h] BYREF
  int v218; // [rsp+208h] [rbp-2B0h]
  int v219; // [rsp+20Ch] [rbp-2ACh]
  ULONG v220; // [rsp+210h] [rbp-2A8h]
  int v221; // [rsp+214h] [rbp-2A4h]
  int v222; // [rsp+218h] [rbp-2A0h]
  __int64 v223; // [rsp+220h] [rbp-298h]
  __int64 v224; // [rsp+228h] [rbp-290h] BYREF
  _QWORD *v225; // [rsp+230h] [rbp-288h]
  _DWORD *v226; // [rsp+238h] [rbp-280h]
  int v227; // [rsp+240h] [rbp-278h]
  ULONG v228; // [rsp+244h] [rbp-274h]
  int v229; // [rsp+248h] [rbp-270h]
  int v230; // [rsp+24Ch] [rbp-26Ch]
  ULONG v231; // [rsp+250h] [rbp-268h]
  _QWORD v232[2]; // [rsp+260h] [rbp-258h] BYREF
  __int128 v233; // [rsp+270h] [rbp-248h] BYREF
  __int128 v234; // [rsp+280h] [rbp-238h]
  __int128 v235; // [rsp+290h] [rbp-228h]
  __int64 v236; // [rsp+2A0h] [rbp-218h]
  __int64 v237; // [rsp+2B0h] [rbp-208h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+2C0h] [rbp-1F8h] BYREF
  _DWORD v239[2]; // [rsp+360h] [rbp-158h] BYREF
  void *v240; // [rsp+368h] [rbp-150h]
  __int16 v241; // [rsp+370h] [rbp-148h] BYREF
  char v242[254]; // [rsp+372h] [rbp-146h] BYREF
  _UNKNOWN *retaddr; // [rsp+4B8h] [rbp+0h]

  v6 = a4;
  v169 = a4;
  v195 = a3;
  v8 = a2;
  v191 = a2;
  v9 = OriginalName;
  v176 = (__int64)OriginalName;
  v10 = a5;
  v174 = a5;
  v11 = a6;
  v184 = (__int64)a6;
  v239[1] = 0;
  memset_thunk_772440563353939046(v242, 0, 0xFEuLL);
  v240 = &v241;
  v12 = 0;
  v239[0] = 0x1000000;
  v241 = 0;
  v232[0] = 72LL;
  v232[1] = 1LL;
  v233 = 0LL;
  v234 = 0LL;
  v235 = 0LL;
  v236 = 0LL;
  v13 = *(_QWORD *)(a3 + 136);
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  *((_QWORD *)&v234 + 1) = ~ActiveFrame;
  *(_QWORD *)&v235 = ~v13;
  *((_QWORD *)&v235 + 1) = retaddr;
  if ( ActiveFrame && (*(_DWORD *)(ActiveFrame + 16) & 0x70) != 0x20 )
  {
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
    ExceptionRecord.ExceptionCode = -1072365548;
    ExceptionRecord.ExceptionFlags = 1;
    RtlRaiseException(&ExceptionRecord);
    goto LABEL_7;
  }
  *(_QWORD *)&v233 = ActiveFrame;
  *((_QWORD *)&v233 + 1) = v13;
  LODWORD(v234) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == v13 )
      goto LABEL_6;
  }
  else if ( !v13 )
  {
LABEL_6:
    LODWORD(v234) = 48;
    goto LABEL_7;
  }
  ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)&v233;
LABEL_7:
  v16 = *(_DWORD *)(v8 + 32) & 0x1800800;
  v157 = v16;
  if ( v6 == 9 )
    goto LABEL_76;
  v201 = 0LL;
  appended = 0;
  v164 = 0;
  v18 = 0;
  if ( (v16 & 0x800008) == 0 )
  {
    v19 = v9;
    v200 = v9;
    *(_OWORD *)Src = 0LL;
    DynamicString = 0LL;
    v152 = 0;
    v166 = 0;
    v175 = NtCurrentPeb();
    v20 = 1;
    v153 = 1;
    ApiSetMap = v175->ApiSetMap;
    SharedData = (int *)v175->SharedData;
    if ( SharedData && (v230 = *SharedData) != 0 )
      v23 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v23 = 2147353476LL;
    if ( *(_BYTE *)v23 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v147 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v147 & 0x20) != 0 )
        LdrpLogEtwEvent(5328, 0LL, 0, 0, &v9->Length, 0LL);
    }
    appended = ApiSetResolveToHost((_DWORD)ApiSetMap, (_DWORD)v9, (int)v195 + 88, (unsigned int)&v152, (__int64)Src);
    if ( appended >= 0 && v152 )
    {
      if ( !LOWORD(Src[0]) )
      {
        LdrpLogDllState(0LL, v9, 5330LL);
        goto LABEL_18;
      }
      v143 = (int *)NtCurrentPeb()->SharedData;
      if ( v143 && (v229 = *v143) != 0 )
        v144 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v144 = 2147353476LL;
      if ( *(_BYTE *)v144 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v145 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
        if ( (*v145 & 0x20) != 0 )
        {
          v146 = 5329;
LABEL_405:
          LdrpLogEtwEvent(v146, 0LL, 0, 0, &v9->Length, 0LL);
        }
      }
    }
    else
    {
      v24 = (int *)NtCurrentPeb()->SharedData;
      if ( v24 && (v221 = *v24) != 0 )
        v25 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v25 = 2147353476LL;
      if ( *(_BYTE *)v25 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v148 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
        if ( (*v148 & 0x20) != 0 )
        {
          v146 = 5331;
          goto LABEL_405;
        }
      }
    }
LABEL_18:
    v166 = appended;
    if ( v152 )
    {
      if ( !LOWORD(Src[0]) )
      {
        appended = -1073740671;
        v166 = -1073740671;
        goto LABEL_385;
      }
      LOWORD(v239[0]) = 0;
      v26 = (int *)NtCurrentPeb()->SharedData;
      if ( v26 && (v218 = *v26) != 0 )
        v28 = (__int64)NtCurrentPeb()->SharedData + 30;
      else
        v28 = 2147352624LL;
      v223 = v28;
      v187 = 0LL;
      v215 = 0LL;
      v216 = v28;
      if ( v28 )
      {
        v29 = wcslen((const wchar_t *)v28);
        v30 = 2 * v29;
        v187 = v30;
        v31 = 2 * v29;
        if ( v30 >= 0xFFFE )
        {
          LOWORD(v30) = -4;
          v187 = 65532LL;
          v31 = -4;
        }
        LOWORD(v215) = v30;
        WORD1(v215) = v31 + 2;
      }
      else
      {
        LOWORD(v30) = v215;
      }
      v185 = 0;
      if ( (_WORD)v30 )
      {
        v32 = (unsigned __int16)v30 + LOWORD(v239[0]) + 2;
        v180 = v32;
        v193 = 0LL;
        v33 = 0;
        v173 = 0;
        if ( v32 > HIWORD(v239[0]) )
        {
          if ( v32 > 0xFFFE )
          {
            v33 = -1073741562;
            v173 = -1073741562;
          }
          else
          {
            v128 = (v32 + 63) & 0xFFFFFFC0;
            v180 = v128;
            v129 = v128;
            if ( v128 > 0xFFFE )
            {
              LOWORD(v128) = -2;
              v180 = 65534;
              v129 = 65534;
            }
            if ( v240 == &v241 )
            {
              Atom = RtlpAllocateAtom(v129);
              v193 = Atom;
              if ( Atom && LOWORD(v239[0]) )
              {
                memmove(Atom, v240, LOWORD(v239[0]));
                Atom = v193;
              }
            }
            else
            {
              Atom = (PVOID)NtdllpReallocateStringRoutine(v129, v240);
              v193 = Atom;
            }
            if ( Atom )
            {
              v240 = Atom;
              HIWORD(v239[0]) = v128;
            }
            else
            {
              v33 = -1073741801;
              v173 = -1073741801;
            }
          }
        }
        v185 = v33;
        if ( v33 >= 0 )
        {
          memmove((char *)v240 + LOWORD(v239[0]), (const void *)v28, (unsigned __int16)v30);
          LOWORD(v239[0]) += v30;
          *((_WORD *)v240 + ((unsigned __int64)LOWORD(v239[0]) >> 1)) = 0;
        }
      }
      v178 = 0;
      v34 = LOWORD(v239[0]) + 22;
      v177 = v34;
      v198 = 0LL;
      v35 = 0;
      v170 = 0;
      if ( v34 > HIWORD(v239[0]) )
      {
        if ( v34 > 0xFFFE )
        {
          v35 = -1073741562;
          v170 = -1073741562;
        }
        else
        {
          v131 = (LOWORD(v239[0]) + 85) & 0xFFFFFFC0;
          v177 = v131;
          v132 = v131;
          if ( v131 > 0xFFFE )
          {
            LOWORD(v131) = -2;
            v177 = 65534;
            v132 = 65534;
          }
          if ( v240 == &v241 )
          {
            v133 = RtlpAllocateAtom(v132);
            v198 = v133;
            if ( v133 && LOWORD(v239[0]) )
              memmove(v133, v240, LOWORD(v239[0]));
          }
          else
          {
            v133 = (PVOID)NtdllpReallocateStringRoutine(v132, v240);
            v198 = v133;
          }
          if ( v133 )
          {
            v240 = v133;
            HIWORD(v239[0]) = v131;
          }
          else
          {
            v35 = -1073741801;
            v170 = -1073741801;
          }
        }
      }
      v178 = v35;
      if ( v35 >= 0 )
      {
        v36 = (char *)v240 + LOWORD(v239[0]);
        *(_OWORD *)v36 = *(_OWORD *)SlashSystem32SlashString.Buffer;
        *((_DWORD *)v36 + 4) = *((_DWORD *)SlashSystem32SlashString.Buffer + 4);
        LOWORD(v239[0]) += 20;
        *((_WORD *)v240 + ((unsigned __int64)LOWORD(v239[0]) >> 1)) = 0;
      }
      v179 = 0;
      v37 = LOWORD(Src[0]);
      v38 = LOWORD(Src[0]) + LOWORD(v239[0]) + 2;
      LODWORD(v186) = v38;
      v199 = 0LL;
      appended = 0;
      v171 = 0;
      if ( v38 > HIWORD(v239[0]) )
      {
        if ( v38 > 0xFFFE )
        {
          appended = -1073741562;
          v171 = -1073741562;
        }
        else
        {
          v134 = (v38 + 63) & 0xFFFFFFC0;
          LODWORD(v186) = v134;
          v135 = v134;
          if ( v134 > 0xFFFE )
          {
            LOWORD(v134) = -2;
            LODWORD(v186) = 65534;
            v135 = 65534;
          }
          if ( v240 == &v241 )
          {
            v136 = RtlpAllocateAtom(v135);
            v199 = v136;
            if ( v136 && LOWORD(v239[0]) )
              memmove(v136, v240, LOWORD(v239[0]));
          }
          else
          {
            v136 = (PVOID)NtdllpReallocateStringRoutine(v135, v240);
            v199 = v136;
          }
          if ( v136 )
          {
            v240 = v136;
            HIWORD(v239[0]) = v134;
          }
          else
          {
            appended = -1073741801;
            v171 = -1073741801;
          }
        }
      }
      v179 = appended;
      if ( appended >= 0 )
      {
        memmove((char *)v240 + LOWORD(v239[0]), Src[1], v37);
        LOWORD(v239[0]) += v37;
        *((_WORD *)v240 + ((unsigned __int64)LOWORD(v239[0]) >> 1)) = 0;
      }
      v166 = appended;
      if ( appended < 0 )
      {
        v19 = v200;
      }
      else
      {
        ProcessParameters = v175->ProcessParameters;
        if ( !ProcessParameters || (ProcessParameters->Flags & 0x1000) == 0 )
          v20 = 0;
        v153 = v20;
        v19 = (_UNICODE_STRING *)v239;
        v200 = (_UNICODE_STRING *)v239;
      }
      v18 = 0;
    }
    if ( appended >= 0 )
    {
      v40 = 1;
      goto LABEL_46;
    }
LABEL_385:
    v40 = 0;
LABEL_46:
    if ( v40 && v20 && !LdrpIsSecureProcess )
    {
      v115 = RtlDosApplyFileIsolationRedirection_Ustr(
               1u,
               v19,
               (PUNICODE_STRING)&LdrpDefaultExtension,
               0LL,
               &DynamicString,
               0LL,
               0LL,
               0LL,
               0LL);
      if ( v115 >= 0 )
      {
        v18 = 1;
        v224 = 0LL;
        LODWORD(v175) = 0;
        v154 = 0;
        v194 = 0LL;
        while ( 1 )
        {
          FullPathName_Ustr = RtlGetFullPathName_Ustr(
                                &DynamicString,
                                HIWORD(v239[0]),
                                v240,
                                &v224,
                                &v154,
                                &v194,
                                NewFlags,
                                FileNameSize);
          v117 = FullPathName_Ustr;
          LODWORD(v175) = FullPathName_Ustr;
          if ( v154
            || FullPathName_Ustr - 1 > 0xFFFD
            || (_DWORD)v194 == 5 && (HIDWORD(v194) & LdrpIllegalCWDDevices) != 0 )
          {
            break;
          }
          if ( FullPathName_Ustr < HIWORD(v239[0]) )
          {
            LOWORD(v239[0]) = FullPathName_Ustr;
            break;
          }
          v137 = RtlpAllocateAtom(FullPathName_Ustr);
          if ( !v137 )
            break;
          if ( &v241 != v240 )
            RtlpSysVolFree(v240);
          v241 = 0;
          v240 = v137;
          LOWORD(v239[0]) = 0;
          HIWORD(v239[0]) = v117;
          *v137 = 0;
        }
        if ( DynamicString.Buffer )
        {
          RtlpSysVolFree(DynamicString.Buffer);
          DynamicString.Buffer = 0LL;
        }
        *(_DWORD *)&DynamicString.Length = 0;
      }
      if ( v115 != -1072365560 )
      {
        appended = v115;
        v166 = v115;
      }
    }
    v164 = appended;
    v16 = v157;
    v9 = (PUNICODE_STRING)v176;
  }
  if ( appended >= 0 )
  {
    p_Length = &v9->Length;
    v201 = &v9->Length;
    if ( LOWORD(v239[0]) )
    {
      v118 = "SxS";
      if ( !v18 )
        v118 = "API set";
      LdrpLogInternal(
        "minkernel\\ldr\\ldrutil.c",
        2792LL,
        "LdrpPreprocessDllName",
        2LL,
        "DLL %wZ was redirected to %wZ by %s\n",
        v9,
        v239,
        v118);
      v16 |= 0x200u;
      v157 = v16;
      if ( v18 )
      {
        v16 |= 4u;
        v157 = v16;
      }
      p_Length = (unsigned __int16 *)v239;
      v201 = v239;
    }
    else
    {
      v202 = 0LL;
      Buffer = v9->Buffer;
      v43 = (wchar_t *)((char *)Buffer + v9->Length);
      v202 = v43;
      while ( 1 )
      {
        v202 = --v43;
        if ( v43 < Buffer )
          break;
        if ( *v43 == 92 || *v43 == 47 )
        {
          if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(v9) == 5 )
          {
            appended = LdrpAppendUnicodeStringToFilenameBuffer(v239, v9);
            v164 = appended;
          }
          else
          {
            appended = LdrpGetFullPath(v9, v239);
            v164 = appended;
            if ( appended >= 0 )
            {
              v16 |= 0x600u;
              v157 = v16;
            }
          }
          goto LABEL_61;
        }
      }
      v16 |= 0x20u;
      v157 = v16;
      appended = 0;
      v181 = 0;
      Length = v9->Length;
      if ( (_WORD)Length )
      {
        v45 = Length + LOWORD(v239[0]) + 2;
        v165 = v45;
        v203 = 0LL;
        v172 = 0;
        if ( v45 > HIWORD(v239[0]) )
        {
          if ( v45 > 0xFFFE )
          {
            appended = -1073741562;
            v172 = -1073741562;
          }
          else
          {
            v123 = (v45 + 63) & 0xFFFFFFC0;
            v165 = v123;
            v124 = v123;
            if ( v123 > 0xFFFE )
            {
              LOWORD(v123) = -2;
              v165 = 65534;
              v124 = 65534;
            }
            if ( v240 == &v241 )
            {
              v125 = RtlpAllocateAtom(v124);
              v203 = v125;
              if ( v125 && LOWORD(v239[0]) )
                memmove(v125, v240, LOWORD(v239[0]));
            }
            else
            {
              v125 = (PVOID)NtdllpReallocateStringRoutine(v124, v240);
              v203 = v125;
            }
            if ( v125 )
            {
              v240 = v125;
              HIWORD(v239[0]) = v123;
            }
            else
            {
              appended = -1073741801;
              v172 = -1073741801;
            }
            v9 = (PUNICODE_STRING)v176;
          }
        }
        v181 = appended;
        if ( appended >= 0 )
        {
          memmove((char *)v240 + LOWORD(v239[0]), v9->Buffer, v9->Length);
          LOWORD(v239[0]) += v9->Length;
          *((_WORD *)v240 + ((unsigned __int64)LOWORD(v239[0]) >> 1)) = 0;
        }
      }
      v164 = appended;
    }
LABEL_61:
    if ( appended >= 0 )
    {
      v204 = 0LL;
      v155 = 0;
      v46 = *((_QWORD *)p_Length + 1);
      v47 = (_WORD *)(v46 + *p_Length);
      v204 = v47;
      v155 = 0;
      while ( 1 )
      {
        v204 = --v47;
        if ( (unsigned __int64)v47 < v46 )
        {
LABEL_263:
          appended = LdrpAppendUnicodeStringToFilenameBuffer(v239, &LdrpDefaultExtension);
          v164 = appended;
          goto LABEL_72;
        }
        v48 = *v47;
        if ( *v47 == 46 )
          break;
        if ( v48 == 47 || v48 == 92 )
          goto LABEL_263;
      }
      v155 = 1;
      v49 = (char *)v240 + LOWORD(v239[0]);
      v205 = v49;
      while ( 1 )
      {
        v205 = --v49;
        if ( v49 < v240 || *v49 != 46 )
          break;
        LOWORD(v239[0]) -= 2;
      }
      v49[1] = 0;
    }
  }
LABEL_72:
  if ( appended < 0 )
  {
    LODWORD(NewFlags) = appended;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrutil.c",
      2853LL,
      "LdrpPreprocessDllName",
      0LL,
      "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
      v9,
      NewFlags);
  }
  v156 = appended;
  if ( appended < 0 )
    goto LABEL_413;
  v10 = v174;
  v6 = v169;
  v8 = v191;
  v11 = (_QWORD *)v184;
LABEL_76:
  if ( (v16 & 0x800000) != 0 )
  {
    appended = LdrpFindOrPrepareEnclaveModule(
                 *(_QWORD *)(v8 + 176),
                 v239,
                 *(_QWORD *)(v8 + 16),
                 v16,
                 v195,
                 v10,
                 *(_QWORD *)(v8 + 40));
    v156 = appended;
    goto LABEL_413;
  }
  if ( !*v11 )
  {
    v231 = NtdllBaseTag + 2621440;
    Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2621440, 0x20uLL);
    *v11 = Heap;
    if ( !Heap )
    {
      appended = -1073741801;
      v156 = -1073741801;
      goto LABEL_413;
    }
  }
  v51 = *(_QWORD *)(v8 + 40);
  v187 = v51;
  v52 = v16;
  v165 = v16;
  v186 = *(_QWORD *)(v8 + 16);
  v53 = (unsigned __int16 *)v239;
  v192 = (unsigned __int16 *)v239;
  v158 = 0;
  v217 = 0LL;
  *v10 = 0LL;
  v168 = 0;
  if ( v6 == 9 )
  {
    v176 = 0LL;
    *((_QWORD *)&v217 + 1) = ModuleNamePlaceholderBuffer;
    v126 = 2 * wcslen(ModuleNamePlaceholderBuffer);
    v176 = v126;
    v127 = v126;
    if ( v126 >= 0xFFFE )
    {
      LOWORD(v126) = -4;
      v176 = 65532LL;
      v127 = -4;
    }
    LOWORD(v217) = v126;
    WORD1(v217) = v127 + 2;
    v53 = (unsigned __int16 *)&v217;
    v192 = (unsigned __int16 *)&v217;
LABEL_308:
    v158 = -1073741515;
    goto LABEL_189;
  }
  if ( (v16 & 0x20) != 0 )
  {
    appended = LdrpFindLoadedDllByName((unsigned int)v239, 0, v16, (_DWORD)v10, (__int64)&v168);
    v158 = appended;
    goto LABEL_138;
  }
  if ( (v16 & 0x200) == 0 )
    goto LABEL_308;
  v214 = 0LL;
  for ( i = LOWORD(v239[0]) >> 1; i; --i )
  {
    v55 = *((_WORD *)v240 + i - 1);
    if ( v55 == 92 || v55 == 47 )
      break;
  }
  v56 = 2LL * i;
  *((_QWORD *)&v214 + 1) = (char *)v240 + v56;
  LODWORD(v175) = (unsigned __int16)(LOWORD(v239[0]) - v56);
  LOWORD(v214) = LOWORD(v239[0]) - v56;
  WORD1(v214) = HIWORD(v239[0]) - v56;
  v57 = 0;
  v188 = 0;
  v58 = (char *)v240 + v56;
  v206 = (char *)v240 + v56;
  v167 = 0;
  v59 = (unsigned int)v175 >> 1;
  v182 = (unsigned int)v175 >> 1;
  while ( 1 )
  {
    v60 = v59--;
    v182 = v59;
    if ( !v60 )
      break;
    v61 = *(unsigned __int16 *)v58;
    v58 += 2;
    v206 = v58;
    if ( (unsigned int)v61 >= 0x61 )
    {
      if ( (unsigned int)v61 > 0x7A )
      {
        if ( qword_1801CC038 )
        {
          if ( (unsigned __int16)v61 >= 0xC0u )
            LOWORD(v61) = *(_WORD *)(qword_1801CC038
                                   + 2
                                   * ((v61 & 0xF)
                                    + *(unsigned __int16 *)(qword_1801CC038
                                                          + 2LL
                                                          * (((unsigned __int8)v61 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(qword_1801CC038
                                                                                               + 2 * (v61 >> 8))))))
                        + v61;
        }
      }
      else
      {
        LOWORD(v61) = v61 - 32;
      }
    }
    v159 = v61;
    v57 = (unsigned __int16)v61 + 65599 * v57;
    v188 = v57;
  }
  v167 = v57;
  v62 = v57;
  if ( !v57 )
  {
    v62 = 0x80000000;
    v167 = 0x80000000;
  }
  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  v63 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v62 & 0x1F));
  v64 = 0;
  for ( j = *v63; ; j = (_QWORD *)*j )
  {
    if ( j == v63 )
    {
      v73 = v174;
      goto LABEL_126;
    }
    v66 = j - 14;
    if ( v62 != *((_DWORD *)j + 38) )
      continue;
    v67 = v66 + 13;
    if ( (v165 & 8) != 0 && (*v67 & 1) == 0 )
      continue;
    if ( v192 )
      break;
    if ( (*(_DWORD *)v67 & 0x10000000) != 0 || (v208 = 0LL, v209 = 0LL, (_WORD)v175 != *((_WORD *)v66 + 44)) )
    {
LABEL_249:
      v64 = 0;
    }
    else
    {
      v97 = (unsigned __int16 *)*((_QWORD *)&v214 + 1);
      v208 = (unsigned __int16 *)*((_QWORD *)&v214 + 1);
      v98 = (unsigned __int16 *)v66[12];
      v209 = v98;
      while ( (unsigned __int64)v97 < *((_QWORD *)&v214 + 1) + (unsigned __int64)(unsigned __int16)v175 )
      {
        v99 = *v97;
        v100 = *v98;
        if ( (_WORD)v99 != (_WORD)v100 )
        {
          if ( (unsigned int)v99 >= 0x61 )
          {
            if ( (unsigned int)v99 > 0x7A )
            {
              if ( qword_1801CC038 && (unsigned __int16)v99 >= 0xC0u )
                LOWORD(v99) = *(_WORD *)(qword_1801CC038
                                       + 2
                                       * ((v99 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801CC038
                                                              + 2LL
                                                              * (((unsigned __int8)v99 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801CC038 + 2 * (v99 >> 8))))))
                            + v99;
            }
            else
            {
              LOWORD(v99) = v99 - 32;
            }
          }
          v162 = v99;
          if ( (unsigned int)v100 >= 0x61 )
          {
            if ( (unsigned int)v100 > 0x7A )
            {
              if ( qword_1801CC038 && (unsigned __int16)v100 >= 0xC0u )
                LOWORD(v100) = *(_WORD *)(qword_1801CC038
                                        + 2
                                        * ((v100 & 0xF)
                                         + *(unsigned __int16 *)(qword_1801CC038
                                                               + 2LL
                                                               * (((unsigned __int8)v100 >> 4)
                                                                + (unsigned int)*(unsigned __int16 *)(qword_1801CC038 + 2 * (v100 >> 8))))))
                             + v100;
            }
            else
            {
              LOWORD(v100) = v100 - 32;
            }
          }
          v163 = v100;
          if ( (_WORD)v99 != (_WORD)v100 )
            goto LABEL_249;
        }
        v208 = ++v97;
        v209 = ++v98;
      }
      v64 = 1;
    }
    if ( v64 )
      goto LABEL_122;
LABEL_173:
    ;
  }
  v197 = 0LL;
  v207 = 0LL;
  if ( LOWORD(v239[0]) != *((unsigned __int16 *)v66 + 36) )
  {
LABEL_170:
    v64 = 0;
    goto LABEL_173;
  }
  v68 = (unsigned __int16 *)v240;
  v197 = (unsigned __int16 *)v240;
  v69 = (unsigned __int16 *)v66[10];
  v207 = v69;
  while ( v68 < (unsigned __int16 *)((char *)v240 + LOWORD(v239[0])) )
  {
    v70 = *v68;
    v71 = *v69;
    if ( (_WORD)v70 != (_WORD)v71 )
    {
      if ( (unsigned int)v70 >= 0x61 )
      {
        if ( (unsigned int)v70 > 0x7A )
        {
          if ( qword_1801CC038 && (unsigned __int16)v70 >= 0xC0u )
            LOWORD(v70) = *(_WORD *)(qword_1801CC038
                                   + 2
                                   * ((v70 & 0xF)
                                    + *(unsigned __int16 *)(qword_1801CC038
                                                          + 2LL
                                                          * (((unsigned __int8)v70 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(qword_1801CC038
                                                                                               + 2 * (v70 >> 8))))))
                        + v70;
        }
        else
        {
          LOWORD(v70) = v70 - 32;
        }
      }
      v160 = v70;
      if ( (unsigned int)v71 >= 0x61 )
      {
        if ( (unsigned int)v71 > 0x7A )
        {
          if ( qword_1801CC038 && (unsigned __int16)v71 >= 0xC0u )
            LOWORD(v71) = *(_WORD *)(qword_1801CC038
                                   + 2
                                   * ((v71 & 0xF)
                                    + *(unsigned __int16 *)(qword_1801CC038
                                                          + 2LL
                                                          * (((unsigned __int8)v71 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(qword_1801CC038
                                                                                               + 2 * (v71 >> 8))))))
                        + v71;
        }
        else
        {
          LOWORD(v71) = v71 - 32;
        }
      }
      v161 = v71;
      if ( (_WORD)v70 != (_WORD)v71 )
        goto LABEL_170;
    }
    v197 = ++v68;
    v207 = ++v69;
  }
  v64 = 1;
LABEL_122:
  v72 = v66[19];
  if ( *(_DWORD *)(v72 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v72 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)v66 + 69);
  v73 = v174;
  *v174 = (__int64)v66;
LABEL_126:
  if ( v64 )
  {
    appended = 0;
    v74 = 1;
  }
  else
  {
    appended = -1073741515;
    v74 = 0;
  }
  if ( v74 )
    v168 = *(_DWORD *)(*(_QWORD *)(*v73 + 152) + 56LL);
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
  v53 = v192;
  v75 = 3;
  if ( v192 )
  {
    if ( appended >= 0 )
      v75 = 0;
    v189 = v75;
    v76 = (int *)NtCurrentPeb()->SharedData;
    if ( v76 && (v222 = *v76) != 0 )
      v77 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v77 = 2147353476LL;
    if ( *(_BYTE *)v77 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v119 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v119 & 0x20) != 0 )
        LdrpLogEtwEvent(5280, 0LL, 0, v189, v53, 0LL);
    }
  }
  else
  {
    if ( appended >= 0 )
      v75 = 0;
    v190 = v75;
    v108 = (int *)NtCurrentPeb()->SharedData;
    if ( v108 && (v219 = *v108) != 0 )
      v109 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v109 = 2147353476LL;
    if ( *(_BYTE *)v109 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v110 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v110 & 0x20) != 0 )
        LdrpLogEtwEvent(5280, 0LL, 0, v190, (unsigned __int16 *)&v214, 0LL);
    }
  }
  v158 = appended;
  LOWORD(v16) = v157;
  v52 = v165;
  v51 = v187;
LABEL_138:
  if ( appended != -1073741515 )
  {
    v78 = (PVOID *)v174;
    if ( v168 >= 0 )
    {
      LdrpIncrementModuleLoadCount(*v174);
    }
    else
    {
      LODWORD(NewFlags) = v168;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrmap.c",
        3390LL,
        "LdrpFindOrPrepareLoadingModule",
        0LL,
        "Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
        *v174 + 72,
        NewFlags);
      appended = -1073741595;
      v158 = -1073741595;
      LdrpDereferenceModule(*v78);
      *v78 = 0LL;
    }
    goto LABEL_141;
  }
  v10 = v174;
LABEL_189:
  *v10 = 0LL;
  v220 = NtdllBaseTag + 0x40000;
  v101 = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, *v53 + 210LL);
  v102 = v101;
  if ( v101 )
  {
    v101[8] = v52 | 0x8000;
    *((_QWORD *)v101 + 2) = v186;
    *((_QWORD *)v101 + 5) = v51;
    *((_QWORD *)v101 + 6) = v195;
    *((_QWORD *)v101 + 23) = -1LL;
    *((_QWORD *)v101 + 1) = v101 + 52;
    *(_WORD *)v101 = *v53;
    *((_WORD *)v101 + 1) = *v53 + 2;
    memmove(v101 + 52, *((const void **)v53 + 1), *v53);
    *(_WORD *)(*((_QWORD *)v102 + 1) + 2 * ((unsigned __int64)*v53 >> 1)) = 0;
    ModuleEntry = LdrpAllocateModuleEntry(v102);
    v78 = (PVOID *)v174;
    *v174 = ModuleEntry;
    if ( ModuleEntry )
    {
      v104 = v169;
      *(_DWORD *)(ModuleEntry + 268) = v169;
      if ( v104 == 9 )
        *((_DWORD *)*v78 + 76) = 1;
      v105 = (int *)NtCurrentPeb()->SharedData;
      if ( v105 && (v227 = *v105) != 0 )
        v106 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v106 = 2147353476LL;
      if ( *(_BYTE *)v106 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v139 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
        if ( (*v139 & 0x20) != 0 )
          LdrpLogEtwEvent(5292, 0LL, 0, 0, (unsigned __int16 *)v102, 0LL);
      }
      LOWORD(v16) = v157;
      goto LABEL_198;
    }
    RtlFreeHeap(LdrpHeap, 0, v102);
  }
  else
  {
    v78 = (PVOID *)v174;
  }
  v104 = v169;
LABEL_198:
  v107 = *v78;
  appended = 0;
  if ( !*v78 )
    appended = -1073741801;
  v158 = appended;
  if ( v104 == 9 )
  {
    appended = -1073741515;
    v158 = -1073741515;
  }
  else if ( appended >= 0 )
  {
    appended = LdrpLoadKnownDll(v107[22]);
    v158 = appended;
  }
LABEL_141:
  v156 = appended;
  if ( *v78 )
  {
    if ( (v16 & 0x400) != 0 && appended == -1073741515 )
    {
      v138 = *((_QWORD *)*v78 + 22);
      v237 = v138;
      *(_DWORD *)(v138 + 32) |= 0x4000000u;
      LOBYTE(v79) = 1;
      LdrpProcessWork(v138, v79);
      v156 = **(_DWORD **)(v138 + 40);
    }
    v225 = 0LL;
    v183 = 0;
    v80 = 0LL;
    v210 = 0LL;
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( k = 0; ; ++k )
      {
        v183 = k;
        if ( k >= 8 )
          break;
        if ( !SchedulerSharedDataSlot[k] )
        {
          v80 = &SchedulerSharedDataSlot[k];
          v210 = v80;
          break;
        }
      }
    }
    v225 = v80;
    if ( v80 )
      *v80 = &LdrpModuleDatatableLock;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&LdrpModuleDatatableLock);
    v84 = *v78;
    v85 = (__int64)v84;
    v211 = (__int64)*v78;
    if ( v84 )
    {
      v86 = v84[22];
      if ( v86 )
      {
        if ( (*(_DWORD *)(v86 + 32) & 0x80000) == 0 && *(_QWORD **)(v86 + 56) != v84 )
        {
          v85 = *(_QWORD *)(v86 + 56);
          v211 = v85;
          *(_QWORD *)(v86 + 56) = v84;
        }
      }
    }
    v87 = (_QWORD *)v184;
    *(_DWORD *)(*(_QWORD *)v184 + 24LL) &= ~1u;
    v88 = (_DWORD *)*v87;
    v212 = (_DWORD *)*v87;
    v89 = *(_QWORD *)(v85 + 152);
    v90 = *(_QWORD *)(*(_QWORD *)(v191 + 56) + 152LL);
    if ( v90 == v89
      || *(_DWORD *)(v89 + 56) == 9 && (*(_DWORD *)(v89 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v89 - 56LL) & 0x20) != 0) )
    {
LABEL_212:
      v111 = *(_DWORD *)(v89 + 24);
      if ( (unsigned int)(v111 - 2) <= 0xFFFFFFFC )
        *(_DWORD *)(v89 + 24) = v111 - 1;
    }
    else
    {
      v91 = *(_QWORD **)(v90 + 40);
      if ( v91 )
      {
        v92 = *(_QWORD **)(v90 + 40);
        do
        {
          v92 = (_QWORD *)*v92;
          if ( v92[1] == v89 )
            goto LABEL_212;
        }
        while ( v92 != v91 );
      }
      if ( v88 )
      {
LABEL_163:
        v93 = *(_QWORD **)(v90 + 40);
        if ( v93 )
        {
          *(_QWORD *)v88 = *v93;
          *v93 = v88;
        }
        else
        {
          *(_QWORD *)v88 = v88;
        }
        *(_QWORD *)(v90 + 40) = v88;
        *((_QWORD *)v88 + 1) = v89;
        v94 = v88 + 4;
        v95 = *(_QWORD **)(v89 + 48);
        if ( v95 )
        {
          *v94 = *v95;
          *v95 = v94;
        }
        else
        {
          *v94 = v94;
        }
        *(_QWORD *)(v89 + 48) = v94;
        v96 = v88[6];
        *((_QWORD *)v88 + 3) = v90;
        if ( (v96 & 1) != 0 )
          v88[6] = v90 ^ ((unsigned __int8)v96 ^ (unsigned __int8)v90) & 1;
        v88 = 0LL;
        v212 = 0LL;
        v87 = (_QWORD *)v184;
      }
      else
      {
        v228 = NtdllBaseTag + 2359296;
        v120 = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, 0x20uLL);
        v88 = v120;
        v212 = v120;
        if ( v120 )
        {
          v120[6] |= 1u;
          goto LABEL_163;
        }
        MEMORY[0] = -1073741801;
        v88 = 0LL;
        v87 = (_QWORD *)v184;
      }
    }
    v226 = v88;
    *v87 = v88;
    appended = v156;
    if ( v156 == -1073741515 )
    {
      if ( (v157 & 0x400) == 0 )
      {
        LdrpQueueWork(*(_QWORD *)(v85 + 176));
        appended = 0;
        v156 = 0;
        v87 = (_QWORD *)v184;
        goto LABEL_217;
      }
LABEL_216:
      if ( v156 >= 0 )
        goto LABEL_217;
    }
    else
    {
      if ( v156 != -1073741267 )
        goto LABEL_216;
      appended = 0;
      v156 = 0;
LABEL_217:
      v12 = 1;
    }
    if ( v12 )
    {
      v112 = v191;
      v113 = *(_DWORD *)(v191 + 108);
      if ( v113 )
      {
        if ( *v87 || *(int *)(*(_QWORD *)(v85 + 152) + 56LL) >= 2 )
          *(_DWORD *)(v191 + 108) = v113 - 1;
      }
      else if ( *(int *)(*(_QWORD *)(v85 + 152) + 56LL) < 2 )
      {
        *(_QWORD *)(v191 + 80) = v85;
        *(_DWORD *)(v112 + 108) = 1;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v112 + 56) + 152LL) + 56LL) = 3;
        appended = 259;
        v156 = 259;
      }
    }
    v114 = *(_QWORD *)(v85 + 152);
    if ( *(_DWORD *)(v114 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v114 - 56LL) & 0x20) == 0 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v85 + 276), 0xFFFFFFFF) == 1 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v121 = *(_QWORD *)(v85 + 160);
        v122 = *(_QWORD **)(v85 + 168);
        if ( *(_QWORD *)(v121 + 8) != v85 + 160 || *v122 != v85 + 160 )
          __fastfail(3u);
        *v122 = v121;
        *(_QWORD *)(v121 + 8) = v122;
        v140 = *(_QWORD **)(v85 + 152);
        v141 = (_QWORD *)*v140;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *(_WORD *)(v85 + 110) )
          LdrpReleaseTlsEntry(v85, 0LL);
        LdrpUnmapModule(v85);
        v142 = *(_ACTIVATION_CONTEXT **)(v85 + 136);
        if ( (unsigned __int64)&v142[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v142);
        if ( *(_QWORD *)(v85 + 80) )
          LdrpFreeUnicodeString(v85 + 72);
        RtlFreeHeap(LdrpHeap, 0, (PVOID)v85);
        if ( v141 == v140 )
          LdrpDestroyNode(v140);
      }
      appended = v156;
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( (PVOID)v85 != *v78 )
    {
      LdrpFreeReplacedModule(*v78);
      *v78 = (PVOID)v85;
    }
  }
LABEL_413:
  RtlDeactivateActivationContextUnsafeFast(v232);
  if ( &v241 != v240 )
    RtlpSysVolFree(v240);
  return (unsigned int)appended;
}
