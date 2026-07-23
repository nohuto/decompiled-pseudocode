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
  __int64 v12; // r9
  int v13; // edi
  __int64 v14; // rdx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  unsigned __int64 ActiveFrame; // rcx
  unsigned int v17; // esi
  int appended; // ebx
  char v19; // r13
  _UNICODE_STRING *v20; // r14
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
  unsigned __int16 *p_Length; // r12
  wchar_t *Buffer; // rdx
  wchar_t *v44; // rax
  int Length; // eax
  unsigned int v46; // edx
  unsigned __int64 v47; // rdx
  _WORD *v48; // rax
  __int16 v49; // cx
  _WORD *v50; // rcx
  PVOID Heap; // rax
  __int64 v52; // r13
  unsigned int v53; // r15d
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
  char **v79; // r13
  __int64 v80; // rdx
  _QWORD *v81; // rcx
  _QWORD *SchedulerSharedDataSlot; // r9
  unsigned int k; // edx
  char *v85; // rax
  __int64 v86; // rsi
  __int64 v87; // rcx
  _QWORD *v88; // r8
  _DWORD *v89; // rcx
  __int64 v90; // rbx
  __int64 v91; // r14
  _QWORD *v92; // rdx
  _QWORD *v93; // rax
  _QWORD *v94; // rdx
  _QWORD *v95; // rdx
  _QWORD *v96; // r8
  int v97; // edx
  unsigned __int16 *v98; // r10
  unsigned __int16 *v99; // r11
  unsigned __int64 v100; // r8
  unsigned __int64 v101; // r9
  _DWORD *v102; // rax
  _DWORD *v103; // rbx
  __int64 ModuleEntry; // rax
  int v105; // r14d
  int *v106; // rax
  __int64 v107; // rax
  char *v108; // rcx
  int *v109; // rax
  __int64 v110; // rcx
  char *v111; // rcx
  int v112; // edx
  __int64 v113; // rdx
  int v114; // ecx
  __int64 v115; // rax
  NTSTATUS v116; // r14d
  unsigned int FullPathName_Ustr; // eax
  __int16 v118; // si
  const char *v119; // rax
  char *v120; // rcx
  _DWORD *v121; // rax
  __int64 v122; // rdx
  _QWORD *v123; // rcx
  unsigned int v124; // r14d
  unsigned int v125; // eax
  PVOID v126; // r15
  size_t v127; // rax
  __int16 v128; // cx
  unsigned int v129; // r13d
  unsigned int v130; // eax
  PVOID Atom; // rcx
  unsigned int v132; // esi
  unsigned int v133; // eax
  PVOID v134; // r14
  unsigned int v135; // r15d
  unsigned int v136; // eax
  PVOID v137; // r13
  _WORD *v138; // r15
  __int64 v139; // rbx
  char *v140; // rax
  _QWORD *v141; // rbx
  _QWORD *v142; // rdi
  __int64 v143; // rdx
  _ACTIVATION_CONTEXT *v144; // rcx
  int *v145; // rax
  __int64 v146; // rcx
  char *v147; // rcx
  __int16 v148; // cx
  char *v149; // rcx
  char *v150; // rcx
  PULONG NewFlags; // [rsp+30h] [rbp-488h]
  char v153; // [rsp+52h] [rbp-466h] BYREF
  char v154; // [rsp+53h] [rbp-465h]
  char v155; // [rsp+54h] [rbp-464h] BYREF
  char v156; // [rsp+55h] [rbp-463h]
  int v157; // [rsp+58h] [rbp-460h]
  unsigned int v158; // [rsp+5Ch] [rbp-45Ch]
  int v159; // [rsp+60h] [rbp-458h]
  __int16 v160; // [rsp+64h] [rbp-454h]
  __int16 v161; // [rsp+66h] [rbp-452h]
  __int16 v162; // [rsp+68h] [rbp-450h]
  __int16 v163; // [rsp+6Ah] [rbp-44Eh]
  __int16 v164; // [rsp+6Ch] [rbp-44Ch]
  int v165; // [rsp+70h] [rbp-448h]
  int v166; // [rsp+78h] [rbp-440h]
  int v167; // [rsp+80h] [rbp-438h]
  unsigned int v168; // [rsp+84h] [rbp-434h]
  int v169; // [rsp+88h] [rbp-430h] BYREF
  int v170; // [rsp+8Ch] [rbp-42Ch]
  int v171; // [rsp+90h] [rbp-428h]
  int v172; // [rsp+94h] [rbp-424h]
  int v173; // [rsp+98h] [rbp-420h]
  int v174; // [rsp+9Ch] [rbp-41Ch]
  __int64 *v175; // [rsp+A0h] [rbp-418h]
  struct _PEB *v176; // [rsp+A8h] [rbp-410h]
  __int64 v177; // [rsp+B0h] [rbp-408h]
  int v178; // [rsp+B8h] [rbp-400h]
  int v179; // [rsp+C0h] [rbp-3F8h]
  int v180; // [rsp+C4h] [rbp-3F4h]
  int v181; // [rsp+C8h] [rbp-3F0h]
  int v182; // [rsp+D0h] [rbp-3E8h]
  unsigned int v183; // [rsp+D4h] [rbp-3E4h]
  unsigned int v184; // [rsp+D8h] [rbp-3E0h]
  __int64 v185; // [rsp+E0h] [rbp-3D8h]
  int v186; // [rsp+E8h] [rbp-3D0h]
  __int64 v187; // [rsp+F0h] [rbp-3C8h]
  __int64 v188; // [rsp+F8h] [rbp-3C0h]
  int v189; // [rsp+100h] [rbp-3B8h]
  int v190; // [rsp+104h] [rbp-3B4h]
  int v191; // [rsp+108h] [rbp-3B0h]
  __int64 v192; // [rsp+110h] [rbp-3A8h]
  unsigned __int16 *v193; // [rsp+118h] [rbp-3A0h]
  PVOID v194; // [rsp+120h] [rbp-398h]
  __int64 v195; // [rsp+128h] [rbp-390h] BYREF
  __int64 v196; // [rsp+130h] [rbp-388h]
  _UNICODE_STRING DynamicString; // [rsp+138h] [rbp-380h] BYREF
  unsigned __int16 *v198; // [rsp+148h] [rbp-370h]
  PVOID v199; // [rsp+150h] [rbp-368h]
  PVOID v200; // [rsp+158h] [rbp-360h]
  _UNICODE_STRING *v201; // [rsp+160h] [rbp-358h]
  _DWORD *v202; // [rsp+168h] [rbp-350h]
  wchar_t *v203; // [rsp+170h] [rbp-348h]
  PVOID v204; // [rsp+178h] [rbp-340h]
  _WORD *v205; // [rsp+180h] [rbp-338h]
  _WORD *v206; // [rsp+188h] [rbp-330h]
  char *v207; // [rsp+190h] [rbp-328h]
  unsigned __int16 *v208; // [rsp+198h] [rbp-320h]
  unsigned __int16 *v209; // [rsp+1A0h] [rbp-318h]
  unsigned __int16 *v210; // [rsp+1A8h] [rbp-310h]
  _QWORD *v211; // [rsp+1B0h] [rbp-308h]
  char *v212; // [rsp+1B8h] [rbp-300h]
  _DWORD *v213; // [rsp+1C0h] [rbp-2F8h]
  void *Src[2]; // [rsp+1C8h] [rbp-2F0h] BYREF
  __int128 v215; // [rsp+1D8h] [rbp-2E0h] BYREF
  __int64 v216; // [rsp+1E8h] [rbp-2D0h]
  __int64 v217; // [rsp+1F0h] [rbp-2C8h]
  __int128 v218; // [rsp+1F8h] [rbp-2C0h] BYREF
  int v219; // [rsp+208h] [rbp-2B0h]
  int v220; // [rsp+20Ch] [rbp-2ACh]
  ULONG v221; // [rsp+210h] [rbp-2A8h]
  int v222; // [rsp+214h] [rbp-2A4h]
  int v223; // [rsp+218h] [rbp-2A0h]
  __int64 v224; // [rsp+220h] [rbp-298h]
  __int64 v225; // [rsp+228h] [rbp-290h] BYREF
  _QWORD *v226; // [rsp+230h] [rbp-288h]
  _DWORD *v227; // [rsp+238h] [rbp-280h]
  int v228; // [rsp+240h] [rbp-278h]
  ULONG v229; // [rsp+244h] [rbp-274h]
  int v230; // [rsp+248h] [rbp-270h]
  int v231; // [rsp+24Ch] [rbp-26Ch]
  ULONG v232; // [rsp+250h] [rbp-268h]
  _QWORD v233[2]; // [rsp+260h] [rbp-258h] BYREF
  __int128 v234; // [rsp+270h] [rbp-248h] BYREF
  __int128 v235; // [rsp+280h] [rbp-238h]
  __int128 v236; // [rsp+290h] [rbp-228h]
  __int64 v237; // [rsp+2A0h] [rbp-218h]
  __int64 v238; // [rsp+2B0h] [rbp-208h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+2C0h] [rbp-1F8h] BYREF
  _DWORD v240[2]; // [rsp+360h] [rbp-158h] BYREF
  void *v241; // [rsp+368h] [rbp-150h]
  __int16 v242; // [rsp+370h] [rbp-148h] BYREF
  char v243[254]; // [rsp+372h] [rbp-146h] BYREF
  _UNKNOWN *retaddr; // [rsp+4B8h] [rbp+0h]

  v6 = a4;
  v170 = a4;
  v196 = a3;
  v8 = a2;
  v192 = a2;
  v9 = OriginalName;
  v177 = (__int64)OriginalName;
  v10 = a5;
  v175 = a5;
  v11 = a6;
  v185 = (__int64)a6;
  v240[1] = 0;
  memset_thunk_772440563353939046(v243, 0, 0xFEuLL);
  v241 = &v242;
  v13 = 0;
  v240[0] = 0x1000000;
  v242 = 0;
  v233[0] = 72LL;
  v233[1] = 1LL;
  v234 = 0LL;
  v235 = 0LL;
  v236 = 0LL;
  v237 = 0LL;
  v14 = *(_QWORD *)(a3 + 136);
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  *((_QWORD *)&v235 + 1) = ~ActiveFrame;
  *(_QWORD *)&v236 = ~v14;
  *((_QWORD *)&v236 + 1) = retaddr;
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
  *(_QWORD *)&v234 = ActiveFrame;
  *((_QWORD *)&v234 + 1) = v14;
  LODWORD(v235) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == v14 )
      goto LABEL_6;
  }
  else if ( !v14 )
  {
LABEL_6:
    LODWORD(v235) = 48;
    goto LABEL_7;
  }
  ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)&v234;
LABEL_7:
  v17 = *(_DWORD *)(v8 + 32) & 0x1800800;
  v158 = v17;
  if ( v6 == 9 )
    goto LABEL_76;
  v202 = 0LL;
  appended = 0;
  v165 = 0;
  v19 = 0;
  if ( (v17 & 0x800008) == 0 )
  {
    v20 = v9;
    v201 = v9;
    *(_OWORD *)Src = 0LL;
    DynamicString = 0LL;
    v153 = 0;
    v167 = 0;
    v176 = NtCurrentPeb();
    v21 = 1;
    v154 = 1;
    ApiSetMap = (__int64)v176->ApiSetMap;
    SharedData = (int *)v176->SharedData;
    if ( SharedData && (v231 = *SharedData) != 0 )
      v24 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v24 = 2147353476LL;
    if ( *(_BYTE *)v24 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v149 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v149 & 0x20) != 0 )
        LdrpLogEtwEvent(5328, 0LL, 0, 0, &v9->Length, 0LL);
    }
    appended = ApiSetResolveToHost(ApiSetMap, &v9->Length, v196 + 88, &v153, (__int64)Src);
    if ( appended >= 0 && v153 )
    {
      if ( !LOWORD(Src[0]) )
      {
        LdrpLogDllState(0LL, v9, 5330LL);
        goto LABEL_18;
      }
      v145 = (int *)NtCurrentPeb()->SharedData;
      if ( v145 && (v230 = *v145) != 0 )
        v146 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v146 = 2147353476LL;
      if ( *(_BYTE *)v146 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v147 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
        if ( (*v147 & 0x20) != 0 )
        {
          v148 = 5329;
LABEL_405:
          LdrpLogEtwEvent(v148, 0LL, 0, 0, &v9->Length, 0LL);
        }
      }
    }
    else
    {
      v25 = (int *)NtCurrentPeb()->SharedData;
      if ( v25 && (v222 = *v25) != 0 )
        v26 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v26 = 2147353476LL;
      if ( *(_BYTE *)v26 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v150 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
        if ( (*v150 & 0x20) != 0 )
        {
          v148 = 5331;
          goto LABEL_405;
        }
      }
    }
LABEL_18:
    v167 = appended;
    if ( v153 )
    {
      if ( !LOWORD(Src[0]) )
      {
        appended = -1073740671;
        v167 = -1073740671;
        goto LABEL_385;
      }
      LOWORD(v240[0]) = 0;
      v27 = (int *)NtCurrentPeb()->SharedData;
      if ( v27 && (v219 = *v27) != 0 )
        v29 = (__int64)NtCurrentPeb()->SharedData + 30;
      else
        v29 = 2147352624LL;
      v224 = v29;
      v188 = 0LL;
      v216 = 0LL;
      v217 = v29;
      if ( v29 )
      {
        v30 = wcslen((const wchar_t *)v29);
        v31 = 2 * v30;
        v188 = v31;
        v32 = 2 * v30;
        if ( v31 >= 0xFFFE )
        {
          LOWORD(v31) = -4;
          v188 = 65532LL;
          v32 = -4;
        }
        LOWORD(v216) = v31;
        WORD1(v216) = v32 + 2;
      }
      else
      {
        LOWORD(v31) = v216;
      }
      v186 = 0;
      if ( (_WORD)v31 )
      {
        v33 = (unsigned __int16)v31 + LOWORD(v240[0]) + 2;
        v181 = v33;
        v194 = 0LL;
        v34 = 0;
        v174 = 0;
        if ( v33 > HIWORD(v240[0]) )
        {
          if ( v33 > 0xFFFE )
          {
            v34 = -1073741562;
            v174 = -1073741562;
          }
          else
          {
            v129 = (v33 + 63) & 0xFFFFFFC0;
            v181 = v129;
            v130 = v129;
            if ( v129 > 0xFFFE )
            {
              LOWORD(v129) = -2;
              v181 = 65534;
              v130 = 65534;
            }
            if ( v241 == &v242 )
            {
              Atom = RtlpAllocateAtom(v130);
              v194 = Atom;
              if ( Atom && LOWORD(v240[0]) )
              {
                memmove(Atom, v241, LOWORD(v240[0]));
                Atom = v194;
              }
            }
            else
            {
              Atom = (PVOID)NtdllpReallocateStringRoutine(v130);
              v194 = Atom;
            }
            if ( Atom )
            {
              v241 = Atom;
              HIWORD(v240[0]) = v129;
            }
            else
            {
              v34 = -1073741801;
              v174 = -1073741801;
            }
          }
        }
        v186 = v34;
        if ( v34 >= 0 )
        {
          memmove((char *)v241 + LOWORD(v240[0]), (const void *)v29, (unsigned __int16)v31);
          LOWORD(v240[0]) += v31;
          *((_WORD *)v241 + ((unsigned __int64)LOWORD(v240[0]) >> 1)) = 0;
        }
      }
      v179 = 0;
      v35 = LOWORD(v240[0]) + 22;
      v178 = v35;
      v199 = 0LL;
      v36 = 0;
      v171 = 0;
      if ( v35 > HIWORD(v240[0]) )
      {
        if ( v35 > 0xFFFE )
        {
          v36 = -1073741562;
          v171 = -1073741562;
        }
        else
        {
          v132 = (LOWORD(v240[0]) + 85) & 0xFFFFFFC0;
          v178 = v132;
          v133 = v132;
          if ( v132 > 0xFFFE )
          {
            LOWORD(v132) = -2;
            v178 = 65534;
            v133 = 65534;
          }
          if ( v241 == &v242 )
          {
            v134 = RtlpAllocateAtom(v133);
            v199 = v134;
            if ( v134 && LOWORD(v240[0]) )
              memmove(v134, v241, LOWORD(v240[0]));
          }
          else
          {
            v134 = (PVOID)NtdllpReallocateStringRoutine(v133);
            v199 = v134;
          }
          if ( v134 )
          {
            v241 = v134;
            HIWORD(v240[0]) = v132;
          }
          else
          {
            v36 = -1073741801;
            v171 = -1073741801;
          }
        }
      }
      v179 = v36;
      if ( v36 >= 0 )
      {
        v37 = (char *)v241 + LOWORD(v240[0]);
        *(_OWORD *)v37 = *(_OWORD *)SlashSystem32SlashString.Buffer;
        *((_DWORD *)v37 + 4) = *((_DWORD *)SlashSystem32SlashString.Buffer + 4);
        LOWORD(v240[0]) += 20;
        *((_WORD *)v241 + ((unsigned __int64)LOWORD(v240[0]) >> 1)) = 0;
      }
      v180 = 0;
      v38 = LOWORD(Src[0]);
      v39 = LOWORD(Src[0]) + LOWORD(v240[0]) + 2;
      LODWORD(v187) = v39;
      v200 = 0LL;
      appended = 0;
      v172 = 0;
      if ( v39 > HIWORD(v240[0]) )
      {
        if ( v39 > 0xFFFE )
        {
          appended = -1073741562;
          v172 = -1073741562;
        }
        else
        {
          v135 = (v39 + 63) & 0xFFFFFFC0;
          LODWORD(v187) = v135;
          v136 = v135;
          if ( v135 > 0xFFFE )
          {
            LOWORD(v135) = -2;
            LODWORD(v187) = 65534;
            v136 = 65534;
          }
          if ( v241 == &v242 )
          {
            v137 = RtlpAllocateAtom(v136);
            v200 = v137;
            if ( v137 && LOWORD(v240[0]) )
              memmove(v137, v241, LOWORD(v240[0]));
          }
          else
          {
            v137 = (PVOID)NtdllpReallocateStringRoutine(v136);
            v200 = v137;
          }
          if ( v137 )
          {
            v241 = v137;
            HIWORD(v240[0]) = v135;
          }
          else
          {
            appended = -1073741801;
            v172 = -1073741801;
          }
        }
      }
      v180 = appended;
      if ( appended >= 0 )
      {
        memmove((char *)v241 + LOWORD(v240[0]), Src[1], v38);
        LOWORD(v240[0]) += v38;
        *((_WORD *)v241 + ((unsigned __int64)LOWORD(v240[0]) >> 1)) = 0;
      }
      v167 = appended;
      if ( appended < 0 )
      {
        v20 = v201;
      }
      else
      {
        ProcessParameters = v176->ProcessParameters;
        if ( !ProcessParameters || (ProcessParameters->Flags & 0x1000) == 0 )
          v21 = 0;
        v154 = v21;
        v20 = (_UNICODE_STRING *)v240;
        v201 = (_UNICODE_STRING *)v240;
      }
      v19 = 0;
    }
    if ( appended >= 0 )
    {
      v41 = 1;
      goto LABEL_46;
    }
LABEL_385:
    v41 = 0;
LABEL_46:
    if ( v41 && v21 && !LdrpIsSecureProcess )
    {
      v116 = RtlDosApplyFileIsolationRedirection_Ustr(
               1u,
               v20,
               (PUNICODE_STRING)&LdrpDefaultExtension,
               0LL,
               &DynamicString,
               0LL,
               0LL,
               0LL,
               0LL);
      if ( v116 >= 0 )
      {
        v19 = 1;
        v225 = 0LL;
        LODWORD(v176) = 0;
        v155 = 0;
        v195 = 0LL;
        while ( 1 )
        {
          FullPathName_Ustr = RtlGetFullPathName_Ustr(
                                &DynamicString.Length,
                                HIWORD(v240[0]),
                                (WCHAR *)v241,
                                &v225,
                                &v155,
                                &v195);
          v118 = FullPathName_Ustr;
          LODWORD(v176) = FullPathName_Ustr;
          if ( v155
            || FullPathName_Ustr - 1 > 0xFFFD
            || (_DWORD)v195 == 5 && (HIDWORD(v195) & LdrpIllegalCWDDevices) != 0 )
          {
            break;
          }
          if ( FullPathName_Ustr < HIWORD(v240[0]) )
          {
            LOWORD(v240[0]) = FullPathName_Ustr;
            break;
          }
          v138 = RtlpAllocateAtom(FullPathName_Ustr);
          if ( !v138 )
            break;
          if ( &v242 != v241 )
            RtlpSysVolFree(v241);
          v242 = 0;
          v241 = v138;
          LOWORD(v240[0]) = 0;
          HIWORD(v240[0]) = v118;
          *v138 = 0;
        }
        if ( DynamicString.Buffer )
        {
          RtlpSysVolFree(DynamicString.Buffer);
          DynamicString.Buffer = 0LL;
        }
        *(_DWORD *)&DynamicString.Length = 0;
      }
      if ( v116 != -1072365560 )
      {
        appended = v116;
        v167 = v116;
      }
    }
    v165 = appended;
    v17 = v158;
    v9 = (PUNICODE_STRING)v177;
  }
  if ( appended >= 0 )
  {
    p_Length = &v9->Length;
    v202 = &v9->Length;
    if ( LOWORD(v240[0]) )
    {
      v119 = "SxS";
      if ( !v19 )
        v119 = "API set";
      LdrpLogInternal(
        "minkernel\\ldr\\ldrutil.c",
        2792LL,
        "LdrpPreprocessDllName",
        2LL,
        "DLL %wZ was redirected to %wZ by %s\n",
        v9,
        v240,
        v119);
      v17 |= 0x200u;
      v158 = v17;
      if ( v19 )
      {
        v17 |= 4u;
        v158 = v17;
      }
      p_Length = (unsigned __int16 *)v240;
      v202 = v240;
    }
    else
    {
      v203 = 0LL;
      Buffer = v9->Buffer;
      v44 = (wchar_t *)((char *)Buffer + v9->Length);
      v203 = v44;
      while ( 1 )
      {
        v203 = --v44;
        if ( v44 < Buffer )
          break;
        if ( *v44 == 92 || *v44 == 47 )
        {
          if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(v9, Buffer, ActivationContextStackPointer, v12) == 5 )
          {
            appended = LdrpAppendUnicodeStringToFilenameBuffer(v240, v9);
            v165 = appended;
          }
          else
          {
            appended = LdrpGetFullPath(v9, v240);
            v165 = appended;
            if ( appended >= 0 )
            {
              v17 |= 0x600u;
              v158 = v17;
            }
          }
          goto LABEL_61;
        }
      }
      v17 |= 0x20u;
      v158 = v17;
      appended = 0;
      v182 = 0;
      Length = v9->Length;
      if ( (_WORD)Length )
      {
        v46 = Length + LOWORD(v240[0]) + 2;
        v166 = v46;
        v204 = 0LL;
        v173 = 0;
        if ( v46 > HIWORD(v240[0]) )
        {
          if ( v46 > 0xFFFE )
          {
            appended = -1073741562;
            v173 = -1073741562;
          }
          else
          {
            v124 = (v46 + 63) & 0xFFFFFFC0;
            v166 = v124;
            v125 = v124;
            if ( v124 > 0xFFFE )
            {
              LOWORD(v124) = -2;
              v166 = 65534;
              v125 = 65534;
            }
            if ( v241 == &v242 )
            {
              v126 = RtlpAllocateAtom(v125);
              v204 = v126;
              if ( v126 && LOWORD(v240[0]) )
                memmove(v126, v241, LOWORD(v240[0]));
            }
            else
            {
              v126 = (PVOID)NtdllpReallocateStringRoutine(v125);
              v204 = v126;
            }
            if ( v126 )
            {
              v241 = v126;
              HIWORD(v240[0]) = v124;
            }
            else
            {
              appended = -1073741801;
              v173 = -1073741801;
            }
            v9 = (PUNICODE_STRING)v177;
          }
        }
        v182 = appended;
        if ( appended >= 0 )
        {
          memmove((char *)v241 + LOWORD(v240[0]), v9->Buffer, v9->Length);
          LOWORD(v240[0]) += v9->Length;
          *((_WORD *)v241 + ((unsigned __int64)LOWORD(v240[0]) >> 1)) = 0;
        }
      }
      v165 = appended;
    }
LABEL_61:
    if ( appended >= 0 )
    {
      v205 = 0LL;
      v156 = 0;
      v47 = *((_QWORD *)p_Length + 1);
      v48 = (_WORD *)(v47 + *p_Length);
      v205 = v48;
      v156 = 0;
      while ( 1 )
      {
        v205 = --v48;
        if ( (unsigned __int64)v48 < v47 )
        {
LABEL_263:
          appended = LdrpAppendUnicodeStringToFilenameBuffer(v240, &LdrpDefaultExtension);
          v165 = appended;
          goto LABEL_72;
        }
        v49 = *v48;
        if ( *v48 == 46 )
          break;
        if ( v49 == 47 || v49 == 92 )
          goto LABEL_263;
      }
      v156 = 1;
      v50 = (char *)v241 + LOWORD(v240[0]);
      v206 = v50;
      while ( 1 )
      {
        v206 = --v50;
        if ( v50 < v241 || *v50 != 46 )
          break;
        LOWORD(v240[0]) -= 2;
      }
      v50[1] = 0;
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
  v157 = appended;
  if ( appended < 0 )
    goto LABEL_413;
  v10 = v175;
  v6 = v170;
  v8 = v192;
  v11 = (_QWORD *)v185;
LABEL_76:
  if ( (v17 & 0x800000) != 0 )
  {
    appended = LdrpFindOrPrepareEnclaveModule(
                 *(_QWORD *)(v8 + 176),
                 v240,
                 *(_QWORD *)(v8 + 16),
                 v17,
                 v196,
                 v10,
                 *(_QWORD *)(v8 + 40));
    v157 = appended;
    goto LABEL_413;
  }
  if ( !*v11 )
  {
    v232 = NtdllBaseTag + 2621440;
    Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2621440, 0x20uLL);
    *v11 = Heap;
    if ( !Heap )
    {
      appended = -1073741801;
      v157 = -1073741801;
      goto LABEL_413;
    }
  }
  v52 = *(_QWORD *)(v8 + 40);
  v188 = v52;
  v53 = v17;
  v166 = v17;
  v187 = *(_QWORD *)(v8 + 16);
  v54 = (unsigned __int16 *)v240;
  v193 = (unsigned __int16 *)v240;
  v159 = 0;
  v218 = 0LL;
  *v10 = 0LL;
  v169 = 0;
  if ( v6 == 9 )
  {
    v177 = 0LL;
    *((_QWORD *)&v218 + 1) = ModuleNamePlaceholderBuffer;
    v127 = 2 * wcslen(ModuleNamePlaceholderBuffer);
    v177 = v127;
    v128 = v127;
    if ( v127 >= 0xFFFE )
    {
      LOWORD(v127) = -4;
      v177 = 65532LL;
      v128 = -4;
    }
    LOWORD(v218) = v127;
    WORD1(v218) = v128 + 2;
    v54 = (unsigned __int16 *)&v218;
    v193 = (unsigned __int16 *)&v218;
LABEL_308:
    v159 = -1073741515;
    goto LABEL_189;
  }
  if ( (v17 & 0x20) != 0 )
  {
    appended = LdrpFindLoadedDllByName((unsigned int)v240, 0, v17, (_DWORD)v10, (__int64)&v169);
    v159 = appended;
    goto LABEL_138;
  }
  if ( (v17 & 0x200) == 0 )
    goto LABEL_308;
  v215 = 0LL;
  for ( i = LOWORD(v240[0]) >> 1; i; --i )
  {
    v56 = *((_WORD *)v241 + i - 1);
    if ( v56 == 92 || v56 == 47 )
      break;
  }
  v57 = 2LL * i;
  *((_QWORD *)&v215 + 1) = (char *)v241 + v57;
  LODWORD(v176) = (unsigned __int16)(LOWORD(v240[0]) - v57);
  LOWORD(v215) = LOWORD(v240[0]) - v57;
  WORD1(v215) = HIWORD(v240[0]) - v57;
  v58 = 0;
  v189 = 0;
  v59 = (char *)v241 + v57;
  v207 = (char *)v241 + v57;
  v168 = 0;
  v60 = (unsigned int)v176 >> 1;
  v183 = (unsigned int)v176 >> 1;
  while ( 1 )
  {
    v61 = v60--;
    v183 = v60;
    if ( !v61 )
      break;
    v62 = *(unsigned __int16 *)v59;
    v59 += 2;
    v207 = v59;
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
    v160 = v62;
    v58 = (unsigned __int16)v62 + 65599 * v58;
    v189 = v58;
  }
  v168 = v58;
  v63 = v58;
  if ( !v58 )
  {
    v63 = 0x80000000;
    v168 = 0x80000000;
  }
  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  v64 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v63 & 0x1F));
  v65 = 0;
  for ( j = *v64; ; j = (_QWORD *)*j )
  {
    if ( j == v64 )
    {
      v74 = v175;
      goto LABEL_126;
    }
    v67 = j - 14;
    if ( v63 != *((_DWORD *)j + 38) )
      continue;
    v68 = v67 + 13;
    if ( (v166 & 8) != 0 && (*v68 & 1) == 0 )
      continue;
    if ( v193 )
      break;
    if ( (*(_DWORD *)v68 & 0x10000000) != 0 || (v209 = 0LL, v210 = 0LL, (_WORD)v176 != *((_WORD *)v67 + 44)) )
    {
LABEL_249:
      v65 = 0;
    }
    else
    {
      v98 = (unsigned __int16 *)*((_QWORD *)&v215 + 1);
      v209 = (unsigned __int16 *)*((_QWORD *)&v215 + 1);
      v99 = (unsigned __int16 *)v67[12];
      v210 = v99;
      while ( (unsigned __int64)v98 < *((_QWORD *)&v215 + 1) + (unsigned __int64)(unsigned __int16)v176 )
      {
        v100 = *v98;
        v101 = *v99;
        if ( (_WORD)v100 != (_WORD)v101 )
        {
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
          v163 = v100;
          if ( (unsigned int)v101 >= 0x61 )
          {
            if ( (unsigned int)v101 > 0x7A )
            {
              if ( qword_1801CF038 && (unsigned __int16)v101 >= 0xC0u )
                LOWORD(v101) = *(_WORD *)(qword_1801CF038
                                        + 2
                                        * ((v101 & 0xF)
                                         + *(unsigned __int16 *)(qword_1801CF038
                                                               + 2LL
                                                               * (((unsigned __int8)v101 >> 4)
                                                                + (unsigned int)*(unsigned __int16 *)(qword_1801CF038 + 2 * (v101 >> 8))))))
                             + v101;
            }
            else
            {
              LOWORD(v101) = v101 - 32;
            }
          }
          v164 = v101;
          if ( (_WORD)v100 != (_WORD)v101 )
            goto LABEL_249;
        }
        v209 = ++v98;
        v210 = ++v99;
      }
      v65 = 1;
    }
    if ( v65 )
      goto LABEL_122;
LABEL_173:
    ;
  }
  v198 = 0LL;
  v208 = 0LL;
  if ( LOWORD(v240[0]) != *((unsigned __int16 *)v67 + 36) )
  {
LABEL_170:
    v65 = 0;
    goto LABEL_173;
  }
  v69 = (unsigned __int16 *)v241;
  v198 = (unsigned __int16 *)v241;
  v70 = (unsigned __int16 *)v67[10];
  v208 = v70;
  while ( v69 < (unsigned __int16 *)((char *)v241 + LOWORD(v240[0])) )
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
      v161 = v71;
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
      v162 = v72;
      if ( (_WORD)v71 != (_WORD)v72 )
        goto LABEL_170;
    }
    v198 = ++v69;
    v208 = ++v70;
  }
  v65 = 1;
LABEL_122:
  v73 = v67[19];
  if ( *(_DWORD *)(v73 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v73 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)v67 + 69);
  v74 = v175;
  *v175 = (__int64)v67;
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
    v169 = *(_DWORD *)(*(_QWORD *)(*v74 + 152) + 56LL);
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
  v54 = v193;
  v76 = 3;
  if ( v193 )
  {
    if ( appended >= 0 )
      v76 = 0;
    v190 = v76;
    v77 = (int *)NtCurrentPeb()->SharedData;
    if ( v77 && (v223 = *v77) != 0 )
      v78 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v78 = 2147353476LL;
    if ( *(_BYTE *)v78 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v120 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v120 & 0x20) != 0 )
        LdrpLogEtwEvent(5280, 0LL, 0, v190, v54, 0LL);
    }
  }
  else
  {
    if ( appended >= 0 )
      v76 = 0;
    v191 = v76;
    v109 = (int *)NtCurrentPeb()->SharedData;
    if ( v109 && (v220 = *v109) != 0 )
      v110 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v110 = 2147353476LL;
    if ( *(_BYTE *)v110 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v111 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v111 & 0x20) != 0 )
        LdrpLogEtwEvent(5280, 0LL, 0, v191, (unsigned __int16 *)&v215, 0LL);
    }
  }
  v159 = appended;
  LOWORD(v17) = v158;
  v53 = v166;
  v52 = v188;
LABEL_138:
  if ( appended != -1073741515 )
  {
    v79 = (char **)v175;
    if ( v169 >= 0 )
    {
      LdrpIncrementModuleLoadCount(*v175);
    }
    else
    {
      LODWORD(NewFlags) = v169;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrmap.c",
        3400LL,
        "LdrpFindOrPrepareLoadingModule",
        0LL,
        "Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
        *v175 + 72,
        NewFlags);
      appended = -1073741595;
      v159 = -1073741595;
      LdrpDereferenceModule(*v79);
      *v79 = 0LL;
    }
    goto LABEL_141;
  }
  v10 = v175;
LABEL_189:
  *v10 = 0LL;
  v221 = NtdllBaseTag + 0x40000;
  v102 = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, *v54 + 210LL);
  v103 = v102;
  if ( v102 )
  {
    v102[8] = v53 | 0x8000;
    *((_QWORD *)v102 + 2) = v187;
    *((_QWORD *)v102 + 5) = v52;
    *((_QWORD *)v102 + 6) = v196;
    *((_QWORD *)v102 + 23) = -1LL;
    *((_QWORD *)v102 + 1) = v102 + 52;
    *(_WORD *)v102 = *v54;
    *((_WORD *)v102 + 1) = *v54 + 2;
    memmove(v102 + 52, *((const void **)v54 + 1), *v54);
    *(_WORD *)(*((_QWORD *)v103 + 1) + 2 * ((unsigned __int64)*v54 >> 1)) = 0;
    ModuleEntry = LdrpAllocateModuleEntry(v103);
    v79 = (char **)v175;
    *v175 = ModuleEntry;
    if ( ModuleEntry )
    {
      v105 = v170;
      *(_DWORD *)(ModuleEntry + 268) = v170;
      if ( v105 == 9 )
        *((_DWORD *)*v79 + 76) = 1;
      v106 = (int *)NtCurrentPeb()->SharedData;
      if ( v106 && (v228 = *v106) != 0 )
        v107 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v107 = 2147353476LL;
      if ( *(_BYTE *)v107 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v140 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
        if ( (*v140 & 0x20) != 0 )
          LdrpLogEtwEvent(5292, 0LL, 0, 0, (unsigned __int16 *)v103, 0LL);
      }
      LOWORD(v17) = v158;
      goto LABEL_198;
    }
    RtlFreeHeap(LdrpHeap, 0, v103);
  }
  else
  {
    v79 = (char **)v175;
  }
  v105 = v170;
LABEL_198:
  v108 = *v79;
  appended = 0;
  if ( !*v79 )
    appended = -1073741801;
  v159 = appended;
  if ( v105 == 9 )
  {
    appended = -1073741515;
    v159 = -1073741515;
  }
  else if ( appended >= 0 )
  {
    appended = LdrpLoadKnownDll(*((_QWORD *)v108 + 22));
    v159 = appended;
  }
LABEL_141:
  v157 = appended;
  if ( *v79 )
  {
    if ( (v17 & 0x400) != 0 && appended == -1073741515 )
    {
      v139 = *((_QWORD *)*v79 + 22);
      v238 = v139;
      *(_DWORD *)(v139 + 32) |= 0x4000000u;
      LOBYTE(v80) = 1;
      LdrpProcessWork(v139, v80);
      v157 = **(_DWORD **)(v139 + 40);
    }
    v226 = 0LL;
    v184 = 0;
    v81 = 0LL;
    v211 = 0LL;
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( k = 0; ; ++k )
      {
        v184 = k;
        if ( k >= 8 )
          break;
        if ( !SchedulerSharedDataSlot[k] )
        {
          v81 = &SchedulerSharedDataSlot[k];
          v211 = v81;
          break;
        }
      }
    }
    v226 = v81;
    if ( v81 )
      *v81 = &LdrpModuleDatatableLock;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&LdrpModuleDatatableLock);
    v85 = *v79;
    v86 = (__int64)v85;
    v212 = *v79;
    if ( v85 )
    {
      v87 = *((_QWORD *)v85 + 22);
      if ( v87 )
      {
        if ( (*(_DWORD *)(v87 + 32) & 0x80000) == 0 && *(char **)(v87 + 56) != v85 )
        {
          v86 = *(_QWORD *)(v87 + 56);
          v212 = (char *)v86;
          *(_QWORD *)(v87 + 56) = v85;
        }
      }
    }
    v88 = (_QWORD *)v185;
    *(_DWORD *)(*(_QWORD *)v185 + 24LL) &= ~1u;
    v89 = (_DWORD *)*v88;
    v213 = (_DWORD *)*v88;
    v90 = *(_QWORD *)(v86 + 152);
    v91 = *(_QWORD *)(*(_QWORD *)(v192 + 56) + 152LL);
    if ( v91 == v90
      || *(_DWORD *)(v90 + 56) == 9 && (*(_DWORD *)(v90 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v90 - 56LL) & 0x20) != 0) )
    {
LABEL_212:
      v112 = *(_DWORD *)(v90 + 24);
      if ( (unsigned int)(v112 - 2) <= 0xFFFFFFFC )
        *(_DWORD *)(v90 + 24) = v112 - 1;
    }
    else
    {
      v92 = *(_QWORD **)(v91 + 40);
      if ( v92 )
      {
        v93 = *(_QWORD **)(v91 + 40);
        do
        {
          v93 = (_QWORD *)*v93;
          if ( v93[1] == v90 )
            goto LABEL_212;
        }
        while ( v93 != v92 );
      }
      if ( v89 )
      {
LABEL_163:
        v94 = *(_QWORD **)(v91 + 40);
        if ( v94 )
        {
          *(_QWORD *)v89 = *v94;
          *v94 = v89;
        }
        else
        {
          *(_QWORD *)v89 = v89;
        }
        *(_QWORD *)(v91 + 40) = v89;
        *((_QWORD *)v89 + 1) = v90;
        v95 = v89 + 4;
        v96 = *(_QWORD **)(v90 + 48);
        if ( v96 )
        {
          *v95 = *v96;
          *v96 = v95;
        }
        else
        {
          *v95 = v95;
        }
        *(_QWORD *)(v90 + 48) = v95;
        v97 = v89[6];
        *((_QWORD *)v89 + 3) = v91;
        if ( (v97 & 1) != 0 )
          v89[6] = v91 ^ ((unsigned __int8)v97 ^ (unsigned __int8)v91) & 1;
        v89 = 0LL;
        v213 = 0LL;
        v88 = (_QWORD *)v185;
      }
      else
      {
        v229 = NtdllBaseTag + 2359296;
        v121 = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, 0x20uLL);
        v89 = v121;
        v213 = v121;
        if ( v121 )
        {
          v121[6] |= 1u;
          goto LABEL_163;
        }
        MEMORY[0] = -1073741801;
        v89 = 0LL;
        v88 = (_QWORD *)v185;
      }
    }
    v227 = v89;
    *v88 = v89;
    appended = v157;
    if ( v157 == -1073741515 )
    {
      if ( (v158 & 0x400) == 0 )
      {
        LdrpQueueWork(*(_QWORD *)(v86 + 176));
        appended = 0;
        v157 = 0;
        v88 = (_QWORD *)v185;
        goto LABEL_217;
      }
LABEL_216:
      if ( v157 >= 0 )
        goto LABEL_217;
    }
    else
    {
      if ( v157 != -1073741267 )
        goto LABEL_216;
      appended = 0;
      v157 = 0;
LABEL_217:
      v13 = 1;
    }
    if ( v13 )
    {
      v113 = v192;
      v114 = *(_DWORD *)(v192 + 108);
      if ( v114 )
      {
        if ( *v88 || *(int *)(*(_QWORD *)(v86 + 152) + 56LL) >= 2 )
          *(_DWORD *)(v192 + 108) = v114 - 1;
      }
      else if ( *(int *)(*(_QWORD *)(v86 + 152) + 56LL) < 2 )
      {
        *(_QWORD *)(v192 + 80) = v86;
        *(_DWORD *)(v113 + 108) = 1;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v113 + 56) + 152LL) + 56LL) = 3;
        appended = 259;
        v157 = 259;
      }
    }
    v115 = *(_QWORD *)(v86 + 152);
    if ( *(_DWORD *)(v115 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v115 - 56LL) & 0x20) == 0 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v86 + 276), 0xFFFFFFFF) == 1 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v122 = *(_QWORD *)(v86 + 160);
        v123 = *(_QWORD **)(v86 + 168);
        if ( *(_QWORD *)(v122 + 8) != v86 + 160 || *v123 != v86 + 160 )
          __fastfail(3u);
        *v123 = v122;
        *(_QWORD *)(v122 + 8) = v123;
        v141 = *(_QWORD **)(v86 + 152);
        v142 = (_QWORD *)*v141;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *(_WORD *)(v86 + 110) )
          LdrpReleaseTlsEntry(v86, 0LL);
        LdrpUnmapModule(v86, v143);
        v144 = *(_ACTIVATION_CONTEXT **)(v86 + 136);
        if ( (unsigned __int64)&v144[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v144);
        if ( *(_QWORD *)(v86 + 80) )
          LdrpFreeUnicodeString(v86 + 72);
        RtlFreeHeap(LdrpHeap, 0, (PVOID)v86);
        if ( v142 == v141 )
          LdrpDestroyNode(v141);
      }
      appended = v157;
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( (char *)v86 != *v79 )
    {
      LdrpFreeReplacedModule(*v79);
      *v79 = (char *)v86;
    }
  }
LABEL_413:
  RtlDeactivateActivationContextUnsafeFast(v233);
  if ( &v242 != v241 )
    RtlpSysVolFree(v241);
  return (unsigned int)appended;
}
