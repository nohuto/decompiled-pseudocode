/*
 * XREFs of SeAccessCheckByType @ 0x140363B20
 * Callers:
 *     NtAccessCheckByType @ 0x1403622A0 (NtAccessCheckByType.c)
 *     NtAccessCheck @ 0x140362480 (NtAccessCheck.c)
 *     NtAccessCheckByTypeResultList @ 0x1405FC2A0 (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14029409C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExIsFastResourceHeldExclusive @ 0x1402944B0 (ExIsFastResourceHeldExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140294520 (ExAcquireFastResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402955C0 (ExpAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x140296910 (SepMandatoryIntegrityCheck.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1403616D0 (RtlIsValidProcessTrustLabelSid.c)
 *     SepFilterCheck @ 0x140363580 (SepFilterCheck.c)
 *     SeCaptureObjectTypeList @ 0x140365F40 (SeCaptureObjectTypeList.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140366160 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepAccessCheck @ 0x1403662B0 (SepAccessCheck.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140367C20 (AuthzBasepEvaluateAceCondition.c)
 *     SepSidFromProcessProtection @ 0x14036B1C0 (SepSidFromProcessProtection.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14036B400 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     SepSinglePrivilegeCheck @ 0x1403CF6BC (SepSinglePrivilegeCheck.c)
 *     SeLogAccessFailure @ 0x1403CF70C (SeLogAccessFailure.c)
 *     SepGetScopedPolicySid @ 0x14045478C (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x1404547E4 (SepRmReferenceFindCap.c)
 *     SepLogLpacAccessFailure @ 0x14048CCB4 (SepLogLpacAccessFailure.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404D0670 (SepBuildCapeSecurityDescriptor.c)
 *     SepRmDereferenceCapTable @ 0x1404F2B84 (SepRmDereferenceCapTable.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     SepCopyObjectTypeList @ 0x1405FC340 (SepCopyObjectTypeList.c)
 *     SepMergeObjectTypeListAccesses @ 0x1405FC3F8 (SepMergeObjectTypeListAccesses.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14084F9F0 (ObReferenceObjectByHandleWithTag.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     PsReferenceImpersonationTokenEx @ 0x140910D20 (PsReferenceImpersonationTokenEx.c)
 *     SeLockSubjectContext @ 0x1409163C0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140916420 (SeUnlockSubjectContext.c)
 *     SeCaptureSid @ 0x140916DC8 (SeCaptureSid.c)
 *     SeCaptureSecurityDescriptor @ 0x14092A4A0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x14092E1B0 (SeReleaseSecurityDescriptor.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     PsReferenceEffectiveToken @ 0x140969860 (PsReferenceEffectiveToken.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409CF610 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409CF758 (ObpDeregisterObject.c)
 *     SeReleaseSid @ 0x140A19690 (SeReleaseSid.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeAccessCheckByType(
        __int64 a1,
        void *a2,
        void *a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        _OWORD *a7,
        volatile void *a8,
        _DWORD *a9,
        volatile void *a10,
        volatile void *a11,
        char a12)
{
  int v12; // r11d
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 PreviousMode; // r9
  __int64 v18; // rax
  unsigned int v19; // eax
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 result; // rax
  NTSTATUS v25; // eax
  int v26; // edi
  unsigned __int8 v27; // r12
  __int16 v28; // r10
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _DWORD *v33; // r13
  char v34; // r12
  _DWORD *v35; // r14
  int v36; // r15d
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // r15d
  PVOID v41; // r14
  __int64 v42; // rsi
  char v43; // cl
  int v44; // r11d
  char v45; // r14
  char v46; // r12
  char v47; // si
  unsigned int v48; // r15d
  int v49; // edi
  PVOID v50; // rsi
  struct _KTHREAD *v51; // r8
  __int64 v52; // r9
  struct _KTHREAD *v53; // rax
  char *v54; // r14
  _WORD *v55; // rdi
  __int16 v56; // cx
  __int64 v57; // r8
  __int64 v58; // rcx
  unsigned __int8 *v59; // r9
  char *v60; // r12
  __int64 v61; // rax
  unsigned int v62; // r10d
  unsigned __int64 v63; // rsi
  unsigned __int8 v64; // r13
  const void *v65; // rdx
  int v66; // edi
  int v67; // r15d
  __int64 v68; // r14
  int v69; // eax
  unsigned int v70; // edi
  unsigned int i; // esi
  unsigned __int8 CurrentIrql; // dl
  char v73; // r14
  PVOID v74; // rcx
  char *v75; // r13
  __int64 v76; // rax
  unsigned int v77; // r10d
  unsigned __int64 v78; // r14
  unsigned __int8 v79; // r12
  int v80; // edi
  int v81; // r15d
  __int64 v82; // rsi
  __int64 v83; // r15
  int v84; // edx
  PVOID v85; // rdi
  int v86; // r13d
  int *v87; // rax
  int *v88; // rsi
  PVOID v89; // rdi
  char *v90; // r14
  int v91; // r11d
  char v92; // r15
  unsigned int v93; // r10d
  unsigned int v94; // edi
  int v95; // edx
  char v96; // r11
  _DWORD *v97; // rbx
  __int64 k; // rax
  __int64 v99; // rcx
  int v100; // r15d
  char *v101; // r14
  signed __int64 v102; // rax
  bool v103; // cc
  signed __int64 v104; // rax
  PVOID v105; // rbx
  __int16 v106; // ax
  __int64 v107; // rax
  __int64 v108; // rcx
  _WORD *SeOwnerRightsSid; // r12
  unsigned int v110; // esi
  unsigned __int8 *v111; // rdi
  unsigned int v112; // r13d
  int v113; // edx
  unsigned int v114; // ecx
  unsigned __int8 *v115; // rcx
  unsigned int v116; // edi
  unsigned int j; // r15d
  __int64 v118; // rdx
  char v119; // di
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v121; // rax
  _QWORD *v122; // r10
  __int64 v123; // r9
  _DWORD *v124; // rax
  _DWORD *v125; // r11
  unsigned int v126; // eax
  int v127; // ecx
  int v128; // eax
  unsigned int v129; // eax
  int v130; // ecx
  int v131; // ecx
  _QWORD *v132; // rax
  __int64 v133; // rcx
  int v134; // r8d
  struct _KTHREAD *v135; // rax
  __int64 v136; // r10
  bool v137; // al
  unsigned int v138; // eax
  bool v139; // al
  unsigned int v140; // eax
  struct _KTHREAD *v141; // rax
  PERESOURCE *v142; // rbx
  int v143; // r10d
  unsigned int v144; // ecx
  _DWORD *v145; // rdx
  _DWORD *v146; // r8
  struct _ERESOURCE *v147; // rcx
  unsigned int v148; // ecx
  unsigned int v149; // r15d
  unsigned __int8 v150; // r10
  int v151; // eax
  __int64 v152; // rsi
  unsigned int v153; // eax
  int v154; // ecx
  int v155; // eax
  unsigned int v156; // ecx
  int *Pool2; // rax
  __int64 v158; // rcx
  int *v159; // rcx
  signed __int64 v160; // r8
  __int64 v161; // r9
  int v162; // edx
  bool v163; // zf
  void *OwnerEntryForLegacyShim; // rsi
  __int64 v165; // rcx
  int v166; // ecx
  int v167; // eax
  int v168; // r8d
  unsigned int v169; // edx
  __int16 v170; // cx
  __int64 v171; // rax
  int *v172; // rdx
  signed __int64 v173; // r8
  __int64 v174; // r9
  int *v175; // rdx
  __int64 v176; // r10
  __int64 v177; // rcx
  unsigned int v178; // eax
  __int64 v179; // rax
  unsigned int v180; // ecx
  _DWORD *v181; // r8
  _DWORD *v182; // r9
  __int64 v183; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v186; // rdx
  __int64 v187; // r15
  char *v188; // rax
  char *v189; // rax
  int v190; // r12d
  int v191; // r13d
  __int64 v192; // r9
  __int64 v193; // rax
  __int64 v194; // r15
  int v195; // r10d
  int v196; // eax
  int v197; // ecx
  _QWORD *v198; // rax
  __int64 v199; // r8
  __int64 v200; // rdx
  __int64 v201; // rcx
  int v202; // eax
  int v203; // ecx
  _QWORD *v204; // rax
  __int64 v205; // r9
  __int64 v206; // r8
  __int64 v207; // rdx
  __int64 v208; // rcx
  int v209; // eax
  int v210; // ecx
  int *v211; // r12
  PVOID v212; // r15
  __int64 v213; // rdx
  __int64 v214; // rax
  __m128i v215; // xmm0
  unsigned int v216; // r9d
  __int64 v217; // rax
  __int64 v218; // rax
  int v219; // r8d
  int *v220; // rcx
  __int64 v221; // rdx
  int v222; // ecx
  int v223; // eax
  int v224; // r8d
  int v225; // eax
  signed __int32 v226[10]; // [rsp+0h] [rbp-308h] BYREF
  __int64 v227; // [rsp+38h] [rbp-2D0h]
  unsigned __int8 v228; // [rsp+A0h] [rbp-268h]
  char v229; // [rsp+A1h] [rbp-267h]
  int v230; // [rsp+A4h] [rbp-264h]
  char v231; // [rsp+A8h] [rbp-260h]
  int v232; // [rsp+ACh] [rbp-25Ch]
  unsigned int v233; // [rsp+B0h] [rbp-258h]
  char v234; // [rsp+B8h] [rbp-250h]
  char v235; // [rsp+B9h] [rbp-24Fh]
  char v236; // [rsp+BAh] [rbp-24Eh]
  char v237; // [rsp+BBh] [rbp-24Dh]
  char v238; // [rsp+BCh] [rbp-24Ch]
  char v239; // [rsp+BDh] [rbp-24Bh]
  int v240; // [rsp+C0h] [rbp-248h]
  PVOID Object; // [rsp+C8h] [rbp-240h] BYREF
  unsigned __int16 v242; // [rsp+D0h] [rbp-238h]
  _BYTE v243[6]; // [rsp+D2h] [rbp-236h] BYREF
  int v244; // [rsp+D8h] [rbp-230h]
  int v245; // [rsp+E0h] [rbp-228h]
  int v246; // [rsp+E4h] [rbp-224h]
  _BYTE v247[2]; // [rsp+EAh] [rbp-21Eh] BYREF
  unsigned int v248; // [rsp+ECh] [rbp-21Ch]
  int v249; // [rsp+F0h] [rbp-218h]
  __int64 v250; // [rsp+F8h] [rbp-210h] BYREF
  unsigned __int8 *v251; // [rsp+100h] [rbp-208h]
  volatile void *v252; // [rsp+108h] [rbp-200h]
  volatile void *v253; // [rsp+110h] [rbp-1F8h]
  unsigned int Length; // [rsp+118h] [rbp-1F0h]
  int Length_4; // [rsp+11Ch] [rbp-1ECh] BYREF
  int v256; // [rsp+120h] [rbp-1E8h] BYREF
  int *v257; // [rsp+128h] [rbp-1E0h]
  PVOID v258; // [rsp+130h] [rbp-1D8h]
  PVOID P; // [rsp+138h] [rbp-1D0h] BYREF
  char v260[8]; // [rsp+140h] [rbp-1C8h] BYREF
  __int64 v261; // [rsp+148h] [rbp-1C0h]
  PVOID v262; // [rsp+150h] [rbp-1B8h]
  volatile void *Address; // [rsp+158h] [rbp-1B0h]
  _DWORD *v264; // [rsp+160h] [rbp-1A8h]
  int v265; // [rsp+168h] [rbp-1A0h] BYREF
  PVOID v266; // [rsp+170h] [rbp-198h] BYREF
  __int64 v267; // [rsp+178h] [rbp-190h] BYREF
  __int64 v268; // [rsp+180h] [rbp-188h]
  __int128 v269; // [rsp+188h] [rbp-180h] BYREF
  __int64 v270; // [rsp+198h] [rbp-170h] BYREF
  PVOID Src; // [rsp+1A0h] [rbp-168h]
  int *v272; // [rsp+1A8h] [rbp-160h]
  int v273; // [rsp+1B0h] [rbp-158h]
  int v274; // [rsp+1B4h] [rbp-154h] BYREF
  int v275; // [rsp+1B8h] [rbp-150h] BYREF
  int v276; // [rsp+1BCh] [rbp-14Ch] BYREF
  __int64 v277; // [rsp+1C0h] [rbp-148h] BYREF
  __int64 v278; // [rsp+1C8h] [rbp-140h] BYREF
  void *v279; // [rsp+1D0h] [rbp-138h]
  PVOID v280; // [rsp+1D8h] [rbp-130h] BYREF
  int v281; // [rsp+1E0h] [rbp-128h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1E8h] [rbp-120h] BYREF
  void *v283; // [rsp+218h] [rbp-F0h]
  void *v284; // [rsp+220h] [rbp-E8h]
  _DWORD *v285; // [rsp+228h] [rbp-E0h]
  volatile void *v286; // [rsp+230h] [rbp-D8h]
  volatile void *v287; // [rsp+238h] [rbp-D0h]
  _OWORD *v288; // [rsp+240h] [rbp-C8h]
  __int64 v289; // [rsp+248h] [rbp-C0h]
  __int64 v290; // [rsp+250h] [rbp-B8h]
  _DWORD *v291; // [rsp+258h] [rbp-B0h]
  _DWORD *v292; // [rsp+260h] [rbp-A8h]
  _OWORD SecurityDescriptor[2]; // [rsp+268h] [rbp-A0h] BYREF
  __int64 v294; // [rsp+288h] [rbp-80h]
  __int128 v295; // [rsp+290h] [rbp-78h] BYREF
  __int64 v296; // [rsp+2A0h] [rbp-68h]
  int v297; // [rsp+2A8h] [rbp-60h]
  __int128 v298; // [rsp+2B0h] [rbp-58h] BYREF

  v12 = a4;
  v232 = a4;
  v279 = a2;
  v288 = a7;
  v15 = (__int64)a10;
  v287 = a10;
  v286 = a11;
  v285 = a9;
  v290 = a1;
  v283 = a2;
  v284 = a3;
  v244 = v12;
  v289 = a5;
  v233 = a6;
  v251 = (unsigned __int8 *)a7;
  Address = a8;
  v16 = (unsigned __int64)a9;
  v272 = a9;
  v253 = a10;
  v291 = a10;
  v252 = a11;
  v292 = a11;
  v274 = 0;
  v262 = 0LL;
  v275 = 0;
  v276 = 0;
  v258 = 0LL;
  v281 = 0;
  v257 = 0LL;
  v230 = 0;
  Object = 0LL;
  v250 = 0LL;
  v267 = 0LL;
  v240 = 0;
  v249 = 0;
  v298 = 0LL;
  v266 = 0LL;
  Src = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v269 = 0LL;
  v229 = 0;
  P = 0LL;
  v295 = 0LL;
  v296 = 0LL;
  v297 = 0;
  v261 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v294 = 0LL;
  v268 = 0LL;
  v239 = 0;
  v234 = 0;
  v256 = 0;
  v238 = 0;
  v280 = 0LL;
  v235 = 0;
  v236 = 0;
  v237 = 0;
  v264 = 0LL;
  v270 = 0LL;
  v246 = -1073741790;
  Length = 0;
  PreviousMode = (unsigned __int8)KeGetCurrentThread()->PreviousMode;
  v228 = PreviousMode;
  v231 = PreviousMode;
  if ( (_BYTE)PreviousMode )
  {
    v18 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
      v18 = (__int64)a9;
    v19 = *(_DWORD *)v18;
  }
  else
  {
    v19 = *a9;
  }
  Length = v19;
  v20 = -1;
  LODWORD(v251) = -1;
  LODWORD(v270) = -1;
  if ( !(_BYTE)PreviousMode )
  {
    *(_DWORD *)v252 = 0;
    *(_DWORD *)v253 = v12;
    return 0LL;
  }
  if ( a12 )
  {
    if ( !v233 )
    {
      result = 3221225485LL;
      v230 = -1073741811;
      goto LABEL_24;
    }
    ProbeForWrite(v252, 4LL * v233, 4u);
    ProbeForWrite(v253, 4LL * v233, 4u);
    v16 = (unsigned __int64)v272;
  }
  else
  {
    v21 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v252 < 0x7FFFFFFF0000LL )
      v21 = (__int64)a11;
    *(_DWORD *)v21 = *(_DWORD *)v21;
    v22 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v253 < 0x7FFFFFFF0000LL )
      v22 = (__int64)a10;
    *(_DWORD *)v22 = *(_DWORD *)v22;
  }
  v23 = 0x7FFFFFFF0000LL;
  if ( v16 < 0x7FFFFFFF0000LL )
    v23 = (__int64)a9;
  *(_DWORD *)v23 = *(_DWORD *)v23;
  ProbeForWrite(Address, Length, 4u);
  v16 = (unsigned __int64)Address;
  if ( Address && Length >= 0x14 )
    *(_DWORD *)Address = 0;
  if ( ((unsigned __int8)a7 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v298 = *a7;
  result = (unsigned int)v230;
  v12 = v232;
  PreviousMode = v228;
LABEL_24:
  if ( (int)result < 0 )
    return result;
  if ( (v12 & 0xF0000000) != 0 )
  {
    v26 = -1073741594;
    v230 = -1073741594;
    goto LABEL_412;
  }
  v235 = 0;
  v264 = 0LL;
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    v25 = ObReferenceObjectByHandleWithTag(
            a3,
            8u,
            (POBJECT_TYPE)SeTokenObjectType,
            PreviousMode,
            0x74726853u,
            &Object,
            0LL);
    goto LABEL_28;
  }
  v247[0] = 0;
  Length_4 = 0;
  v265 = 0;
  v243[0] = 0;
  v235 = 0;
  v264 = 0LL;
  v119 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 == (void *)-4LL )
  {
    v122 = (_QWORD *)PsReferencePrimaryTokenWithTag((__int64)CurrentThread->ApcState.Process, 0x74726853u);
    goto LABEL_219;
  }
  v119 = 1;
  if ( a3 != (void *)-5LL )
  {
    v121 = (_QWORD *)PsReferenceEffectiveToken(CurrentThread, 1953654867LL, &v265, v247, &Length_4, v243);
    v122 = v121;
    if ( v265 == 2 && !Length_4 )
    {
      ObfDereferenceObjectWithTag(v121, 0x74726853u);
      v25 = -1073741658;
      goto LABEL_28;
    }
LABEL_219:
    if ( !v119 )
    {
LABEL_225:
      Object = v122;
      v25 = 0;
      goto LABEL_28;
    }
    v123 = v122[138];
    v235 = 0;
    v264 = 0LL;
    v124 = (_DWORD *)SepSidFromProcessProtection(v243, v15, v16, v123);
    v125 = v124;
    if ( !v124 || RtlIsValidProcessTrustLabelSid(v124) )
    {
      if ( !PreviousMode )
      {
LABEL_222:
        LOBYTE(v16) = 1;
        goto LABEL_223;
      }
      if ( RtlIsValidProcessTrustLabelSid((PSID)PreviousMode) )
      {
        if ( !PreviousMode )
          goto LABEL_222;
        v140 = *(_DWORD *)(PreviousMode + 8);
        if ( v125 )
        {
          if ( v125[2] >= v140 && v125[3] >= *(_DWORD *)(PreviousMode + 12) )
            goto LABEL_222;
        }
        else
        {
          LOBYTE(v16) = v140 == 0;
        }
      }
    }
LABEL_223:
    if ( !(_BYTE)v16 )
    {
      v235 = 1;
      v264 = v125;
    }
    goto LABEL_225;
  }
  v132 = (_QWORD *)PsReferenceImpersonationTokenEx(CurrentThread, 0LL, 1953654867LL, v260, v247, &Length_4, v243);
  v122 = v132;
  if ( v132 )
  {
    if ( !Length_4 )
    {
      ObfDereferenceObjectWithTag(v132, 0x746C6644u);
      v25 = -1073741658;
      goto LABEL_28;
    }
    goto LABEL_219;
  }
  v25 = -1073741700;
LABEL_28:
  v26 = v25;
  v230 = v25;
  if ( v25 < 0 )
  {
    Object = 0LL;
    v27 = v228;
    goto LABEL_236;
  }
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    if ( *((_DWORD *)Object + 48) != 2 )
    {
      v26 = -1073741732;
      v27 = v228;
      goto LABEL_235;
    }
    if ( *((int *)Object + 49) < 1 )
    {
      v26 = -1073741659;
      v27 = v228;
      goto LABEL_235;
    }
  }
  v27 = v228;
  v26 = SeCaptureObjectTypeList(v289, v233, v228, &v266);
  v230 = v26;
  if ( v26 < 0 || (v26 = SeCaptureSecurityDescriptor(v290, v228, 1, 0, (__int64)&v250), v230 = v26, v26 < 0) )
  {
LABEL_236:
    v100 = v232;
    goto LABEL_161;
  }
  if ( !v250 )
    goto LABEL_460;
  v28 = *(_WORD *)(v250 + 2);
  if ( v28 >= 0 )
  {
    v30 = *(_QWORD *)(v250 + 8);
  }
  else
  {
    v29 = *(unsigned int *)(v250 + 4);
    if ( !(_DWORD)v29 )
      goto LABEL_460;
    v30 = v250 + v29;
  }
  if ( !v30 )
    goto LABEL_460;
  if ( v28 < 0 )
  {
    v31 = *(unsigned int *)(v250 + 8);
    if ( (_DWORD)v31 )
    {
      v32 = v250 + v31;
      goto LABEL_42;
    }
LABEL_460:
    v26 = -1073741703;
    goto LABEL_235;
  }
  v32 = *(_QWORD *)(v250 + 16);
LABEL_42:
  if ( !v32 )
    goto LABEL_460;
  if ( v235 )
    v33 = v264;
  else
    v33 = (_DWORD *)*((_QWORD *)Object + 138);
  v26 = 0;
  v34 = 0;
  v35 = 0LL;
  v36 = -1;
  LODWORD(v16) = 0;
  do
  {
    if ( (v28 & 0x10) != 0 )
    {
      if ( v28 >= 0 )
      {
        v38 = *(_QWORD *)(v250 + 24);
      }
      else
      {
        v37 = *(unsigned int *)(v250 + 12);
        if ( !(_DWORD)v37 )
          goto LABEL_53;
        v38 = v250 + v37;
      }
      if ( v38 )
      {
        v15 = 0LL;
        v39 = v38 + 8;
        PreviousMode = *(unsigned __int16 *)(v38 + 4);
        while ( (unsigned int)v15 < (unsigned int)PreviousMode )
        {
          if ( (unsigned int)v15 >= (unsigned int)v16 && *(_BYTE *)v39 == 20 )
          {
            v16 = (unsigned int)v15;
            v273 = v15;
            if ( (*(_BYTE *)(v39 + 1) & 8) == 0 )
              goto LABEL_55;
            goto LABEL_54;
          }
          v15 = (unsigned int)(v15 + 1);
          v39 += *(unsigned __int16 *)(v39 + 2);
        }
      }
    }
LABEL_53:
    v39 = 0LL;
LABEL_54:
    v16 = (unsigned int)(v16 + 1);
    v273 = v16;
  }
  while ( v39 );
LABEL_55:
  if ( v39 )
  {
    v36 = *(_DWORD *)(v39 + 4);
    v35 = (_DWORD *)(v39 + 8);
  }
  if ( !v35 )
  {
    v20 = -1;
    goto LABEL_59;
  }
  if ( Object )
  {
    v135 = KeGetCurrentThread();
    --v135->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  }
  else
  {
    SeLockSubjectContext(0LL);
  }
  v34 = 1;
  if ( Object )
    goto LABEL_300;
  v136 = MEMORY[0];
  if ( !MEMORY[0] )
    goto LABEL_392;
  v16 = *(_QWORD *)(MEMORY[0] + 1104LL);
  if ( *(_QWORD *)(MEMORY[0x10] + 1104LL) && !RtlIsValidProcessTrustLabelSid(*(PSID *)(MEMORY[0x10] + 1104LL)) )
  {
    v26 = -1073741811;
    goto LABEL_59;
  }
  if ( !v16 )
  {
LABEL_297:
    v137 = 1;
    goto LABEL_298;
  }
  if ( RtlIsValidProcessTrustLabelSid((PSID)v16) )
  {
    if ( !v16 )
      goto LABEL_297;
    v153 = *(_DWORD *)(v16 + 8);
    if ( PreviousMode )
    {
      if ( *(_DWORD *)(PreviousMode + 8) >= v153 && *(_DWORD *)(PreviousMode + 12) >= *(_DWORD *)(v16 + 12) )
      {
        v137 = 1;
        goto LABEL_298;
      }
LABEL_392:
      v137 = 0;
    }
    else
    {
      v137 = v153 == 0;
    }
LABEL_298:
    if ( v137 && v136 )
      v33 = *(_DWORD **)(v136 + 1104);
    else
      v33 = *(_DWORD **)(MEMORY[0x10] + 1104LL);
LABEL_300:
    if ( !v33 || RtlIsValidProcessTrustLabelSid(v33) )
    {
      if ( RtlIsValidProcessTrustLabelSid(v35) )
      {
        v138 = v35[2];
        if ( v33 )
          v139 = v33[2] >= v138 && v33[3] >= v35[3];
        else
          v139 = v138 == 0;
        if ( v139 )
          v20 = -1;
        else
          v20 = v36 | 0x1000000;
      }
      else
      {
        v26 = -1073741811;
      }
    }
    else
    {
      v26 = -1073741811;
    }
  }
  else
  {
    v26 = -1073741811;
  }
LABEL_59:
  if ( v34 )
  {
    if ( Object )
    {
      ExReleaseResourceLite(*((PERESOURCE *)Object + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    else
    {
      SeUnlockSubjectContext(0LL);
    }
  }
  v230 = v26;
  if ( v26 < 0 )
    goto LABEL_412;
  v40 = v232 & 0xFDFFFFFF;
  if ( (v20 & v232 & 0xFDFFFFFF) != (v232 & 0xFDFFFFFF) )
  {
    v236 = 1;
LABEL_273:
    v15 = 3221225506LL;
    goto LABEL_74;
  }
  v41 = Object;
  v42 = v250;
  v26 = SepFilterCheck(v250, &P, (__int64)Object, 1, (__int64)&v270);
  v230 = v26;
  if ( v26 < 0 )
  {
LABEL_412:
    v27 = v228;
    v100 = v232;
    goto LABEL_161;
  }
  if ( ((unsigned int)v270 & v40) != v40 )
  {
    v237 = 1;
    goto LABEL_273;
  }
  v26 = SepMandatoryIntegrityCheck(&v298, v42, 0LL, (__int64)v41, 1, (__int64)&v269);
  v230 = v26;
  if ( v26 < 0 )
    goto LABEL_412;
  v43 = 0;
  v229 = 0;
  if ( DWORD2(v269) && ((unsigned int)v269 & v40) != v40 )
  {
    v15 = 3221225506LL;
    v230 = -1073741790;
    v44 = v232;
  }
  else
  {
    v15 = 0LL;
    v230 = 0;
    v44 = v232;
    if ( (v232 & 0x2000000) == 0 )
      goto LABEL_68;
  }
  if ( (*((_DWORD *)Object + 50) & 0x4000) != 0 && HIDWORD(v269) <= 0x2000 )
  {
    v43 = 1;
    v229 = 1;
  }
LABEL_68:
  if ( (int)v15 >= 0 || v43 )
  {
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    if ( (v44 & 0x1000000) == 0 )
      goto LABEL_70;
    v16 = (unsigned __int64)SeSecurityPrivilege;
    v278 = 0LL;
    v277 = 0LL;
    _InterlockedExchange64(&v278, *((_QWORD *)Object + 9));
    _InterlockedExchange64(&v277, *((_QWORD *)Object + 8));
    v118 = v278 & v277;
    _InterlockedOr(v226, 0);
    if ( !_bittest64(&v118, (unsigned int)v16) )
    {
      v15 = 3221225569LL;
      goto LABEL_73;
    }
    v49 = 1;
    v47 = 1;
    v44 &= ~0x1000000u;
    v232 = v44;
    v244 = v44;
    v240 = 0x1000000;
LABEL_70:
    if ( (v44 & 0x80000) != 0 )
    {
      if ( (unsigned __int8)SepSinglePrivilegeCheck(SeTakeOwnershipPrivilege, Object, v228) )
      {
        v45 = 1;
      }
      else
      {
        if ( !(unsigned __int8)SepSinglePrivilegeCheck(SeRelabelPrivilege, Object, v150) )
          goto LABEL_71;
        v46 = 1;
      }
      ++v49;
      v44 &= ~0x80000u;
      v240 |= 0x80000u;
      v244 = v44;
      v232 = v44;
    }
LABEL_71:
    if ( !v49 )
    {
LABEL_72:
      v15 = 0LL;
      goto LABEL_73;
    }
    Pool2 = (int *)ExAllocatePool2(0x100uLL);
    Src = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v49;
      Pool2[1] = 0;
      if ( v45 )
      {
        *((_QWORD *)Pool2 + 1) = SeTakeOwnershipPrivilege;
        Pool2[4] = 0x80000000;
        v48 = 1;
      }
      if ( v47 )
      {
        v165 = 3LL * v48;
        *(LUID *)&Pool2[v165 + 2] = SeSecurityPrivilege;
        Pool2[v165 + 4] = 0x80000000;
        ++v48;
      }
      v44 = v232;
      if ( v46 )
      {
        v158 = 3LL * v48;
        *(_QWORD *)&Pool2[v158 + 2] = SeRelabelPrivilege;
        Pool2[v158 + 4] = 0x80000000;
      }
      goto LABEL_72;
    }
    v15 = 3221225626LL;
    v44 = v232;
LABEL_73:
    if ( v44 )
    {
LABEL_74:
      v43 = v229;
    }
    else
    {
      v43 = v229;
      if ( v240 )
        v238 = 1;
    }
  }
  if ( (int)v15 < 0 && !v43 )
  {
    if ( a12 )
    {
      v156 = 0;
      v16 = (unsigned __int64)v253;
      PreviousMode = (unsigned __int64)v252;
      while ( 1 )
      {
        v245 = v156;
        if ( v156 >= v233 )
          break;
        *(_DWORD *)(PreviousMode + 4LL * v156) = v15;
        *(_DWORD *)(v16 + 4LL * v156++) = 0;
      }
    }
    else
    {
      *(_DWORD *)v252 = v15;
      *(_DWORD *)v253 = 0;
    }
    v246 = v15;
    v26 = 0;
    v230 = 0;
    v100 = v232;
    v27 = v228;
    goto LABEL_161;
  }
  v50 = Src;
  if ( Src )
  {
    v166 = *(_DWORD *)Src;
    v167 = 12 * *(_DWORD *)Src;
    v168 = 8;
    v169 = v167 + 8;
    if ( !*(_DWORD *)Src )
      v169 = 8;
    if ( v169 <= Length )
    {
      if ( v166 )
        v178 = v167 + 8;
      else
        v178 = 8;
      memmove((void *)Address, Src, v178);
      ExFreePoolWithTag(v50, 0);
      goto LABEL_79;
    }
    if ( v166 )
      v168 = v167 + 8;
    *v272 = v168;
    v26 = -1073741789;
    v230 = -1073741789;
    v100 = v232;
    v27 = v228;
    ExFreePoolWithTag(v50, 0);
    goto LABEL_161;
  }
  if ( Length < 0x14 )
  {
    *v272 = 20;
    v26 = -1073741789;
    v230 = -1073741789;
    v100 = v232;
    v27 = v228;
    goto LABEL_161;
  }
  *(_QWORD *)Address = Src;
LABEL_79:
  if ( v279 )
  {
    v27 = v228;
    v26 = SeCaptureSid(v279, v226[8], 1, (__int64)&v267);
    v230 = v26;
    if ( v26 < 0 )
    {
      v267 = 0LL;
      v100 = v232;
      goto LABEL_161;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  v53 = KeGetCurrentThread();
  --v53->KernelApcDisable;
  v54 = (char *)Object;
  v55 = (_WORD *)*((_QWORD *)Object + 6);
  v56 = v55[13];
  if ( (v56 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v55, 0LL, 0LL);
  if ( (v56 & 1) == 0 )
    goto LABEL_82;
  CurrentIrql = KeGetCurrentIrql();
  v51 = KeGetCurrentThread();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( (v51->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (v51->MiscFlags & 0x400) == 0 && !v51->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v54 = (char *)Object;
  if ( (v56 & 1) != 0 )
  {
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
    if ( !ExAcquireFastResourceShared(v55, (ULONG_PTR)OwnerEntryForLegacyShim, 1)
      || ExIsFastResourceHeldExclusive((ULONG_PTR)v55) )
    {
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
  }
  else
  {
LABEL_82:
    ExpAcquireResourceSharedLite(*((_QWORD *)Object + 6), 1, (unsigned __int64)v51, v52);
  }
  if ( *(__int16 *)(v250 + 2) >= 0 )
  {
    v59 = *(unsigned __int8 **)(v250 + 8);
  }
  else
  {
    v58 = *(unsigned int *)(v250 + 4);
    if ( (_DWORD)v58 )
      v59 = (unsigned __int8 *)(v250 + v58);
    else
      v59 = 0LL;
  }
  v251 = v59;
  v60 = v54 + 232;
  if ( v54 == (char *)-232LL || !v59 )
    goto LABEL_107;
  v61 = v59[1];
  v62 = 4 * v61 + 8;
  v248 = v62;
  v57 = *(unsigned __int16 *)v59;
  v242 = *(_WORD *)v59;
  v63 = *(_QWORD *)&v60[8 * (v59[4 * v61 + 4] & 0xF) + 16] & *(_QWORD *)&v60[8
                                                                           * ((unsigned __int64)v59[4 * v61 + 4] >> 4)
                                                                           + 144];
  v64 = 0;
  v65 = (const void *)0x140000000LL;
  while ( v63 )
  {
    LOBYTE(v66) = v63;
    while ( (_BYTE)v66 )
    {
      v67 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v66);
      v68 = *((_QWORD *)v60 + 1) + 16LL * (v67 + (unsigned int)v64);
      if ( **(_WORD **)v68 == (_WORD)v57 )
      {
        v69 = memcmp(v59, *(const void **)v68, v62);
        v59 = v251;
        if ( !v69 )
          goto LABEL_110;
        v57 = v242;
        v62 = v248;
      }
      v66 = (unsigned __int8)v66 ^ (1 << v67);
      v65 = (const void *)0x140000000LL;
    }
    v64 += 8;
    v63 >>= 8;
  }
  v70 = *(_DWORD *)v60;
  if ( *(_DWORD *)v60 <= 0x40u )
    goto LABEL_108;
  for ( i = 64; i < v70; ++i )
  {
    v68 = *((_QWORD *)v60 + 1) + 16LL * i;
    if ( **(_WORD **)v68 == (_WORD)v57 )
    {
      v151 = memcmp(v59, *(const void **)v68, v62);
      v59 = v251;
      if ( !v151 )
        goto LABEL_110;
      v57 = v242;
      v62 = v248;
    }
  }
  v68 = 0LL;
LABEL_110:
  if ( v68 )
  {
    if ( v68 == *((_QWORD *)v60 + 1) && (*(_DWORD *)(v68 + 8) & 0x10) == 0 )
    {
      v73 = 1;
      v65 = (const void *)0x140000000LL;
      goto LABEL_114;
    }
    v65 = (const void *)0x140000000LL;
    if ( (*(_DWORD *)(v68 + 8) & 4) != 0 )
    {
      v73 = 1;
      goto LABEL_114;
    }
  }
  else
  {
LABEL_107:
    v65 = (const void *)0x140000000LL;
  }
LABEL_108:
  v73 = 0;
LABEL_114:
  v74 = Object;
  if ( v73 && *((_DWORD *)Object + 32) )
  {
    v75 = (char *)Object + 504;
    if ( Object == (PVOID)-504LL || !v59 )
      goto LABEL_228;
    v76 = v59[1];
    v77 = 4 * v76 + 8;
    v248 = v77;
    v57 = *(unsigned __int16 *)v59;
    v242 = *(_WORD *)v59;
    v78 = *(_QWORD *)&v75[8 * (v59[4 * v76 + 4] & 0xF) + 16] & *(_QWORD *)&v75[8
                                                                             * ((unsigned __int64)v59[4 * v76 + 4] >> 4)
                                                                             + 144];
    v79 = 0;
    while ( v78 )
    {
      LOBYTE(v80) = v78;
      while ( (_BYTE)v80 )
      {
        v81 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v80);
        v82 = *((_QWORD *)v75 + 1) + 16LL * (v81 + (unsigned int)v79);
        if ( **(_WORD **)v82 == (_WORD)v57 )
        {
          if ( !memcmp(v59, *(const void **)v82, v77) )
            goto LABEL_128;
          v59 = v251;
          v57 = v242;
          v77 = v248;
        }
        v80 = (unsigned __int8)v80 ^ (1 << v81);
        v65 = (const void *)0x140000000LL;
      }
      v79 += 8;
      v78 >>= 8;
    }
    v116 = *(_DWORD *)v75;
    if ( *(_DWORD *)v75 <= 0x40u )
      goto LABEL_228;
    for ( j = 64; j < v116; ++j )
    {
      v82 = *((_QWORD *)v75 + 1) + 16LL * j;
      v65 = *(const void **)v82;
      if ( **(_WORD **)v82 == (_WORD)v57 )
      {
        if ( !memcmp(v59, v65, v77) )
          goto LABEL_128;
        v59 = v251;
        v57 = v242;
        v77 = v248;
      }
    }
    v82 = 0LL;
LABEL_128:
    if ( v82 && (*(_DWORD *)(v82 + 8) & 4) != 0 )
      v73 = 1;
    else
LABEL_228:
      v73 = 0;
    v74 = Object;
  }
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)v74 + 50) & 0x20) == 0 )
  {
    v179 = *((_QWORD *)v74 + 27);
    if ( v179 )
    {
      if ( (*(_DWORD *)(v179 + 32) & 0x20) != 0 )
      {
        if ( a12 )
        {
          v180 = 0;
          v181 = v253;
          v182 = v252;
          while ( 1 )
          {
            v245 = v180;
            if ( v180 >= v233 )
              break;
            v182[v180] = -1073741790;
            v181[v180++] = 0;
          }
          v74 = Object;
        }
        else
        {
          *(_DWORD *)v252 = -1073741790;
          *(_DWORD *)v253 = 0;
        }
        v246 = -1073741790;
        v230 = 0;
        v100 = v232;
        v27 = v228;
        v147 = (struct _ERESOURCE *)*((_QWORD *)v74 + 6);
LABEL_341:
        ExReleaseResourceLite(v147);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v26 = v230;
        goto LABEL_161;
      }
    }
  }
  v83 = v250;
  if ( SepRmEnforceCap )
  {
    v170 = *(_WORD *)(v250 + 2);
    if ( (v170 & 0x10) != 0 && KeGetCurrentIrql() < 2u )
    {
      if ( v170 >= 0 )
      {
        v183 = *(_QWORD *)(v250 + 24);
      }
      else
      {
        v171 = *(unsigned int *)(v250 + 12);
        if ( !(_DWORD)v171 )
        {
          v261 = 0LL;
          goto LABEL_134;
        }
        v183 = v250 + v171;
      }
      v261 = v183;
      if ( v183 )
      {
        ScopedPolicySid = (void *)SepGetScopedPolicySid(v183, v65, v57, v59);
        if ( ScopedPolicySid )
        {
          Cap = SepRmReferenceFindCap(ScopedPolicySid);
          v186 = v268;
          if ( Cap < 0 )
            v186 = SepRmDefaultCap;
          v268 = v186;
          v239 = 1;
        }
      }
    }
  }
LABEL_134:
  v84 = v232;
  if ( (v232 & 0x2060000) != 0 && v73 )
  {
    v106 = *(_WORD *)(v83 + 2);
    if ( (v106 & 4) != 0 )
    {
      if ( v106 >= 0 )
      {
        v108 = *(_QWORD *)(v83 + 32);
      }
      else
      {
        v107 = *(unsigned int *)(v83 + 16);
        if ( (_DWORD)v107 )
          v108 = v83 + v107;
        else
          v108 = 0LL;
      }
    }
    else
    {
      v108 = 0LL;
    }
    SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
    if ( v108 )
    {
      v110 = 0;
      v111 = (unsigned __int8 *)(v108 + 8);
      v112 = *(unsigned __int16 *)(v108 + 4);
      v113 = 104928;
      while ( 1 )
      {
        if ( v110 >= v112 )
        {
          v84 = v232;
          break;
        }
        if ( (v111[1] & 8) == 0 )
        {
          v114 = *v111;
          if ( (unsigned __int8)v114 <= 0x10u && _bittest(&v113, v114) )
          {
            v115 = &v111[16 * (*((_DWORD *)v111 + 2) & 1) + 12 + 8 * (*((_DWORD *)v111 + 2) & 2)];
          }
          else if ( (_BYTE)v114 == 4 )
          {
            v115 = v111 + 12;
          }
          else
          {
            if ( (unsigned __int8)v114 >= 0xBu && (unsigned __int8)(v114 - 13) > 1u )
              goto LABEL_208;
            v115 = v111 + 8;
          }
          if ( v115 )
          {
            if ( *(_WORD *)v115 == *SeOwnerRightsSid
              && !memcmp(v115, SeOwnerRightsSid, 4LL * HIBYTE(*(_WORD *)v115) + 8) )
            {
              v84 = v232;
              goto LABEL_135;
            }
            v113 = 104928;
          }
        }
LABEL_208:
        ++v110;
        v111 += *((unsigned __int16 *)v111 + 1);
      }
    }
    v134 = 393216;
    if ( (v84 & 0x2000000) == 0 )
      v134 = v84 & 0x60000;
    v240 |= v134;
    v249 = v134;
    v84 &= 0xFFF9FFFF;
    v232 = v84;
    v244 = v84;
  }
LABEL_135:
  if ( v84 || v239 && !v238 )
  {
    v85 = Object;
    v86 = v249;
  }
  else
  {
    v85 = Object;
    if ( (*((_DWORD *)Object + 50) & 0x2000) != 0 || (v86 = v249) == 0 )
    {
      v143 = v240;
      if ( a12 )
      {
        v144 = 0;
        v145 = v291;
        v146 = v292;
        while ( 1 )
        {
          v245 = v144;
          if ( v144 >= v233 )
            break;
          if ( v143 )
          {
            v146[v144] = 0;
            v246 = 0;
            v145[v144] = v143;
          }
          else
          {
            v146[v144] = -1073741790;
            v246 = -1073741790;
            v145[v144] = 0;
          }
          ++v144;
        }
      }
      else if ( v240 )
      {
        *(_DWORD *)v252 = 0;
        v246 = 0;
        *(_DWORD *)v253 = v143;
      }
      else
      {
        *(_DWORD *)v252 = -1073741790;
        v246 = -1073741790;
        *(_DWORD *)v253 = 0;
      }
      v230 = 0;
      v100 = v232;
      v27 = v228;
      v147 = (struct _ERESOURCE *)*((_QWORD *)v85 + 6);
      goto LABEL_341;
    }
  }
  if ( a12 )
  {
    v152 = v233;
    v87 = (int *)ExAllocatePool2(0x100uLL);
    v262 = v87;
    if ( !v87 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v85 + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      SeReleaseSubjectContext(&SubjectContext);
      v26 = -1073741670;
      v27 = v228;
      v230 = -1073741670;
      v100 = v232;
      goto LABEL_161;
    }
    v88 = &v87[v152];
    v84 = v232;
  }
  else
  {
    v87 = &v274;
    v262 = &v274;
    v88 = &v275;
  }
  LODWORD(v295) = v86;
  v27 = v228;
  SepAccessCheck(
    v83,
    v267,
    SubjectContext.PrimaryToken,
    (_DWORD)v85,
    v84,
    (__int64)v266,
    v233,
    (__int64)&v298,
    v240,
    v228,
    (__int64)v87,
    0LL,
    (__int64)v88,
    a12,
    v73,
    (__int64)&v295,
    (__int64)&P,
    0LL,
    0LL);
  if ( SepRmEnforceCap && *v88 >= 0 && v239 )
  {
    if ( a12 )
    {
      v187 = v233;
      v188 = (char *)ExAllocatePool2(0x100uLL);
      v258 = v188;
      if ( !v188 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)Object + 6));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        SeReleaseSubjectContext(&SubjectContext);
        v26 = -1073741670;
LABEL_235:
        v230 = v26;
        goto LABEL_236;
      }
      v189 = &v188[4 * v187];
    }
    else
    {
      v258 = &v276;
      v189 = (char *)&v281;
      LODWORD(v187) = v233;
    }
    v257 = (int *)v189;
    v190 = *v88;
    v191 = *(_DWORD *)v262;
    LOBYTE(v249) = 0;
    if ( (_DWORD)v187 )
    {
      v26 = SepCopyObjectTypeList(v266, (unsigned int)v187, &v280);
      v230 = v26;
      if ( v26 < 0 )
      {
        v27 = v228;
        goto LABEL_236;
      }
    }
    LODWORD(v192) = 0;
    v193 = 0LL;
    v89 = Object;
    while ( 1 )
    {
      v248 = v193;
      if ( (unsigned int)v193 >= *(_DWORD *)(v268 + 60) )
        break;
      v194 = *(_QWORD *)(v268 + 8 * v193 + 64);
      if ( !*(_QWORD *)(v194 + 24) )
        goto LABEL_552;
      v195 = (int)P;
      if ( !P )
      {
        v196 = AuthzBasepInitializeResourceClaimsFromSacl(v261, &P);
        v197 = (unsigned __int8)v249;
        if ( v196 < 0 )
          v197 = 1;
        v249 = v197;
        v195 = (int)P;
        LODWORD(v192) = 0;
      }
      v198 = (_QWORD *)*((_QWORD *)v89 + 137);
      if ( v198 )
        v199 = v198[75];
      else
        v199 = 0LL;
      if ( v198 )
        v200 = v198[73];
      else
        v200 = 0LL;
      if ( v198 )
        v201 = v198[74];
      else
        v201 = 0LL;
      if ( v198 )
        v192 = v198[72];
      v202 = AuthzBasepEvaluateAceCondition(
               (_DWORD)v89,
               *((_QWORD *)v89 + 97),
               v195,
               v192,
               v201,
               v200,
               v199,
               *(_QWORD *)(v194 + 24),
               *(_DWORD *)(v194 + 16),
               1,
               0,
               (__int64)&v256);
      v230 = v202;
      v203 = v256;
      if ( v256 == 1 )
        goto LABEL_552;
      if ( v202 < 0 )
        goto LABEL_554;
      if ( (*((_DWORD *)v89 + 50) & 0x10) != 0 )
      {
        v204 = (_QWORD *)*((_QWORD *)v89 + 137);
        LODWORD(v205) = 0;
        if ( v204 )
          v206 = v204[75];
        else
          v206 = 0LL;
        if ( v204 )
          v207 = v204[73];
        else
          v207 = 0LL;
        if ( v204 )
          v208 = v204[74];
        else
          v208 = 0LL;
        if ( v204 )
          v205 = v204[72];
        v230 = AuthzBasepEvaluateAceCondition(
                 (_DWORD)v89,
                 *((_QWORD *)v89 + 97),
                 (_DWORD)P,
                 v205,
                 v208,
                 v207,
                 v206,
                 *(_QWORD *)(v194 + 24),
                 *(_DWORD *)(v194 + 16),
                 1,
                 1,
                 (__int64)&v256);
        if ( v230 < 0 )
        {
LABEL_554:
          ExReleaseResourceLite(*((PERESOURCE *)v89 + 6));
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          SeReleaseSubjectContext(&SubjectContext);
          v26 = v230;
          v27 = v228;
          goto LABEL_236;
        }
        v203 = v256;
      }
      if ( (_BYTE)v249 || v203 == 1 )
      {
LABEL_552:
        v230 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
        if ( v230 < 0 )
          goto LABEL_554;
        v209 = v232;
        if ( (*(_DWORD *)(v194 + 48) & 1) != 0 )
        {
          if ( (v232 & 0x2000000) == 0 )
            v209 = v240 | v232;
          v210 = 0;
        }
        else
        {
          v210 = v240;
        }
        v211 = v257;
        v212 = v280;
        SepAccessCheck(
          (unsigned int)SecurityDescriptor,
          v267,
          SubjectContext.PrimaryToken,
          (_DWORD)v89,
          v209,
          (__int64)v280,
          v233,
          (__int64)&v298,
          v210,
          v228,
          (__int64)v258,
          0LL,
          (__int64)v257,
          a12,
          v73,
          (__int64)&v295,
          (__int64)&P,
          0LL,
          0LL);
        if ( v234 )
          v191 &= *(_DWORD *)v258;
        else
          v191 = *(_DWORD *)v258;
        if ( v191 )
          v190 = *v211;
        else
          v190 = -1073741790;
        v234 = 1;
        if ( v212 )
          SepMergeObjectTypeListAccesses(v266, v212, v233);
        if ( v190 < 0 )
          break;
      }
      v193 = v248 + 1;
      LODWORD(v192) = 0;
    }
    *v88 = v190;
    v90 = (char *)v262;
    *(_DWORD *)v262 &= v191;
    v27 = v228;
  }
  else
  {
    v89 = Object;
    v90 = (char *)v262;
  }
  ExReleaseResourceLite(*((PERESOURCE *)v89 + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  SeReleaseSubjectContext(&SubjectContext);
  v91 = v232;
  if ( (v232 & 0x2000000) != 0 )
  {
    if ( !v229 || !*(_WORD *)((char *)&v296 + 5) && (*((_DWORD *)Object + 50) & 0x3000000) != 0x3000000 )
    {
      v92 = a12;
      if ( a12 )
        v126 = v233;
      else
        v126 = 0;
      if ( DWORD2(v269) && (!BYTE4(v269) || !BYTE6(v269) || !BYTE5(v269)) )
      {
        if ( v126 )
        {
          v159 = v88;
          v160 = v90 - (char *)v88;
          v161 = v126;
          do
          {
            v162 = v269 & *(int *)((char *)v159 + v160);
            if ( v162 == *(int *)((char *)v159 + v160) )
            {
              v95 = -1073741790;
            }
            else
            {
              *(int *)((char *)v159 + v160) = v162;
              v163 = v162 == 0;
              v95 = -1073741790;
              if ( v163 )
                *v159 = -1073741790;
              else
                *v159 = 0;
            }
            ++v159;
            --v161;
          }
          while ( v161 );
          v93 = v233;
          v94 = v233;
        }
        else
        {
          v127 = v269 & *(_DWORD *)v90;
          v95 = -1073741790;
          v93 = v233;
          v94 = v233;
          if ( v127 != *(_DWORD *)v90 )
          {
            *(_DWORD *)v90 = v127;
            v128 = -1073741790;
            if ( v127 )
              v128 = 0;
            *v88 = v128;
          }
        }
        goto LABEL_147;
      }
      goto LABEL_144;
    }
LABEL_143:
    v92 = a12;
LABEL_144:
    v93 = v233;
LABEL_145:
    v94 = v93;
    goto LABEL_146;
  }
  if ( !v229 || *(_WORD *)((char *)&v296 + 5) )
    goto LABEL_143;
  if ( (*((_DWORD *)Object + 50) & 0x3000000) != 0x3000000 || HIDWORD(v295) )
  {
    if ( a12 )
    {
      v148 = 0;
      v16 = (unsigned __int64)v253;
      PreviousMode = (unsigned __int64)v252;
      v149 = v233;
      while ( 1 )
      {
        v245 = v148;
        if ( v148 >= v149 )
          break;
        *(_DWORD *)(PreviousMode + 4LL * v148) = -1073741790;
        *(_DWORD *)(v16 + 4LL * v148++) = 0;
      }
    }
    else
    {
      *(_DWORD *)v252 = -1073741790;
      *(_DWORD *)v253 = 0;
    }
    v246 = -1073741790;
    v26 = 0;
    v230 = 0;
    v100 = v232;
    goto LABEL_161;
  }
  HIBYTE(v296) = 1;
  v92 = a12;
  v93 = v233;
  if ( !a12 )
  {
    *v88 = 0;
    *(_DWORD *)v90 = v240 | v91;
    goto LABEL_145;
  }
  v213 = 0LL;
  v245 = 0;
  if ( v233 < 0x10 || (v245 = 0, v214 = v233 - 1, v90 <= (char *)&v88[v214]) && &v90[4 * v214] >= (char *)v88 )
  {
    v94 = v233;
  }
  else
  {
    v94 = v233;
    v215 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v240 | (unsigned int)v232), 0);
    v216 = 8;
    do
    {
      *(_OWORD *)&v88[v213] = 0LL;
      *(__m128i *)&v90[4 * v213] = v215;
      v217 = v216 - 4;
      *(_OWORD *)&v88[v217] = 0LL;
      *(__m128i *)&v90[4 * v217] = v215;
      *(_OWORD *)&v88[v216] = 0LL;
      *(__m128i *)&v90[4 * v216] = v215;
      v218 = v216 + 4;
      *(_OWORD *)&v88[v218] = 0LL;
      *(__m128i *)&v90[4 * v218] = v215;
      v213 = (unsigned int)(v213 + 16);
      v245 = v213;
      v216 += 16;
    }
    while ( (unsigned int)v213 < (v93 & 0xFFFFFFF0) );
  }
  if ( (unsigned int)v213 < v93 )
  {
    v219 = v240 | v91;
    v220 = (int *)&v90[4 * (unsigned int)v213];
    v221 = v93 - (unsigned int)v213;
    do
    {
      *(int *)((char *)v220 + (char *)v88 - v90) = 0;
      *v220++ = v219;
      --v221;
    }
    while ( v221 );
  }
LABEL_146:
  v95 = -1073741790;
LABEL_147:
  if ( (v91 & 0x2000000) != 0 )
  {
    v129 = v94;
    if ( !v92 )
      v129 = 0;
    v236 = 0;
    if ( v20 != -1 )
    {
      if ( v129 )
      {
        v172 = v88;
        v173 = v90 - (char *)v88;
        v174 = v129;
        do
        {
          v222 = v20 & *(int *)((char *)v172 + v173);
          if ( v222 != *(int *)((char *)v172 + v173) )
          {
            v236 = 1;
            *(int *)((char *)v172 + v173) = v222;
            v223 = 0;
            if ( !v222 )
              v223 = -1073741790;
            *v172 = v223;
          }
          ++v172;
          --v174;
        }
        while ( v174 );
        v95 = -1073741790;
      }
      else
      {
        v154 = v20 & *(_DWORD *)v90;
        if ( v154 != *(_DWORD *)v90 )
        {
          v236 = 1;
          *(_DWORD *)v90 = v154;
          v155 = -1073741790;
          if ( v154 )
            v155 = 0;
          *v88 = v155;
        }
      }
    }
    if ( !v92 )
      v94 = 0;
    v130 = v270;
    v237 = 0;
    if ( (_DWORD)v270 != -1 )
    {
      if ( v94 )
      {
        v175 = (int *)v90;
        v176 = v94;
        do
        {
          v224 = v130 & *v175;
          if ( v224 != *v175 )
          {
            v237 = 1;
            *v175 = v224;
            v225 = -1073741790;
            if ( v224 )
              v225 = 0;
            *(int *)((char *)v175 + (char *)v88 - v90) = v225;
          }
          ++v175;
          --v176;
        }
        while ( v176 );
        v93 = v233;
      }
      else
      {
        v131 = *(_DWORD *)v90 & v270;
        if ( v131 != *(_DWORD *)v90 )
        {
          v237 = 1;
          *(_DWORD *)v90 = v131;
          if ( v131 )
            v95 = 0;
          *v88 = v95;
        }
      }
    }
  }
  v16 = (unsigned __int64)v252;
  *(_DWORD *)v252 = *v88;
  v15 = (__int64)v253;
  *(_DWORD *)v253 = *(_DWORD *)v90;
  v246 = *v88;
  v96 = v234;
  PreviousMode = (unsigned __int64)v257;
  v97 = v258;
  if ( SepRmEnforceCap && v234 && *v88 >= 0 )
  {
    *(_DWORD *)v16 = *v257;
    *(_DWORD *)v15 &= *v97;
    v246 = *(_DWORD *)PreviousMode;
  }
  if ( v92 )
  {
    for ( k = 1LL; ; k = (unsigned int)(v245 + 1) )
    {
      v245 = k;
      if ( (unsigned int)k >= v93 )
        break;
      v99 = 4 * k;
      *(_DWORD *)(v16 + v99) = v88[k];
      *(_DWORD *)(v15 + v99) = *(_DWORD *)&v90[4 * k];
      if ( SepRmEnforceCap && v96 && v88[(unsigned __int64)v99 / 4] >= 0 )
      {
        *(_DWORD *)(v16 + 4 * k) = *(_DWORD *)(4 * k + PreviousMode);
        *(_DWORD *)(v15 + 4 * k) &= v97[k];
      }
    }
  }
  v26 = 0;
  v230 = 0;
  v100 = v232;
LABEL_161:
  if ( v250 && Object )
  {
    if ( v236 || v237 )
    {
LABEL_322:
      v141 = KeGetCurrentThread();
      --v141->KernelApcDisable;
      v142 = (PERESOURCE *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      LOBYTE(v227) = 0;
      SeLogAccessFailure(v142, v250, v240 | v100, v246 >= 0);
      ExReleaseResourceLite(v142[6]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v26 = v230;
      goto LABEL_167;
    }
    if ( HIDWORD(v295) || (*((_DWORD *)Object + 50) & 0x4000) == 0 )
      goto LABEL_167;
    if ( v26 >= 0 )
    {
      if ( v246 < 0 || HIBYTE(v296) )
        goto LABEL_322;
LABEL_167:
      if ( v26 >= 0 && v246 < 0 && !HIDWORD(v295) && (*((_DWORD *)Object + 50) & 0x4000) != 0 )
      {
        if ( (_BYTE)v297 )
        {
          v133 = v100 & ~(DWORD1(v295) | DWORD2(v295) | 0x2000000u);
          if ( ((unsigned int)v296 & v100 & ~(DWORD1(v295) | DWORD2(v295) | 0x2000000)) == (_DWORD)v133 )
            SepLogLpacAccessFailure(v133, v15, v16);
        }
      }
    }
  }
  if ( a12 )
  {
    if ( v262 )
      ExFreePoolWithTag(v262, 0);
    if ( v258 )
      ExFreePoolWithTag(v258, 0);
  }
  if ( Object )
  {
    v101 = (char *)Object - 48;
    if ( ObpTraceFlags )
      ObpPushStackInfo((__int64)Object - 48, 0, 1u, 0x74726853u);
    v102 = _InterlockedExchangeAdd64((volatile signed __int64 *)v101, 0xFFFFFFFFFFFFFFFFuLL);
    v103 = v102 <= 1;
    v104 = v102 - 1;
    if ( v103 )
    {
      if ( *((_QWORD *)v101 + 1) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v101[24] ^ (unsigned __int64)BYTE1(v101)],
          (ULONG_PTR)Object,
          1uLL,
          *((_QWORD *)v101 + 1));
      if ( v104 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v104);
      if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
      {
        ObpDeferObjectDeletion(v101, v15, v16, PreviousMode);
      }
      else
      {
        if ( (v101[26] & 0x40) != 0 && *(_BYTE *)(*(_QWORD *)&v101[-ObpInfoMaskToOffset[v101[26] & 0x7F]] + 24LL) )
          ObpHandleRevocationBlockRemoveObject();
        if ( ObpTraceFlags )
          ObpDeregisterObject(v101);
        ObpRemoveObjectRoutine(v101, 0LL);
      }
    }
    v26 = v230;
  }
  if ( v266 )
    ExFreePoolWithTag(v266, 0);
  if ( v267 )
  {
    LOBYTE(v16) = 1;
    SeReleaseSid(v267, v27, v16, PreviousMode);
  }
  if ( v250 )
    SeReleaseSecurityDescriptor(v250, v27, 0LL, PreviousMode);
  if ( v239 )
  {
    v177 = *(_QWORD *)(v268 + 32);
    if ( v177 )
      SepRmDereferenceCapTable(v177, v15, v16, PreviousMode);
  }
  if ( v280 )
    ExFreePoolWithTag(v280, 0);
  v105 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P, v15, v16);
    ExFreePoolWithTag(v105, 0);
  }
  return (unsigned int)v26;
}
