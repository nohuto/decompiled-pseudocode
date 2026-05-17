/*
 * XREFs of LdrpLoadDependentModuleInternal @ 0x18000D2E0
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18000C8D0 (LdrpMapAndSnapDependency.c)
 *     LdrpSnapModule @ 0x180056F30 (LdrpSnapModule.c)
 *     LdrpLoadDependentModuleW @ 0x1801164FC (LdrpLoadDependentModuleW.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x1800035B0 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpReleaseTlsEntry @ 0x1800049CC (LdrpReleaseTlsEntry.c)
 *     LdrpDestroyNode @ 0x180004B28 (LdrpDestroyNode.c)
 *     LdrpUnmapModule @ 0x1800067C8 (LdrpUnmapModule.c)
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18000F570 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     LdrpAllocateModuleEntry @ 0x180010680 (LdrpAllocateModuleEntry.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllByName @ 0x180018180 (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x180019B00 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     LdrpProcessWork @ 0x180021E60 (LdrpProcessWork.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     ApiSetResolveToHost @ 0x18005B040 (ApiSetResolveToHost.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18005B1C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlGetFullPathName_Ustr @ 0x18005BA20 (RtlGetFullPathName_Ustr.c)
 *     RtlReleaseActivationContext @ 0x18005E4D0 (RtlReleaseActivationContext.c)
 *     RtlRaiseException @ 0x180070510 (RtlRaiseException.c)
 *     LdrpLogDllState @ 0x180070D00 (LdrpLogDllState.c)
 *     LdrpLoadKnownDll @ 0x180074A60 (LdrpLoadKnownDll.c)
 *     LdrpGetFullPath @ 0x180075FF0 (LdrpGetFullPath.c)
 *     LdrpFreeUnicodeString @ 0x18007625C (LdrpFreeUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180077BE0 (RtlDetermineDosPathNameType_Ustr.c)
 *     LdrpLogEtwEvent @ 0x18009B2F0 (LdrpLogEtwEvent.c)
 *     LdrpQueueWork @ 0x1800D6D64 (LdrpQueueWork.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D86F0 (LdrpFindOrPrepareEnclaveModule.c)
 *     LdrpFreeReplacedModule @ 0x1800D91A8 (LdrpFreeReplacedModule.c)
 *     NtdllpReallocateStringRoutine @ 0x18011EBD8 (NtdllpReallocateStringRoutine.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadDependentModuleInternal(
        const void **a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        _QWORD *a6)
{
  int v6; // r12d
  __int64 v8; // r14
  const void **v9; // r15
  __int64 *v10; // rbx
  _QWORD *v11; // r13
  int v12; // edi
  __int64 v13; // rdx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  unsigned __int64 ActiveFrame; // rcx
  int v16; // esi
  int appended; // ebx
  char v18; // r13
  __int64 *v19; // r14
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
  __int64 *v41; // r12
  char *v42; // rdx
  char *v43; // rax
  int v44; // eax
  unsigned int v45; // edx
  unsigned __int64 v46; // rdx
  _WORD *v47; // rax
  __int16 v48; // cx
  _WORD *v49; // rcx
  __int64 Heap; // rax
  __int64 v51; // r13
  int v52; // r15d
  __int64 *v53; // r14
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
  __int64 *v78; // r13
  _QWORD *v79; // rcx
  _QWORD *SchedulerSharedDataSlot; // r9
  unsigned int k; // edx
  __int64 v83; // rax
  __int64 v84; // rsi
  __int64 v85; // rcx
  __int64 *v86; // r8
  __int64 v87; // rcx
  __int64 v88; // rbx
  __int64 v89; // r14
  _QWORD *v90; // rdx
  _QWORD *v91; // rax
  __int64 *v92; // rdx
  _QWORD *v93; // rdx
  _QWORD *v94; // r8
  int v95; // edx
  unsigned __int16 *v96; // r10
  unsigned __int16 *v97; // r11
  unsigned __int64 v98; // r8
  unsigned __int64 v99; // r9
  __int64 v100; // rax
  __int64 v101; // rbx
  __int64 ModuleEntry; // rax
  int v103; // r14d
  int *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  int *v107; // rax
  __int64 v108; // rcx
  char *v109; // rcx
  int v110; // edx
  __int64 v111; // rdx
  int v112; // ecx
  __int64 v113; // rax
  int v114; // r14d
  unsigned int FullPathName_Ustr; // eax
  __int16 v116; // si
  char *v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rdx
  _QWORD *v120; // rcx
  unsigned int v121; // r14d
  unsigned int v122; // eax
  void *v123; // r15
  size_t v124; // rax
  __int16 v125; // cx
  unsigned int v126; // r13d
  unsigned int v127; // eax
  void *Atom; // rcx
  unsigned int v129; // esi
  unsigned int v130; // eax
  void *v131; // r14
  unsigned int v132; // r15d
  unsigned int v133; // eax
  void *v134; // r13
  _WORD *v135; // r15
  __int64 v136; // rbx
  char *v137; // rax
  _QWORD *v138; // rbx
  _QWORD *v139; // rdi
  __int64 v140; // rdx
  __int64 v141; // rcx
  int *v142; // rax
  __int64 v143; // rcx
  char *v144; // rcx
  int v145; // ecx
  char *v146; // rcx
  char *v147; // rcx
  char v149; // [rsp+52h] [rbp-466h] BYREF
  char v150; // [rsp+53h] [rbp-465h]
  char v151; // [rsp+54h] [rbp-464h] BYREF
  char v152; // [rsp+55h] [rbp-463h]
  int v153; // [rsp+58h] [rbp-460h]
  int v154; // [rsp+5Ch] [rbp-45Ch]
  int v155; // [rsp+60h] [rbp-458h]
  __int16 v156; // [rsp+64h] [rbp-454h]
  __int16 v157; // [rsp+66h] [rbp-452h]
  __int16 v158; // [rsp+68h] [rbp-450h]
  __int16 v159; // [rsp+6Ah] [rbp-44Eh]
  __int16 v160; // [rsp+6Ch] [rbp-44Ch]
  int v161; // [rsp+70h] [rbp-448h]
  int v162; // [rsp+78h] [rbp-440h]
  int v163; // [rsp+80h] [rbp-438h]
  unsigned int v164; // [rsp+84h] [rbp-434h]
  int v165; // [rsp+88h] [rbp-430h] BYREF
  int v166; // [rsp+8Ch] [rbp-42Ch]
  int v167; // [rsp+90h] [rbp-428h]
  int v168; // [rsp+94h] [rbp-424h]
  int v169; // [rsp+98h] [rbp-420h]
  int v170; // [rsp+9Ch] [rbp-41Ch]
  __int64 *v171; // [rsp+A0h] [rbp-418h]
  struct _PEB *v172; // [rsp+A8h] [rbp-410h]
  __int64 v173; // [rsp+B0h] [rbp-408h]
  int v174; // [rsp+B8h] [rbp-400h]
  int v175; // [rsp+C0h] [rbp-3F8h]
  int v176; // [rsp+C4h] [rbp-3F4h]
  int v177; // [rsp+C8h] [rbp-3F0h]
  int v178; // [rsp+D0h] [rbp-3E8h]
  unsigned int v179; // [rsp+D4h] [rbp-3E4h]
  unsigned int v180; // [rsp+D8h] [rbp-3E0h]
  __int64 v181; // [rsp+E0h] [rbp-3D8h]
  int v182; // [rsp+E8h] [rbp-3D0h]
  __int64 v183; // [rsp+F0h] [rbp-3C8h]
  __int64 v184; // [rsp+F8h] [rbp-3C0h]
  int v185; // [rsp+100h] [rbp-3B8h]
  int v186; // [rsp+104h] [rbp-3B4h]
  int v187; // [rsp+108h] [rbp-3B0h]
  __int64 v188; // [rsp+110h] [rbp-3A8h]
  __int64 *v189; // [rsp+118h] [rbp-3A0h]
  void *v190; // [rsp+120h] [rbp-398h]
  __int64 v191; // [rsp+128h] [rbp-390h] BYREF
  __int64 v192; // [rsp+130h] [rbp-388h]
  __int128 v193; // [rsp+138h] [rbp-380h] BYREF
  unsigned __int16 *v194; // [rsp+148h] [rbp-370h]
  void *v195; // [rsp+150h] [rbp-368h]
  void *v196; // [rsp+158h] [rbp-360h]
  __int64 *v197; // [rsp+160h] [rbp-358h]
  __int64 *v198; // [rsp+168h] [rbp-350h]
  char *v199; // [rsp+170h] [rbp-348h]
  void *v200; // [rsp+178h] [rbp-340h]
  _WORD *v201; // [rsp+180h] [rbp-338h]
  _WORD *v202; // [rsp+188h] [rbp-330h]
  char *v203; // [rsp+190h] [rbp-328h]
  unsigned __int16 *v204; // [rsp+198h] [rbp-320h]
  unsigned __int16 *v205; // [rsp+1A0h] [rbp-318h]
  unsigned __int16 *v206; // [rsp+1A8h] [rbp-310h]
  _QWORD *v207; // [rsp+1B0h] [rbp-308h]
  __int64 v208; // [rsp+1B8h] [rbp-300h]
  __int64 v209; // [rsp+1C0h] [rbp-2F8h]
  void *Src[2]; // [rsp+1C8h] [rbp-2F0h] BYREF
  __int128 v211; // [rsp+1D8h] [rbp-2E0h] BYREF
  __int64 v212; // [rsp+1E8h] [rbp-2D0h]
  __int64 v213; // [rsp+1F0h] [rbp-2C8h]
  __int128 v214; // [rsp+1F8h] [rbp-2C0h] BYREF
  int v215; // [rsp+208h] [rbp-2B0h]
  int v216; // [rsp+20Ch] [rbp-2ACh]
  int v217; // [rsp+210h] [rbp-2A8h]
  int v218; // [rsp+214h] [rbp-2A4h]
  int v219; // [rsp+218h] [rbp-2A0h]
  __int64 v220; // [rsp+220h] [rbp-298h]
  __int64 v221; // [rsp+228h] [rbp-290h] BYREF
  _QWORD *v222; // [rsp+230h] [rbp-288h]
  __int64 v223; // [rsp+238h] [rbp-280h]
  int v224; // [rsp+240h] [rbp-278h]
  int v225; // [rsp+244h] [rbp-274h]
  int v226; // [rsp+248h] [rbp-270h]
  int v227; // [rsp+24Ch] [rbp-26Ch]
  int v228; // [rsp+250h] [rbp-268h]
  _QWORD v229[2]; // [rsp+260h] [rbp-258h] BYREF
  __int128 v230; // [rsp+270h] [rbp-248h] BYREF
  __int128 v231; // [rsp+280h] [rbp-238h]
  __int128 v232; // [rsp+290h] [rbp-228h]
  __int64 v233; // [rsp+2A0h] [rbp-218h]
  __int64 v234; // [rsp+2B0h] [rbp-208h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+2C0h] [rbp-1F8h] BYREF
  __int64 v236; // [rsp+360h] [rbp-158h] BYREF
  void *v237; // [rsp+368h] [rbp-150h]
  __int16 v238; // [rsp+370h] [rbp-148h] BYREF
  char v239[254]; // [rsp+372h] [rbp-146h] BYREF
  _UNKNOWN *retaddr; // [rsp+4B8h] [rbp+0h]

  v6 = a4;
  v166 = a4;
  v192 = a3;
  v8 = a2;
  v188 = a2;
  v9 = a1;
  v173 = (__int64)a1;
  v10 = a5;
  v171 = a5;
  v11 = a6;
  v181 = (__int64)a6;
  memset_thunk_772440563353939046(v239, 0, 0xFEuLL);
  v237 = &v238;
  v12 = 0;
  v236 = 0x1000000LL;
  v238 = 0;
  v229[0] = 72LL;
  v229[1] = 1LL;
  v230 = 0LL;
  v231 = 0LL;
  v232 = 0LL;
  v233 = 0LL;
  v13 = *(_QWORD *)(a3 + 136);
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  *((_QWORD *)&v231 + 1) = ~ActiveFrame;
  *(_QWORD *)&v232 = ~v13;
  *((_QWORD *)&v232 + 1) = retaddr;
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
  *(_QWORD *)&v230 = ActiveFrame;
  *((_QWORD *)&v230 + 1) = v13;
  LODWORD(v231) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == v13 )
      goto LABEL_6;
  }
  else if ( !v13 )
  {
LABEL_6:
    LODWORD(v231) = 48;
    goto LABEL_7;
  }
  ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)&v230;
LABEL_7:
  v16 = *(_DWORD *)(v8 + 32) & 0x1800800;
  v154 = v16;
  if ( v6 == 9 )
    goto LABEL_76;
  v198 = 0LL;
  appended = 0;
  v161 = 0;
  v18 = 0;
  if ( (v16 & 0x800008) == 0 )
  {
    LODWORD(v19) = (_DWORD)v9;
    v197 = (__int64 *)v9;
    *(_OWORD *)Src = 0LL;
    v193 = 0LL;
    v149 = 0;
    v163 = 0;
    v172 = NtCurrentPeb();
    v20 = 1;
    v150 = 1;
    ApiSetMap = v172->ApiSetMap;
    SharedData = (int *)v172->SharedData;
    if ( SharedData && (v227 = *SharedData) != 0 )
      v23 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v23 = 2147353476LL;
    if ( *(_BYTE *)v23 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v146 = (unsigned int)RtlGetCurrentServiceSessionId()
           ? (char *)NtCurrentPeb()->SharedData + 555
           : (char *)2147353477;
      if ( (*v146 & 0x20) != 0 )
        LdrpLogEtwEvent(5328, 0, 0, 0, (__int64)v9, 0LL);
    }
    appended = ApiSetResolveToHost((_DWORD)ApiSetMap, (_DWORD)v9, (int)v192 + 88, (unsigned int)&v149, (__int64)Src);
    if ( appended >= 0 && v149 )
    {
      if ( !LOWORD(Src[0]) )
      {
        LdrpLogDllState(0LL, v9, 5330LL);
        goto LABEL_18;
      }
      v142 = (int *)NtCurrentPeb()->SharedData;
      if ( v142 && (v226 = *v142) != 0 )
        v143 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v143 = 2147353476LL;
      if ( *(_BYTE *)v143 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v144 = (unsigned int)RtlGetCurrentServiceSessionId()
             ? (char *)NtCurrentPeb()->SharedData + 555
             : (char *)2147353477;
        if ( (*v144 & 0x20) != 0 )
        {
          v145 = 5329;
LABEL_403:
          LdrpLogEtwEvent(v145, 0, 0, 0, (__int64)v9, 0LL);
        }
      }
    }
    else
    {
      v24 = (int *)NtCurrentPeb()->SharedData;
      if ( v24 && (v218 = *v24) != 0 )
        v25 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v25 = 2147353476LL;
      if ( *(_BYTE *)v25 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v147 = (unsigned int)RtlGetCurrentServiceSessionId()
             ? (char *)NtCurrentPeb()->SharedData + 555
             : (char *)2147353477;
        if ( (*v147 & 0x20) != 0 )
        {
          v145 = 5331;
          goto LABEL_403;
        }
      }
    }
LABEL_18:
    v163 = appended;
    if ( v149 )
    {
      if ( !LOWORD(Src[0]) )
      {
        appended = -1073740671;
        v163 = -1073740671;
        goto LABEL_383;
      }
      LOWORD(v236) = 0;
      v26 = (int *)NtCurrentPeb()->SharedData;
      if ( v26 && (v215 = *v26) != 0 )
        v28 = (__int64)NtCurrentPeb()->SharedData + 30;
      else
        v28 = 2147352624LL;
      v220 = v28;
      v184 = 0LL;
      v212 = 0LL;
      v213 = v28;
      if ( v28 )
      {
        v29 = wcslen((const wchar_t *)v28);
        v30 = 2 * v29;
        v184 = v30;
        v31 = 2 * v29;
        if ( v30 >= 0xFFFE )
        {
          LOWORD(v30) = -4;
          v184 = 65532LL;
          v31 = -4;
        }
        LOWORD(v212) = v30;
        WORD1(v212) = v31 + 2;
      }
      else
      {
        LOWORD(v30) = v212;
      }
      v182 = 0;
      if ( (_WORD)v30 )
      {
        v32 = (unsigned __int16)v30 + (unsigned __int16)v236 + 2;
        v177 = v32;
        v190 = 0LL;
        v33 = 0;
        v170 = 0;
        if ( v32 > WORD1(v236) )
        {
          if ( v32 > 0xFFFE )
          {
            v33 = -1073741562;
            v170 = -1073741562;
          }
          else
          {
            v126 = (v32 + 63) & 0xFFFFFFC0;
            v177 = v126;
            v127 = v126;
            if ( v126 > 0xFFFE )
            {
              LOWORD(v126) = -2;
              v177 = 65534;
              v127 = 65534;
            }
            if ( v237 == &v238 )
            {
              Atom = (void *)RtlpAllocateAtom(v127);
              v190 = Atom;
              if ( Atom && (_WORD)v236 )
              {
                memmove(Atom, v237, (unsigned __int16)v236);
                Atom = v190;
              }
            }
            else
            {
              Atom = (void *)NtdllpReallocateStringRoutine(v127);
              v190 = Atom;
            }
            if ( Atom )
            {
              v237 = Atom;
              WORD1(v236) = v126;
            }
            else
            {
              v33 = -1073741801;
              v170 = -1073741801;
            }
          }
        }
        v182 = v33;
        if ( v33 >= 0 )
        {
          memmove((char *)v237 + (unsigned __int16)v236, (const void *)v28, (unsigned __int16)v30);
          LOWORD(v236) = v30 + v236;
          *((_WORD *)v237 + ((unsigned __int64)(unsigned __int16)v236 >> 1)) = 0;
        }
      }
      v175 = 0;
      v34 = (unsigned __int16)v236 + 22;
      v174 = v34;
      v195 = 0LL;
      v35 = 0;
      v167 = 0;
      if ( v34 > WORD1(v236) )
      {
        if ( v34 > 0xFFFE )
        {
          v35 = -1073741562;
          v167 = -1073741562;
        }
        else
        {
          v129 = ((unsigned __int16)v236 + 85) & 0xFFFFFFC0;
          v174 = v129;
          v130 = v129;
          if ( v129 > 0xFFFE )
          {
            LOWORD(v129) = -2;
            v174 = 65534;
            v130 = 65534;
          }
          if ( v237 == &v238 )
          {
            v131 = (void *)RtlpAllocateAtom(v130);
            v195 = v131;
            if ( v131 && (_WORD)v236 )
              memmove(v131, v237, (unsigned __int16)v236);
          }
          else
          {
            v131 = (void *)NtdllpReallocateStringRoutine(v130);
            v195 = v131;
          }
          if ( v131 )
          {
            v237 = v131;
            WORD1(v236) = v129;
          }
          else
          {
            v35 = -1073741801;
            v167 = -1073741801;
          }
        }
      }
      v175 = v35;
      if ( v35 >= 0 )
      {
        v36 = (char *)v237 + (unsigned __int16)v236;
        *(_OWORD *)v36 = *(_OWORD *)L"\\SYSTEM32\\";
        *((_DWORD *)v36 + 4) = *(_DWORD *)L"2\\";
        LOWORD(v236) = v236 + 20;
        *((_WORD *)v237 + ((unsigned __int64)(unsigned __int16)v236 >> 1)) = 0;
      }
      v176 = 0;
      v37 = LOWORD(Src[0]);
      v38 = LOWORD(Src[0]) + (unsigned __int16)v236 + 2;
      LODWORD(v183) = v38;
      v196 = 0LL;
      appended = 0;
      v168 = 0;
      if ( v38 > WORD1(v236) )
      {
        if ( v38 > 0xFFFE )
        {
          appended = -1073741562;
          v168 = -1073741562;
        }
        else
        {
          v132 = (v38 + 63) & 0xFFFFFFC0;
          LODWORD(v183) = v132;
          v133 = v132;
          if ( v132 > 0xFFFE )
          {
            LOWORD(v132) = -2;
            LODWORD(v183) = 65534;
            v133 = 65534;
          }
          if ( v237 == &v238 )
          {
            v134 = (void *)RtlpAllocateAtom(v133);
            v196 = v134;
            if ( v134 && (_WORD)v236 )
              memmove(v134, v237, (unsigned __int16)v236);
          }
          else
          {
            v134 = (void *)NtdllpReallocateStringRoutine(v133);
            v196 = v134;
          }
          if ( v134 )
          {
            v237 = v134;
            WORD1(v236) = v132;
          }
          else
          {
            appended = -1073741801;
            v168 = -1073741801;
          }
        }
      }
      v176 = appended;
      if ( appended >= 0 )
      {
        memmove((char *)v237 + (unsigned __int16)v236, Src[1], v37);
        LOWORD(v236) = v37 + v236;
        *((_WORD *)v237 + ((unsigned __int64)(unsigned __int16)v236 >> 1)) = 0;
      }
      v163 = appended;
      if ( appended < 0 )
      {
        LODWORD(v19) = (_DWORD)v197;
      }
      else
      {
        ProcessParameters = v172->ProcessParameters;
        if ( !ProcessParameters || (ProcessParameters->Flags & 0x1000) == 0 )
          v20 = 0;
        v150 = v20;
        v19 = &v236;
        v197 = &v236;
      }
      v18 = 0;
    }
    if ( appended >= 0 )
    {
      v40 = 1;
      goto LABEL_46;
    }
LABEL_383:
    v40 = 0;
LABEL_46:
    if ( v40 && v20 && !LdrpIsSecureProcess )
    {
      v114 = RtlDosApplyFileIsolationRedirection_Ustr(
               1,
               (_DWORD)v19,
               (unsigned int)L"\b\n",
               0,
               (__int64)&v193,
               0LL,
               0LL,
               0LL,
               0LL);
      if ( v114 >= 0 )
      {
        v18 = 1;
        v221 = 0LL;
        LODWORD(v172) = 0;
        v151 = 0;
        v191 = 0LL;
        while ( 1 )
        {
          FullPathName_Ustr = RtlGetFullPathName_Ustr(&v193, WORD1(v236), v237, &v221, &v151, &v191);
          v116 = FullPathName_Ustr;
          LODWORD(v172) = FullPathName_Ustr;
          if ( v151
            || FullPathName_Ustr - 1 > 0xFFFD
            || (_DWORD)v191 == 5 && (HIDWORD(v191) & LdrpIllegalCWDDevices) != 0 )
          {
            break;
          }
          if ( FullPathName_Ustr < WORD1(v236) )
          {
            LOWORD(v236) = FullPathName_Ustr;
            break;
          }
          v135 = (_WORD *)RtlpAllocateAtom(FullPathName_Ustr);
          if ( !v135 )
            break;
          if ( &v238 != v237 )
            RtlpSysVolFree((__int64)v237);
          v238 = 0;
          v237 = v135;
          LOWORD(v236) = 0;
          WORD1(v236) = v116;
          *v135 = 0;
        }
        if ( *((_QWORD *)&v193 + 1) )
        {
          RtlpSysVolFree(*((__int64 *)&v193 + 1));
          *((_QWORD *)&v193 + 1) = 0LL;
        }
        LODWORD(v193) = 0;
      }
      if ( v114 != -1072365560 )
      {
        appended = v114;
        v163 = v114;
      }
    }
    v161 = appended;
    v16 = v154;
    v9 = (const void **)v173;
  }
  if ( appended >= 0 )
  {
    v41 = (__int64 *)v9;
    v198 = (__int64 *)v9;
    if ( (_WORD)v236 )
    {
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrutil.c",
        2792,
        (int)"LdrpPreprocessDllName",
        2,
        "DLL %wZ was redirected to %wZ by %s\n",
        (char)v9);
      v16 |= 0x200u;
      v154 = v16;
      if ( v18 )
      {
        v16 |= 4u;
        v154 = v16;
      }
      v41 = &v236;
      v198 = &v236;
    }
    else
    {
      v199 = 0LL;
      v42 = (char *)v9[1];
      v43 = &v42[*(unsigned __int16 *)v9];
      v199 = v43;
      while ( 1 )
      {
        v43 -= 2;
        v199 = v43;
        if ( v43 < v42 )
          break;
        if ( *(_WORD *)v43 == 92 || *(_WORD *)v43 == 47 )
        {
          if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(v9) == 5 )
          {
            appended = LdrpAppendUnicodeStringToFilenameBuffer((const void **)&v236, v9);
            v161 = appended;
          }
          else
          {
            appended = LdrpGetFullPath(v9, &v236);
            v161 = appended;
            if ( appended >= 0 )
            {
              v16 |= 0x600u;
              v154 = v16;
            }
          }
          goto LABEL_61;
        }
      }
      v16 |= 0x20u;
      v154 = v16;
      appended = 0;
      v178 = 0;
      v44 = *(unsigned __int16 *)v9;
      if ( (_WORD)v44 )
      {
        v45 = v44 + (unsigned __int16)v236 + 2;
        v162 = v45;
        v200 = 0LL;
        v169 = 0;
        if ( v45 > WORD1(v236) )
        {
          if ( v45 > 0xFFFE )
          {
            appended = -1073741562;
            v169 = -1073741562;
          }
          else
          {
            v121 = (v45 + 63) & 0xFFFFFFC0;
            v162 = v121;
            v122 = v121;
            if ( v121 > 0xFFFE )
            {
              LOWORD(v121) = -2;
              v162 = 65534;
              v122 = 65534;
            }
            if ( v237 == &v238 )
            {
              v123 = (void *)RtlpAllocateAtom(v122);
              v200 = v123;
              if ( v123 && (_WORD)v236 )
                memmove(v123, v237, (unsigned __int16)v236);
            }
            else
            {
              v123 = (void *)NtdllpReallocateStringRoutine(v122);
              v200 = v123;
            }
            if ( v123 )
            {
              v237 = v123;
              WORD1(v236) = v121;
            }
            else
            {
              appended = -1073741801;
              v169 = -1073741801;
            }
            v9 = (const void **)v173;
          }
        }
        v178 = appended;
        if ( appended >= 0 )
        {
          memmove((char *)v237 + (unsigned __int16)v236, v9[1], *(unsigned __int16 *)v9);
          LOWORD(v236) = *(_WORD *)v9 + v236;
          *((_WORD *)v237 + ((unsigned __int64)(unsigned __int16)v236 >> 1)) = 0;
        }
      }
      v161 = appended;
    }
LABEL_61:
    if ( appended >= 0 )
    {
      v201 = 0LL;
      v152 = 0;
      v46 = v41[1];
      v47 = (_WORD *)(v46 + *(unsigned __int16 *)v41);
      v201 = v47;
      v152 = 0;
      while ( 1 )
      {
        v201 = --v47;
        if ( (unsigned __int64)v47 < v46 )
        {
LABEL_261:
          appended = LdrpAppendUnicodeStringToFilenameBuffer((const void **)&v236, (const void **)L"\b\n");
          v161 = appended;
          goto LABEL_72;
        }
        v48 = *v47;
        if ( *v47 == 46 )
          break;
        if ( v48 == 47 || v48 == 92 )
          goto LABEL_261;
      }
      v152 = 1;
      v49 = (char *)v237 + (unsigned __int16)v236;
      v202 = v49;
      while ( 1 )
      {
        v202 = --v49;
        if ( v49 < v237 || *v49 != 46 )
          break;
        LOWORD(v236) = v236 - 2;
      }
      v49[1] = 0;
    }
  }
LABEL_72:
  if ( appended < 0 )
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrutil.c",
      2853,
      (int)"LdrpPreprocessDllName",
      0,
      "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
      (char)v9);
  v153 = appended;
  if ( appended < 0 )
    goto LABEL_411;
  v10 = v171;
  v6 = v166;
  v8 = v188;
  v11 = (_QWORD *)v181;
LABEL_76:
  if ( (v16 & 0x800000) != 0 )
  {
    appended = LdrpFindOrPrepareEnclaveModule(
                 *(_QWORD *)(v8 + 176),
                 (unsigned int)&v236,
                 *(_QWORD *)(v8 + 16),
                 v16,
                 v192,
                 (__int64)v10,
                 *(_QWORD *)(v8 + 40));
    v153 = appended;
    goto LABEL_411;
  }
  if ( !*v11 )
  {
    v228 = NtdllBaseTag + 2621440;
    Heap = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 2621440), 32LL);
    *v11 = Heap;
    if ( !Heap )
    {
      appended = -1073741801;
      v153 = -1073741801;
      goto LABEL_411;
    }
  }
  v51 = *(_QWORD *)(v8 + 40);
  v184 = v51;
  v52 = v16;
  v162 = v16;
  v183 = *(_QWORD *)(v8 + 16);
  v53 = &v236;
  v189 = &v236;
  v155 = 0;
  v214 = 0LL;
  *v10 = 0LL;
  v165 = 0;
  if ( v6 == 9 )
  {
    v173 = 0LL;
    *((_QWORD *)&v214 + 1) = ModuleNamePlaceholderBuffer;
    v124 = 2 * wcslen(ModuleNamePlaceholderBuffer);
    v173 = v124;
    v125 = v124;
    if ( v124 >= 0xFFFE )
    {
      LOWORD(v124) = -4;
      v173 = 65532LL;
      v125 = -4;
    }
    LOWORD(v214) = v124;
    WORD1(v214) = v125 + 2;
    v53 = (__int64 *)&v214;
    v189 = (__int64 *)&v214;
LABEL_306:
    v155 = -1073741515;
    goto LABEL_189;
  }
  if ( (v16 & 0x20) != 0 )
  {
    appended = LdrpFindLoadedDllByName((unsigned int)&v236, 0, v16, (_DWORD)v10, (__int64)&v165);
    v155 = appended;
    goto LABEL_138;
  }
  if ( (v16 & 0x200) == 0 )
    goto LABEL_306;
  v211 = 0LL;
  for ( i = (unsigned __int16)v236 >> 1; i; --i )
  {
    v55 = *((_WORD *)v237 + i - 1);
    if ( v55 == 92 || v55 == 47 )
      break;
  }
  v56 = 2LL * i;
  *((_QWORD *)&v211 + 1) = (char *)v237 + v56;
  LODWORD(v172) = (unsigned __int16)(v236 - v56);
  LOWORD(v211) = v236 - v56;
  WORD1(v211) = WORD1(v236) - v56;
  v57 = 0;
  v185 = 0;
  v58 = (char *)v237 + v56;
  v203 = (char *)v237 + v56;
  v164 = 0;
  v59 = (unsigned int)v172 >> 1;
  v179 = (unsigned int)v172 >> 1;
  while ( 1 )
  {
    v60 = v59--;
    v179 = v59;
    if ( !v60 )
      break;
    v61 = *(unsigned __int16 *)v58;
    v58 += 2;
    v203 = v58;
    if ( (unsigned int)v61 >= 0x61 )
    {
      if ( (unsigned int)v61 > 0x7A )
      {
        if ( qword_1801CD038 )
        {
          if ( (unsigned __int16)v61 >= 0xC0u )
            LOWORD(v61) = *(_WORD *)(qword_1801CD038
                                   + 2
                                   * ((v61 & 0xF)
                                    + *(unsigned __int16 *)(qword_1801CD038
                                                          + 2LL
                                                          * (((unsigned __int8)v61 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(qword_1801CD038
                                                                                               + 2 * (v61 >> 8))))))
                        + v61;
        }
      }
      else
      {
        LOWORD(v61) = v61 - 32;
      }
    }
    v156 = v61;
    v57 = (unsigned __int16)v61 + 65599 * v57;
    v185 = v57;
  }
  v164 = v57;
  v62 = v57;
  if ( !v57 )
  {
    v62 = 0x80000000;
    v164 = 0x80000000;
  }
  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  v63 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v62 & 0x1F));
  v64 = 0;
  for ( j = *v63; ; j = (_QWORD *)*j )
  {
    if ( j == v63 )
    {
      v73 = v171;
      goto LABEL_126;
    }
    v66 = j - 14;
    if ( v62 != *((_DWORD *)j + 38) )
      continue;
    v67 = v66 + 13;
    if ( (v162 & 8) != 0 && (*v67 & 1) == 0 )
      continue;
    if ( v189 )
      break;
    if ( (*(_DWORD *)v67 & 0x10000000) != 0 || (v205 = 0LL, v206 = 0LL, (_WORD)v172 != *((_WORD *)v66 + 44)) )
    {
LABEL_249:
      v64 = 0;
    }
    else
    {
      v96 = (unsigned __int16 *)*((_QWORD *)&v211 + 1);
      v205 = (unsigned __int16 *)*((_QWORD *)&v211 + 1);
      v97 = (unsigned __int16 *)v66[12];
      v206 = v97;
      while ( (unsigned __int64)v96 < *((_QWORD *)&v211 + 1) + (unsigned __int64)(unsigned __int16)v172 )
      {
        v98 = *v96;
        v99 = *v97;
        if ( (_WORD)v98 != (_WORD)v99 )
        {
          if ( (unsigned int)v98 >= 0x61 )
          {
            if ( (unsigned int)v98 > 0x7A )
            {
              if ( qword_1801CD038 && (unsigned __int16)v98 >= 0xC0u )
                LOWORD(v98) = *(_WORD *)(qword_1801CD038
                                       + 2
                                       * ((v98 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801CD038
                                                              + 2LL
                                                              * (((unsigned __int8)v98 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801CD038 + 2 * (v98 >> 8))))))
                            + v98;
            }
            else
            {
              LOWORD(v98) = v98 - 32;
            }
          }
          v159 = v98;
          if ( (unsigned int)v99 >= 0x61 )
          {
            if ( (unsigned int)v99 > 0x7A )
            {
              if ( qword_1801CD038 && (unsigned __int16)v99 >= 0xC0u )
                LOWORD(v99) = *(_WORD *)(qword_1801CD038
                                       + 2
                                       * ((v99 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801CD038
                                                              + 2LL
                                                              * (((unsigned __int8)v99 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801CD038 + 2 * (v99 >> 8))))))
                            + v99;
            }
            else
            {
              LOWORD(v99) = v99 - 32;
            }
          }
          v160 = v99;
          if ( (_WORD)v98 != (_WORD)v99 )
            goto LABEL_249;
        }
        v205 = ++v96;
        v206 = ++v97;
      }
      v64 = 1;
    }
    if ( v64 )
      goto LABEL_122;
LABEL_173:
    ;
  }
  v194 = 0LL;
  v204 = 0LL;
  if ( (unsigned __int16)v236 != *((unsigned __int16 *)v66 + 36) )
  {
LABEL_170:
    v64 = 0;
    goto LABEL_173;
  }
  v68 = (unsigned __int16 *)v237;
  v194 = (unsigned __int16 *)v237;
  v69 = (unsigned __int16 *)v66[10];
  v204 = v69;
  while ( v68 < (unsigned __int16 *)((char *)v237 + (unsigned __int16)v236) )
  {
    v70 = *v68;
    v71 = *v69;
    if ( (_WORD)v70 != (_WORD)v71 )
    {
      if ( (unsigned int)v70 >= 0x61 )
      {
        if ( (unsigned int)v70 > 0x7A )
        {
          if ( qword_1801CD038 && (unsigned __int16)v70 >= 0xC0u )
            LOWORD(v70) = *(_WORD *)(qword_1801CD038
                                   + 2
                                   * ((v70 & 0xF)
                                    + *(unsigned __int16 *)(qword_1801CD038
                                                          + 2LL
                                                          * (((unsigned __int8)v70 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(qword_1801CD038
                                                                                               + 2 * (v70 >> 8))))))
                        + v70;
        }
        else
        {
          LOWORD(v70) = v70 - 32;
        }
      }
      v157 = v70;
      if ( (unsigned int)v71 >= 0x61 )
      {
        if ( (unsigned int)v71 > 0x7A )
        {
          if ( qword_1801CD038 && (unsigned __int16)v71 >= 0xC0u )
            LOWORD(v71) = *(_WORD *)(qword_1801CD038
                                   + 2
                                   * ((v71 & 0xF)
                                    + *(unsigned __int16 *)(qword_1801CD038
                                                          + 2LL
                                                          * (((unsigned __int8)v71 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(qword_1801CD038
                                                                                               + 2 * (v71 >> 8))))))
                        + v71;
        }
        else
        {
          LOWORD(v71) = v71 - 32;
        }
      }
      v158 = v71;
      if ( (_WORD)v70 != (_WORD)v71 )
        goto LABEL_170;
    }
    v194 = ++v68;
    v204 = ++v69;
  }
  v64 = 1;
LABEL_122:
  v72 = v66[19];
  if ( *(_DWORD *)(v72 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v72 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)v66 + 69);
  v73 = v171;
  *v171 = (__int64)v66;
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
    v165 = *(_DWORD *)(*(_QWORD *)(*v73 + 152) + 56LL);
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
  v53 = v189;
  v75 = 3;
  if ( v189 )
  {
    if ( appended >= 0 )
      v75 = 0;
    v186 = v75;
    v76 = (int *)NtCurrentPeb()->SharedData;
    if ( v76 && (v219 = *v76) != 0 )
      v77 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v77 = 2147353476LL;
    if ( *(_BYTE *)v77 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v117 = (unsigned int)RtlGetCurrentServiceSessionId()
           ? (char *)NtCurrentPeb()->SharedData + 555
           : (char *)2147353477;
      if ( (*v117 & 0x20) != 0 )
        LdrpLogEtwEvent(5280, 0, 0, (unsigned __int8)v186, (__int64)v53, 0LL);
    }
  }
  else
  {
    if ( appended >= 0 )
      v75 = 0;
    v187 = v75;
    v107 = (int *)NtCurrentPeb()->SharedData;
    if ( v107 && (v216 = *v107) != 0 )
      v108 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v108 = 2147353476LL;
    if ( *(_BYTE *)v108 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v109 = (unsigned int)RtlGetCurrentServiceSessionId()
           ? (char *)NtCurrentPeb()->SharedData + 555
           : (char *)2147353477;
      if ( (*v109 & 0x20) != 0 )
        LdrpLogEtwEvent(5280, 0, 0, (unsigned __int8)v187, (__int64)&v211, 0LL);
    }
  }
  v155 = appended;
  LOWORD(v16) = v154;
  v52 = v162;
  v51 = v184;
LABEL_138:
  if ( appended != -1073741515 )
  {
    v78 = v171;
    if ( v165 >= 0 )
    {
      LdrpIncrementModuleLoadCount(*v171);
    }
    else
    {
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrmap.c",
        3390,
        (int)"LdrpFindOrPrepareLoadingModule",
        0,
        "Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
        *v171 + 72);
      appended = -1073741595;
      v155 = -1073741595;
      LdrpDereferenceModule(*v78);
      *v78 = 0LL;
    }
    goto LABEL_141;
  }
  v10 = v171;
LABEL_189:
  *v10 = 0LL;
  v217 = NtdllBaseTag + 0x40000;
  v100 = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8u, *(unsigned __int16 *)v53 + 210LL);
  v101 = v100;
  if ( v100 )
  {
    *(_DWORD *)(v100 + 32) = v52 | 0x8000;
    *(_QWORD *)(v100 + 16) = v183;
    *(_QWORD *)(v100 + 40) = v51;
    *(_QWORD *)(v100 + 48) = v192;
    *(_QWORD *)(v100 + 184) = -1LL;
    *(_QWORD *)(v100 + 8) = v100 + 208;
    *(_WORD *)v100 = *(_WORD *)v53;
    *(_WORD *)(v100 + 2) = *(_WORD *)v53 + 2;
    memmove((void *)(v100 + 208), (const void *)v53[1], *(unsigned __int16 *)v53);
    *(_WORD *)(*(_QWORD *)(v101 + 8) + 2 * ((unsigned __int64)*(unsigned __int16 *)v53 >> 1)) = 0;
    ModuleEntry = LdrpAllocateModuleEntry(v101);
    v78 = v171;
    *v171 = ModuleEntry;
    if ( ModuleEntry )
    {
      v103 = v166;
      *(_DWORD *)(ModuleEntry + 268) = v166;
      if ( v103 == 9 )
        *(_DWORD *)(*v78 + 304) = 1;
      v104 = (int *)NtCurrentPeb()->SharedData;
      if ( v104 && (v224 = *v104) != 0 )
        v105 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v105 = 2147353476LL;
      if ( *(_BYTE *)v105 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v137 = (unsigned int)RtlGetCurrentServiceSessionId()
             ? (char *)NtCurrentPeb()->SharedData + 555
             : (char *)2147353477;
        if ( (*v137 & 0x20) != 0 )
          LdrpLogEtwEvent(5292, 0, 0, 0, v101, 0LL);
      }
      LOWORD(v16) = v154;
      goto LABEL_198;
    }
    RtlFreeHeap(LdrpHeap, 0LL, v101);
  }
  else
  {
    v78 = v171;
  }
  v103 = v166;
LABEL_198:
  v106 = *v78;
  appended = 0;
  if ( !*v78 )
    appended = -1073741801;
  v155 = appended;
  if ( v103 == 9 )
  {
    appended = -1073741515;
    v155 = -1073741515;
  }
  else if ( appended >= 0 )
  {
    appended = LdrpLoadKnownDll(*(_QWORD *)(v106 + 176));
    v155 = appended;
  }
LABEL_141:
  v153 = appended;
  if ( *v78 )
  {
    if ( (v16 & 0x400) != 0 && appended == -1073741515 )
    {
      v136 = *(_QWORD *)(*v78 + 176);
      v234 = v136;
      *(_DWORD *)(v136 + 32) |= 0x4000000u;
      LdrpProcessWork(v136);
      v153 = **(_DWORD **)(v136 + 40);
    }
    v222 = 0LL;
    v180 = 0;
    v79 = 0LL;
    v207 = 0LL;
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( k = 0; ; ++k )
      {
        v180 = k;
        if ( k >= 8 )
          break;
        if ( !SchedulerSharedDataSlot[k] )
        {
          v79 = &SchedulerSharedDataSlot[k];
          v207 = v79;
          break;
        }
      }
    }
    v222 = v79;
    if ( v79 )
      *v79 = &LdrpModuleDatatableLock;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&LdrpModuleDatatableLock);
    v83 = *v78;
    v84 = v83;
    v208 = *v78;
    if ( v83 )
    {
      v85 = *(_QWORD *)(v83 + 176);
      if ( v85 )
      {
        if ( (*(_DWORD *)(v85 + 32) & 0x80000) == 0 && *(_QWORD *)(v85 + 56) != v83 )
        {
          v84 = *(_QWORD *)(v85 + 56);
          v208 = v84;
          *(_QWORD *)(v85 + 56) = v83;
        }
      }
    }
    v86 = (__int64 *)v181;
    *(_DWORD *)(*(_QWORD *)v181 + 24LL) &= ~1u;
    v87 = *v86;
    v209 = *v86;
    v88 = *(_QWORD *)(v84 + 152);
    v89 = *(_QWORD *)(*(_QWORD *)(v188 + 56) + 152LL);
    if ( v89 == v88
      || *(_DWORD *)(v88 + 56) == 9 && (*(_DWORD *)(v88 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v88 - 56LL) & 0x20) != 0) )
    {
LABEL_212:
      v110 = *(_DWORD *)(v88 + 24);
      if ( (unsigned int)(v110 - 2) <= 0xFFFFFFFC )
        *(_DWORD *)(v88 + 24) = v110 - 1;
    }
    else
    {
      v90 = *(_QWORD **)(v89 + 40);
      if ( v90 )
      {
        v91 = *(_QWORD **)(v89 + 40);
        do
        {
          v91 = (_QWORD *)*v91;
          if ( v91[1] == v88 )
            goto LABEL_212;
        }
        while ( v91 != v90 );
      }
      if ( v87 )
      {
LABEL_163:
        v92 = *(__int64 **)(v89 + 40);
        if ( v92 )
        {
          *(_QWORD *)v87 = *v92;
          *v92 = v87;
        }
        else
        {
          *(_QWORD *)v87 = v87;
        }
        *(_QWORD *)(v89 + 40) = v87;
        *(_QWORD *)(v87 + 8) = v88;
        v93 = (_QWORD *)(v87 + 16);
        v94 = *(_QWORD **)(v88 + 48);
        if ( v94 )
        {
          *v93 = *v94;
          *v94 = v93;
        }
        else
        {
          *v93 = v93;
        }
        *(_QWORD *)(v88 + 48) = v93;
        v95 = *(_DWORD *)(v87 + 24);
        *(_QWORD *)(v87 + 24) = v89;
        if ( (v95 & 1) != 0 )
          *(_DWORD *)(v87 + 24) = v89 ^ ((unsigned __int8)v95 ^ (unsigned __int8)v89) & 1;
        v87 = 0LL;
        v209 = 0LL;
        v86 = (__int64 *)v181;
      }
      else
      {
        v225 = NtdllBaseTag + 2359296;
        v118 = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 2359296), 32LL);
        v87 = v118;
        v209 = v118;
        if ( v118 )
        {
          *(_DWORD *)(v118 + 24) |= 1u;
          goto LABEL_163;
        }
        MEMORY[0] = -1073741801;
        v87 = 0LL;
        v86 = (__int64 *)v181;
      }
    }
    v223 = v87;
    *v86 = v87;
    appended = v153;
    if ( v153 == -1073741515 )
    {
      if ( (v154 & 0x400) == 0 )
      {
        LdrpQueueWork(*(_QWORD *)(v84 + 176));
        appended = 0;
        v153 = 0;
        v86 = (__int64 *)v181;
        goto LABEL_217;
      }
LABEL_216:
      if ( v153 >= 0 )
        goto LABEL_217;
    }
    else
    {
      if ( v153 != -1073741267 )
        goto LABEL_216;
      appended = 0;
      v153 = 0;
LABEL_217:
      v12 = 1;
    }
    if ( v12 )
    {
      v111 = v188;
      v112 = *(_DWORD *)(v188 + 108);
      if ( v112 )
      {
        if ( *v86 || *(int *)(*(_QWORD *)(v84 + 152) + 56LL) >= 2 )
          *(_DWORD *)(v188 + 108) = v112 - 1;
      }
      else if ( *(int *)(*(_QWORD *)(v84 + 152) + 56LL) < 2 )
      {
        *(_QWORD *)(v188 + 80) = v84;
        *(_DWORD *)(v111 + 108) = 1;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v111 + 56) + 152LL) + 56LL) = 3;
        appended = 259;
        v153 = 259;
      }
    }
    v113 = *(_QWORD *)(v84 + 152);
    if ( *(_DWORD *)(v113 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v113 - 56LL) & 0x20) == 0 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v84 + 276), 0xFFFFFFFF) == 1 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v119 = *(_QWORD *)(v84 + 160);
        v120 = *(_QWORD **)(v84 + 168);
        if ( *(_QWORD *)(v119 + 8) != v84 + 160 || *v120 != v84 + 160 )
          __fastfail(3u);
        *v120 = v119;
        *(_QWORD *)(v119 + 8) = v120;
        v138 = *(_QWORD **)(v84 + 152);
        v139 = (_QWORD *)*v138;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *(_WORD *)(v84 + 110) )
          LdrpReleaseTlsEntry(v84, 0LL);
        LdrpUnmapModule(v84, v140);
        v141 = *(_QWORD *)(v84 + 136);
        if ( (unsigned __int64)(v141 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v141);
        if ( *(_QWORD *)(v84 + 80) )
          LdrpFreeUnicodeString(v84 + 72);
        RtlFreeHeap(LdrpHeap, 0LL, v84);
        if ( v139 == v138 )
          LdrpDestroyNode((__int64)v138);
      }
      appended = v153;
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v84 != *v78 )
    {
      LdrpFreeReplacedModule();
      *v78 = v84;
    }
  }
LABEL_411:
  RtlDeactivateActivationContextUnsafeFast(v229);
  if ( &v238 != v237 )
    RtlpSysVolFree((__int64)v237);
  return (unsigned int)appended;
}
