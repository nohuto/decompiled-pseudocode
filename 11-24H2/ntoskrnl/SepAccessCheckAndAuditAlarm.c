/*
 * XREFs of SepAccessCheckAndAuditAlarm @ 0x140A07A00
 * Callers:
 *     NtAccessCheckByTypeResultListAndAuditAlarm @ 0x140792570 (NtAccessCheckByTypeResultListAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x140792620 (NtAccessCheckByTypeResultListAndAuditAlarmByHandle.c)
 *     NtAccessCheckByTypeAndAuditAlarm @ 0x140A078C0 (NtAccessCheckByTypeAndAuditAlarm.c)
 *     NtAccessCheckAndAuditAlarm @ 0x140A07970 (NtAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepLogLpacAccessFailure @ 0x140231454 (SepLogLpacAccessFailure.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     SepMandatoryIntegrityCheck @ 0x14028A540 (SepMandatoryIntegrityCheck.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140323B60 (AuthzBasepEvaluateAceCondition.c)
 *     SepRmReferenceFindCap @ 0x1403B562C (SepRmReferenceFindCap.c)
 *     SepGetScopedPolicySid @ 0x1403B56EC (SepGetScopedPolicySid.c)
 *     SepFreeResourceInfo @ 0x1403B9940 (SepFreeResourceInfo.c)
 *     SepFilterCheck @ 0x1403B9AB0 (SepFilterCheck.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403BADD4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepTokenIsOwner @ 0x1403D9F70 (SepTokenIsOwner.c)
 *     SepTrustLevelCheck @ 0x1403E33C0 (SepTrustLevelCheck.c)
 *     SepLocateTokenTrustLevel @ 0x1403E3620 (SepLocateTokenTrustLevel.c)
 *     RtlOwnerAcesPresent @ 0x1403F8D00 (RtlOwnerAcesPresent.c)
 *     SepMandatoryToDiscretionary @ 0x14040ECD0 (SepMandatoryToDiscretionary.c)
 *     SepAuditingEnabledForSubcategory @ 0x14040F060 (SepAuditingEnabledForSubcategory.c)
 *     SepFilterToDiscretionary @ 0x140414740 (SepFilterToDiscretionary.c)
 *     SePrivilegePolicyCheck @ 0x140415500 (SePrivilegePolicyCheck.c)
 *     SeCaptureObjectTypeList @ 0x14041E500 (SeCaptureObjectTypeList.c)
 *     SeTokenIsRestricted @ 0x140424A30 (SeTokenIsRestricted.c)
 *     SepConstrainByMandatory @ 0x14042D060 (SepConstrainByMandatory.c)
 *     SepConstrainByConstraintMask @ 0x14042D230 (SepConstrainByConstraintMask.c)
 *     SeLogAccessFailure @ 0x140438750 (SeLogAccessFailure.c)
 *     SepLpacCausedAccessFailure @ 0x14044E708 (SepLpacCausedAccessFailure.c)
 *     SeIsPermissiveLearningModeEnabled @ 0x14045771C (SeIsPermissiveLearningModeEnabled.c)
 *     SepExamineGlobalSaclEx @ 0x14045837C (SepExamineGlobalSaclEx.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404C9800 (SepBuildCapeSecurityDescriptor.c)
 *     SepAccessCheck @ 0x1404E76E0 (SepAccessCheck.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E2C90 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     SeFreeCapturedObjectTypeList @ 0x140605EB4 (SeFreeCapturedObjectTypeList.c)
 *     SepCopyObjectTypeList @ 0x140605ED0 (SepCopyObjectTypeList.c)
 *     SepMergeObjectTypeListAccesses @ 0x140605F88 (SepMergeObjectTypeListAccesses.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SepRmDestroyCapTable @ 0x140796324 (SepRmDestroyCapTable.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14084C800 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14084D2F0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140862A14 (SepAdtOpenObjectAuditAlarm.c)
 *     SeCaptureSid @ 0x140869508 (SeCaptureSid.c)
 *     SeLockSubjectContext @ 0x14086C760 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14086C7C0 (SeUnlockSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     SeCaptureSecurityDescriptor @ 0x1409108D0 (SeCaptureSecurityDescriptor.c)
 *     SeCheckAuditPrivilege @ 0x140912648 (SeCheckAuditPrivilege.c)
 *     SepProbeAndCaptureString_U @ 0x140912BA0 (SepProbeAndCaptureString_U.c)
 *     SepExamineSaclEx @ 0x140A19D34 (SepExamineSaclEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAccessCheckAndAuditAlarm(
        void *a1,
        __int64 a2,
        void **a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        _BYTE *Src,
        int a8,
        int a9,
        char a10,
        __int64 a11,
        unsigned int a12,
        __int64 a13,
        volatile void *a14,
        volatile void *a15,
        _BYTE *a16,
        char a17)
{
  __int64 v18; // rdi
  __int64 v19; // rbx
  PVOID v20; // r14
  signed int v21; // ebx
  __int64 v22; // r14
  SIZE_T v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  void *v26; // rcx
  KPROCESSOR_MODE v27; // r15
  NTSTATUS v28; // eax
  int *v29; // r12
  PACCESS_TOKEN PrimaryToken; // r15
  unsigned int *v31; // rdi
  __int16 v32; // cx
  __int64 v33; // rax
  char *v34; // rax
  __int64 v35; // rax
  char *v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  char v39; // r14
  int v40; // r12d
  __int64 v41; // rcx
  int v42; // r15d
  char v43; // al
  _DWORD *v44; // r13
  char v45; // al
  __int64 v46; // r15
  __int64 v47; // r14
  char *Pool2; // rax
  char *v49; // r13
  int *v50; // r12
  int *v51; // rcx
  char IsOwner; // al
  __int16 v53; // dx
  __int64 v54; // rax
  unsigned int v55; // r12d
  __int16 v56; // ax
  ACL *v57; // rcx
  ACL *v58; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v61; // rdx
  __int64 v62; // rax
  int v63; // eax
  int v64; // r15d
  int v65; // r15d
  int v66; // edx
  char v67; // al
  char v68; // cl
  __int64 v69; // r15
  __int64 v70; // r14
  char *v71; // rax
  int *v72; // rcx
  __int64 v73; // r13
  ULONG_PTR v74; // rbx
  unsigned int *v75; // rax
  __int64 v76; // r14
  char *v77; // rcx
  PACCESS_TOKEN v78; // r15
  char *v79; // rax
  int *v80; // rax
  int *v81; // rdi
  char v82; // r13
  unsigned int v83; // r12d
  unsigned int v84; // edx
  __int64 v85; // r15
  PVOID v86; // r8
  _DWORD *v87; // r14
  _QWORD *v88; // rax
  void *v89; // r10
  void *v90; // rdx
  void *v91; // rcx
  void *v92; // r9
  int v93; // eax
  int v94; // edi
  _QWORD *v95; // rax
  void *v96; // r8
  void *v97; // rdx
  void *v98; // rcx
  void *v99; // r9
  unsigned int v100; // edi
  unsigned int v101; // r14d
  unsigned int v102; // r14d
  int v103; // eax
  int v104; // r12d
  int v105; // edi
  int v106; // edx
  unsigned int v107; // eax
  char v108; // cl
  char *v109; // r14
  char *v110; // rcx
  __int64 v111; // rdx
  int v112; // r15d
  int v113; // edx
  char v114; // al
  char v115; // cl
  __int64 v116; // r15
  __int64 v117; // r14
  char *v118; // rax
  int *v119; // rcx
  __int64 v120; // r13
  ULONG_PTR v121; // rbx
  unsigned int *v122; // rax
  __int64 v123; // r14
  char *v124; // rcx
  char *v125; // rax
  int *v126; // rax
  int *v127; // rdi
  char v128; // r13
  unsigned int v129; // r12d
  unsigned int v130; // edx
  __int64 v131; // r15
  PVOID v132; // r8
  _DWORD *v133; // r14
  _QWORD *v134; // rax
  void *v135; // r10
  void *v136; // rdx
  void *v137; // rcx
  void *v138; // r9
  int v139; // eax
  int v140; // edi
  _QWORD *v141; // rax
  void *v142; // r8
  void *v143; // rdx
  void *v144; // rcx
  void *v145; // r9
  unsigned int v146; // edi
  unsigned int v147; // r14d
  unsigned int v148; // r14d
  int v149; // eax
  unsigned int v150; // r15d
  unsigned int v151; // eax
  int v152; // edx
  unsigned int v153; // eax
  char *v154; // rcx
  __int64 v155; // rdx
  PERESOURCE *v156; // r15
  struct _KTHREAD *CurrentThread; // rax
  char v158; // bl
  char v159; // di
  _DWORD *v160; // rax
  int v161; // r14d
  int v162; // ebx
  int v163; // r15d
  int v164; // r8d
  _BYTE *v165; // rcx
  int v166; // edx
  _BYTE *v167; // rcx
  char v168; // r8
  int v169; // r8d
  __int16 v170; // ax
  __int64 v171; // rdx
  unsigned int v172; // edx
  __int64 v173; // rcx
  unsigned int v174; // eax
  char v175; // r15
  int v176; // r14d
  int v177; // r8d
  __int16 v178; // ax
  __int64 v179; // rdx
  unsigned int v180; // eax
  char v181; // r14
  int v182; // r9d
  char *v183; // r8
  unsigned __int64 *v184; // r10
  char *v185; // rdx
  unsigned __int64 *v186; // r8
  char v187; // r10
  unsigned int v188; // ecx
  int v189; // edx
  char *v190; // r11
  char *v191; // rbx
  int *v192; // r9
  unsigned int *v193; // r8
  unsigned int v194; // edx
  char *v195; // r8
  char *v196; // r9
  char *v197; // r11
  unsigned __int64 v198; // rcx
  _DWORD *v199; // rdx
  _DWORD *v200; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  signed __int64 v202; // rax
  bool v203; // cc
  signed __int64 v204; // rax
  int Object; // [rsp+20h] [rbp-308h]
  unsigned int v207; // [rsp+40h] [rbp-2E8h]
  unsigned int v208; // [rsp+40h] [rbp-2E8h]
  KPROCESSOR_MODE PreviousMode; // [rsp+A0h] [rbp-288h]
  char v210; // [rsp+A1h] [rbp-287h] BYREF
  char v211[2]; // [rsp+A2h] [rbp-286h] BYREF
  int v212; // [rsp+A4h] [rbp-284h]
  char v213; // [rsp+A8h] [rbp-280h]
  char v214; // [rsp+A9h] [rbp-27Fh]
  unsigned int v215; // [rsp+ACh] [rbp-27Ch]
  char v216; // [rsp+B0h] [rbp-278h]
  char v217; // [rsp+B1h] [rbp-277h]
  int v218; // [rsp+B4h] [rbp-274h] BYREF
  PVOID v219; // [rsp+B8h] [rbp-270h]
  char v220; // [rsp+C0h] [rbp-268h] BYREF
  char v221[3]; // [rsp+C1h] [rbp-267h] BYREF
  unsigned int v222; // [rsp+C4h] [rbp-264h]
  char v223; // [rsp+C8h] [rbp-260h] BYREF
  char v224; // [rsp+C9h] [rbp-25Fh] BYREF
  char v225[2]; // [rsp+CAh] [rbp-25Eh] BYREF
  unsigned int v226; // [rsp+CCh] [rbp-25Ch] BYREF
  int *v227; // [rsp+D0h] [rbp-258h]
  unsigned int v228; // [rsp+D8h] [rbp-250h] BYREF
  int v229; // [rsp+E0h] [rbp-248h]
  PVOID v230; // [rsp+E8h] [rbp-240h] BYREF
  KPROCESSOR_MODE v231; // [rsp+F0h] [rbp-238h]
  _BYTE v232[7]; // [rsp+F1h] [rbp-237h] BYREF
  char *v233; // [rsp+F8h] [rbp-230h]
  unsigned __int16 v234[2]; // [rsp+100h] [rbp-228h] BYREF
  char v235; // [rsp+104h] [rbp-224h]
  bool v236; // [rsp+105h] [rbp-223h]
  char v237; // [rsp+107h] [rbp-221h]
  char v238; // [rsp+108h] [rbp-220h]
  char v239; // [rsp+109h] [rbp-21Fh]
  char v240; // [rsp+10Ah] [rbp-21Eh]
  char v241; // [rsp+10Bh] [rbp-21Dh]
  char v242; // [rsp+10Ch] [rbp-21Ch]
  int v243; // [rsp+110h] [rbp-218h]
  int v244; // [rsp+114h] [rbp-214h]
  int v245; // [rsp+118h] [rbp-210h]
  int v246; // [rsp+11Ch] [rbp-20Ch] BYREF
  int v247; // [rsp+120h] [rbp-208h]
  int v248; // [rsp+124h] [rbp-204h]
  int v249; // [rsp+128h] [rbp-200h]
  PVOID v250; // [rsp+130h] [rbp-1F8h] BYREF
  unsigned int v251; // [rsp+138h] [rbp-1F0h]
  int *v252; // [rsp+140h] [rbp-1E8h]
  __int64 v253; // [rsp+148h] [rbp-1E0h] BYREF
  PACCESS_TOKEN Token; // [rsp+150h] [rbp-1D8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+158h] [rbp-1D0h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v256; // [rsp+178h] [rbp-1B0h] BYREF
  unsigned int v257; // [rsp+180h] [rbp-1A8h]
  int v258; // [rsp+184h] [rbp-1A4h]
  int v259; // [rsp+188h] [rbp-1A0h] BYREF
  ACL *v260; // [rsp+190h] [rbp-198h]
  PVOID v261; // [rsp+198h] [rbp-190h] BYREF
  PVOID v262; // [rsp+1A0h] [rbp-188h] BYREF
  volatile void *v263; // [rsp+1A8h] [rbp-180h]
  PVOID v264; // [rsp+1B0h] [rbp-178h] BYREF
  volatile void *Address; // [rsp+1B8h] [rbp-170h]
  PVOID P; // [rsp+1C0h] [rbp-168h] BYREF
  int v267; // [rsp+1C8h] [rbp-160h] BYREF
  __int64 v268; // [rsp+1D0h] [rbp-158h] BYREF
  PVOID v269; // [rsp+1D8h] [rbp-150h] BYREF
  PVOID v270; // [rsp+1E0h] [rbp-148h] BYREF
  int v271; // [rsp+1E8h] [rbp-140h] BYREF
  PVOID v272; // [rsp+1F0h] [rbp-138h]
  __int64 v273; // [rsp+1F8h] [rbp-130h] BYREF
  PVOID v274; // [rsp+200h] [rbp-128h] BYREF
  __int64 v275; // [rsp+208h] [rbp-120h]
  unsigned __int64 v276; // [rsp+210h] [rbp-118h]
  unsigned __int64 v277; // [rsp+218h] [rbp-110h]
  unsigned __int64 v278; // [rsp+220h] [rbp-108h]
  volatile void *v279; // [rsp+238h] [rbp-F0h]
  void *v280; // [rsp+240h] [rbp-E8h]
  volatile void *v281; // [rsp+248h] [rbp-E0h]
  _BYTE *v282; // [rsp+250h] [rbp-D8h]
  PACCESS_TOKEN ClientToken; // [rsp+258h] [rbp-D0h]
  __int128 v284; // [rsp+260h] [rbp-C8h] BYREF
  void **v285; // [rsp+270h] [rbp-B8h]
  __int64 v286; // [rsp+278h] [rbp-B0h]
  unsigned __int64 v287; // [rsp+280h] [rbp-A8h]
  __int64 v288; // [rsp+288h] [rbp-A0h]
  _OWORD SecurityDescriptor[2]; // [rsp+290h] [rbp-98h] BYREF
  __int64 v290; // [rsp+2B0h] [rbp-78h]
  __int128 v291; // [rsp+2B8h] [rbp-70h] BYREF
  __int64 v292; // [rsp+2C8h] [rbp-60h]
  int v293; // [rsp+2D0h] [rbp-58h]
  __int128 v294; // [rsp+2D8h] [rbp-50h] BYREF

  v277 = a4;
  v276 = (unsigned __int64)a1;
  v222 = a12;
  v275 = (__int64)a16;
  v18 = a13;
  v263 = a14;
  Address = a15;
  Token = a1;
  v273 = a2;
  v285 = a3;
  v287 = a4;
  v278 = a5;
  v286 = a6;
  v280 = Src;
  v288 = a11;
  v19 = a12;
  v229 = a12;
  v251 = a12;
  v279 = a14;
  v281 = a15;
  v282 = a16;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v212 = 0;
  v226 = 0;
  v20 = 0LL;
  v219 = 0LL;
  v216 = 0;
  v218 = -1073741823;
  v271 = 0;
  v227 = 0LL;
  v267 = 0;
  v252 = 0LL;
  v244 = 0;
  v245 = 0;
  v239 = 0;
  v269 = 0LL;
  v262 = 0LL;
  v270 = 0LL;
  v230 = 0LL;
  v261 = 0LL;
  v253 = 0LL;
  v228 = 0;
  v294 = 0LL;
  P = 0LL;
  v210 = 0;
  v211[0] = 0;
  v232[0] = 0;
  v225[0] = 0;
  v242 = 0;
  v249 = 0;
  v238 = 0;
  v248 = 0;
  v237 = 0;
  v223 = 1;
  v224 = 0;
  v272 = 0LL;
  ClientToken = 0LL;
  v235 = 0;
  v284 = 0LL;
  v260 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v290 = 0LL;
  v256 = 0LL;
  v217 = 0;
  v214 = 0;
  v213 = 0;
  v236 = 0;
  v234[0] = 999;
  v291 = 0LL;
  v292 = 0LL;
  v293 = 0;
  v247 = 0;
  v240 = 0;
  v243 = 0;
  v250 = 0LL;
  v246 = 0;
  v215 = 0;
  v241 = 0;
  v220 = 0;
  v221[0] = 0;
  v264 = 0LL;
  v259 = -1;
  v268 = 0xFFFFFFFFLL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v231 = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( a9 )
  {
    if ( a9 != 1 )
    {
      v21 = -1073741811;
      goto LABEL_468;
    }
    v258 = 7;
  }
  else
  {
    v258 = 2;
  }
  if ( !a3 )
  {
    if ( !SubjectContext.ClientToken )
    {
      v21 = -1073741732;
LABEL_468:
      v29 = 0LL;
      goto LABEL_469;
    }
    if ( SubjectContext.ImpersonationLevel < SecurityIdentification )
    {
      v21 = -1073741659;
      goto LABEL_468;
    }
  }
  if ( !a17 )
  {
    v22 = 0x7FFFFFFF0000LL;
    v24 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Address < 0x7FFFFFFF0000LL )
      v24 = (__int64)Address;
    *(_DWORD *)v24 = *(_DWORD *)v24;
    v25 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v263 < 0x7FFFFFFF0000LL )
      v25 = (__int64)v263;
    *(_DWORD *)v25 = *(_DWORD *)v25;
    goto LABEL_20;
  }
  if ( (_DWORD)v19 && (unsigned int)v19 <= 0x1000 )
  {
    v23 = 4 * v19;
    ProbeForWrite(Address, v23, 4u);
    ProbeForWrite(v263, v23, 4u);
    v22 = 0x7FFFFFFF0000LL;
LABEL_20:
    if ( (v18 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v294 = *(_OWORD *)v18;
    v21 = v212;
    goto LABEL_22;
  }
  v21 = -1073741811;
  v212 = -1073741811;
  v22 = 0x7FFFFFFF0000LL;
LABEL_22:
  if ( v21 < 0 )
    goto LABEL_466;
  if ( a3 )
  {
    v26 = *a3;
    v274 = 0LL;
    v27 = PreviousMode;
    v28 = ObReferenceObjectByHandle(v26, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v274, 0LL);
    v21 = v28;
    v272 = v274;
    v212 = v28;
    if ( v28 < 0 )
    {
      v272 = 0LL;
      v236 = v28 != -1073741816;
      v20 = v219;
      v29 = (int *)v219;
LABEL_471:
      v31 = (unsigned int *)v230;
      goto LABEL_472;
    }
    ClientToken = SubjectContext.ClientToken;
    SubjectContext.ClientToken = v274;
    v235 = 1;
  }
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  Token = PrimaryToken;
  v27 = PreviousMode;
  if ( !SeCheckAuditPrivilege((__int64 *)&SubjectContext, PreviousMode) )
  {
    if ( (a10 & 1) == 0 )
    {
      v21 = -1073741727;
      v20 = v219;
      v29 = (int *)v219;
      goto LABEL_470;
    }
    v242 = 1;
  }
  if ( (a8 & 0xF0000000) != 0 )
  {
    v21 = -1073741594;
    v20 = v219;
    v29 = (int *)v219;
LABEL_470:
    v212 = v21;
    goto LABEL_471;
  }
  v21 = SeCaptureSecurityDescriptor(a6, PreviousMode, 1, 0, &v230);
  v212 = v21;
  if ( v21 < 0 )
  {
    v31 = 0LL;
    v230 = 0LL;
    v20 = v219;
    v29 = (int *)v219;
    goto LABEL_472;
  }
  v31 = (unsigned int *)v230;
  if ( !v230 )
  {
LABEL_38:
    v21 = -1073741703;
    v212 = -1073741703;
    v20 = v219;
    v29 = (int *)v219;
    goto LABEL_472;
  }
  v32 = *((_WORD *)v230 + 1);
  if ( v32 >= 0 )
  {
    v34 = (char *)*((_QWORD *)v230 + 1);
  }
  else
  {
    v33 = *((unsigned int *)v230 + 1);
    if ( !(_DWORD)v33 )
      goto LABEL_38;
    v34 = (char *)v230 + v33;
  }
  if ( !v34 )
    goto LABEL_38;
  if ( v32 >= 0 )
  {
    v36 = (char *)*((_QWORD *)v230 + 2);
  }
  else
  {
    v35 = *((unsigned int *)v230 + 2);
    if ( !(_DWORD)v35 )
      goto LABEL_38;
    v36 = (char *)v230 + v35;
  }
  if ( !v36 )
    goto LABEL_38;
  if ( (unsigned __int64)v282 < 0x7FFFFFFF0000LL )
    v22 = v275;
  *(_BYTE *)v22 = *(_BYTE *)v22;
  v21 = SepProbeAndCaptureString_U(v276, (__int64)&v269);
  v212 = v21;
  if ( v21 >= 0 )
  {
    v21 = SepProbeAndCaptureString_U(v277, (__int64)&v262);
    v212 = v21;
    if ( v21 >= 0 )
    {
      v21 = SepProbeAndCaptureString_U(v278, (__int64)&v270);
      v212 = v21;
    }
  }
  v39 = v215;
  LOBYTE(v40) = v247;
  if ( v21 < 0 )
    goto LABEL_466;
  if ( Src )
  {
    v21 = SeCaptureSid(Src, PreviousMode, v37, v38, Object, 1, &v261);
    v212 = v21;
    if ( v21 < 0 )
    {
      v261 = 0LL;
      v20 = v219;
      v29 = (int *)v219;
      goto LABEL_471;
    }
  }
  v21 = SeCaptureObjectTypeList(v288, v229, PreviousMode, &v253);
  v212 = v21;
  if ( v21 < 0 )
  {
LABEL_466:
    v20 = v219;
    v29 = (int *)v219;
    v27 = PreviousMode;
    goto LABEL_471;
  }
  v31 = (unsigned int *)v230;
  v21 = SepTrustLevelCheck(v41, (__int64)v230, &SubjectContext, 0LL, 0LL, 1, &v259);
  v212 = v21;
  if ( v21 < 0 )
  {
LABEL_465:
    v20 = v219;
    v29 = (int *)v219;
    goto LABEL_472;
  }
  v42 = a8;
  v21 = SepFilterToDiscretionary(&v259, a8);
  v212 = v21;
  v43 = v220;
  if ( v21 < 0 )
    v43 = 1;
  v220 = v43;
  v44 = Token;
  if ( v21 < 0 )
    goto LABEL_80;
  v21 = SepFilterCheck((__int64)v31, &v250, (__int64)Token, 1, (__int64)&v268);
  v212 = v21;
  if ( v21 < 0 )
    goto LABEL_464;
  v21 = SepFilterToDiscretionary(&v268, v42);
  v212 = v21;
  v45 = v221[0];
  if ( v21 < 0 )
    v45 = 1;
  v221[0] = v45;
  if ( v21 < 0 )
    goto LABEL_80;
  v21 = SepMandatoryIntegrityCheck(&v294, (__int64)v31, 0, (__int64)v44, 1, (__int64)&v284);
  v212 = v21;
  if ( v21 < 0 )
  {
LABEL_464:
    v27 = PreviousMode;
    goto LABEL_465;
  }
  v21 = SepMandatoryToDiscretionary(&v284, v42);
  v212 = v21;
  if ( (v21 < 0 || (v42 & 0x2000000) != 0) && (v44[50] & 0x4000) != 0 )
  {
    v40 = (unsigned __int8)v40;
    if ( HIDWORD(v284) <= 0x2000 )
      v40 = 1;
    v247 = v40;
  }
  if ( v21 < 0 && !(_BYTE)v40
    || (v21 = SePrivilegePolicyCheck(&a8, &v228, (__int64 *)&SubjectContext, 0LL, (__int64)&P, PreviousMode),
        v212 = v21,
        a8) )
  {
LABEL_80:
    v215 = v228;
    goto LABEL_81;
  }
  v215 = v228;
  if ( v228 )
    v39 = 1;
LABEL_81:
  SeLockSubjectContext(&SubjectContext);
  if ( v21 < 0 && !(_BYTE)v40 )
  {
    v211[0] = 1;
    v218 = v21;
    if ( a17 )
    {
      v46 = (unsigned int)v229;
      v47 = (unsigned int)v229;
      Pool2 = (char *)ExAllocatePool2(0x100uLL, 8LL * (unsigned int)v229, 0x61476553u);
      v49 = Pool2;
      v219 = Pool2;
      if ( Pool2 )
      {
        v216 = 1;
        v50 = (int *)&Pool2[4 * v46];
        if ( (_DWORD)v46 )
        {
          v51 = (int *)&Pool2[4 * v46];
          do
          {
            v51[-v46] = v226;
            *v51++ = v218;
            --v47;
          }
          while ( v47 );
        }
        goto LABEL_339;
      }
      SeUnlockSubjectContext(&SubjectContext);
      v21 = -1073741670;
      v212 = -1073741670;
      v20 = 0LL;
      v29 = v227;
      v27 = PreviousMode;
      goto LABEL_472;
    }
LABEL_237:
    v49 = (char *)&v226;
    v219 = &v226;
    v50 = &v218;
    goto LABEL_339;
  }
  IsOwner = SepTokenIsOwner((__int64)v44, (__int64)v31);
  v213 = IsOwner;
  v31 = (unsigned int *)v230;
  if ( !SepRmEnforceCap )
    goto LABEL_97;
  v53 = *((_WORD *)v230 + 1);
  if ( (v53 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_97;
  if ( v53 >= 0 )
  {
    v58 = (ACL *)*((_QWORD *)v230 + 3);
    goto LABEL_104;
  }
  v54 = *((unsigned int *)v230 + 3);
  if ( (_DWORD)v54 )
  {
    v58 = (ACL *)((char *)v230 + v54);
LABEL_104:
    v260 = v58;
    if ( v58 )
    {
      ScopedPolicySid = (void *)SepGetScopedPolicySid((__int64)v58);
      if ( ScopedPolicySid )
      {
        Cap = SepRmReferenceFindCap(ScopedPolicySid, &v256);
        v61 = v256;
        if ( Cap < 0 )
          v61 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)SepRmDefaultCap;
        v256 = v61;
        v21 = 0;
        v212 = 0;
        v217 = 1;
        IsOwner = v213;
        goto LABEL_98;
      }
    }
    goto LABEL_96;
  }
  v260 = 0LL;
LABEL_96:
  IsOwner = v213;
LABEL_97:
  v21 = v212;
LABEL_98:
  v55 = a8;
  if ( (a8 & 0x2060000) != 0
    && IsOwner
    && ((v56 = *((_WORD *)v31 + 1), (v56 & 4) != 0)
      ? (v56 >= 0
       ? (v57 = (ACL *)*((_QWORD *)v31 + 4))
       : (v62 = v31[4], (_DWORD)v62)
       ? (v57 = (ACL *)((char *)v31 + v62))
       : (v57 = 0LL))
      : (v57 = 0LL),
        !RtlOwnerAcesPresent(v57)) )
  {
    if ( (v55 & 0x2000000) != 0 )
    {
      v63 = 393216;
      v64 = v228 | 0x60000;
    }
    else
    {
      v63 = v55 & 0x60000;
      v64 = v228 | v55 & 0x60000;
    }
    v215 = v64;
    v243 = v63;
    v228 = v64;
    v55 &= 0xFFF9FFFF;
    a8 = v55;
  }
  else
  {
    v215 = v228;
  }
  if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v55 || v217 && !v39 )
    {
      v65 = v243;
    }
    else if ( (v44[50] & 0x6000) == 0x2000 || (v65 = v243) == 0 )
    {
      v226 = v215;
      if ( v215 )
      {
        v66 = 0;
        v67 = 0;
        v68 = 1;
      }
      else
      {
        v66 = -1073741790;
        v67 = 1;
        v68 = 0;
      }
      v210 = v68;
      v211[0] = v67;
      v218 = v66;
      if ( !a17 )
        goto LABEL_237;
      v69 = (unsigned int)v229;
      v70 = (unsigned int)v229;
      v71 = (char *)ExAllocatePool2(0x100uLL, 8LL * (unsigned int)v229, 0x61476553u);
      v49 = v71;
      v219 = v71;
      if ( v71 )
      {
        v216 = 1;
        v50 = (int *)&v71[4 * v69];
        if ( (_DWORD)v69 )
        {
          v72 = (int *)&v71[4 * v69];
          do
          {
            v72[-v69] = v226;
            *v72++ = v218;
            --v70;
          }
          while ( v70 );
        }
        goto LABEL_339;
      }
LABEL_131:
      v21 = -1073741670;
      v212 = -1073741670;
      SeUnlockSubjectContext(&SubjectContext);
      v20 = 0LL;
      v29 = v227;
      v27 = PreviousMode;
      goto LABEL_472;
    }
    v73 = v251;
    v74 = 8LL * v251;
    if ( a17 )
    {
      v75 = (unsigned int *)ExAllocatePool2(0x100uLL, 8LL * v251, 0x61476553u);
      v20 = v75;
      v219 = v75;
      if ( !v75 )
      {
LABEL_139:
        v21 = -1073741670;
        v212 = -1073741670;
        SeUnlockSubjectContext(&SubjectContext);
        v29 = v227;
        v27 = PreviousMode;
        goto LABEL_472;
      }
      v216 = 1;
      v76 = 4 * v73;
      v77 = (char *)&v75[v73];
    }
    else
    {
      v75 = &v226;
      v219 = &v226;
      v77 = (char *)&v218;
      v76 = 4LL * v251;
    }
    v233 = v77;
    LODWORD(v291) = v65;
    v78 = Token;
    SepAccessCheck(
      (__int64)v31,
      (__int64)v261,
      (__int64)SubjectContext.PrimaryToken,
      (__int64)Token,
      v55,
      (__int128 *)v253,
      v229,
      &v294,
      v215,
      PreviousMode,
      v75,
      0LL,
      (int *)v77,
      a17,
      v213,
      (__int64)&v291,
      (__int64)&v250,
      &v210,
      v211);
    if ( !SepRmEnforceCap || *(int *)v233 < 0 || !v217 )
    {
      v21 = v212;
      v215 = v228;
      goto LABEL_213;
    }
    if ( a17 )
    {
      v79 = (char *)ExAllocatePool2(0x100uLL, v74, 0x61476553u);
      v29 = (int *)v79;
      v227 = (int *)v79;
      if ( !v79 )
      {
LABEL_147:
        SeUnlockSubjectContext(&SubjectContext);
        SeReleaseSubjectContext(&SubjectContext);
        v21 = -1073741670;
        v20 = v219;
LABEL_469:
        v27 = PreviousMode;
        goto LABEL_470;
      }
      v80 = (int *)&v79[v76];
      v81 = v29;
    }
    else
    {
      v81 = &v271;
      v227 = &v271;
      v80 = &v267;
    }
    v252 = v80;
    if ( !v229 )
    {
      v21 = v212;
LABEL_154:
      v82 = 0;
      v83 = 0;
      if ( !HIDWORD(v256[2].Linkage.Blink) )
      {
        v215 = v228;
        goto LABEL_210;
      }
      v84 = v228;
      v215 = v228;
      while ( 1 )
      {
        v85 = *(&v256[2].Signature + v83);
        if ( !*(_QWORD *)(v85 + 24) )
          goto LABEL_193;
        v86 = v250;
        if ( !v250 )
        {
          if ( (int)AuthzBasepInitializeResourceClaimsFromSacl((__int64)v260, (__int64 *)&v250) < 0 )
            v82 = 1;
          v86 = v250;
        }
        v87 = Token;
        v88 = (_QWORD *)*((_QWORD *)Token + 137);
        v89 = v88 ? (void *)v88[75] : 0LL;
        v90 = v88 ? (void *)v88[73] : 0LL;
        v91 = v88 ? (void *)v88[74] : 0LL;
        v92 = v88 ? (void *)v88[72] : 0LL;
        v93 = AuthzBasepEvaluateAceCondition(
                Token,
                *((void **)Token + 97),
                v86,
                v92,
                v91,
                v90,
                v89,
                *(_DWORD **)(v85 + 24),
                *(_DWORD *)(v85 + 16),
                1u,
                0,
                &v246);
        v21 = v93;
        v212 = v93;
        v94 = v246;
        if ( v246 == 1 )
          break;
        if ( v93 < 0 )
          goto LABEL_252;
        if ( SeTokenIsRestricted(v87) )
        {
          v95 = (_QWORD *)*((_QWORD *)v87 + 137);
          if ( v95 )
            v96 = (void *)v95[75];
          else
            v96 = 0LL;
          if ( v95 )
            v97 = (void *)v95[73];
          else
            v97 = 0LL;
          if ( v95 )
            v98 = (void *)v95[74];
          else
            v98 = 0LL;
          if ( v95 )
            v99 = (void *)v95[72];
          else
            v99 = 0LL;
          v21 = AuthzBasepEvaluateAceCondition(
                  v87,
                  *((void **)v87 + 97),
                  v250,
                  v99,
                  v98,
                  v97,
                  v96,
                  *(_DWORD **)(v85 + 24),
                  *(_DWORD *)(v85 + 16),
                  1u,
                  1u,
                  &v246);
          v212 = v21;
          if ( v21 < 0 )
            goto LABEL_252;
          v94 = v246;
        }
        if ( v82 || v94 == 1 )
          break;
        v81 = v227;
LABEL_207:
        ++v83;
        v84 = v215;
        if ( v83 >= HIDWORD(v256[2].Linkage.Blink) )
        {
          v78 = Token;
LABEL_210:
          v210 = v223;
          v211[0] = v224;
          v103 = v244;
          *v81 &= v244;
          v73 = v251;
          if ( !v103 )
          {
            *v252 = -1073741790;
            v210 = 0;
            v211[0] = 1;
          }
LABEL_213:
          v104 = a8;
          v105 = a8 & 0x2000000;
          if ( (a8 & 0x2000000) == 0 )
          {
            if ( (_BYTE)v247 && !*(_WORD *)((char *)&v292 + 5) )
            {
              if ( !SeIsPermissiveLearningModeEnabled((__int64)v78) || HIDWORD(v291) )
              {
                v210 = 0;
                v211[0] = 1;
                v107 = 0;
                v226 = 0;
                v218 = v106;
                v108 = a17;
                if ( a17 && v229 )
                {
                  v109 = v233;
                  v110 = v233;
                  v111 = (_BYTE *)v219 - v233;
                  while ( 1 )
                  {
                    *(_DWORD *)&v110[v111] = v107;
                    *(_DWORD *)v110 = v218;
                    v110 += 4;
                    if ( !--v73 )
                      break;
                    v107 = v226;
                  }
                  goto LABEL_329;
                }
LABEL_332:
                v109 = v233;
                goto LABEL_333;
              }
LABEL_330:
              HIBYTE(v292) = 1;
              v210 = 1;
              v211[0] = 0;
              v226 = v104;
              v218 = 0;
            }
LABEL_331:
            v108 = a17;
            goto LABEL_332;
          }
LABEL_314:
          if ( (_BYTE)v247 && (*(_WORD *)((char *)&v292 + 5) || SeIsPermissiveLearningModeEnabled((__int64)v78)) )
            goto LABEL_331;
          v150 = v222;
          v151 = v222;
          if ( !a17 )
            v151 = 0;
          v109 = v233;
          v49 = (char *)v219;
          SepConstrainByMandatory((__int64)&v284, v104, (char *)v219, v233, 0LL, v151);
          v108 = a17;
          goto LABEL_334;
        }
      }
      v84 = v215;
LABEL_193:
      if ( (*(_DWORD *)(v85 + 48) & 1) != 0 )
      {
        if ( (a8 & 0x2000000) != 0 )
          v100 = a8;
        else
          v100 = a8 | v84;
        v101 = 0;
      }
      else
      {
        v100 = a8;
        v101 = v84;
      }
      v21 = SepBuildCapeSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 **)(v85 + 32), v260);
      v212 = v21;
      if ( v21 < 0 )
        goto LABEL_252;
      v207 = v101;
      v102 = v229;
      SepAccessCheck(
        (__int64)SecurityDescriptor,
        (__int64)v261,
        (__int64)SubjectContext.PrimaryToken,
        (__int64)SubjectContext.ClientToken,
        v100,
        (__int128 *)v264,
        v229,
        &v294,
        v207,
        PreviousMode,
        v227,
        0LL,
        v252,
        a17,
        v213,
        (__int64)&v291,
        (__int64)&v250,
        &v223,
        &v224);
      v81 = v227;
      if ( v214 )
        v244 &= *v227;
      else
        v244 = *v227;
      if ( v264 )
        SepMergeObjectTypeListAccesses(v253, (__int64)v264, v102);
      v214 = 1;
      goto LABEL_207;
    }
    v21 = SepCopyObjectTypeList(v253, v229, (__int64 *)&v264);
    v212 = v21;
    if ( v21 >= 0 )
      goto LABEL_154;
LABEL_252:
    v20 = v219;
    v29 = v227;
    v27 = PreviousMode;
    goto LABEL_471;
  }
  if ( v55 || v217 && !v39 )
  {
    v112 = v243;
  }
  else if ( (v44[50] & 0x2000) != 0 || (v112 = v243) == 0 )
  {
    v226 = v215;
    if ( v215 )
    {
      v113 = 0;
      v114 = 0;
      v115 = 1;
    }
    else
    {
      v113 = -1073741790;
      v114 = 1;
      v115 = 0;
    }
    v210 = v115;
    v211[0] = v114;
    v218 = v113;
    if ( !a17 )
      goto LABEL_237;
    v116 = (unsigned int)v229;
    v117 = (unsigned int)v229;
    v118 = (char *)ExAllocatePool2(0x100uLL, 8LL * (unsigned int)v229, 0x61476553u);
    v49 = v118;
    v219 = v118;
    if ( v118 )
    {
      v216 = 1;
      v50 = (int *)&v118[4 * v116];
      if ( (_DWORD)v116 )
      {
        v119 = (int *)&v118[4 * v116];
        do
        {
          v119[-v116] = v226;
          *v119++ = v218;
          --v117;
        }
        while ( v117 );
      }
      goto LABEL_339;
    }
    goto LABEL_131;
  }
  v120 = v251;
  v121 = 8LL * v251;
  if ( a17 )
  {
    v122 = (unsigned int *)ExAllocatePool2(0x100uLL, 8LL * v251, 0x61476553u);
    v20 = v122;
    v219 = v122;
    if ( !v122 )
      goto LABEL_139;
    v216 = 1;
    v123 = 4 * v120;
    v124 = (char *)&v122[v120];
  }
  else
  {
    v122 = &v226;
    v219 = &v226;
    v124 = (char *)&v218;
    v123 = 4LL * v251;
  }
  v233 = v124;
  LODWORD(v291) = v112;
  v78 = Token;
  SepAccessCheck(
    (__int64)v31,
    (__int64)v261,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)Token,
    v55,
    (__int128 *)v253,
    v229,
    &v294,
    v215,
    PreviousMode,
    v122,
    0LL,
    (int *)v124,
    a17,
    v213,
    (__int64)&v291,
    (__int64)&v250,
    &v210,
    v211);
  if ( !SepRmEnforceCap || *(int *)v233 < 0 || !v217 )
  {
    v21 = v212;
    v215 = v228;
    goto LABEL_313;
  }
  if ( a17 )
  {
    v125 = (char *)ExAllocatePool2(0x100uLL, v121, 0x61476553u);
    v29 = (int *)v125;
    v227 = (int *)v125;
    if ( !v125 )
      goto LABEL_147;
    v126 = (int *)&v125[v123];
    v127 = v29;
  }
  else
  {
    v127 = &v271;
    v227 = &v271;
    v126 = &v267;
  }
  v252 = v126;
  if ( v229 )
  {
    v21 = SepCopyObjectTypeList(v253, v229, (__int64 *)&v264);
    v212 = v21;
    if ( v21 < 0 )
      goto LABEL_252;
  }
  else
  {
    v21 = v212;
  }
  v128 = 0;
  v129 = 0;
  if ( !HIDWORD(v256[2].Linkage.Blink) )
  {
    v215 = v228;
    goto LABEL_310;
  }
  v130 = v228;
  v215 = v228;
  do
  {
    v131 = *(&v256[2].Signature + v129);
    if ( *(_QWORD *)(v131 + 24) )
    {
      v132 = v250;
      if ( !v250 )
      {
        if ( (int)AuthzBasepInitializeResourceClaimsFromSacl((__int64)v260, (__int64 *)&v250) < 0 )
          v128 = 1;
        v132 = v250;
      }
      v133 = Token;
      v134 = (_QWORD *)*((_QWORD *)Token + 137);
      if ( v134 )
        v135 = (void *)v134[75];
      else
        v135 = 0LL;
      if ( v134 )
        v136 = (void *)v134[73];
      else
        v136 = 0LL;
      if ( v134 )
        v137 = (void *)v134[74];
      else
        v137 = 0LL;
      if ( v134 )
        v138 = (void *)v134[72];
      else
        v138 = 0LL;
      v139 = AuthzBasepEvaluateAceCondition(
               Token,
               *((void **)Token + 97),
               v132,
               v138,
               v137,
               v136,
               v135,
               *(_DWORD **)(v131 + 24),
               *(_DWORD *)(v131 + 16),
               1u,
               0,
               &v246);
      v21 = v139;
      v212 = v139;
      v140 = v246;
      if ( v246 != 1 )
      {
        if ( v139 < 0 )
          goto LABEL_252;
        if ( SeTokenIsRestricted(v133) )
        {
          v141 = (_QWORD *)*((_QWORD *)v133 + 137);
          if ( v141 )
            v142 = (void *)v141[75];
          else
            v142 = 0LL;
          if ( v141 )
            v143 = (void *)v141[73];
          else
            v143 = 0LL;
          if ( v141 )
            v144 = (void *)v141[74];
          else
            v144 = 0LL;
          if ( v141 )
            v145 = (void *)v141[72];
          else
            v145 = 0LL;
          v21 = AuthzBasepEvaluateAceCondition(
                  v133,
                  *((void **)v133 + 97),
                  v250,
                  v145,
                  v144,
                  v143,
                  v142,
                  *(_DWORD **)(v131 + 24),
                  *(_DWORD *)(v131 + 16),
                  1u,
                  1u,
                  &v246);
          v212 = v21;
          if ( v21 < 0 )
            goto LABEL_252;
          v140 = v246;
        }
        if ( !v128 && v140 != 1 )
        {
          v127 = v227;
          goto LABEL_307;
        }
      }
      v130 = v215;
    }
    if ( (*(_DWORD *)(v131 + 48) & 1) != 0 )
    {
      if ( (a8 & 0x2000000) != 0 )
        v146 = a8;
      else
        v146 = a8 | v130;
      v147 = 0;
    }
    else
    {
      v146 = a8;
      v147 = v130;
    }
    v21 = SepBuildCapeSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 **)(v131 + 32), v260);
    v212 = v21;
    if ( v21 < 0 )
      goto LABEL_252;
    v208 = v147;
    v148 = v229;
    SepAccessCheck(
      (__int64)SecurityDescriptor,
      (__int64)v261,
      (__int64)SubjectContext.PrimaryToken,
      (__int64)SubjectContext.ClientToken,
      v146,
      (__int128 *)v264,
      v229,
      &v294,
      v208,
      PreviousMode,
      v227,
      0LL,
      v252,
      a17,
      v213,
      (__int64)&v291,
      (__int64)&v250,
      &v223,
      &v224);
    v127 = v227;
    if ( v214 )
      v244 &= *v227;
    else
      v244 = *v227;
    if ( v264 )
      SepMergeObjectTypeListAccesses(v253, (__int64)v264, v148);
    v214 = 1;
LABEL_307:
    ++v129;
    v130 = v215;
  }
  while ( v129 < HIDWORD(v256[2].Linkage.Blink) );
  v78 = Token;
LABEL_310:
  v210 = v223;
  v211[0] = v224;
  v149 = v244;
  *v127 &= v244;
  v120 = v251;
  if ( !v149 )
  {
    *v252 = -1073741790;
    v210 = 0;
    v211[0] = 1;
  }
LABEL_313:
  v104 = a8;
  v105 = a8 & 0x2000000;
  if ( (a8 & 0x2000000) != 0 )
    goto LABEL_314;
  if ( !(_BYTE)v247 || *(_WORD *)((char *)&v292 + 5) )
    goto LABEL_331;
  if ( SeIsPermissiveLearningModeEnabled((__int64)v78) && !HIDWORD(v291) )
    goto LABEL_330;
  v210 = 0;
  v211[0] = 1;
  v153 = 0;
  v226 = 0;
  v218 = v152;
  v108 = a17;
  if ( !a17 || !v229 )
    goto LABEL_332;
  v109 = v233;
  v154 = v233;
  v155 = (_BYTE *)v219 - v233;
  while ( 1 )
  {
    *(_DWORD *)&v154[v155] = v153;
    *(_DWORD *)v154 = v218;
    v154 += 4;
    if ( !--v120 )
      break;
    v153 = v226;
  }
LABEL_329:
  v108 = a17;
LABEL_333:
  v150 = v222;
  v49 = (char *)v219;
LABEL_334:
  if ( v105 )
  {
    if ( !v108 )
      v150 = 0;
    SepConstrainByConstraintMask(v259, v104, v49, v109, 0LL, v150, &v220);
    SepConstrainByConstraintMask(v268, v104, v49, v109, 0LL, v150, v221);
  }
  v50 = (int *)v233;
  v31 = (unsigned int *)v230;
LABEL_339:
  v156 = (PERESOURCE *)Token;
  if ( !Token )
    goto LABEL_354;
  if ( v220 || v221[0] )
  {
LABEL_347:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(v156[6], 1u);
    v158 = v218 >= 0;
    v159 = a8 | v228;
    v160 = SepLocateTokenTrustLevel(&SubjectContext);
    SeLogAccessFailure((const void ***)v156, 0LL, 0LL, (ULONGLONG)v160, (__int64)v230, v159, v158);
    ExReleaseResourceLite(v156[6]);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v21 = v212;
    v31 = (unsigned int *)v230;
    v215 = v228;
    goto LABEL_348;
  }
  if ( HIDWORD(v291) || (*((_DWORD *)Token + 50) & 0x4000) == 0 )
  {
LABEL_348:
    if ( v21 < 0 )
      goto LABEL_354;
    v161 = a8;
    if ( v218 < 0
      && !HIDWORD(v291)
      && ((_DWORD)v156[25] & 0x4000) != 0
      && SepLpacCausedAccessFailure((__int64)&v291, a8) )
    {
      SepLogLpacAccessFailure();
    }
  }
  else
  {
    if ( v21 >= 0 )
    {
      if ( v218 < 0 || HIBYTE(v292) )
        goto LABEL_347;
      goto LABEL_348;
    }
LABEL_354:
    v161 = a8;
  }
  if ( !v242 )
  {
    if ( v258 == 2 )
    {
      if ( v210 )
        LOBYTE(v249) = SepAdtAuditObjectAccessWithContext(
                         0LL,
                         (unsigned __int16 *)v262,
                         v210,
                         0,
                         &SubjectContext,
                         0,
                         v234);
      if ( v211[0] )
      {
        LOBYTE(v162) = SepAdtAuditObjectAccessWithContext(
                         0LL,
                         (unsigned __int16 *)v262,
                         0,
                         v211[0],
                         &SubjectContext,
                         0,
                         v234);
        v248 = (unsigned __int8)v162;
        goto LABEL_388;
      }
LABEL_387:
      LOBYTE(v162) = v248;
      goto LABEL_388;
    }
    if ( v210 )
    {
      v234[0] = 152;
      v163 = SepAuditingEnabledForSubcategory(152, v210, 0);
      v249 = v163;
      if ( dword_140F04A30 != v164 )
      {
        v165 = SubjectContext.PrimaryToken;
        if ( SubjectContext.ClientToken )
          v165 = SubjectContext.ClientToken;
        if ( v165 )
        {
          if ( v165[119] == 2 && (v165[114] & 0xF) != 0 )
          {
            if ( (v165[114] & 1) != 0 )
            {
              LOBYTE(v163) = 1;
            }
            else
            {
              v163 = (unsigned __int8)v163;
              if ( (v165[114] & 2) != 0 )
                v163 = 0;
            }
          }
        }
        else
        {
          SepAuditFailed(-1073741700);
        }
        v249 = v163;
      }
    }
    if ( !v211[0] )
      goto LABEL_387;
    v234[0] = 152;
    v162 = SepAuditingEnabledForSubcategory(152, 0, v211[0]);
    v248 = v162;
    if ( dword_140F04A30 != v166 )
    {
      v167 = SubjectContext.PrimaryToken;
      if ( SubjectContext.ClientToken )
        v167 = SubjectContext.ClientToken;
      if ( v167 )
      {
        if ( v167[119] == 2 && (v167[114] & 0xF) != 0 )
        {
          if ( (v167[114] & 4) != 0 )
          {
            LOBYTE(v162) = 1;
            v248 = v162;
            goto LABEL_388;
          }
          v162 = (unsigned __int8)v162;
          if ( (v167[114] & 8) != 0 )
            v162 = 0;
        }
        v248 = v162;
        goto LABEL_388;
      }
      SepAuditFailed(-1073741700);
      v248 = v162;
    }
LABEL_388:
    v168 = v249;
    if ( (_BYTE)v249 || (_BYTE)v162 )
    {
      v169 = (int)SubjectContext.PrimaryToken;
      if ( SubjectContext.ClientToken )
        v169 = (int)SubjectContext.ClientToken;
      v170 = *((_WORD *)v31 + 1);
      if ( (v170 & 0x10) != 0 )
      {
        if ( v170 >= 0 )
        {
          v171 = *((_QWORD *)v31 + 3);
        }
        else
        {
          v172 = v31[3];
          if ( v172 )
            LODWORD(v171) = (_DWORD)v31 + v172;
          else
            LODWORD(v171) = 0;
        }
      }
      else
      {
        LODWORD(v171) = 0;
      }
      if ( (v170 & 0x10) != 0 )
      {
        if ( v170 >= 0 )
        {
          v173 = *((_QWORD *)v31 + 3);
        }
        else
        {
          v174 = v31[3];
          if ( v174 )
            LODWORD(v173) = (_DWORD)v31 + v174;
          else
            LODWORD(v173) = 0;
        }
      }
      else
      {
        LODWORD(v173) = 0;
      }
      v162 = v161 | v215;
      v175 = a17;
      v176 = v229;
      SepExamineSaclEx(
        v173,
        v171,
        v169,
        v162,
        v253,
        v229,
        a17,
        (__int64)v50,
        (__int64)v49,
        (__int64)v261,
        v213,
        (__int64)v232,
        (__int64)v225);
      v177 = (int)SubjectContext.PrimaryToken;
      if ( SubjectContext.ClientToken )
        v177 = (int)SubjectContext.ClientToken;
      v178 = *((_WORD *)v31 + 1);
      if ( (v178 & 0x10) != 0 )
      {
        if ( v178 >= 0 )
        {
          v179 = *((_QWORD *)v31 + 3);
        }
        else
        {
          v180 = v31[3];
          if ( v180 )
            LODWORD(v179) = (_DWORD)v31 + v180;
          else
            LODWORD(v179) = 0;
        }
      }
      else
      {
        LODWORD(v179) = 0;
      }
      SepExamineGlobalSaclEx(
        (__int64)v262,
        v179,
        v177,
        v162,
        v253,
        v176,
        v175,
        (__int64)v50,
        (__int64)v49,
        (__int64)v261,
        v213,
        (__int64)v232,
        v225);
      LOBYTE(v162) = v248;
      v168 = v249;
    }
    else
    {
      v176 = v229;
      v175 = a17;
    }
    if ( v232[0] || v225[0] )
    {
      v182 = (unsigned __int8)v245;
      if ( v210 )
        v182 = 1;
      v245 = v182;
      if ( v232[0] && v168 )
      {
        v183 = 0LL;
        if ( v175 )
          v183 = v49;
        v184 = (unsigned __int64 *)&v273;
        if ( !v210 )
          v184 = 0LL;
        v31 = (unsigned int *)v230;
        SepAdtOpenObjectAuditAlarm(
          v234[0],
          (const int *)v269,
          v184,
          (unsigned __int16 *)v262,
          (unsigned __int16 *)v270,
          (__int16 *)v230,
          SubjectContext.ClientToken,
          (_QWORD *)SubjectContext.PrimaryToken,
          *(_DWORD *)v49,
          *(_DWORD *)v49,
          (int *)P,
          1u,
          (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
          v258,
          v253,
          v176,
          v183,
          0LL,
          0LL);
      }
      if ( v225[0] && (_BYTE)v162 )
      {
        v185 = 0LL;
        if ( v175 )
          v185 = v49;
        v186 = (unsigned __int64 *)&v273;
        if ( !v210 )
          v186 = 0LL;
        v31 = (unsigned int *)v230;
        SepAdtOpenObjectAuditAlarm(
          v234[0],
          (const int *)v269,
          v186,
          (unsigned __int16 *)v262,
          (unsigned __int16 *)v270,
          (__int16 *)v230,
          SubjectContext.ClientToken,
          (_QWORD *)SubjectContext.PrimaryToken,
          a8,
          a8,
          (int *)P,
          0,
          (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
          v258,
          v253,
          v176,
          v185,
          0LL,
          0LL);
      }
    }
    else if ( P && v210 )
    {
      SepAdtPrivilegeObjectAuditAlarm(
        (const int *)v269,
        (unsigned __int16 *)v262,
        (unsigned __int16 *)v270,
        (__int64)&v273,
        (__int64)SubjectContext.ClientToken,
        (__int64)SubjectContext.PrimaryToken,
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        a8,
        (unsigned int *)P,
        v210);
      v181 = 0;
      v31 = (unsigned int *)v230;
      goto LABEL_439;
    }
  }
  v181 = v245;
LABEL_439:
  SeUnlockSubjectContext(&SubjectContext);
  if ( a17 )
  {
    v257 = 0;
    v187 = v214;
    if ( v50 )
    {
      v194 = 0;
      v195 = (char *)v227;
      v196 = (char *)v263;
      v197 = (char *)Address;
      while ( 1 )
      {
        v257 = v194;
        if ( v194 >= v229 )
          break;
        v198 = 4LL * v194;
        *(_DWORD *)&v197[v198] = v50[v198 / 4];
        *(_DWORD *)&v196[v198] = *(_DWORD *)&v49[v198];
        if ( SepRmEnforceCap && v187 && v50[v198 / 4] >= 0 )
        {
          *(_DWORD *)&v197[v198] = v252[v198 / 4];
          *(_DWORD *)&v196[v198] &= *(_DWORD *)&v195[v198];
        }
        ++v194;
        v31 = (unsigned int *)v230;
      }
      v29 = (int *)v195;
    }
    else
    {
      v188 = 0;
      v189 = v218;
      v190 = (char *)v263;
      v191 = (char *)Address;
      while ( 1 )
      {
        v257 = v188;
        if ( v188 >= v229 )
          break;
        v192 = (int *)&v191[4 * v188];
        *v192 = v189;
        v193 = (unsigned int *)&v190[4 * v188];
        *v193 = v226;
        if ( SepRmEnforceCap && v187 )
        {
          v189 = v218;
          if ( v218 >= 0 )
          {
            *v192 = v218;
            *v193 &= v226;
          }
        }
        else
        {
          v189 = v218;
        }
        ++v188;
        v31 = (unsigned int *)v230;
      }
LABEL_462:
      v29 = v227;
    }
  }
  else
  {
    v199 = Address;
    *(_DWORD *)Address = v218;
    v200 = v263;
    *(_DWORD *)v263 = v226;
    if ( !SepRmEnforceCap || !v214 || v218 < 0 )
    {
      v31 = (unsigned int *)v230;
      goto LABEL_462;
    }
    *v199 = *v252;
    v29 = v227;
    *v200 &= *v227;
    v31 = (unsigned int *)v230;
  }
  *v282 = v181;
  v21 = 0;
  v212 = 0;
  v20 = v219;
  v27 = PreviousMode;
LABEL_472:
  if ( v235 )
  {
    ObfDereferenceObject(v272);
    SubjectContext.ClientToken = ClientToken;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v27 == 1 && v31 )
    ExFreePoolWithTag(v31, 0);
  if ( v269 )
    ExFreePoolWithTag(v269, 0);
  if ( v262 )
    ExFreePoolWithTag(v262, 0);
  if ( v270 )
    ExFreePoolWithTag(v270, 0);
  if ( v261 && (unsigned __int8)v27 <= 1u )
    ExFreePoolWithTag(v261, 0);
  if ( v253 )
    SeFreeCapturedObjectTypeList((void *)v253);
  if ( v216 )
  {
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    if ( v29 )
      ExFreePoolWithTag(v29, 0);
  }
  if ( v217 )
  {
    Blink = v256[1].Linkage.Blink;
    if ( Blink )
    {
      v202 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[2].Blink, 0xFFFFFFFFFFFFFFFFuLL);
      v203 = v202 <= 1;
      v204 = v202 - 1;
      if ( v203 )
      {
        if ( v204 )
          __fastfail(0xEu);
        SepRmDestroyCapTable((_RTL_DYNAMIC_HASH_TABLE *)Blink);
      }
      v21 = v212;
    }
  }
  if ( v264 )
    ExFreePoolWithTag(v264, 0);
  SepFreeResourceInfo((char *)v250);
  if ( v21 == -1073741670 || v236 )
    SepAuditFailed(v21);
  return (unsigned int)v21;
}
