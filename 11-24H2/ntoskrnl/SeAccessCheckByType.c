/*
 * XREFs of SeAccessCheckByType @ 0x14035C8A0
 * Callers:
 *     NtAccessCheck @ 0x14043EBE0 (NtAccessCheck.c)
 *     NtAccessCheckByType @ 0x1404557D0 (NtAccessCheckByType.c)
 *     NtAccessCheckByTypeResultList @ 0x140608730 (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     SepMandatoryIntegrityCheck @ 0x140259F30 (SepMandatoryIntegrityCheck.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     SepLogLpacAccessFailure @ 0x14027BEC4 (SepLogLpacAccessFailure.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ExAcquireFastResourceShared @ 0x1403411F0 (ExAcquireFastResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     ExpAcquireResourceSharedLite @ 0x140342300 (ExpAcquireResourceSharedLite.c)
 *     ExIsFastResourceHeldExclusive @ 0x1403436B0 (ExIsFastResourceHeldExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140343DB0 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403450F0 (AuthzBasepEvaluateAceCondition.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1403599E0 (RtlIsValidProcessTrustLabelSid.c)
 *     SepFilterCheck @ 0x14035B6A0 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x14035BC30 (SepAccessCheck.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14035C750 (AuthzBasepFreeSecurityAttributesList.c)
 *     SeCaptureObjectTypeList @ 0x14035ED40 (SeCaptureObjectTypeList.c)
 *     SepSidFromProcessProtection @ 0x14035EF60 (SepSidFromProcessProtection.c)
 *     SeLogAccessFailure @ 0x14035F070 (SeLogAccessFailure.c)
 *     SepSinglePrivilegeCheck @ 0x14035F3EC (SepSinglePrivilegeCheck.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403642B0 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     SepGetScopedPolicySid @ 0x140454F4C (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x140454FA4 (SepRmReferenceFindCap.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404D060C (SepBuildCapeSecurityDescriptor.c)
 *     SepRmDereferenceCapTable @ 0x1404F5488 (SepRmDereferenceCapTable.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     SepCopyObjectTypeList @ 0x1406087D0 (SepCopyObjectTypeList.c)
 *     SepMergeObjectTypeListAccesses @ 0x140608888 (SepMergeObjectTypeListAccesses.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 *     ObpRemoveObjectRoutine @ 0x140846830 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14084B7A0 (ObReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     PsReferenceEffectiveToken @ 0x14085D1B0 (PsReferenceEffectiveToken.c)
 *     SeCaptureSid @ 0x140864EF8 (SeCaptureSid.c)
 *     SeLockSubjectContext @ 0x140868470 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408684D0 (SeUnlockSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     SeCaptureSecurityDescriptor @ 0x14091CE60 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1409209D0 (SeReleaseSecurityDescriptor.c)
 *     PsReferenceImpersonationTokenEx @ 0x140989D20 (PsReferenceImpersonationTokenEx.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409D2920 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409D2A68 (ObpDeregisterObject.c)
 *     SeReleaseSid @ 0x140A249A0 (SeReleaseSid.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeAccessCheckByType(
        __int64 a1,
        void *a2,
        void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _OWORD *a7,
        volatile void *a8,
        _DWORD *a9,
        volatile void *a10,
        volatile void *a11,
        char a12)
{
  unsigned int v12; // r10d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 PreviousMode; // r9
  __int64 v18; // rax
  int v19; // eax
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
  __int64 v33; // r13
  char v34; // r12
  __int64 v35; // r14
  int v36; // r15d
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // r15d
  PVOID v41; // r14
  __int64 v42; // rsi
  char v43; // cl
  unsigned int v44; // r10d
  char v45; // r14
  char v46; // r15
  char v47; // si
  unsigned int v48; // r11d
  unsigned int v49; // r12d
  int v50; // edi
  PVOID v51; // rsi
  struct _KTHREAD *v52; // r8
  struct _KTHREAD *v53; // rax
  _WORD *v54; // rdi
  __int16 v55; // cx
  __int64 v56; // rcx
  unsigned __int8 *v57; // r9
  char *v58; // rdx
  char *v59; // r12
  __int64 v60; // rax
  unsigned int v61; // r10d
  __int16 v62; // r8
  unsigned __int64 v63; // rsi
  unsigned __int8 v64; // r13
  int v65; // edi
  int v66; // r15d
  const void **v67; // r14
  int v68; // eax
  unsigned int v69; // edi
  unsigned int i; // esi
  unsigned __int8 CurrentIrql; // dl
  __int64 v72; // rdx
  char v73; // di
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v75; // rax
  _QWORD *v76; // r10
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 v79; // r11
  char v80; // r14
  unsigned int v81; // r15d
  __int64 v82; // r15
  unsigned int v83; // edx
  PVOID v84; // rdi
  int v85; // r13d
  int *v86; // rax
  int *v87; // rsi
  _DWORD *v88; // rdi
  char *v89; // r14
  unsigned int v90; // r10d
  char v91; // r15
  unsigned int v92; // edi
  unsigned int v93; // r13d
  int v94; // edx
  char v95; // r10
  _DWORD *v96; // rbx
  __int64 k; // rax
  __int64 v98; // rcx
  char *v99; // r14
  signed __int64 v100; // rax
  bool v101; // cc
  signed __int64 v102; // rax
  PVOID v103; // rbx
  __int16 v104; // ax
  __int64 v105; // rax
  __int64 v106; // rcx
  _WORD *SeOwnerRightsSid; // r12
  unsigned int v108; // esi
  unsigned __int8 *v109; // rdi
  unsigned int v110; // r13d
  int v111; // edx
  unsigned int v112; // ecx
  unsigned __int8 *v113; // rcx
  _DWORD *v114; // rcx
  char *v115; // r12
  __int64 v116; // rax
  unsigned int v117; // r10d
  __int16 v118; // r8
  unsigned __int64 v119; // r14
  unsigned __int8 v120; // r13
  int v121; // esi
  int v122; // r15d
  __int64 v123; // rdi
  unsigned int v124; // esi
  unsigned int j; // r15d
  unsigned int v126; // eax
  int v127; // ecx
  int v128; // eax
  unsigned int v129; // eax
  int v130; // ecx
  int v131; // ecx
  _QWORD *v132; // rax
  int v133; // ecx
  struct _KTHREAD *v134; // rax
  __int64 v135; // r10
  bool v136; // al
  unsigned int v137; // eax
  bool v138; // al
  unsigned int v139; // eax
  unsigned int v140; // r10d
  unsigned int v141; // ecx
  _DWORD *v142; // rdx
  _DWORD *v143; // r8
  struct _ERESOURCE *v144; // rcx
  unsigned int v145; // ecx
  unsigned int v146; // r15d
  struct _KTHREAD *v147; // rax
  PERESOURCE *v148; // rbx
  unsigned __int8 v149; // r13
  int v150; // eax
  unsigned int v151; // eax
  __int64 v152; // rsi
  int v153; // ecx
  int v154; // eax
  unsigned int v155; // ecx
  int *Pool2; // rax
  __int64 v157; // rcx
  int *v158; // rcx
  signed __int64 v159; // r8
  __int64 v160; // r9
  int v161; // edx
  bool v162; // zf
  void *OwnerEntryForLegacyShim; // rsi
  __int64 v164; // rcx
  int v165; // ecx
  int v166; // eax
  int v167; // r8d
  unsigned int v168; // edx
  __int16 v169; // cx
  __int64 v170; // rax
  int *v171; // rdx
  signed __int64 v172; // r8
  __int64 v173; // r9
  int *v174; // rdx
  __int64 v175; // r10
  __int64 v176; // rcx
  unsigned int v177; // eax
  __int64 v178; // rax
  unsigned int v179; // ecx
  _DWORD *v180; // r8
  _DWORD *v181; // r9
  __int64 v182; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v185; // rdx
  __int64 v186; // r15
  char *v187; // rax
  int *v188; // rax
  int v189; // r12d
  int v190; // r13d
  void *v191; // r9
  __int64 v192; // rax
  __int64 v193; // r15
  PVOID v194; // r10
  int v195; // eax
  int v196; // ecx
  _QWORD *v197; // rax
  __int64 v198; // r8
  __int64 v199; // rdx
  __int64 v200; // rcx
  int v201; // eax
  int v202; // ecx
  _QWORD *v203; // rax
  void *v204; // r9
  __int64 v205; // r8
  __int64 v206; // rdx
  __int64 v207; // rcx
  unsigned int v208; // eax
  unsigned int v209; // ecx
  int *v210; // r12
  PVOID v211; // r15
  __int64 v212; // rdx
  __int64 v213; // rax
  unsigned int v214; // r8d
  __m128i v215; // xmm0
  unsigned int v216; // r9d
  __int64 v217; // rax
  __int64 v218; // rax
  unsigned int v219; // r8d
  unsigned int *v220; // rcx
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
  unsigned int v232; // [rsp+ACh] [rbp-25Ch]
  char v233; // [rsp+B0h] [rbp-258h]
  char v234; // [rsp+B1h] [rbp-257h]
  unsigned int v235; // [rsp+B8h] [rbp-250h]
  char v236; // [rsp+C0h] [rbp-248h]
  char v237; // [rsp+C1h] [rbp-247h]
  PVOID Object; // [rsp+C8h] [rbp-240h] BYREF
  char v239; // [rsp+D0h] [rbp-238h]
  char v240; // [rsp+D1h] [rbp-237h]
  unsigned int v241; // [rsp+D4h] [rbp-234h]
  __int16 v242; // [rsp+DCh] [rbp-22Ch]
  _BYTE v243[2]; // [rsp+DEh] [rbp-22Ah] BYREF
  unsigned int v244; // [rsp+E0h] [rbp-228h]
  int v245; // [rsp+E8h] [rbp-220h]
  int v246; // [rsp+ECh] [rbp-21Ch]
  _BYTE v247[2]; // [rsp+F2h] [rbp-216h] BYREF
  unsigned int v248; // [rsp+F4h] [rbp-214h]
  int v249; // [rsp+F8h] [rbp-210h]
  __int64 v250; // [rsp+100h] [rbp-208h] BYREF
  unsigned __int8 *v251; // [rsp+108h] [rbp-200h]
  volatile void *v252; // [rsp+110h] [rbp-1F8h]
  volatile void *v253; // [rsp+118h] [rbp-1F0h]
  SIZE_T Length; // [rsp+120h] [rbp-1E8h]
  int *v255; // [rsp+128h] [rbp-1E0h]
  int v256; // [rsp+130h] [rbp-1D8h] BYREF
  int v257; // [rsp+134h] [rbp-1D4h] BYREF
  PVOID v258; // [rsp+138h] [rbp-1D0h]
  PVOID P; // [rsp+140h] [rbp-1C8h] BYREF
  char v260[8]; // [rsp+148h] [rbp-1C0h] BYREF
  __int64 v261; // [rsp+150h] [rbp-1B8h]
  PVOID v262; // [rsp+158h] [rbp-1B0h]
  volatile void *Address; // [rsp+160h] [rbp-1A8h]
  __int64 v264; // [rsp+168h] [rbp-1A0h]
  int v265; // [rsp+170h] [rbp-198h] BYREF
  PVOID v266; // [rsp+178h] [rbp-190h] BYREF
  __int64 v267; // [rsp+180h] [rbp-188h] BYREF
  __int64 v268; // [rsp+188h] [rbp-180h]
  __int128 v269; // [rsp+190h] [rbp-178h] BYREF
  PVOID Src; // [rsp+1A0h] [rbp-168h]
  __int64 v271; // [rsp+1A8h] [rbp-160h] BYREF
  int v272; // [rsp+1B0h] [rbp-158h]
  int v273; // [rsp+1B4h] [rbp-154h] BYREF
  int v274; // [rsp+1B8h] [rbp-150h] BYREF
  int v275; // [rsp+1BCh] [rbp-14Ch] BYREF
  __int64 v276; // [rsp+1C0h] [rbp-148h] BYREF
  __int64 v277; // [rsp+1C8h] [rbp-140h] BYREF
  int *v278; // [rsp+1D0h] [rbp-138h]
  void *v279; // [rsp+1D8h] [rbp-130h]
  PVOID v280; // [rsp+1E0h] [rbp-128h] BYREF
  int v281; // [rsp+1E8h] [rbp-120h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1F0h] [rbp-118h] BYREF
  void *v283; // [rsp+220h] [rbp-E8h]
  void *v284; // [rsp+228h] [rbp-E0h]
  _DWORD *v285; // [rsp+230h] [rbp-D8h]
  volatile void *v286; // [rsp+238h] [rbp-D0h]
  volatile void *v287; // [rsp+240h] [rbp-C8h]
  _OWORD *v288; // [rsp+248h] [rbp-C0h]
  __int64 v289; // [rsp+250h] [rbp-B8h]
  __int64 v290; // [rsp+258h] [rbp-B0h]
  _DWORD *v291; // [rsp+260h] [rbp-A8h]
  _DWORD *v292; // [rsp+268h] [rbp-A0h]
  _OWORD SecurityDescriptor[2]; // [rsp+270h] [rbp-98h] BYREF
  __int64 v294; // [rsp+290h] [rbp-78h]
  __int128 v295; // [rsp+298h] [rbp-70h] BYREF
  __int64 v296; // [rsp+2A8h] [rbp-60h]
  int v297; // [rsp+2B0h] [rbp-58h]
  __int128 v298; // [rsp+2B8h] [rbp-50h] BYREF

  v12 = a4;
  v232 = a4;
  v279 = a2;
  v288 = a7;
  v15 = (__int64)a10;
  v287 = a10;
  v16 = (__int64)a11;
  v286 = a11;
  v285 = a9;
  v290 = a1;
  v283 = a2;
  v284 = a3;
  v244 = v12;
  v289 = a5;
  v235 = a6;
  v251 = (unsigned __int8 *)a7;
  Address = a8;
  v278 = a9;
  v253 = a10;
  v291 = a10;
  v252 = a11;
  v292 = a11;
  v273 = 0;
  v262 = 0LL;
  v274 = 0;
  v275 = 0;
  v258 = 0LL;
  v281 = 0;
  v255 = 0LL;
  v230 = 0;
  Object = 0LL;
  v250 = 0LL;
  v267 = 0LL;
  v241 = 0;
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
  v240 = 0;
  v233 = 0;
  v257 = 0;
  v239 = 0;
  v280 = 0LL;
  v234 = 0;
  v236 = 0;
  v237 = 0;
  v264 = 0LL;
  v271 = 0LL;
  v246 = -1073741790;
  LODWORD(Length) = 0;
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
  LODWORD(Length) = v19;
  v20 = -1;
  LODWORD(v251) = -1;
  LODWORD(v271) = -1;
  if ( !(_BYTE)PreviousMode )
  {
    *(_DWORD *)v252 = 0;
    *(_DWORD *)v253 = v12;
    return 0LL;
  }
  if ( a12 )
  {
    if ( !v235 )
    {
      result = 3221225485LL;
      v230 = -1073741811;
      goto LABEL_24;
    }
    ProbeForWrite(v252, 4LL * v235, 4u);
    ProbeForWrite(v253, 4LL * v235, 4u);
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
  if ( (unsigned __int64)v278 < 0x7FFFFFFF0000LL )
    v23 = (__int64)a9;
  *(_DWORD *)v23 = *(_DWORD *)v23;
  ProbeForWrite(Address, (unsigned int)Length, 4u);
  if ( Address && (unsigned int)Length >= 0x14 )
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
  v234 = 0;
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
  v256 = 0;
  v265 = 0;
  v243[0] = 0;
  v234 = 0;
  v264 = 0LL;
  v73 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 == (void *)-4LL )
  {
    v76 = (_QWORD *)PsReferencePrimaryTokenWithTag((__int64)CurrentThread->ApcState.Process, 0x74726853u);
    goto LABEL_112;
  }
  v73 = 1;
  if ( a3 != (void *)-5LL )
  {
    v75 = (_QWORD *)PsReferenceEffectiveToken(CurrentThread, 1953654867LL, &v265, v247, &v256, v243);
    v76 = v75;
    if ( v265 == 2 && !v256 )
    {
      ObfDereferenceObjectWithTag(v75, 0x74726853u);
      v25 = -1073741658;
      goto LABEL_28;
    }
LABEL_112:
    if ( !v73 )
    {
LABEL_118:
      Object = v76;
      v25 = 0;
      goto LABEL_28;
    }
    v77 = v76[138];
    v234 = 0;
    v264 = 0LL;
    v78 = SepSidFromProcessProtection(v243, v15, v16, v77);
    v79 = v78;
    if ( !v78 || RtlIsValidProcessTrustLabelSid(v78) )
    {
      if ( !PreviousMode )
      {
LABEL_115:
        LOBYTE(v16) = 1;
        goto LABEL_116;
      }
      if ( RtlIsValidProcessTrustLabelSid(PreviousMode) )
      {
        if ( !PreviousMode )
          goto LABEL_115;
        v139 = *(_DWORD *)(PreviousMode + 8);
        if ( v79 )
        {
          if ( *(_DWORD *)(v79 + 8) >= v139 && *(_DWORD *)(v79 + 12) >= *(_DWORD *)(PreviousMode + 12) )
            goto LABEL_115;
        }
        else
        {
          LOBYTE(v16) = v139 == 0;
        }
      }
    }
LABEL_116:
    if ( !(_BYTE)v16 )
    {
      v234 = 1;
      v264 = v79;
    }
    goto LABEL_118;
  }
  v132 = (_QWORD *)PsReferenceImpersonationTokenEx(CurrentThread, 0LL, 1953654867LL, v260, v247, &v256, v243);
  v76 = v132;
  if ( v132 )
  {
    if ( !v256 )
    {
      ObfDereferenceObjectWithTag(v132, 0x746C6644u);
      v25 = -1073741658;
      goto LABEL_28;
    }
    goto LABEL_112;
  }
  v25 = -1073741700;
LABEL_28:
  v26 = v25;
  v230 = v25;
  if ( v25 < 0 )
  {
    Object = 0LL;
    v27 = v228;
    goto LABEL_126;
  }
  if ( (unsigned __int64)a3 + 6 > 2 )
  {
    if ( *((_DWORD *)Object + 48) != 2 )
    {
      v26 = -1073741732;
      v27 = v228;
      goto LABEL_125;
    }
    if ( *((int *)Object + 49) < 1 )
    {
      v26 = -1073741659;
      v27 = v228;
      goto LABEL_125;
    }
  }
  v27 = v228;
  v26 = SeCaptureObjectTypeList(v289, v235, v228, &v266);
  v230 = v26;
  if ( v26 < 0 || (v26 = SeCaptureSecurityDescriptor(v290, v228, 1, 0, (__int64)&v250), v230 = v26, v26 < 0) )
  {
LABEL_126:
    v81 = v232;
    goto LABEL_156;
  }
  if ( !v250 )
    goto LABEL_461;
  v28 = *(_WORD *)(v250 + 2);
  if ( v28 >= 0 )
  {
    v30 = *(_QWORD *)(v250 + 8);
  }
  else
  {
    v29 = *(unsigned int *)(v250 + 4);
    if ( !(_DWORD)v29 )
      goto LABEL_461;
    v30 = v250 + v29;
  }
  if ( !v30 )
    goto LABEL_461;
  if ( v28 < 0 )
  {
    v31 = *(unsigned int *)(v250 + 8);
    if ( (_DWORD)v31 )
    {
      v32 = v250 + v31;
      goto LABEL_42;
    }
LABEL_461:
    v26 = -1073741703;
    goto LABEL_125;
  }
  v32 = *(_QWORD *)(v250 + 16);
LABEL_42:
  if ( !v32 )
    goto LABEL_461;
  if ( v234 )
    v33 = v264;
  else
    v33 = *((_QWORD *)Object + 138);
  v34 = 0;
  v26 = 0;
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
            v272 = v15;
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
    v272 = v16;
  }
  while ( v39 );
LABEL_55:
  if ( v39 )
  {
    v36 = *(_DWORD *)(v39 + 4);
    v35 = v39 + 8;
  }
  if ( !v35 )
  {
    v20 = -1;
    goto LABEL_59;
  }
  if ( Object )
  {
    v134 = KeGetCurrentThread();
    --v134->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  }
  else
  {
    SeLockSubjectContext(0LL);
  }
  v34 = 1;
  if ( Object )
    goto LABEL_288;
  v135 = MEMORY[0];
  if ( !MEMORY[0] )
    goto LABEL_399;
  v16 = *(_QWORD *)(MEMORY[0] + 1104LL);
  if ( *(_QWORD *)(MEMORY[0x10] + 1104LL) && !RtlIsValidProcessTrustLabelSid(*(_QWORD *)(MEMORY[0x10] + 1104LL)) )
  {
    v26 = -1073741811;
    goto LABEL_59;
  }
  if ( !v16 )
  {
LABEL_285:
    v136 = 1;
    goto LABEL_286;
  }
  if ( RtlIsValidProcessTrustLabelSid(v16) )
  {
    if ( !v16 )
      goto LABEL_285;
    v151 = *(_DWORD *)(v16 + 8);
    if ( PreviousMode )
    {
      if ( *(_DWORD *)(PreviousMode + 8) >= v151 && *(_DWORD *)(PreviousMode + 12) >= *(_DWORD *)(v16 + 12) )
      {
        v136 = 1;
        goto LABEL_286;
      }
LABEL_399:
      v136 = 0;
    }
    else
    {
      v136 = v151 == 0;
    }
LABEL_286:
    if ( v136 && v135 )
      v33 = *(_QWORD *)(v135 + 1104);
    else
      v33 = *(_QWORD *)(MEMORY[0x10] + 1104LL);
LABEL_288:
    if ( !v33 || RtlIsValidProcessTrustLabelSid(v33) )
    {
      if ( RtlIsValidProcessTrustLabelSid(v35) )
      {
        v137 = *(_DWORD *)(v35 + 8);
        if ( v33 )
          v138 = *(_DWORD *)(v33 + 8) >= v137 && *(_DWORD *)(v33 + 12) >= *(_DWORD *)(v35 + 12);
        else
          v138 = v137 == 0;
        if ( v138 )
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
      KeLeaveCriticalRegionThread();
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
LABEL_268:
    v48 = 0;
    v15 = 3221225506LL;
    goto LABEL_74;
  }
  v41 = Object;
  v42 = v250;
  v26 = SepFilterCheck(v250, &P, (__int64)Object, 1, (__int64)&v271);
  v230 = v26;
  if ( v26 < 0 )
  {
LABEL_412:
    v27 = v228;
    v81 = v232;
    goto LABEL_156;
  }
  if ( ((unsigned int)v271 & v40) != v40 )
  {
    v237 = 1;
    goto LABEL_268;
  }
  v26 = SepMandatoryIntegrityCheck(&v298, v42, 0, (__int64)v41, 1, (__int64)&v269);
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
  if ( (int)v15 < 0 && !v43 )
  {
    v48 = 0;
    goto LABEL_75;
  }
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  if ( (v44 & 0x1000000) != 0 )
  {
    v16 = (__int64)SeSecurityPrivilege;
    v277 = 0LL;
    v276 = 0LL;
    _InterlockedExchange64(&v277, *((_QWORD *)Object + 9));
    _InterlockedExchange64(&v276, *((_QWORD *)Object + 8));
    v72 = v277 & v276;
    _InterlockedOr(v226, 0);
    if ( _bittest64(&v72, (unsigned int)v16) )
    {
      v50 = 1;
      v47 = 1;
      v44 &= ~0x1000000u;
      v232 = v44;
      v244 = v44;
      v241 = 0x1000000;
      goto LABEL_70;
    }
    v15 = 3221225569LL;
  }
  else
  {
LABEL_70:
    if ( (v44 & 0x80000) == 0 )
      goto LABEL_71;
    v149 = v228;
    if ( (unsigned __int8)SepSinglePrivilegeCheck(SeTakeOwnershipPrivilege, Object, v228) )
    {
      v45 = 1;
LABEL_354:
      ++v50;
      v44 &= ~0x80000u;
      v241 |= 0x80000u;
      v244 = v44;
      v232 = v44;
    }
    else if ( (unsigned __int8)SepSinglePrivilegeCheck(SeRelabelPrivilege, Object, v149) )
    {
      v46 = 1;
      goto LABEL_354;
    }
LABEL_71:
    if ( v50 )
    {
      Pool2 = (int *)ExAllocatePool2(0x100uLL);
      Src = Pool2;
      v48 = 0;
      if ( Pool2 )
      {
        *Pool2 = v50;
        Pool2[1] = 0;
        if ( v45 )
        {
          *((_QWORD *)Pool2 + 1) = SeTakeOwnershipPrivilege;
          Pool2[4] = 0x80000000;
          v49 = 1;
        }
        if ( v47 )
        {
          v164 = 3LL * v49;
          *(LUID *)&Pool2[v164 + 2] = SeSecurityPrivilege;
          Pool2[v164 + 4] = 0x80000000;
          ++v49;
        }
        v44 = v232;
        if ( v46 )
        {
          v157 = 3LL * v49;
          *(_QWORD *)&Pool2[v157 + 2] = SeRelabelPrivilege;
          Pool2[v157 + 4] = 0x80000000;
        }
        goto LABEL_72;
      }
      v15 = 3221225626LL;
      v44 = v232;
    }
    else
    {
LABEL_72:
      v15 = v48;
    }
  }
  if ( v44 )
  {
LABEL_74:
    v43 = v229;
  }
  else
  {
    v43 = v229;
    if ( v241 )
      v239 = 1;
  }
LABEL_75:
  if ( (int)v15 < 0 && !v43 )
  {
    if ( a12 )
    {
      v155 = v48;
      v16 = (__int64)v253;
      PreviousMode = (__int64)v252;
      while ( 1 )
      {
        v245 = v155;
        if ( v155 >= v235 )
          break;
        *(_DWORD *)(PreviousMode + 4LL * v155) = v15;
        *(_DWORD *)(v16 + 4LL * v155++) = v48;
      }
    }
    else
    {
      *(_DWORD *)v252 = v15;
      *(_DWORD *)v253 = v48;
    }
    v246 = v15;
    v26 = v48;
    v230 = v48;
    v81 = v232;
    v27 = v228;
    goto LABEL_156;
  }
  v51 = Src;
  if ( Src )
  {
    v165 = *(_DWORD *)Src;
    v166 = 12 * *(_DWORD *)Src;
    v167 = 8;
    v168 = v166 + 8;
    if ( !*(_DWORD *)Src )
      v168 = 8;
    if ( v168 <= (unsigned int)Length )
    {
      if ( v165 )
        v177 = v166 + 8;
      else
        v177 = 8;
      memmove((void *)Address, Src, v177);
      ExFreePoolWithTag(v51, 0);
      goto LABEL_79;
    }
    if ( v165 )
      v167 = v166 + 8;
    *v278 = v167;
    v26 = -1073741789;
    v230 = -1073741789;
    v81 = v232;
    v27 = v228;
    ExFreePoolWithTag(v51, 0);
    goto LABEL_156;
  }
  if ( (unsigned int)Length < 0x14 )
  {
    *v278 = 20;
    v26 = -1073741789;
    v230 = -1073741789;
    v81 = v232;
    v27 = v228;
    goto LABEL_156;
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
      v81 = v232;
      goto LABEL_156;
    }
  }
  SeCaptureSubjectContext(&SubjectContext);
  v53 = KeGetCurrentThread();
  --v53->KernelApcDisable;
  v54 = (_WORD *)*((_QWORD *)Object + 6);
  v55 = v54[13];
  if ( (v55 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v54, 0LL, 0LL);
  if ( (v55 & 1) == 0 )
    goto LABEL_82;
  CurrentIrql = KeGetCurrentIrql();
  v52 = KeGetCurrentThread();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( (v52->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (v52->MiscFlags & 0x400) == 0 && !v52->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  if ( (v55 & 1) != 0 )
  {
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
    if ( !ExAcquireFastResourceShared(v54, (ULONG_PTR)OwnerEntryForLegacyShim, 1)
      || ExIsFastResourceHeldExclusive((ULONG_PTR)v54) )
    {
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
  }
  else
  {
LABEL_82:
    ExpAcquireResourceSharedLite(*((_QWORD *)Object + 6), 1, (unsigned __int64)v52);
  }
  if ( *(__int16 *)(v250 + 2) >= 0 )
  {
    v57 = *(unsigned __int8 **)(v250 + 8);
  }
  else
  {
    v56 = *(unsigned int *)(v250 + 4);
    if ( (_DWORD)v56 )
      v57 = (unsigned __int8 *)(v250 + v56);
    else
      v57 = 0LL;
  }
  v251 = v57;
  v58 = (char *)Object;
  v59 = (char *)Object + 232;
  if ( Object != (PVOID)-232LL && v57 )
  {
    v60 = v57[1];
    v61 = 4 * v60 + 8;
    v248 = v61;
    v62 = *(_WORD *)v57;
    v242 = *(_WORD *)v57;
    v63 = *(_QWORD *)&v59[8 * (v57[4 * v60 + 4] & 0xF) + 16] & *(_QWORD *)&v59[8
                                                                             * ((unsigned __int64)v57[4 * v60 + 4] >> 4)
                                                                             + 144];
    v64 = 0;
    while ( v63 )
    {
      LOBYTE(v65) = v63;
      while ( (_BYTE)v65 )
      {
        v66 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v65);
        v67 = (const void **)(*((_QWORD *)v59 + 1) + 16LL * (v66 + (unsigned int)v64));
        if ( *(_WORD *)*v67 == v62 )
        {
          v68 = memcmp(v57, *v67, v61);
          v57 = v251;
          if ( !v68 )
            goto LABEL_208;
          v62 = v242;
          v61 = v248;
        }
        v65 = (unsigned __int8)v65 ^ (1 << v66);
      }
      v64 += 8;
      v63 >>= 8;
    }
    v69 = *(_DWORD *)v59;
    if ( *(_DWORD *)v59 <= 0x40u )
      goto LABEL_447;
    for ( i = 64; i < v69; ++i )
    {
      v67 = (const void **)(*((_QWORD *)v59 + 1) + 16LL * i);
      if ( *(_WORD *)*v67 == v62 )
      {
        v150 = memcmp(v57, *v67, v61);
        v57 = v251;
        if ( !v150 )
          goto LABEL_208;
        v62 = v242;
        v61 = v248;
      }
    }
    v67 = 0LL;
LABEL_208:
    if ( v67 )
    {
      v114 = v67 + 1;
      if ( v67 == *((const void ***)v59 + 1) && (*v114 & 0x10) == 0 )
      {
        v80 = 1;
        v58 = (char *)Object;
        goto LABEL_212;
      }
      v58 = (char *)Object;
      if ( (*v114 & 4) != 0 )
      {
        v80 = 1;
        goto LABEL_212;
      }
    }
    else
    {
LABEL_447:
      v58 = (char *)Object;
    }
  }
  v80 = 0;
LABEL_212:
  if ( v80 && *((_DWORD *)v58 + 32) )
  {
    v115 = v58 + 504;
    if ( v58 != (char *)-504LL && v57 )
    {
      v116 = v57[1];
      v117 = 4 * v116 + 8;
      v248 = v117;
      v118 = *(_WORD *)v57;
      v242 = *(_WORD *)v57;
      v119 = *(_QWORD *)&v115[8 * (v57[4 * v116 + 4] & 0xF) + 16] & *(_QWORD *)&v115[8
                                                                                   * ((unsigned __int64)v57[4 * v116 + 4] >> 4)
                                                                                   + 144];
      v120 = 0;
      while ( v119 )
      {
        LOBYTE(v121) = v119;
        while ( (_BYTE)v121 )
        {
          v122 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v121);
          v123 = *((_QWORD *)v115 + 1) + 16LL * (v122 + (unsigned int)v120);
          if ( **(_WORD **)v123 == v118 )
          {
            if ( !memcmp(v57, *(const void **)v123, v117) )
              goto LABEL_306;
            v57 = v251;
            v118 = v242;
            v117 = v248;
          }
          v121 = (unsigned __int8)v121 ^ (1 << v122);
        }
        v120 += 8;
        v119 >>= 8;
      }
      v124 = *(_DWORD *)v115;
      if ( *(_DWORD *)v115 <= 0x40u )
        goto LABEL_232;
      for ( j = 64; j < v124; ++j )
      {
        v123 = *((_QWORD *)v115 + 1) + 16LL * j;
        if ( **(_WORD **)v123 == v118 )
        {
          if ( !memcmp(v57, *(const void **)v123, v117) )
            goto LABEL_306;
          v57 = v251;
          v118 = v242;
          v117 = v248;
        }
      }
      v123 = 0LL;
LABEL_306:
      if ( v123 )
      {
        v58 = (char *)Object;
        if ( (*(_DWORD *)(v123 + 8) & 4) != 0 )
        {
          v80 = 1;
          goto LABEL_127;
        }
      }
      else
      {
LABEL_232:
        v58 = (char *)Object;
      }
    }
    v80 = 0;
  }
LABEL_127:
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)v58 + 50) & 0x20) == 0 )
  {
    v178 = *((_QWORD *)v58 + 27);
    if ( v178 )
    {
      if ( (*(_DWORD *)(v178 + 40) & 0x20) != 0 )
      {
        if ( a12 )
        {
          v179 = 0;
          v180 = v253;
          v181 = v252;
          while ( 1 )
          {
            v245 = v179;
            if ( v179 >= v235 )
              break;
            v181[v179] = -1073741790;
            v180[v179++] = 0;
          }
        }
        else
        {
          *(_DWORD *)v252 = -1073741790;
          *(_DWORD *)v253 = 0;
        }
        v246 = -1073741790;
        v230 = 0;
        v81 = v232;
        v27 = v228;
        v144 = (struct _ERESOURCE *)*((_QWORD *)v58 + 6);
LABEL_331:
        ExReleaseResourceLite(v144);
        KeLeaveCriticalRegionThread();
        SeReleaseSubjectContext(&SubjectContext);
        v26 = v230;
        goto LABEL_156;
      }
    }
  }
  v82 = v250;
  if ( SepRmEnforceCap )
  {
    v169 = *(_WORD *)(v250 + 2);
    if ( (v169 & 0x10) != 0 && KeGetCurrentIrql() < 2u )
    {
      if ( v169 >= 0 )
      {
        v182 = *(_QWORD *)(v250 + 24);
      }
      else
      {
        v170 = *(unsigned int *)(v250 + 12);
        if ( !(_DWORD)v170 )
        {
          v261 = 0LL;
          goto LABEL_129;
        }
        v182 = v250 + v170;
      }
      v261 = v182;
      if ( v182 )
      {
        ScopedPolicySid = (void *)SepGetScopedPolicySid(v182);
        if ( ScopedPolicySid )
        {
          Cap = SepRmReferenceFindCap(ScopedPolicySid);
          v185 = v268;
          if ( Cap < 0 )
            v185 = SepRmDefaultCap;
          v268 = v185;
          v240 = 1;
        }
      }
    }
  }
LABEL_129:
  v83 = v232;
  if ( (v232 & 0x2060000) != 0 && v80 )
  {
    v104 = *(_WORD *)(v82 + 2);
    if ( (v104 & 4) != 0 )
    {
      if ( v104 >= 0 )
      {
        v106 = *(_QWORD *)(v82 + 32);
      }
      else
      {
        v105 = *(unsigned int *)(v82 + 16);
        if ( (_DWORD)v105 )
          v106 = v82 + v105;
        else
          v106 = 0LL;
      }
    }
    else
    {
      v106 = 0LL;
    }
    SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
    if ( v106 )
    {
      v108 = 0;
      v109 = (unsigned __int8 *)(v106 + 8);
      v110 = *(unsigned __int16 *)(v106 + 4);
      v111 = 104928;
      while ( 1 )
      {
        if ( v108 >= v110 )
        {
          v83 = v232;
          break;
        }
        if ( (v109[1] & 8) == 0 )
        {
          v112 = *v109;
          if ( (unsigned __int8)v112 <= 0x10u && _bittest(&v111, v112) )
          {
            v113 = &v109[16 * (*((_DWORD *)v109 + 2) & 1) + 12 + 8 * (*((_DWORD *)v109 + 2) & 2)];
          }
          else if ( (_BYTE)v112 == 4 )
          {
            v113 = v109 + 12;
          }
          else
          {
            if ( (unsigned __int8)v112 >= 0xBu && (unsigned __int8)(v112 - 13) > 1u )
              goto LABEL_203;
            v113 = v109 + 8;
          }
          if ( v113 )
          {
            if ( *(_WORD *)v113 == *SeOwnerRightsSid
              && !memcmp(v113, SeOwnerRightsSid, 4LL * HIBYTE(*(_WORD *)v113) + 8) )
            {
              v83 = v232;
              goto LABEL_130;
            }
            v111 = 104928;
          }
        }
LABEL_203:
        ++v108;
        v109 += *((unsigned __int16 *)v109 + 1);
      }
    }
    v133 = 393216;
    if ( (v83 & 0x2000000) == 0 )
      v133 = v83 & 0x60000;
    v241 |= v133;
    v249 = v133;
    v83 &= 0xFFF9FFFF;
    v232 = v83;
    v244 = v83;
  }
LABEL_130:
  if ( v83 || v240 && !v239 )
  {
    v84 = Object;
    v85 = v249;
  }
  else
  {
    v84 = Object;
    if ( (*((_DWORD *)Object + 50) & 0x2000) != 0 || (v85 = v249) == 0 )
    {
      v140 = v241;
      if ( a12 )
      {
        v141 = 0;
        v142 = v291;
        v143 = v292;
        while ( 1 )
        {
          v245 = v141;
          if ( v141 >= v235 )
            break;
          if ( v140 )
          {
            v143[v141] = 0;
            v246 = 0;
            v142[v141] = v140;
          }
          else
          {
            v143[v141] = -1073741790;
            v246 = -1073741790;
            v142[v141] = 0;
          }
          ++v141;
        }
      }
      else if ( v241 )
      {
        *(_DWORD *)v252 = 0;
        v246 = 0;
        *(_DWORD *)v253 = v140;
      }
      else
      {
        *(_DWORD *)v252 = -1073741790;
        v246 = -1073741790;
        *(_DWORD *)v253 = 0;
      }
      v230 = 0;
      v81 = v232;
      v27 = v228;
      v144 = (struct _ERESOURCE *)*((_QWORD *)v84 + 6);
      goto LABEL_331;
    }
  }
  if ( a12 )
  {
    v152 = v235;
    v86 = (int *)ExAllocatePool2(0x100uLL);
    v262 = v86;
    if ( !v86 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v84 + 6));
      KeLeaveCriticalRegionThread();
      SeReleaseSubjectContext(&SubjectContext);
      v26 = -1073741670;
      v27 = v228;
      v230 = -1073741670;
      v81 = v232;
      goto LABEL_156;
    }
    v87 = &v86[v152];
    v83 = v232;
  }
  else
  {
    v86 = &v273;
    v262 = &v273;
    v87 = &v274;
  }
  LODWORD(v295) = v85;
  v27 = v228;
  SepAccessCheck(
    v82,
    (unsigned __int8 *)v267,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)v84,
    v83,
    (__int128 *)v266,
    v235,
    &v298,
    v241,
    v228,
    v86,
    0LL,
    v87,
    a12,
    v80,
    (__int64)&v295,
    &P,
    0LL,
    0LL);
  if ( SepRmEnforceCap && *v87 >= 0 && v240 )
  {
    if ( a12 )
    {
      v186 = v235;
      v187 = (char *)ExAllocatePool2(0x100uLL);
      v258 = v187;
      if ( !v187 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)Object + 6));
        KeLeaveCriticalRegionThread();
        SeReleaseSubjectContext(&SubjectContext);
        v26 = -1073741670;
LABEL_125:
        v230 = v26;
        goto LABEL_126;
      }
      v188 = (int *)&v187[4 * v186];
    }
    else
    {
      v258 = &v275;
      v188 = &v281;
      LODWORD(v186) = v235;
    }
    v255 = v188;
    v189 = *v87;
    v190 = *(_DWORD *)v262;
    LOBYTE(v249) = 0;
    if ( (_DWORD)v186 )
    {
      v26 = SepCopyObjectTypeList(v266, (unsigned int)v186, &v280);
      v230 = v26;
      if ( v26 < 0 )
      {
        v27 = v228;
        goto LABEL_126;
      }
    }
    v191 = 0LL;
    v192 = 0LL;
    v88 = Object;
    while ( 1 )
    {
      v248 = v192;
      if ( (unsigned int)v192 >= *(_DWORD *)(v268 + 60) )
        break;
      v193 = *(_QWORD *)(v268 + 8 * v192 + 64);
      if ( !*(_QWORD *)(v193 + 24) )
        goto LABEL_552;
      v194 = P;
      if ( !P )
      {
        v195 = AuthzBasepInitializeResourceClaimsFromSacl(v261, &P);
        v196 = (unsigned __int8)v249;
        if ( v195 < 0 )
          v196 = 1;
        v249 = v196;
        v194 = P;
        v191 = 0LL;
      }
      v197 = (_QWORD *)*((_QWORD *)v88 + 137);
      if ( v197 )
        v198 = v197[75];
      else
        v198 = 0LL;
      if ( v197 )
        v199 = v197[73];
      else
        v199 = 0LL;
      if ( v197 )
        v200 = v197[74];
      else
        v200 = 0LL;
      if ( v197 )
        v191 = (void *)v197[72];
      v201 = AuthzBasepEvaluateAceCondition(
               v88,
               *((void **)v88 + 97),
               v194,
               v191,
               v200,
               v199,
               v198,
               *(_DWORD **)(v193 + 24),
               *(_DWORD *)(v193 + 16),
               1,
               0,
               &v257);
      v230 = v201;
      v202 = v257;
      if ( v257 == 1 )
        goto LABEL_552;
      if ( v201 < 0 )
        goto LABEL_554;
      if ( (v88[50] & 0x10) != 0 )
      {
        v203 = (_QWORD *)*((_QWORD *)v88 + 137);
        v204 = 0LL;
        if ( v203 )
          v205 = v203[75];
        else
          v205 = 0LL;
        if ( v203 )
          v206 = v203[73];
        else
          v206 = 0LL;
        if ( v203 )
          v207 = v203[74];
        else
          v207 = 0LL;
        if ( v203 )
          v204 = (void *)v203[72];
        v230 = AuthzBasepEvaluateAceCondition(
                 v88,
                 *((void **)v88 + 97),
                 P,
                 v204,
                 v207,
                 v206,
                 v205,
                 *(_DWORD **)(v193 + 24),
                 *(_DWORD *)(v193 + 16),
                 1,
                 1,
                 &v257);
        if ( v230 < 0 )
        {
LABEL_554:
          ExReleaseResourceLite(*((PERESOURCE *)v88 + 6));
          KeLeaveCriticalRegionThread();
          SeReleaseSubjectContext(&SubjectContext);
          v26 = v230;
          v27 = v228;
          goto LABEL_126;
        }
        v202 = v257;
      }
      if ( (_BYTE)v249 || v202 == 1 )
      {
LABEL_552:
        v230 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
        if ( v230 < 0 )
          goto LABEL_554;
        v208 = v232;
        if ( (*(_DWORD *)(v193 + 48) & 1) != 0 )
        {
          if ( (v232 & 0x2000000) == 0 )
            v208 = v241 | v232;
          v209 = 0;
        }
        else
        {
          v209 = v241;
        }
        v210 = (int *)v258;
        v211 = v280;
        SepAccessCheck(
          (__int64)SecurityDescriptor,
          (unsigned __int8 *)v267,
          (__int64)SubjectContext.PrimaryToken,
          (__int64)v88,
          v208,
          (__int128 *)v280,
          v235,
          &v298,
          v209,
          v228,
          v258,
          0LL,
          v255,
          a12,
          v80,
          (__int64)&v295,
          &P,
          0LL,
          0LL);
        if ( v233 )
          v190 &= *v210;
        else
          v190 = *v210;
        if ( v190 )
          v189 = *v255;
        else
          v189 = -1073741790;
        v233 = 1;
        if ( v211 )
          SepMergeObjectTypeListAccesses(v266, v211, v235);
        if ( v189 < 0 )
          break;
      }
      v192 = v248 + 1;
      v191 = 0LL;
    }
    *v87 = v189;
    v89 = (char *)v262;
    *(_DWORD *)v262 &= v190;
    v27 = v228;
  }
  else
  {
    v88 = Object;
    v89 = (char *)v262;
  }
  ExReleaseResourceLite(*((PERESOURCE *)v88 + 6));
  KeLeaveCriticalRegionThread();
  SeReleaseSubjectContext(&SubjectContext);
  v90 = v232;
  if ( (v232 & 0x2000000) != 0 )
  {
    if ( !v229 || !*(_WORD *)((char *)&v296 + 5) && (*((_DWORD *)Object + 50) & 0x3000000) != 0x3000000 )
    {
      v91 = a12;
      if ( a12 )
        v126 = v235;
      else
        v126 = 0;
      if ( DWORD2(v269) && (!BYTE6(v269) || !BYTE4(v269) || !BYTE5(v269)) )
      {
        if ( v126 )
        {
          v158 = v87;
          v159 = v89 - (char *)v87;
          v160 = v126;
          do
          {
            v161 = v269 & *(int *)((char *)v158 + v159);
            if ( v161 == *(int *)((char *)v158 + v159) )
            {
              v94 = -1073741790;
            }
            else
            {
              *(int *)((char *)v158 + v159) = v161;
              v162 = v161 == 0;
              v94 = -1073741790;
              if ( v162 )
                *v158 = -1073741790;
              else
                *v158 = 0;
            }
            ++v158;
            --v160;
          }
          while ( v160 );
          v92 = v235;
          v93 = v235;
        }
        else
        {
          v127 = v269 & *(_DWORD *)v89;
          v94 = -1073741790;
          v92 = v235;
          v93 = v235;
          if ( v127 != *(_DWORD *)v89 )
          {
            *(_DWORD *)v89 = v127;
            v128 = -1073741790;
            if ( v127 )
              v128 = 0;
            *v87 = v128;
          }
        }
        goto LABEL_142;
      }
      goto LABEL_139;
    }
LABEL_138:
    v91 = a12;
LABEL_139:
    v92 = v235;
LABEL_140:
    v93 = v92;
    goto LABEL_141;
  }
  if ( !v229 || *(_WORD *)((char *)&v296 + 5) )
    goto LABEL_138;
  if ( (*((_DWORD *)Object + 50) & 0x3000000) != 0x3000000 || HIDWORD(v295) )
  {
    if ( a12 )
    {
      v145 = 0;
      v16 = (__int64)v253;
      PreviousMode = (__int64)v252;
      v146 = v235;
      while ( 1 )
      {
        v245 = v145;
        if ( v145 >= v146 )
          break;
        *(_DWORD *)(PreviousMode + 4LL * v145) = -1073741790;
        *(_DWORD *)(v16 + 4LL * v145++) = 0;
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
    v81 = v232;
    goto LABEL_156;
  }
  HIBYTE(v296) = 1;
  v91 = a12;
  v92 = v235;
  if ( !a12 )
  {
    *v87 = 0;
    *(_DWORD *)v89 = v241 | v90;
    goto LABEL_140;
  }
  v212 = 0LL;
  v245 = 0;
  if ( v235 < 0x10 || (v245 = 0, v213 = v235 - 1, v89 <= (char *)&v87[v213]) && &v89[4 * v213] >= (char *)v87 )
  {
    v93 = v235;
  }
  else
  {
    v93 = v235;
    v214 = v235 & 0xFFFFFFF0;
    v215 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v241 | v232), 0);
    v216 = 8;
    do
    {
      *(_OWORD *)&v87[v212] = 0LL;
      *(__m128i *)&v89[4 * v212] = v215;
      v217 = v216 - 4;
      *(_OWORD *)&v87[v217] = 0LL;
      *(__m128i *)&v89[4 * v217] = v215;
      *(_OWORD *)&v87[v216] = 0LL;
      *(__m128i *)&v89[4 * v216] = v215;
      v218 = v216 + 4;
      *(_OWORD *)&v87[v218] = 0LL;
      *(__m128i *)&v89[4 * v218] = v215;
      v212 = (unsigned int)(v212 + 16);
      v245 = v212;
      v216 += 16;
    }
    while ( (unsigned int)v212 < v214 );
  }
  if ( (unsigned int)v212 < v92 )
  {
    v219 = v241 | v90;
    v220 = (unsigned int *)&v89[4 * (unsigned int)v212];
    v221 = v92 - (unsigned int)v212;
    do
    {
      *(unsigned int *)((char *)v220 + (char *)v87 - v89) = 0;
      *v220++ = v219;
      --v221;
    }
    while ( v221 );
  }
LABEL_141:
  v94 = -1073741790;
LABEL_142:
  if ( (v90 & 0x2000000) != 0 )
  {
    v129 = v93;
    if ( !v91 )
      v129 = 0;
    v236 = 0;
    if ( v20 != -1 )
    {
      if ( v129 )
      {
        v171 = v87;
        v172 = v89 - (char *)v87;
        v173 = v129;
        do
        {
          v222 = v20 & *(int *)((char *)v171 + v172);
          if ( v222 != *(int *)((char *)v171 + v172) )
          {
            v236 = 1;
            *(int *)((char *)v171 + v172) = v222;
            v223 = 0;
            if ( !v222 )
              v223 = -1073741790;
            *v171 = v223;
          }
          ++v171;
          --v173;
        }
        while ( v173 );
        v94 = -1073741790;
      }
      else
      {
        v153 = v20 & *(_DWORD *)v89;
        if ( v153 != *(_DWORD *)v89 )
        {
          v236 = 1;
          *(_DWORD *)v89 = v153;
          v154 = -1073741790;
          if ( v153 )
            v154 = 0;
          *v87 = v154;
        }
      }
    }
    if ( !v91 )
      v93 = 0;
    v130 = v271;
    v237 = 0;
    if ( (_DWORD)v271 != -1 )
    {
      if ( v93 )
      {
        v174 = (int *)v89;
        v175 = v93;
        do
        {
          v224 = v130 & *v174;
          if ( v224 != *v174 )
          {
            v237 = 1;
            *v174 = v224;
            v225 = -1073741790;
            if ( v224 )
              v225 = 0;
            *(int *)((char *)v174 + (char *)v87 - v89) = v225;
          }
          ++v174;
          --v175;
        }
        while ( v175 );
      }
      else
      {
        v131 = *(_DWORD *)v89 & v271;
        if ( v131 != *(_DWORD *)v89 )
        {
          v237 = 1;
          *(_DWORD *)v89 = v131;
          if ( v131 )
            v94 = 0;
          *v87 = v94;
        }
      }
    }
  }
  v16 = (__int64)v252;
  *(_DWORD *)v252 = *v87;
  v15 = (__int64)v253;
  *(_DWORD *)v253 = *(_DWORD *)v89;
  v246 = *v87;
  v95 = v233;
  PreviousMode = (__int64)v255;
  v96 = v258;
  if ( SepRmEnforceCap && v233 && *v87 >= 0 )
  {
    *(_DWORD *)v16 = *v255;
    *(_DWORD *)v15 &= *v96;
    v246 = *(_DWORD *)PreviousMode;
  }
  if ( v91 )
  {
    for ( k = 1LL; ; k = (unsigned int)(v245 + 1) )
    {
      v245 = k;
      if ( (unsigned int)k >= v92 )
        break;
      v98 = 4 * k;
      *(_DWORD *)(v16 + v98) = v87[k];
      *(_DWORD *)(v15 + v98) = *(_DWORD *)&v89[4 * k];
      if ( SepRmEnforceCap && v95 && v87[(unsigned __int64)v98 / 4] >= 0 )
      {
        *(_DWORD *)(v16 + 4 * k) = *(_DWORD *)(4 * k + PreviousMode);
        *(_DWORD *)(v15 + 4 * k) &= v96[k];
      }
    }
  }
  v26 = 0;
  v230 = 0;
  v81 = v232;
LABEL_156:
  if ( v250 && Object )
  {
    if ( v236 || v237 )
    {
LABEL_349:
      v147 = KeGetCurrentThread();
      --v147->KernelApcDisable;
      v148 = (PERESOURCE *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      LOBYTE(v227) = 0;
      SeLogAccessFailure(v148, v250, v241 | v81, v246 >= 0);
      ExReleaseResourceLite(v148[6]);
      KeLeaveCriticalRegionThread();
      v26 = v230;
      goto LABEL_162;
    }
    if ( HIDWORD(v295) || (*((_DWORD *)Object + 50) & 0x4000) == 0 )
      goto LABEL_162;
    if ( v26 >= 0 )
    {
      if ( v246 < 0 || HIBYTE(v296) )
        goto LABEL_349;
LABEL_162:
      if ( v26 >= 0
        && v246 < 0
        && !HIDWORD(v295)
        && (*((_DWORD *)Object + 50) & 0x4000) != 0
        && (_BYTE)v297
        && ((unsigned int)v296 & v81 & ~(DWORD1(v295) | DWORD2(v295) | 0x2000000)) == (v81 & ~(DWORD1(v295) | DWORD2(v295) | 0x2000000)) )
      {
        SepLogLpacAccessFailure();
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
    v99 = (char *)Object - 48;
    if ( ObpTraceFlags )
      ObpPushStackInfo((__int64)Object - 48, 0, 1u, 0x74726853u);
    v100 = _InterlockedExchangeAdd64((volatile signed __int64 *)v99, 0xFFFFFFFFFFFFFFFFuLL);
    v101 = v100 <= 1;
    v102 = v100 - 1;
    if ( v101 )
    {
      if ( *((_QWORD *)v99 + 1) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v99[24] ^ (unsigned __int64)BYTE1(v99)],
          (ULONG_PTR)Object,
          1uLL,
          *((_QWORD *)v99 + 1));
      if ( v102 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v102);
      if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
      {
        ObpDeferObjectDeletion(v99);
      }
      else
      {
        if ( (v99[26] & 0x40) != 0 && *(_BYTE *)(*(_QWORD *)&v99[-ObpInfoMaskToOffset[v99[26] & 0x7F]] + 24LL) )
          ObpHandleRevocationBlockRemoveObject();
        if ( ObpTraceFlags )
          ObpDeregisterObject(v99);
        ObpRemoveObjectRoutine(v99, 0LL);
      }
    }
    v26 = v230;
  }
  if ( v266 )
    ExFreePoolWithTag(v266, 0);
  if ( v267 )
  {
    LOBYTE(v16) = 1;
    SeReleaseSid(v267, v27, v16);
  }
  if ( v250 )
    SeReleaseSecurityDescriptor(v250, v27, 0LL);
  if ( v240 )
  {
    v176 = *(_QWORD *)(v268 + 32);
    if ( v176 )
      SepRmDereferenceCapTable(v176, v15, v16, PreviousMode);
  }
  if ( v280 )
    ExFreePoolWithTag(v280, 0);
  v103 = P;
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P);
    ExFreePoolWithTag(v103, 0);
  }
  return (unsigned int)v26;
}
