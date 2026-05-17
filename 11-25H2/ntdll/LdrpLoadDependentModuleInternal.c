/*
 * XREFs of LdrpLoadDependentModuleInternal @ 0x18004C180
 * Callers:
 *     LdrpSnapModule @ 0x180012B70 (LdrpSnapModule.c)
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModuleW @ 0x1801196EC (LdrpLoadDependentModuleW.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     LdrpDestroyNode @ 0x180008BB8 (LdrpDestroyNode.c)
 *     LdrpReleaseTlsEntry @ 0x180008C0C (LdrpReleaseTlsEntry.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     ApiSetResolveToHost @ 0x180016CA0 (ApiSetResolveToHost.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180016E20 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
 *     RtlReleaseActivationContext @ 0x18001A130 (RtlReleaseActivationContext.c)
 *     LdrpUnmapModule @ 0x180024A44 (LdrpUnmapModule.c)
 *     LdrpQueueWork @ 0x18003E480 (LdrpQueueWork.c)
 *     LdrpIncrementModuleLoadCount @ 0x180047B20 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18004E410 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     LdrpAllocateModuleEntry @ 0x18004F520 (LdrpAllocateModuleEntry.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     LdrpLoadKnownDll @ 0x18006CF10 (LdrpLoadKnownDll.c)
 *     LdrpFreeUnicodeString @ 0x18006F7E0 (LdrpFreeUnicodeString.c)
 *     LdrpProcessWork @ 0x18006FC70 (LdrpProcessWork.c)
 *     LdrpGetFullPath @ 0x180070F10 (LdrpGetFullPath.c)
 *     LdrpLogDllState @ 0x180071900 (LdrpLogDllState.c)
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     LdrpFindLoadedDllByName @ 0x18007A380 (LdrpFindLoadedDllByName.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A3370 (RtlDetermineDosPathNameType_Ustr.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x1800CBB70 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D8748 (LdrpFindOrPrepareEnclaveModule.c)
 *     LdrpFreeReplacedModule @ 0x1800D9148 (LdrpFreeReplacedModule.c)
 *     NtdllpReallocateStringRoutine @ 0x1801204A8 (NtdllpReallocateStringRoutine.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadDependentModuleInternal(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        _QWORD *a6)
{
  int v6; // r12d
  __int64 v8; // r14
  __m128i *v9; // r15
  __int64 *v10; // rbx
  _QWORD *v11; // r13
  __int64 v12; // r9
  int v13; // edi
  __int64 v14; // rdx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  unsigned __int64 ActiveFrame; // rcx
  int v17; // esi
  int appended; // ebx
  char v19; // r13
  __m128i *v20; // r14
  char v21; // r12
  __int64 ApiSetMap; // rsi
  int *SharedData; // rax
  __int64 v24; // rcx
  int *v25; // rax
  __int64 v26; // rcx
  int *v27; // rax
  __int64 v29; // rsi
  size_t v30; // rax
  unsigned __int64 v31; // rbx
  __int16 v32; // ax
  unsigned int v33; // ecx
  int v34; // r14d
  unsigned int v35; // ecx
  int v36; // ebx
  char *v37; // rdx
  size_t v38; // rsi
  unsigned int v39; // ecx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  int v41; // eax
  __m128i *v42; // r12
  unsigned __int64 v43; // rdx
  _WORD *v44; // rax
  int v45; // eax
  unsigned int v46; // edx
  unsigned __int64 v47; // rdx
  _WORD *v48; // rax
  __int16 v49; // cx
  _WORD *v50; // rcx
  __int64 Heap; // rax
  __int64 v52; // r13
  int v53; // r15d
  unsigned __int16 *v54; // r14
  unsigned __int16 i; // dx
  __int16 v56; // r8
  __int64 v57; // rcx
  int v58; // r9d
  char *v59; // r11
  unsigned int v60; // r10d
  unsigned int v61; // eax
  unsigned __int64 v62; // r8
  unsigned int v63; // r15d
  _QWORD **v64; // r12
  char v65; // cl
  _QWORD *j; // r14
  _QWORD *v67; // rsi
  _BYTE *v68; // rax
  unsigned __int16 *v69; // r10
  unsigned __int16 *v70; // rbx
  unsigned __int64 v71; // r8
  unsigned __int64 v72; // r9
  __int64 v73; // rax
  __int64 *v74; // rdx
  int v75; // eax
  int v76; // eax
  int *v77; // rax
  __int64 v78; // rcx
  __int64 *v79; // r13
  _QWORD *v80; // rcx
  _QWORD *SchedulerSharedDataSlot; // r9
  unsigned int k; // edx
  __int64 v84; // rax
  __int64 v85; // rsi
  __int64 v86; // rcx
  __int64 *v87; // r8
  __int64 v88; // rcx
  __int64 v89; // rbx
  __int64 v90; // r14
  _QWORD *v91; // rdx
  _QWORD *v92; // rax
  __int64 *v93; // rdx
  _QWORD *v94; // rdx
  _QWORD *v95; // r8
  int v96; // edx
  unsigned __int16 *v97; // r10
  unsigned __int16 *v98; // r11
  unsigned __int64 v99; // r8
  unsigned __int64 v100; // r9
  __int64 v101; // rax
  __int64 v102; // rbx
  __int64 ModuleEntry; // rax
  int v104; // r14d
  int *v105; // rax
  __int64 v106; // rax
  __int64 v107; // rcx
  int *v108; // rax
  __int64 v109; // rcx
  char *v110; // rcx
  int v111; // edx
  __int64 v112; // rdx
  int v113; // ecx
  __int64 v114; // rax
  int v115; // r14d
  unsigned int FullPathName_Ustr; // esi
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
  volatile signed __int32 *v141; // rcx
  int *v142; // rax
  __int64 v143; // rcx
  char *v144; // rcx
  __int16 v145; // cx
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
  unsigned __int16 *v189; // [rsp+118h] [rbp-3A0h]
  void *v190; // [rsp+120h] [rbp-398h]
  __int64 v191; // [rsp+128h] [rbp-390h] BYREF
  __int64 v192; // [rsp+130h] [rbp-388h]
  __int128 v193; // [rsp+138h] [rbp-380h] BYREF
  unsigned __int16 *v194; // [rsp+148h] [rbp-370h]
  void *v195; // [rsp+150h] [rbp-368h]
  void *v196; // [rsp+158h] [rbp-360h]
  __m128i *v197; // [rsp+160h] [rbp-358h]
  __m128i *v198; // [rsp+168h] [rbp-350h]
  _WORD *v199; // [rsp+170h] [rbp-348h]
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
  _DWORD v236[2]; // [rsp+360h] [rbp-158h] BYREF
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
  v236[1] = 0;
  memset_thunk_772440563353939046(v239, 0, 0xFEuLL);
  v237 = &v238;
  v13 = 0;
  v236[0] = 0x1000000;
  v238 = 0;
  v229[0] = 72LL;
  v229[1] = 1LL;
  v230 = 0LL;
  v231 = 0LL;
  v232 = 0LL;
  v233 = 0LL;
  v14 = *(_QWORD *)(a3 + 136);
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  *((_QWORD *)&v231 + 1) = ~ActiveFrame;
  *(_QWORD *)&v232 = ~v14;
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
  *((_QWORD *)&v230 + 1) = v14;
  LODWORD(v231) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == v14 )
      goto LABEL_6;
  }
  else if ( !v14 )
  {
LABEL_6:
    LODWORD(v231) = 48;
    goto LABEL_7;
  }
  ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)&v230;
LABEL_7:
  v17 = *(_DWORD *)(v8 + 32) & 0x1800800;
  v154 = v17;
  if ( v6 == 9 )
    goto LABEL_76;
  v198 = 0LL;
  appended = 0;
  v161 = 0;
  v19 = 0;
  if ( (v17 & 0x800008) == 0 )
  {
    v20 = v9;
    v197 = v9;
    *(_OWORD *)Src = 0LL;
    v193 = 0LL;
    v149 = 0;
    v163 = 0;
    v172 = NtCurrentPeb();
    v21 = 1;
    v150 = 1;
    ApiSetMap = (__int64)v172->ApiSetMap;
    SharedData = (int *)v172->SharedData;
    if ( SharedData && (v227 = *SharedData) != 0 )
      v24 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v24 = 2147353476LL;
    if ( *(_BYTE *)v24 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v146 = (unsigned int)RtlGetCurrentServiceSessionId()
           ? (char *)NtCurrentPeb()->SharedData + 555
           : (char *)2147353477;
      if ( (*v146 & 0x20) != 0 )
        LdrpLogEtwEvent(5328, 0LL, 0, 0, (unsigned __int16 *)v9, 0LL);
    }
    appended = ApiSetResolveToHost(ApiSetMap, (unsigned __int16 *)v9, v192 + 88, &v149, (__int64)Src);
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
          LdrpLogEtwEvent(v145, 0LL, 0, 0, (unsigned __int16 *)v9, 0LL);
        }
      }
    }
    else
    {
      v25 = (int *)NtCurrentPeb()->SharedData;
      if ( v25 && (v218 = *v25) != 0 )
        v26 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v26 = 2147353476LL;
      if ( *(_BYTE *)v26 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
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
      LOWORD(v236[0]) = 0;
      v27 = (int *)NtCurrentPeb()->SharedData;
      if ( v27 && (v215 = *v27) != 0 )
        v29 = (__int64)NtCurrentPeb()->SharedData + 30;
      else
        v29 = 2147352624LL;
      v220 = v29;
      v184 = 0LL;
      v212 = 0LL;
      v213 = v29;
      if ( v29 )
      {
        v30 = wcslen((const wchar_t *)v29);
        v31 = 2 * v30;
        v184 = v31;
        v32 = 2 * v30;
        if ( v31 >= 0xFFFE )
        {
          LOWORD(v31) = -4;
          v184 = 65532LL;
          v32 = -4;
        }
        LOWORD(v212) = v31;
        WORD1(v212) = v32 + 2;
      }
      else
      {
        LOWORD(v31) = v212;
      }
      v182 = 0;
      if ( (_WORD)v31 )
      {
        v33 = (unsigned __int16)v31 + LOWORD(v236[0]) + 2;
        v177 = v33;
        v190 = 0LL;
        v34 = 0;
        v170 = 0;
        if ( v33 > HIWORD(v236[0]) )
        {
          if ( v33 > 0xFFFE )
          {
            v34 = -1073741562;
            v170 = -1073741562;
          }
          else
          {
            v126 = (v33 + 63) & 0xFFFFFFC0;
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
              Atom = (void *)RtlpAllocateAtom();
              v190 = Atom;
              if ( Atom && LOWORD(v236[0]) )
              {
                memmove(Atom, v237, LOWORD(v236[0]));
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
              HIWORD(v236[0]) = v126;
            }
            else
            {
              v34 = -1073741801;
              v170 = -1073741801;
            }
          }
        }
        v182 = v34;
        if ( v34 >= 0 )
        {
          memmove((char *)v237 + LOWORD(v236[0]), (const void *)v29, (unsigned __int16)v31);
          LOWORD(v236[0]) += v31;
          *((_WORD *)v237 + ((unsigned __int64)LOWORD(v236[0]) >> 1)) = 0;
        }
      }
      v175 = 0;
      v35 = LOWORD(v236[0]) + 22;
      v174 = v35;
      v195 = 0LL;
      v36 = 0;
      v167 = 0;
      if ( v35 > HIWORD(v236[0]) )
      {
        if ( v35 > 0xFFFE )
        {
          v36 = -1073741562;
          v167 = -1073741562;
        }
        else
        {
          v129 = (LOWORD(v236[0]) + 85) & 0xFFFFFFC0;
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
            v131 = (void *)RtlpAllocateAtom();
            v195 = v131;
            if ( v131 && LOWORD(v236[0]) )
              memmove(v131, v237, LOWORD(v236[0]));
          }
          else
          {
            v131 = (void *)NtdllpReallocateStringRoutine(v130);
            v195 = v131;
          }
          if ( v131 )
          {
            v237 = v131;
            HIWORD(v236[0]) = v129;
          }
          else
          {
            v36 = -1073741801;
            v167 = -1073741801;
          }
        }
      }
      v175 = v36;
      if ( v36 >= 0 )
      {
        v37 = (char *)v237 + LOWORD(v236[0]);
        *(_OWORD *)v37 = *(_OWORD *)L"\\SYSTEM32\\";
        *((_DWORD *)v37 + 4) = *(_DWORD *)L"2\\";
        LOWORD(v236[0]) += 20;
        *((_WORD *)v237 + ((unsigned __int64)LOWORD(v236[0]) >> 1)) = 0;
      }
      v176 = 0;
      v38 = LOWORD(Src[0]);
      v39 = LOWORD(Src[0]) + LOWORD(v236[0]) + 2;
      LODWORD(v183) = v39;
      v196 = 0LL;
      appended = 0;
      v168 = 0;
      if ( v39 > HIWORD(v236[0]) )
      {
        if ( v39 > 0xFFFE )
        {
          appended = -1073741562;
          v168 = -1073741562;
        }
        else
        {
          v132 = (v39 + 63) & 0xFFFFFFC0;
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
            v134 = (void *)RtlpAllocateAtom();
            v196 = v134;
            if ( v134 && LOWORD(v236[0]) )
              memmove(v134, v237, LOWORD(v236[0]));
          }
          else
          {
            v134 = (void *)NtdllpReallocateStringRoutine(v133);
            v196 = v134;
          }
          if ( v134 )
          {
            v237 = v134;
            HIWORD(v236[0]) = v132;
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
        memmove((char *)v237 + LOWORD(v236[0]), Src[1], v38);
        LOWORD(v236[0]) += v38;
        *((_WORD *)v237 + ((unsigned __int64)LOWORD(v236[0]) >> 1)) = 0;
      }
      v163 = appended;
      if ( appended < 0 )
      {
        v20 = v197;
      }
      else
      {
        ProcessParameters = v172->ProcessParameters;
        if ( !ProcessParameters || (ProcessParameters->Flags & 0x1000) == 0 )
          v21 = 0;
        v150 = v21;
        v20 = (__m128i *)v236;
        v197 = (__m128i *)v236;
      }
      v19 = 0;
    }
    if ( appended >= 0 )
    {
      v41 = 1;
      goto LABEL_46;
    }
LABEL_383:
    v41 = 0;
LABEL_46:
    if ( v41 && v21 && !LdrpIsSecureProcess )
    {
      v115 = RtlDosApplyFileIsolationRedirection_Ustr(1, v20, (__m128i *)L"\b\n", 0LL, &v193, 0LL, 0LL, 0LL, 0LL);
      if ( v115 >= 0 )
      {
        v19 = 1;
        v221 = 0LL;
        LODWORD(v172) = 0;
        v151 = 0;
        v191 = 0LL;
        while ( 1 )
        {
          FullPathName_Ustr = RtlGetFullPathName_Ustr(
                                (unsigned __int16 *)&v193,
                                HIWORD(v236[0]),
                                v237,
                                &v221,
                                &v151,
                                &v191);
          LODWORD(v172) = FullPathName_Ustr;
          if ( v151
            || FullPathName_Ustr - 1 > 0xFFFD
            || (_DWORD)v191 == 5 && (HIDWORD(v191) & LdrpIllegalCWDDevices) != 0 )
          {
            break;
          }
          if ( FullPathName_Ustr < HIWORD(v236[0]) )
          {
            LOWORD(v236[0]) = FullPathName_Ustr;
            break;
          }
          v135 = (_WORD *)RtlpAllocateAtom();
          if ( !v135 )
            break;
          if ( &v238 != v237 )
            RtlpSysVolFree((__int64)v237);
          v238 = 0;
          v237 = v135;
          LOWORD(v236[0]) = 0;
          HIWORD(v236[0]) = FullPathName_Ustr;
          *v135 = 0;
        }
        if ( *((_QWORD *)&v193 + 1) )
        {
          RtlpSysVolFree(*((__int64 *)&v193 + 1));
          *((_QWORD *)&v193 + 1) = 0LL;
        }
        LODWORD(v193) = 0;
      }
      if ( v115 != -1072365560 )
      {
        appended = v115;
        v163 = v115;
      }
    }
    v161 = appended;
    v17 = v154;
    v9 = (__m128i *)v173;
  }
  if ( appended >= 0 )
  {
    v42 = v9;
    v198 = v9;
    if ( LOWORD(v236[0]) )
    {
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrutil.c",
        2792,
        (int)"LdrpPreprocessDllName",
        2,
        "DLL %wZ was redirected to %wZ by %s\n",
        (char)v9);
      v17 |= 0x200u;
      v154 = v17;
      if ( v19 )
      {
        v17 |= 4u;
        v154 = v17;
      }
      v42 = (__m128i *)v236;
      v198 = (__m128i *)v236;
    }
    else
    {
      v199 = 0LL;
      v43 = v9->m128i_u64[1];
      v44 = (_WORD *)(v43 + v9->m128i_u16[0]);
      v199 = v44;
      while ( 1 )
      {
        v199 = --v44;
        if ( (unsigned __int64)v44 < v43 )
          break;
        if ( *v44 == 92 || *v44 == 47 )
        {
          if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(v9, v43, ActivationContextStackPointer, v12) == 5 )
          {
            appended = LdrpAppendUnicodeStringToFilenameBuffer(v236, v9);
            v161 = appended;
          }
          else
          {
            appended = LdrpGetFullPath(v9, v236);
            v161 = appended;
            if ( appended >= 0 )
            {
              v17 |= 0x600u;
              v154 = v17;
            }
          }
          goto LABEL_61;
        }
      }
      v17 |= 0x20u;
      v154 = v17;
      appended = 0;
      v178 = 0;
      v45 = v9->m128i_u16[0];
      if ( (_WORD)v45 )
      {
        v46 = v45 + LOWORD(v236[0]) + 2;
        v162 = v46;
        v200 = 0LL;
        v169 = 0;
        if ( v46 > HIWORD(v236[0]) )
        {
          if ( v46 > 0xFFFE )
          {
            appended = -1073741562;
            v169 = -1073741562;
          }
          else
          {
            v121 = (v46 + 63) & 0xFFFFFFC0;
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
              v123 = (void *)RtlpAllocateAtom();
              v200 = v123;
              if ( v123 && LOWORD(v236[0]) )
                memmove(v123, v237, LOWORD(v236[0]));
            }
            else
            {
              v123 = (void *)NtdllpReallocateStringRoutine(v122);
              v200 = v123;
            }
            if ( v123 )
            {
              v237 = v123;
              HIWORD(v236[0]) = v121;
            }
            else
            {
              appended = -1073741801;
              v169 = -1073741801;
            }
            v9 = (__m128i *)v173;
          }
        }
        v178 = appended;
        if ( appended >= 0 )
        {
          memmove((char *)v237 + LOWORD(v236[0]), (const void *)v9->m128i_i64[1], v9->m128i_u16[0]);
          LOWORD(v236[0]) += v9->m128i_i16[0];
          *((_WORD *)v237 + ((unsigned __int64)LOWORD(v236[0]) >> 1)) = 0;
        }
      }
      v161 = appended;
    }
LABEL_61:
    if ( appended >= 0 )
    {
      v201 = 0LL;
      v152 = 0;
      v47 = v42->m128i_u64[1];
      v48 = (_WORD *)(v47 + v42->m128i_u16[0]);
      v201 = v48;
      v152 = 0;
      while ( 1 )
      {
        v201 = --v48;
        if ( (unsigned __int64)v48 < v47 )
        {
LABEL_261:
          appended = LdrpAppendUnicodeStringToFilenameBuffer(v236, L"\b\n");
          v161 = appended;
          goto LABEL_72;
        }
        v49 = *v48;
        if ( *v48 == 46 )
          break;
        if ( v49 == 47 || v49 == 92 )
          goto LABEL_261;
      }
      v152 = 1;
      v50 = (char *)v237 + LOWORD(v236[0]);
      v202 = v50;
      while ( 1 )
      {
        v202 = --v50;
        if ( v50 < v237 || *v50 != 46 )
          break;
        LOWORD(v236[0]) -= 2;
      }
      v50[1] = 0;
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
  if ( (v17 & 0x800000) != 0 )
  {
    appended = LdrpFindOrPrepareEnclaveModule(
                 *(_QWORD *)(v8 + 176),
                 (unsigned int)v236,
                 *(_QWORD *)(v8 + 16),
                 v17,
                 v192,
                 (__int64)v10,
                 *(_QWORD *)(v8 + 40));
    v153 = appended;
    goto LABEL_411;
  }
  if ( !*v11 )
  {
    v228 = NtdllBaseTag + 2621440;
    Heap = RtlAllocateHeap((void *)LdrpHeap);
    *v11 = Heap;
    if ( !Heap )
    {
      appended = -1073741801;
      v153 = -1073741801;
      goto LABEL_411;
    }
  }
  v52 = *(_QWORD *)(v8 + 40);
  v184 = v52;
  v53 = v17;
  v162 = v17;
  v183 = *(_QWORD *)(v8 + 16);
  v54 = (unsigned __int16 *)v236;
  v189 = (unsigned __int16 *)v236;
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
    v54 = (unsigned __int16 *)&v214;
    v189 = (unsigned __int16 *)&v214;
LABEL_306:
    v155 = -1073741515;
    goto LABEL_189;
  }
  if ( (v17 & 0x20) != 0 )
  {
    appended = LdrpFindLoadedDllByName((unsigned int)v236, 0, v17, (_DWORD)v10, (__int64)&v165);
    v155 = appended;
    goto LABEL_138;
  }
  if ( (v17 & 0x200) == 0 )
    goto LABEL_306;
  v211 = 0LL;
  for ( i = LOWORD(v236[0]) >> 1; i; --i )
  {
    v56 = *((_WORD *)v237 + i - 1);
    if ( v56 == 92 || v56 == 47 )
      break;
  }
  v57 = 2LL * i;
  *((_QWORD *)&v211 + 1) = (char *)v237 + v57;
  LODWORD(v172) = (unsigned __int16)(LOWORD(v236[0]) - v57);
  LOWORD(v211) = LOWORD(v236[0]) - v57;
  WORD1(v211) = HIWORD(v236[0]) - v57;
  v58 = 0;
  v185 = 0;
  v59 = (char *)v237 + v57;
  v203 = (char *)v237 + v57;
  v164 = 0;
  v60 = (unsigned int)v172 >> 1;
  v179 = (unsigned int)v172 >> 1;
  while ( 1 )
  {
    v61 = v60--;
    v179 = v60;
    if ( !v61 )
      break;
    v62 = *(unsigned __int16 *)v59;
    v59 += 2;
    v203 = v59;
    if ( (unsigned int)v62 >= 0x61 )
    {
      if ( (unsigned int)v62 > 0x7A )
      {
        if ( qword_1801CF038 )
        {
          if ( (unsigned __int16)v62 >= 0xC0u )
            LOWORD(v62) = *(_WORD *)(qword_1801CF038
                                   + 2
                                   * ((v62 & 0xF)
                                    + *(unsigned __int16 *)(qword_1801CF038
                                                          + 2LL
                                                          * (((unsigned __int8)v62 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(qword_1801CF038
                                                                                               + 2 * (v62 >> 8))))))
                        + v62;
        }
      }
      else
      {
        LOWORD(v62) = v62 - 32;
      }
    }
    v156 = v62;
    v58 = (unsigned __int16)v62 + 65599 * v58;
    v185 = v58;
  }
  v164 = v58;
  v63 = v58;
  if ( !v58 )
  {
    v63 = 0x80000000;
    v164 = 0x80000000;
  }
  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  v64 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v63 & 0x1F));
  v65 = 0;
  for ( j = *v64; ; j = (_QWORD *)*j )
  {
    if ( j == v64 )
    {
      v74 = v171;
      goto LABEL_126;
    }
    v67 = j - 14;
    if ( v63 != *((_DWORD *)j + 38) )
      continue;
    v68 = v67 + 13;
    if ( (v162 & 8) != 0 && (*v68 & 1) == 0 )
      continue;
    if ( v189 )
      break;
    if ( (*(_DWORD *)v68 & 0x10000000) != 0 || (v205 = 0LL, v206 = 0LL, (_WORD)v172 != *((_WORD *)v67 + 44)) )
    {
LABEL_249:
      v65 = 0;
    }
    else
    {
      v97 = (unsigned __int16 *)*((_QWORD *)&v211 + 1);
      v205 = (unsigned __int16 *)*((_QWORD *)&v211 + 1);
      v98 = (unsigned __int16 *)v67[12];
      v206 = v98;
      while ( (unsigned __int64)v97 < *((_QWORD *)&v211 + 1) + (unsigned __int64)(unsigned __int16)v172 )
      {
        v99 = *v97;
        v100 = *v98;
        if ( (_WORD)v99 != (_WORD)v100 )
        {
          if ( (unsigned int)v99 >= 0x61 )
          {
            if ( (unsigned int)v99 > 0x7A )
            {
              if ( qword_1801CF038 && (unsigned __int16)v99 >= 0xC0u )
                LOWORD(v99) = *(_WORD *)(qword_1801CF038
                                       + 2
                                       * ((v99 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801CF038
                                                              + 2LL
                                                              * (((unsigned __int8)v99 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801CF038 + 2 * (v99 >> 8))))))
                            + v99;
            }
            else
            {
              LOWORD(v99) = v99 - 32;
            }
          }
          v159 = v99;
          if ( (unsigned int)v100 >= 0x61 )
          {
            if ( (unsigned int)v100 > 0x7A )
            {
              if ( qword_1801CF038 && (unsigned __int16)v100 >= 0xC0u )
                LOWORD(v100) = *(_WORD *)(qword_1801CF038
                                        + 2
                                        * ((v100 & 0xF)
                                         + *(unsigned __int16 *)(qword_1801CF038
                                                               + 2LL
                                                               * (((unsigned __int8)v100 >> 4)
                                                                + (unsigned int)*(unsigned __int16 *)(qword_1801CF038 + 2 * (v100 >> 8))))))
                             + v100;
            }
            else
            {
              LOWORD(v100) = v100 - 32;
            }
          }
          v160 = v100;
          if ( (_WORD)v99 != (_WORD)v100 )
            goto LABEL_249;
        }
        v205 = ++v97;
        v206 = ++v98;
      }
      v65 = 1;
    }
    if ( v65 )
      goto LABEL_122;
LABEL_173:
    ;
  }
  v194 = 0LL;
  v204 = 0LL;
  if ( LOWORD(v236[0]) != *((unsigned __int16 *)v67 + 36) )
  {
LABEL_170:
    v65 = 0;
    goto LABEL_173;
  }
  v69 = (unsigned __int16 *)v237;
  v194 = (unsigned __int16 *)v237;
  v70 = (unsigned __int16 *)v67[10];
  v204 = v70;
  while ( v69 < (unsigned __int16 *)((char *)v237 + LOWORD(v236[0])) )
  {
    v71 = *v69;
    v72 = *v70;
    if ( (_WORD)v71 != (_WORD)v72 )
    {
      if ( (unsigned int)v71 >= 0x61 )
      {
        if ( (unsigned int)v71 > 0x7A )
        {
          if ( qword_1801CF038 && (unsigned __int16)v71 >= 0xC0u )
            LOWORD(v71) = *(_WORD *)(qword_1801CF038
                                   + 2
                                   * ((v71 & 0xF)
                                    + *(unsigned __int16 *)(qword_1801CF038
                                                          + 2LL
                                                          * (((unsigned __int8)v71 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(qword_1801CF038
                                                                                               + 2 * (v71 >> 8))))))
                        + v71;
        }
        else
        {
          LOWORD(v71) = v71 - 32;
        }
      }
      v157 = v71;
      if ( (unsigned int)v72 >= 0x61 )
      {
        if ( (unsigned int)v72 > 0x7A )
        {
          if ( qword_1801CF038 && (unsigned __int16)v72 >= 0xC0u )
            LOWORD(v72) = *(_WORD *)(qword_1801CF038
                                   + 2
                                   * ((v72 & 0xF)
                                    + *(unsigned __int16 *)(qword_1801CF038
                                                          + 2LL
                                                          * (((unsigned __int8)v72 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(qword_1801CF038
                                                                                               + 2 * (v72 >> 8))))))
                        + v72;
        }
        else
        {
          LOWORD(v72) = v72 - 32;
        }
      }
      v158 = v72;
      if ( (_WORD)v71 != (_WORD)v72 )
        goto LABEL_170;
    }
    v194 = ++v69;
    v204 = ++v70;
  }
  v65 = 1;
LABEL_122:
  v73 = v67[19];
  if ( *(_DWORD *)(v73 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v73 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)v67 + 69);
  v74 = v171;
  *v171 = (__int64)v67;
LABEL_126:
  if ( v65 )
  {
    appended = 0;
    v75 = 1;
  }
  else
  {
    appended = -1073741515;
    v75 = 0;
  }
  if ( v75 )
    v165 = *(_DWORD *)(*(_QWORD *)(*v74 + 152) + 56LL);
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
  v54 = v189;
  v76 = 3;
  if ( v189 )
  {
    if ( appended >= 0 )
      v76 = 0;
    v186 = v76;
    v77 = (int *)NtCurrentPeb()->SharedData;
    if ( v77 && (v219 = *v77) != 0 )
      v78 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v78 = 2147353476LL;
    if ( *(_BYTE *)v78 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v117 = (unsigned int)RtlGetCurrentServiceSessionId()
           ? (char *)NtCurrentPeb()->SharedData + 555
           : (char *)2147353477;
      if ( (*v117 & 0x20) != 0 )
        LdrpLogEtwEvent(5280, 0LL, 0, v186, v54, 0LL);
    }
  }
  else
  {
    if ( appended >= 0 )
      v76 = 0;
    v187 = v76;
    v108 = (int *)NtCurrentPeb()->SharedData;
    if ( v108 && (v216 = *v108) != 0 )
      v109 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v109 = 2147353476LL;
    if ( *(_BYTE *)v109 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v110 = (unsigned int)RtlGetCurrentServiceSessionId()
           ? (char *)NtCurrentPeb()->SharedData + 555
           : (char *)2147353477;
      if ( (*v110 & 0x20) != 0 )
        LdrpLogEtwEvent(5280, 0LL, 0, v187, (unsigned __int16 *)&v211, 0LL);
    }
  }
  v155 = appended;
  LOWORD(v17) = v154;
  v53 = v162;
  v52 = v184;
LABEL_138:
  if ( appended != -1073741515 )
  {
    v79 = v171;
    if ( v165 >= 0 )
    {
      LdrpIncrementModuleLoadCount(*v171);
    }
    else
    {
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrmap.c",
        3400,
        (int)"LdrpFindOrPrepareLoadingModule",
        0,
        "Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
        *v171 + 72);
      appended = -1073741595;
      v155 = -1073741595;
      LdrpDereferenceModule(*v79);
      *v79 = 0LL;
    }
    goto LABEL_141;
  }
  v10 = v171;
LABEL_189:
  *v10 = 0LL;
  v217 = NtdllBaseTag + 0x40000;
  v101 = RtlAllocateHeap((void *)LdrpHeap);
  v102 = v101;
  if ( v101 )
  {
    *(_DWORD *)(v101 + 32) = v53 | 0x8000;
    *(_QWORD *)(v101 + 16) = v183;
    *(_QWORD *)(v101 + 40) = v52;
    *(_QWORD *)(v101 + 48) = v192;
    *(_QWORD *)(v101 + 184) = -1LL;
    *(_QWORD *)(v101 + 8) = v101 + 208;
    *(_WORD *)v101 = *v54;
    *(_WORD *)(v101 + 2) = *v54 + 2;
    memmove((void *)(v101 + 208), *((const void **)v54 + 1), *v54);
    *(_WORD *)(*(_QWORD *)(v102 + 8) + 2 * ((unsigned __int64)*v54 >> 1)) = 0;
    ModuleEntry = LdrpAllocateModuleEntry(v102);
    v79 = v171;
    *v171 = ModuleEntry;
    if ( ModuleEntry )
    {
      v104 = v166;
      *(_DWORD *)(ModuleEntry + 268) = v166;
      if ( v104 == 9 )
        *(_DWORD *)(*v79 + 304) = 1;
      v105 = (int *)NtCurrentPeb()->SharedData;
      if ( v105 && (v224 = *v105) != 0 )
        v106 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v106 = 2147353476LL;
      if ( *(_BYTE *)v106 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v137 = (unsigned int)RtlGetCurrentServiceSessionId()
             ? (char *)NtCurrentPeb()->SharedData + 555
             : (char *)2147353477;
        if ( (*v137 & 0x20) != 0 )
          LdrpLogEtwEvent(5292, 0LL, 0, 0, (unsigned __int16 *)v102, 0LL);
      }
      LOWORD(v17) = v154;
      goto LABEL_198;
    }
    RtlFreeHeap(LdrpHeap, 0LL, v102);
  }
  else
  {
    v79 = v171;
  }
  v104 = v166;
LABEL_198:
  v107 = *v79;
  appended = 0;
  if ( !*v79 )
    appended = -1073741801;
  v155 = appended;
  if ( v104 == 9 )
  {
    appended = -1073741515;
    v155 = -1073741515;
  }
  else if ( appended >= 0 )
  {
    appended = LdrpLoadKnownDll(*(_QWORD *)(v107 + 176));
    v155 = appended;
  }
LABEL_141:
  v153 = appended;
  if ( *v79 )
  {
    if ( (v17 & 0x400) != 0 && appended == -1073741515 )
    {
      v136 = *(_QWORD *)(*v79 + 176);
      v234 = v136;
      *(_DWORD *)(v136 + 32) |= 0x4000000u;
      LdrpProcessWork(v136);
      v153 = **(_DWORD **)(v136 + 40);
    }
    v222 = 0LL;
    v180 = 0;
    v80 = 0LL;
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
          v80 = &SchedulerSharedDataSlot[k];
          v207 = v80;
          break;
        }
      }
    }
    v222 = v80;
    if ( v80 )
      *v80 = &LdrpModuleDatatableLock;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&LdrpModuleDatatableLock);
    v84 = *v79;
    v85 = v84;
    v208 = *v79;
    if ( v84 )
    {
      v86 = *(_QWORD *)(v84 + 176);
      if ( v86 )
      {
        if ( (*(_DWORD *)(v86 + 32) & 0x80000) == 0 && *(_QWORD *)(v86 + 56) != v84 )
        {
          v85 = *(_QWORD *)(v86 + 56);
          v208 = v85;
          *(_QWORD *)(v86 + 56) = v84;
        }
      }
    }
    v87 = (__int64 *)v181;
    *(_DWORD *)(*(_QWORD *)v181 + 24LL) &= ~1u;
    v88 = *v87;
    v209 = *v87;
    v89 = *(_QWORD *)(v85 + 152);
    v90 = *(_QWORD *)(*(_QWORD *)(v188 + 56) + 152LL);
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
        v93 = *(__int64 **)(v90 + 40);
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
        *(_QWORD *)(v88 + 8) = v89;
        v94 = (_QWORD *)(v88 + 16);
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
        v96 = *(_DWORD *)(v88 + 24);
        *(_QWORD *)(v88 + 24) = v90;
        if ( (v96 & 1) != 0 )
          *(_DWORD *)(v88 + 24) = v90 ^ ((unsigned __int8)v96 ^ (unsigned __int8)v90) & 1;
        v88 = 0LL;
        v209 = 0LL;
        v87 = (__int64 *)v181;
      }
      else
      {
        v225 = NtdllBaseTag + 2359296;
        v118 = RtlAllocateHeap((void *)LdrpHeap);
        v88 = v118;
        v209 = v118;
        if ( v118 )
        {
          *(_DWORD *)(v118 + 24) |= 1u;
          goto LABEL_163;
        }
        MEMORY[0] = -1073741801;
        v88 = 0LL;
        v87 = (__int64 *)v181;
      }
    }
    v223 = v88;
    *v87 = v88;
    appended = v153;
    if ( v153 == -1073741515 )
    {
      if ( (v154 & 0x400) == 0 )
      {
        LdrpQueueWork(*(_QWORD *)(v85 + 176));
        appended = 0;
        v153 = 0;
        v87 = (__int64 *)v181;
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
      v13 = 1;
    }
    if ( v13 )
    {
      v112 = v188;
      v113 = *(_DWORD *)(v188 + 108);
      if ( v113 )
      {
        if ( *v87 || *(int *)(*(_QWORD *)(v85 + 152) + 56LL) >= 2 )
          *(_DWORD *)(v188 + 108) = v113 - 1;
      }
      else if ( *(int *)(*(_QWORD *)(v85 + 152) + 56LL) < 2 )
      {
        *(_QWORD *)(v188 + 80) = v85;
        *(_DWORD *)(v112 + 108) = 1;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v112 + 56) + 152LL) + 56LL) = 3;
        appended = 259;
        v153 = 259;
      }
    }
    v114 = *(_QWORD *)(v85 + 152);
    if ( *(_DWORD *)(v114 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v114 - 56LL) & 0x20) == 0 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v85 + 276), 0xFFFFFFFF) == 1 )
      {
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock);
        v119 = *(_QWORD *)(v85 + 160);
        v120 = *(_QWORD **)(v85 + 168);
        if ( *(_QWORD *)(v119 + 8) != v85 + 160 || *v120 != v85 + 160 )
          __fastfail(3u);
        *v120 = v119;
        *(_QWORD *)(v119 + 8) = v120;
        v138 = *(_QWORD **)(v85 + 152);
        v139 = (_QWORD *)*v138;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *(_WORD *)(v85 + 110) )
          LdrpReleaseTlsEntry(v85, 0LL);
        LdrpUnmapModule(v85, v140);
        v141 = *(volatile signed __int32 **)(v85 + 136);
        if ( (unsigned __int64)v141 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v141);
        if ( *(_QWORD *)(v85 + 80) )
          LdrpFreeUnicodeString(v85 + 72);
        RtlFreeHeap(LdrpHeap, 0LL, v85);
        if ( v139 == v138 )
          LdrpDestroyNode((__int64)v138);
      }
      appended = v153;
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v85 != *v79 )
    {
      LdrpFreeReplacedModule();
      *v79 = v85;
    }
  }
LABEL_411:
  RtlDeactivateActivationContextUnsafeFast(v229);
  if ( &v238 != v237 )
    RtlpSysVolFree((__int64)v237);
  return (unsigned int)appended;
}
