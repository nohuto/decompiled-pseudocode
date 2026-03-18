/*
 * XREFs of SepAccessCheckAndAuditAlarm @ 0x14092B360
 * Callers:
 *     NtAccessCheckByTypeResultListAndAuditAlarm @ 0x1407832E0 (NtAccessCheckByTypeResultListAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x140783390 (NtAccessCheckByTypeResultListAndAuditAlarmByHandle.c)
 *     NtAccessCheckAndAuditAlarm @ 0x14092D200 (NtAccessCheckAndAuditAlarm.c)
 *     NtAccessCheckByTypeAndAuditAlarm @ 0x14092D290 (NtAccessCheckByTypeAndAuditAlarm.c)
 * Callees:
 *     SepExamineGlobalSaclEx @ 0x14020540C (SepExamineGlobalSaclEx.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x140296910 (SepMandatoryIntegrityCheck.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     SepTrustLevelCheck @ 0x14035FC50 (SepTrustLevelCheck.c)
 *     SepLocateTokenTrustLevel @ 0x14035FEB0 (SepLocateTokenTrustLevel.c)
 *     SepFreeResourceInfo @ 0x140362310 (SepFreeResourceInfo.c)
 *     SepFilterCheck @ 0x140363580 (SepFilterCheck.c)
 *     SeCaptureObjectTypeList @ 0x140365F40 (SeCaptureObjectTypeList.c)
 *     SepAccessCheck @ 0x1403662B0 (SepAccessCheck.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140367C20 (AuthzBasepEvaluateAceCondition.c)
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14036B400 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepTokenIsOwner @ 0x1403CE170 (SepTokenIsOwner.c)
 *     SePrivilegePolicyCheck @ 0x1403CF4A0 (SePrivilegePolicyCheck.c)
 *     SeLogAccessFailure @ 0x1403CF70C (SeLogAccessFailure.c)
 *     RtlOwnerAcesPresent @ 0x1403F7250 (RtlOwnerAcesPresent.c)
 *     SepPrivilegeCheck @ 0x140400B10 (SepPrivilegeCheck.c)
 *     SepMandatoryToDiscretionary @ 0x14041DCA0 (SepMandatoryToDiscretionary.c)
 *     SepFilterToDiscretionary @ 0x140429450 (SepFilterToDiscretionary.c)
 *     SeTokenIsRestricted @ 0x1404360F0 (SeTokenIsRestricted.c)
 *     SepConstrainByMandatory @ 0x14043B6C0 (SepConstrainByMandatory.c)
 *     SepConstrainByConstraintMask @ 0x14043BE20 (SepConstrainByConstraintMask.c)
 *     SepGetScopedPolicySid @ 0x14045478C (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x1404547E4 (SepRmReferenceFindCap.c)
 *     SepLpacCausedAccessFailure @ 0x1404787DC (SepLpacCausedAccessFailure.c)
 *     SeIsPermissiveLearningModeEnabled @ 0x140478EB0 (SeIsPermissiveLearningModeEnabled.c)
 *     SepLogLpacAccessFailure @ 0x14048CCB4 (SepLogLpacAccessFailure.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404D0670 (SepBuildCapeSecurityDescriptor.c)
 *     SepRmDereferenceCapTable @ 0x1404F2B84 (SepRmDereferenceCapTable.c)
 *     SeFreeCapturedObjectTypeList @ 0x1405FC324 (SeFreeCapturedObjectTypeList.c)
 *     SepCopyObjectTypeList @ 0x1405FC340 (SepCopyObjectTypeList.c)
 *     SepMergeObjectTypeListAccesses @ 0x1405FC3F8 (SepMergeObjectTypeListAccesses.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140854390 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x140854DA0 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140854E70 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140856980 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14089FC40 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeUnlockSubjectContext @ 0x140916420 (SeUnlockSubjectContext.c)
 *     SeCaptureSid @ 0x140916DC8 (SeCaptureSid.c)
 *     SeCaptureSecurityDescriptor @ 0x14092A4A0 (SeCaptureSecurityDescriptor.c)
 *     SepProbeAndCaptureString_U @ 0x14092D0E0 (SepProbeAndCaptureString_U.c)
 *     SepFilterPrivilegeAudits @ 0x14092D340 (SepFilterPrivilegeAudits.c)
 *     SepExamineSaclEx @ 0x14092D558 (SepExamineSaclEx.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409851A4 (SepAdtOpenObjectAuditAlarm.c)
 *     SeReleaseSid @ 0x140A19690 (SeReleaseSid.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAccessCheckAndAuditAlarm(
        _DWORD *a1,
        __int64 a2,
        void **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        int a8,
        int a9,
        char a10,
        __int64 a11,
        int a12,
        __int64 a13,
        volatile void *a14,
        volatile void *a15,
        char *a16,
        char a17)
{
  __int64 v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rbx
  unsigned __int8 PreviousMode; // si
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rcx
  signed int v25; // edi
  _DWORD *PrimaryToken; // r13
  char v27; // di
  char v28; // r15
  PACCESS_TOKEN v29; // r12
  _QWORD **v30; // rax
  PACCESS_TOKEN v31; // rdi
  void *v32; // rbx
  unsigned int *v33; // rbx
  __int16 v34; // cx
  __int64 v35; // rax
  char *v36; // rax
  __int64 v37; // rax
  char *v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // r12d
  __int64 v42; // rcx
  int v43; // esi
  int v44; // eax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v46; // rax
  char IsOwner; // al
  unsigned int v48; // esi
  unsigned int v49; // r12d
  __int64 v50; // r14
  unsigned int *v51; // rdx
  char *v52; // rax
  __int64 v53; // r15
  char v54; // cl
  unsigned int v55; // r14d
  char *v56; // r10
  char v57; // dl
  char v58; // r8
  char v59; // si
  int *v60; // r13
  int v61; // ebx
  char v62; // di
  unsigned int v63; // esi
  _DWORD *v64; // rdx
  _DWORD *v65; // rcx
  int v66; // edx
  char *v67; // r10
  char *v68; // r11
  int *v69; // r9
  unsigned int *v70; // r8
  unsigned int v71; // ecx
  char *v72; // r8
  char v73; // bl
  _DWORD *v74; // r9
  _DWORD *v75; // r10
  _DWORD *v76; // r11
  __int64 v77; // rdx
  char v78; // r12
  __int64 v79; // r8
  __int64 v80; // r9
  PSE_EXPORTS v82; // r14
  __int16 v83; // ax
  __int64 v84; // rax
  __int64 v85; // rcx
  int v86; // eax
  int *v87; // rax
  int *v88; // r11
  __int64 v89; // rbx
  char *Pool2; // rax
  char *v91; // r10
  int v92; // r8d
  __int16 v93; // cx
  __int64 v94; // rdx
  __int64 v95; // rcx
  int v96; // r12d
  char *v97; // rdi
  int v98; // r8d
  __int16 v99; // ax
  __int64 v100; // rdx
  unsigned int v101; // eax
  void *v102; // rcx
  NTSTATUS v103; // eax
  unsigned int v104; // eax
  unsigned int v105; // edx
  struct _KTHREAD *v106; // rax
  char v107; // di
  char v108; // bl
  __int64 v109; // rdx
  ULONGLONG v110; // rax
  unsigned int *v111; // rax
  unsigned int v112; // eax
  int v113; // ebx
  __int64 v114; // rdx
  __int64 *v115; // r8
  int v116; // eax
  char *v117; // rax
  int *v118; // rcx
  __int16 v119; // dx
  __int64 v120; // rax
  int *v121; // r10
  int v122; // edx
  int v123; // r8d
  struct _LIST_ENTRY *Blink; // rcx
  char *v125; // rcx
  void *ScopedPolicySid; // rax
  __int64 v127; // r8
  int Cap; // eax
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *v129; // rdx
  int v130; // edx
  char v131; // al
  char v132; // cl
  __int64 v133; // r14
  char *v134; // rax
  char *v135; // r10
  char *v136; // rax
  int *v137; // rcx
  unsigned int v138; // eax
  int v139; // edx
  __int64 v140; // r15
  PVOID v141; // r8
  _QWORD *v142; // rax
  void *v143; // r10
  void *v144; // rdx
  void *v145; // rcx
  void *v146; // r9
  int v147; // eax
  int v148; // ebx
  _QWORD *v149; // rax
  void *v150; // r8
  void *v151; // rdx
  void *v152; // rcx
  void *v153; // r9
  unsigned int v154; // ebx
  unsigned int v155; // r15d
  unsigned int v156; // eax
  char *v157; // rcx
  __int64 v158; // rdx
  __int64 v159; // r8
  __int64 *v160; // r10
  int Object; // [rsp+20h] [rbp-318h]
  int v162; // [rsp+78h] [rbp-2C0h]
  unsigned __int8 v163; // [rsp+A0h] [rbp-298h]
  char v164; // [rsp+A1h] [rbp-297h]
  char v165; // [rsp+A2h] [rbp-296h] BYREF
  char v166; // [rsp+A3h] [rbp-295h]
  char v167; // [rsp+A4h] [rbp-294h] BYREF
  char v168; // [rsp+A5h] [rbp-293h]
  char v169; // [rsp+A6h] [rbp-292h]
  int v170; // [rsp+A8h] [rbp-290h]
  char v171; // [rsp+ACh] [rbp-28Ch]
  int v172; // [rsp+B0h] [rbp-288h]
  char v173; // [rsp+B8h] [rbp-280h] BYREF
  char v174; // [rsp+B9h] [rbp-27Fh]
  int v175; // [rsp+BCh] [rbp-27Ch] BYREF
  char v176; // [rsp+C0h] [rbp-278h] BYREF
  char v177; // [rsp+C1h] [rbp-277h] BYREF
  _BYTE v178[6]; // [rsp+C2h] [rbp-276h] BYREF
  PVOID P; // [rsp+C8h] [rbp-270h] BYREF
  unsigned __int16 v180[2]; // [rsp+D0h] [rbp-268h] BYREF
  unsigned int v181; // [rsp+D4h] [rbp-264h] BYREF
  unsigned int v182; // [rsp+D8h] [rbp-260h] BYREF
  char v183; // [rsp+DCh] [rbp-25Ch]
  char v184; // [rsp+DDh] [rbp-25Bh]
  char v185; // [rsp+DEh] [rbp-25Ah]
  char v186; // [rsp+DFh] [rbp-259h] BYREF
  char v187; // [rsp+E0h] [rbp-258h] BYREF
  char v188; // [rsp+E1h] [rbp-257h]
  char v189; // [rsp+E2h] [rbp-256h]
  bool v190; // [rsp+E3h] [rbp-255h]
  unsigned int v191; // [rsp+E8h] [rbp-250h]
  PVOID v192; // [rsp+F0h] [rbp-248h]
  int v193; // [rsp+F8h] [rbp-240h]
  int v194; // [rsp+FCh] [rbp-23Ch]
  int v195; // [rsp+100h] [rbp-238h]
  int v196; // [rsp+104h] [rbp-234h]
  int v197; // [rsp+108h] [rbp-230h]
  char *v198; // [rsp+110h] [rbp-228h]
  int v199; // [rsp+118h] [rbp-220h]
  unsigned int v200; // [rsp+11Ch] [rbp-21Ch]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+120h] [rbp-218h] BYREF
  int v202; // [rsp+140h] [rbp-1F8h] BYREF
  unsigned int v203; // [rsp+144h] [rbp-1F4h]
  __int64 v204; // [rsp+148h] [rbp-1F0h] BYREF
  PVOID v205; // [rsp+150h] [rbp-1E8h]
  int *v206; // [rsp+158h] [rbp-1E0h]
  PVOID v207; // [rsp+160h] [rbp-1D8h] BYREF
  PVOID v208; // [rsp+168h] [rbp-1D0h] BYREF
  int v209; // [rsp+170h] [rbp-1C8h] BYREF
  char *v210; // [rsp+178h] [rbp-1C0h]
  volatile void *Address; // [rsp+180h] [rbp-1B8h]
  volatile void *v212; // [rsp+188h] [rbp-1B0h]
  __int64 v213; // [rsp+190h] [rbp-1A8h] BYREF
  PVOID v214; // [rsp+198h] [rbp-1A0h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v215; // [rsp+1A0h] [rbp-198h] BYREF
  PVOID v216[2]; // [rsp+1A8h] [rbp-190h] BYREF
  __int64 v217; // [rsp+1B8h] [rbp-180h]
  PVOID v218; // [rsp+1C0h] [rbp-178h] BYREF
  _DWORD *v219; // [rsp+1C8h] [rbp-170h]
  __int64 v220; // [rsp+1D0h] [rbp-168h]
  int v221[2]; // [rsp+1D8h] [rbp-160h] BYREF
  PVOID v222; // [rsp+1E0h] [rbp-158h] BYREF
  int v223; // [rsp+1E8h] [rbp-150h] BYREF
  __int64 v224; // [rsp+1F0h] [rbp-148h] BYREF
  PVOID v225; // [rsp+1F8h] [rbp-140h]
  void *Src; // [rsp+200h] [rbp-138h]
  __int64 v227; // [rsp+208h] [rbp-130h]
  int v228; // [rsp+210h] [rbp-128h] BYREF
  PVOID v229; // [rsp+218h] [rbp-120h] BYREF
  _DWORD *v230; // [rsp+220h] [rbp-118h]
  __int64 v231; // [rsp+228h] [rbp-110h]
  __int64 v232; // [rsp+230h] [rbp-108h]
  volatile void *v233; // [rsp+248h] [rbp-F0h]
  char *v234; // [rsp+250h] [rbp-E8h]
  PACCESS_TOKEN ClientToken; // [rsp+258h] [rbp-E0h]
  volatile void *v236; // [rsp+260h] [rbp-D8h]
  __int128 v237; // [rsp+268h] [rbp-D0h] BYREF
  void **v238; // [rsp+278h] [rbp-C0h]
  __int64 v239; // [rsp+280h] [rbp-B8h]
  _OWORD SecurityDescriptor[2]; // [rsp+288h] [rbp-B0h] BYREF
  __int64 v241; // [rsp+2A8h] [rbp-90h]
  __int128 v242; // [rsp+2B0h] [rbp-88h] BYREF
  __int64 v243; // [rsp+2C0h] [rbp-78h]
  int v244; // [rsp+2C8h] [rbp-70h]
  unsigned int v245[2]; // [rsp+2D0h] [rbp-68h] BYREF
  __int64 v246; // [rsp+2D8h] [rbp-60h] BYREF
  int v247; // [rsp+2E0h] [rbp-58h]
  __int128 v248; // [rsp+2E8h] [rbp-50h] BYREF

  v231 = a4;
  v230 = a1;
  v191 = a12;
  v18 = (__int64)a16;
  v220 = (__int64)a16;
  v19 = a13;
  v212 = a14;
  Address = a15;
  v219 = a1;
  v224 = a2;
  v238 = a3;
  v239 = a4;
  v232 = a5;
  v20 = a6;
  v217 = a6;
  Src = a7;
  v227 = a11;
  v172 = a12;
  LODWORD(v198) = a12;
  v236 = a14;
  v233 = a15;
  v234 = a16;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v170 = 0;
  v182 = 0;
  v192 = 0LL;
  v174 = 0;
  v175 = -1073741823;
  v223 = 0;
  v205 = 0LL;
  v228 = 0;
  v206 = 0LL;
  v194 = 0;
  v197 = 0;
  v183 = 0;
  v218 = 0LL;
  v207 = 0LL;
  v216[0] = 0LL;
  P = 0LL;
  v213 = 0LL;
  v204 = 0LL;
  v181 = 0;
  v248 = 0LL;
  v214 = 0LL;
  v165 = 0;
  v167 = 0;
  v178[0] = 0;
  v173 = 0;
  v188 = 0;
  v171 = 0;
  v168 = 0;
  v186 = 1;
  v187 = 0;
  v225 = 0LL;
  ClientToken = 0LL;
  v189 = 0;
  v237 = 0LL;
  v221[1] = 0;
  v210 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v241 = 0LL;
  v215 = 0LL;
  v164 = 0;
  v169 = 0;
  v166 = 0;
  v190 = 0;
  v180[0] = 999;
  v242 = 0LL;
  v243 = 0LL;
  v244 = 0;
  v196 = 0;
  v184 = 0;
  v195 = 0;
  v208 = 0LL;
  v202 = 0;
  v193 = 0;
  v185 = 0;
  v176 = 0;
  v177 = 0;
  v222 = 0LL;
  v209 = -1;
  v221[0] = -1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v163 = PreviousMode;
  v178[1] = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( a9 )
  {
    if ( a9 != 1 )
    {
      v25 = -1073741811;
LABEL_224:
      v78 = 0;
      goto LABEL_162;
    }
    v199 = 7;
  }
  else
  {
    v199 = 2;
  }
  if ( a3 )
    goto LABEL_6;
  if ( !SubjectContext.ClientToken )
  {
    v25 = -1073741732;
    goto LABEL_224;
  }
  if ( SubjectContext.ImpersonationLevel < SecurityIdentification )
  {
    v25 = -1073741659;
    goto LABEL_224;
  }
LABEL_6:
  if ( a17 )
  {
    if ( !v172 || (unsigned int)v172 > 0x1000 )
    {
      v25 = -1073741811;
      v170 = -1073741811;
      v22 = 0x7FFFFFFF0000LL;
      goto LABEL_19;
    }
    ProbeForWrite(Address, 4LL * (unsigned int)v172, 4u);
    ProbeForWrite(v212, 4LL * (unsigned int)v172, 4u);
    v22 = 0x7FFFFFFF0000LL;
    v20 = v217;
  }
  else
  {
    v22 = 0x7FFFFFFF0000LL;
    v23 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Address < 0x7FFFFFFF0000LL )
      v23 = (__int64)Address;
    *(_DWORD *)v23 = *(_DWORD *)v23;
    v24 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v212 < 0x7FFFFFFF0000LL )
      v24 = (__int64)v212;
    *(_DWORD *)v24 = *(_DWORD *)v24;
  }
  if ( (v19 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v248 = *(_OWORD *)v19;
  v25 = v170;
LABEL_19:
  if ( v25 < 0 )
  {
LABEL_192:
    PreviousMode = v163;
    v78 = v164;
    v33 = (unsigned int *)P;
    goto LABEL_121;
  }
  if ( !a3 )
    goto LABEL_21;
  v102 = *a3;
  v229 = 0LL;
  v103 = ObReferenceObjectByHandle(v102, 8u, (POBJECT_TYPE)SeTokenObjectType, v163, &v229, 0LL);
  v25 = v103;
  v225 = v229;
  if ( v103 < 0 )
  {
    v225 = 0LL;
    v190 = v103 != -1073741816;
    goto LABEL_192;
  }
  ClientToken = SubjectContext.ClientToken;
  SubjectContext.ClientToken = v229;
  v189 = 1;
LABEL_21:
  PrimaryToken = SubjectContext.ClientToken;
  if ( !SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.PrimaryToken;
  v219 = PrimaryToken;
  v245[0] = 1;
  v245[1] = 1;
  v246 = SeAuditPrivilege;
  v247 = 0;
  v27 = v163;
  v28 = SepPrivilegeCheck((__int64)SubjectContext.PrimaryToken, (__int64)&v246, 1u, 1, v163);
  if ( v163 )
  {
    v29 = SubjectContext.PrimaryToken;
    v30 = (_QWORD **)SubjectContext.PrimaryToken;
    v31 = SubjectContext.ClientToken;
    if ( SubjectContext.ClientToken )
      v30 = (_QWORD **)SubjectContext.ClientToken;
    v32 = (void *)*v30[19];
    if ( !RtlEqualSid(SeLocalSystemSid, v32) )
    {
      if ( (v82 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v32))
        && !RtlEqualSid(v82->SeLocalServiceSid, v32)
        || (unsigned __int8)SepFilterPrivilegeAudits(1LL, v245) )
      {
        SepAdtPrivilegedServiceAuditAlarm(&SubjectContext, &SeSubsystemName, 0LL, (__int64)v31, (__int64)v29, v245, v28);
      }
    }
    v20 = v217;
    v18 = v220;
    v27 = v163;
  }
  if ( !v28 )
  {
    if ( (a10 & 1) == 0 )
    {
      v25 = -1073741727;
      PreviousMode = v163;
      v78 = 0;
      goto LABEL_162;
    }
    v188 = 1;
  }
  if ( (a8 & 0xF0000000) != 0 )
  {
    v25 = -1073741594;
    PreviousMode = v163;
    v78 = 0;
    v33 = (unsigned int *)P;
    goto LABEL_121;
  }
  v25 = SeCaptureSecurityDescriptor(v20, v27, 1, 0, &P);
  v170 = v25;
  if ( v25 < 0 )
  {
    v33 = 0LL;
    PreviousMode = v163;
    v78 = 0;
    goto LABEL_121;
  }
  v33 = (unsigned int *)P;
  if ( !P )
    goto LABEL_258;
  v34 = *((_WORD *)P + 1);
  if ( v34 >= 0 )
  {
    v36 = (char *)*((_QWORD *)P + 1);
  }
  else
  {
    v35 = *((unsigned int *)P + 1);
    if ( !(_DWORD)v35 )
      goto LABEL_258;
    v36 = (char *)P + v35;
  }
  if ( !v36 )
    goto LABEL_258;
  if ( v34 < 0 )
  {
    v37 = *((unsigned int *)P + 2);
    if ( (_DWORD)v37 )
    {
      v38 = (char *)P + v37;
      goto LABEL_39;
    }
LABEL_258:
    v25 = -1073741703;
    goto LABEL_169;
  }
  v38 = (char *)*((_QWORD *)P + 2);
LABEL_39:
  if ( !v38 )
    goto LABEL_258;
  if ( (unsigned __int64)v234 < 0x7FFFFFFF0000LL )
    v22 = v18;
  *(_BYTE *)v22 = *(_BYTE *)v22;
  v25 = SepProbeAndCaptureString_U(v230, &v218);
  v170 = v25;
  if ( v25 >= 0 )
  {
    v25 = SepProbeAndCaptureString_U(v231, &v207);
    v170 = v25;
    if ( v25 >= 0 )
    {
      v25 = SepProbeAndCaptureString_U(v232, v216);
      v170 = v25;
    }
  }
  PreviousMode = v163;
  LOBYTE(v41) = v196;
  if ( v25 < 0 )
    goto LABEL_192;
  if ( Src )
  {
    v25 = SeCaptureSid(Src, v163, v39, v40, Object, 1, (PSID *)&v213);
    if ( v25 < 0 )
    {
      v213 = 0LL;
      v78 = 0;
      goto LABEL_162;
    }
  }
  v25 = SeCaptureObjectTypeList(v227, v172, v163, &v204);
  if ( v25 < 0 )
    goto LABEL_192;
  v33 = (unsigned int *)P;
  v25 = SepTrustLevelCheck(v42, (__int64)P, &SubjectContext, 0LL, 0LL, 1, &v209);
  if ( v25 < 0 )
  {
LABEL_170:
    v78 = 0;
    goto LABEL_121;
  }
  v43 = a8;
  v170 = SepFilterToDiscretionary(&v209, a8);
  if ( v170 < 0 )
  {
    v176 = 1;
LABEL_293:
    PreviousMode = v163;
    goto LABEL_57;
  }
  v25 = SepFilterCheck((__int64)v33, &v208, (__int64)PrimaryToken, 1, (__int64)v221);
  if ( v25 < 0 )
  {
LABEL_169:
    PreviousMode = v163;
    goto LABEL_170;
  }
  v170 = SepFilterToDiscretionary(v221, v43);
  if ( v170 < 0 )
  {
    v177 = 1;
    goto LABEL_293;
  }
  v25 = SepMandatoryIntegrityCheck(&v248, (__int64)v33, 0LL, (__int64)PrimaryToken, 1, (__int64)&v237);
  if ( v25 < 0 )
    goto LABEL_169;
  v44 = SepMandatoryToDiscretionary(&v237, v43);
  v170 = v44;
  if ( (v44 < 0 || (v43 & 0x2000000) != 0) && (PrimaryToken[50] & 0x4000) != 0 )
  {
    v41 = (unsigned __int8)v41;
    if ( HIDWORD(v237) <= 0x2000 )
      v41 = 1;
    v196 = v41;
  }
  if ( v44 < 0 && !(_BYTE)v41 )
    goto LABEL_293;
  PreviousMode = v163;
  v170 = SePrivilegePolicyCheck(&a8, &v181, (__int64 *)&SubjectContext, 0LL, (__int64)&v214, v163);
  if ( !a8 )
  {
    v116 = (unsigned __int8)v193;
    if ( v181 )
      v116 = 1;
    v193 = v116;
  }
LABEL_57:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
  if ( SubjectContext.ClientToken )
  {
    v46 = KeGetCurrentThread();
    --v46->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.ClientToken + 6), 1u);
  }
  v25 = v170;
  if ( v170 < 0 && !(_BYTE)v41 )
  {
    v167 = 1;
    v175 = v170;
    if ( a17 )
    {
      v89 = (unsigned int)v172;
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      v91 = Pool2;
      v192 = Pool2;
      if ( !Pool2 )
      {
        SeUnlockSubjectContext(&SubjectContext);
        v25 = -1073741670;
        v78 = 0;
        v33 = (unsigned int *)P;
        goto LABEL_121;
      }
      v174 = 1;
      v117 = &Pool2[4 * v172];
      v198 = v117;
      if ( v172 )
      {
        v118 = (int *)v117;
        do
        {
          *(int *)((char *)v118 + v91 - v117) = v182;
          *v118++ = v175;
          --v89;
        }
        while ( v89 );
      }
      v48 = a8;
      v49 = v181;
    }
    else
    {
      v192 = &v182;
      v198 = (char *)&v175;
      v48 = a8;
      v49 = v181;
    }
    goto LABEL_75;
  }
  IsOwner = SepTokenIsOwner((__int64)PrimaryToken, (__int64)P);
  v166 = IsOwner;
  v33 = (unsigned int *)P;
  if ( !SepRmEnforceCap )
    goto LABEL_61;
  v119 = *((_WORD *)P + 1);
  if ( (v119 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_61;
  if ( v119 >= 0 )
  {
    v125 = (char *)*((_QWORD *)P + 3);
  }
  else
  {
    v120 = *((unsigned int *)P + 3);
    if ( !(_DWORD)v120 )
    {
      v210 = 0LL;
      goto LABEL_303;
    }
    v125 = (char *)P + v120;
    IsOwner = v166;
  }
  v210 = v125;
  if ( !v125 )
  {
LABEL_61:
    v25 = v170;
    goto LABEL_62;
  }
  ScopedPolicySid = (void *)SepGetScopedPolicySid((__int64)v125);
  if ( !ScopedPolicySid )
  {
LABEL_303:
    IsOwner = v166;
    goto LABEL_61;
  }
  Cap = SepRmReferenceFindCap(ScopedPolicySid, &v215, v127);
  v129 = v215;
  if ( Cap < 0 )
    v129 = (struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *)SepRmDefaultCap;
  v215 = v129;
  v25 = 0;
  v170 = 0;
  v164 = 1;
  IsOwner = v166;
LABEL_62:
  v48 = a8;
  if ( (a8 & 0x2060000) != 0
    && IsOwner
    && ((v83 = *((_WORD *)v33 + 1), (v83 & 4) == 0)
      ? (v85 = 0LL)
      : v83 >= 0
      ? (v85 = *((_QWORD *)v33 + 4))
      : (v84 = v33[4], !(_DWORD)v84)
      ? (v85 = 0LL)
      : (v85 = (__int64)v33 + v84),
        !RtlOwnerAcesPresent(v85)) )
  {
    if ( (v48 & 0x2000000) != 0 )
    {
      v86 = 393216;
      v49 = v181 | 0x60000;
    }
    else
    {
      v86 = v48 & 0x60000;
      v49 = v181 | v48 & 0x60000;
    }
    v195 = v86;
    v181 = v49;
    v48 &= 0xFFF9FFFF;
    a8 = v48;
  }
  else
  {
    v49 = v181;
  }
  if ( !v48 && (!v164 || (_BYTE)v193) && ((PrimaryToken[50] & 0x2000) != 0 || !v195) )
  {
    v182 = v49;
    if ( v49 )
    {
      v130 = 0;
      v131 = 0;
      v132 = 1;
    }
    else
    {
      v130 = -1073741790;
      v131 = 1;
      v132 = 0;
    }
    v165 = v132;
    v167 = v131;
    v175 = v130;
    if ( !a17 )
    {
      v192 = &v182;
      v198 = (char *)&v175;
      goto LABEL_76;
    }
    v133 = (unsigned int)v172;
    v134 = (char *)ExAllocatePool2(0x100uLL);
    v135 = v134;
    v192 = v134;
    if ( v134 )
    {
      v174 = 1;
      v136 = &v134[4 * v172];
      v198 = v136;
      if ( v172 )
      {
        v137 = (int *)v136;
        do
        {
          *(int *)((char *)v137 + v135 - v136) = v182;
          *v137++ = v175;
          --v133;
        }
        while ( v133 );
      }
      goto LABEL_76;
    }
LABEL_221:
    v25 = -1073741670;
    SeUnlockSubjectContext(&SubjectContext);
    PreviousMode = v163;
    v78 = v164;
    goto LABEL_121;
  }
  v50 = (unsigned int)v198;
  if ( a17 )
  {
    v111 = (unsigned int *)ExAllocatePool2(0x100uLL);
    v51 = v111;
    v192 = v111;
    if ( !v111 )
      goto LABEL_221;
    v174 = 1;
    v53 = v50;
    v52 = (char *)&v111[v50];
  }
  else
  {
    v51 = &v182;
    v192 = &v182;
    v52 = (char *)&v175;
    v53 = (unsigned int)v198;
  }
  v198 = v52;
  LODWORD(v242) = v195;
  SepAccessCheck(
    (__int64)v33,
    v213,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)PrimaryToken,
    v48,
    (__int128 *)v204,
    v172,
    &v248,
    v49,
    v163,
    v51,
    0LL,
    (int *)v52,
    a17,
    v166,
    (__int64)&v242,
    (__int64)&v208,
    &v165,
    &v167);
  if ( SepRmEnforceCap && *(int *)v198 >= 0 && (v78 = v164) != 0 )
  {
    if ( a17 )
    {
      v87 = (int *)ExAllocatePool2(0x100uLL);
      v88 = v87;
      v205 = v87;
      if ( !v87 )
      {
        SeUnlockSubjectContext(&SubjectContext);
        SeReleaseSubjectContext(&SubjectContext);
        v25 = -1073741670;
        PreviousMode = v163;
LABEL_162:
        v33 = (unsigned int *)P;
        goto LABEL_121;
      }
      v121 = &v87[v53];
    }
    else
    {
      v88 = &v223;
      v205 = &v223;
      v121 = &v228;
    }
    v206 = v121;
    if ( v172 )
    {
      v25 = SepCopyObjectTypeList(v204, v172, (__int64 *)&v222);
      v170 = v25;
      if ( v25 < 0 )
      {
        PreviousMode = v163;
        goto LABEL_162;
      }
      v88 = (int *)v205;
    }
    else
    {
      v25 = v170;
    }
    LOBYTE(v33) = 0;
    v193 = (int)v33;
    v138 = 0;
    v48 = a8;
    v49 = v181;
    v139 = v194;
    while ( 1 )
    {
      v200 = v138;
      if ( v138 >= HIDWORD(v215[2].Linkage.Blink) )
        break;
      v140 = *(&v215[2].Signature + v138);
      v227 = v140;
      if ( !*(_QWORD *)(v140 + 24) )
        goto LABEL_360;
      v141 = v208;
      if ( !v208 )
      {
        LODWORD(v33) = (unsigned __int8)v33;
        if ( (int)AuthzBasepInitializeResourceClaimsFromSacl((__int64)v210, (__int64 *)&v208) < 0 )
          LODWORD(v33) = 1;
        v193 = (int)v33;
        v141 = v208;
      }
      v142 = (_QWORD *)*((_QWORD *)PrimaryToken + 137);
      v143 = v142 ? (void *)v142[75] : 0LL;
      v144 = v142 ? (void *)v142[73] : 0LL;
      v145 = v142 ? (void *)v142[74] : 0LL;
      v146 = v142 ? (void *)v142[72] : 0LL;
      v147 = AuthzBasepEvaluateAceCondition(
               PrimaryToken,
               *((void **)PrimaryToken + 97),
               v141,
               v146,
               v145,
               v144,
               v143,
               *(_DWORD **)(v140 + 24),
               *(_DWORD *)(v140 + 16),
               1u,
               0,
               &v202);
      v25 = v147;
      v170 = v147;
      v148 = v202;
      if ( v202 == 1 )
        goto LABEL_360;
      if ( v147 < 0 )
        goto LABEL_192;
      if ( SeTokenIsRestricted(PrimaryToken) )
      {
        v149 = (_QWORD *)*((_QWORD *)PrimaryToken + 137);
        if ( v149 )
          v150 = (void *)v149[75];
        else
          v150 = 0LL;
        if ( v149 )
          v151 = (void *)v149[73];
        else
          v151 = 0LL;
        if ( v149 )
          v152 = (void *)v149[74];
        else
          v152 = 0LL;
        if ( v149 )
          v153 = (void *)v149[72];
        else
          v153 = 0LL;
        v25 = AuthzBasepEvaluateAceCondition(
                PrimaryToken,
                *((void **)PrimaryToken + 97),
                v208,
                v153,
                v152,
                v151,
                v150,
                *(_DWORD **)(v140 + 24),
                *(_DWORD *)(v140 + 16),
                1u,
                1u,
                &v202);
        v170 = v25;
        if ( v25 < 0 )
          goto LABEL_192;
        v148 = v202;
      }
      if ( (_BYTE)v193 || v148 == 1 )
      {
LABEL_360:
        if ( (*(_DWORD *)(v140 + 48) & 1) != 0 )
        {
          if ( (v48 & 0x2000000) != 0 )
            v154 = v48;
          else
            v154 = v48 | v49;
          v155 = 0;
        }
        else
        {
          v154 = v48;
          v155 = v49;
        }
        v25 = SepBuildCapeSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 **)(v227 + 32), (__int64)v210);
        v170 = v25;
        if ( v25 < 0 )
          goto LABEL_192;
        SepAccessCheck(
          (__int64)SecurityDescriptor,
          v213,
          (__int64)SubjectContext.PrimaryToken,
          (__int64)SubjectContext.ClientToken,
          v154,
          (__int128 *)v222,
          v172,
          &v248,
          v155,
          v163,
          v205,
          0LL,
          v206,
          a17,
          v166,
          (__int64)&v242,
          (__int64)&v208,
          &v186,
          &v187);
        v88 = (int *)v205;
        if ( v169 )
          v139 = *(_DWORD *)v205 & v194;
        else
          v139 = *(_DWORD *)v205;
        v194 = v139;
        if ( v222 )
        {
          SepMergeObjectTypeListAccesses(v204, (__int64)v222, v172);
          v139 = v194;
        }
        v169 = 1;
      }
      else
      {
        v139 = v194;
        v88 = (int *)v205;
      }
      v138 = v200 + 1;
      LOBYTE(v33) = v193;
    }
    v165 = v186;
    v167 = v187;
    *v88 &= v139;
    if ( !v139 )
    {
      *v206 = -1073741790;
      v165 = 0;
      v167 = 1;
    }
  }
  else
  {
    v48 = a8;
    v25 = v170;
    v49 = v181;
  }
  if ( (v48 & 0x2000000) != 0 )
  {
    if ( !(_BYTE)v196 || !*(_WORD *)((char *)&v243 + 5) && !SeIsPermissiveLearningModeEnabled((__int64)PrimaryToken) )
    {
      v55 = v191;
      v112 = v191;
      if ( !a17 )
        v112 = 0;
      SepConstrainByMandatory((__int64)&v237, v48, (char *)v192, v198, 0LL, v112);
      v54 = a17;
      goto LABEL_73;
    }
    goto LABEL_71;
  }
  if ( !(_BYTE)v196 || *(_WORD *)((char *)&v243 + 5) )
  {
LABEL_71:
    v54 = a17;
LABEL_72:
    v55 = v191;
LABEL_73:
    v56 = (char *)v192;
    goto LABEL_74;
  }
  if ( SeIsPermissiveLearningModeEnabled((__int64)PrimaryToken) && !HIDWORD(v242) )
  {
    HIBYTE(v243) = 1;
    v165 = 1;
    v167 = 0;
    v182 = v48;
    v175 = 0;
    goto LABEL_71;
  }
  v165 = 0;
  v167 = 1;
  v156 = 0;
  v182 = 0;
  v175 = v122;
  v54 = a17;
  if ( !a17 || !v123 )
    goto LABEL_72;
  v157 = v198;
  v56 = (char *)v192;
  v158 = (_BYTE *)v192 - v198;
  while ( 1 )
  {
    *(_DWORD *)&v157[v158] = v156;
    *(_DWORD *)v157 = v175;
    v157 += 4;
    if ( !--v50 )
      break;
    v156 = v182;
  }
  v54 = a17;
  v55 = v191;
LABEL_74:
  if ( (v48 & 0x2000000) != 0 )
  {
    if ( !v54 )
      v55 = 0;
    SepConstrainByConstraintMask(v209, v48, v56, v198, 0LL, v55, &v176);
    SepConstrainByConstraintMask(v221[0], v48, (char *)v192, v198, 0LL, v55, &v177);
  }
LABEL_75:
  v33 = (unsigned int *)P;
LABEL_76:
  if ( !PrimaryToken )
    goto LABEL_83;
  if ( v177 || v176 )
    goto LABEL_202;
  if ( !HIDWORD(v242) && (PrimaryToken[50] & 0x4000) != 0 )
  {
    if ( v25 < 0 )
      goto LABEL_83;
    if ( v175 < 0 || HIBYTE(v243) )
    {
LABEL_202:
      v106 = KeGetCurrentThread();
      --v106->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)PrimaryToken + 6), 1u);
      v107 = v175 >= 0;
      v108 = a8 | v181;
      v110 = SepLocateTokenTrustLevel(&SubjectContext, v109);
      SeLogAccessFailure((char *)PrimaryToken, 0LL, 0LL, v110, (__int64)P, v108, v107);
      ExReleaseResourceLite(*((PERESOURCE *)PrimaryToken + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v48 = a8;
      v25 = v170;
      v33 = (unsigned int *)P;
      v49 = v181;
    }
  }
  if ( v25 >= 0
    && v175 < 0
    && !HIDWORD(v242)
    && (PrimaryToken[50] & 0x4000) != 0
    && SepLpacCausedAccessFailure((__int64)&v242, v48) )
  {
    SepLogLpacAccessFailure();
  }
LABEL_83:
  if ( v188 )
  {
LABEL_95:
    v62 = v197;
    goto LABEL_96;
  }
  if ( v199 != 2 )
  {
    if ( v165 )
    {
      v180[0] = 152;
      v171 = SepAdtAuditThisEventWithContext(152LL, v165, 0, &SubjectContext);
    }
    if ( v167 )
    {
      v180[0] = 152;
      v57 = SepAdtAuditThisEventWithContext(152LL, 0, v167, &SubjectContext);
      v168 = v57;
      goto LABEL_89;
    }
    goto LABEL_186;
  }
  if ( v165 )
    v171 = SepAdtAuditObjectAccessWithContext(0LL, (unsigned __int16 *)v207, v165, 0, &SubjectContext, 0, v180);
  if ( !v167 )
  {
LABEL_186:
    v57 = v168;
    goto LABEL_89;
  }
  v57 = SepAdtAuditObjectAccessWithContext(0LL, (unsigned __int16 *)v207, 0, v167, &SubjectContext, 0, v180);
  v168 = v57;
LABEL_89:
  v58 = v171;
  if ( v171 || v57 )
  {
    v92 = (int)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      v92 = (int)SubjectContext.ClientToken;
    v93 = *((_WORD *)v33 + 1);
    if ( (v93 & 0x10) != 0 )
    {
      if ( v93 >= 0 )
      {
        v94 = *((_QWORD *)v33 + 3);
      }
      else
      {
        v105 = v33[3];
        if ( v105 )
          LODWORD(v94) = (_DWORD)v33 + v105;
        else
          LODWORD(v94) = 0;
      }
    }
    else
    {
      LODWORD(v94) = 0;
    }
    if ( (v93 & 0x10) != 0 )
    {
      if ( v93 >= 0 )
      {
        v95 = *((_QWORD *)v33 + 3);
      }
      else
      {
        v104 = v33[3];
        if ( v104 )
          LODWORD(v95) = (_DWORD)v33 + v104;
        else
          LODWORD(v95) = 0;
      }
    }
    else
    {
      LODWORD(v95) = 0;
    }
    v96 = v48 | v49;
    v60 = (int *)v192;
    v97 = v198;
    v59 = a17;
    SepExamineSaclEx(
      v95,
      v94,
      v92,
      v96,
      v204,
      v172,
      a17,
      (__int64)v198,
      (__int64)v192,
      v213,
      v166,
      (__int64)v178,
      (__int64)&v173);
    v98 = (int)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      v98 = (int)SubjectContext.ClientToken;
    v99 = *((_WORD *)v33 + 1);
    if ( (v99 & 0x10) != 0 )
    {
      if ( v99 >= 0 )
      {
        v100 = *((_QWORD *)v33 + 3);
      }
      else
      {
        v101 = v33[3];
        if ( v101 )
          LODWORD(v100) = (_DWORD)v33 + v101;
        else
          LODWORD(v100) = 0;
      }
    }
    else
    {
      LODWORD(v100) = 0;
    }
    v61 = v172;
    SepExamineGlobalSaclEx(
      (__int64)v207,
      v100,
      v98,
      v96,
      v204,
      v172,
      v59,
      (__int64)v97,
      (__int64)v60,
      v213,
      v166,
      (__int64)v178,
      &v173);
    v57 = v168;
    v58 = v171;
  }
  else
  {
    v59 = a17;
    v60 = (int *)v192;
    v61 = v172;
  }
  if ( !v178[0] && !v173 )
  {
    if ( v214 && v165 )
    {
      SepAdtPrivilegeObjectAuditAlarm(
        (const int *)v218,
        (unsigned __int16 *)v207,
        (unsigned __int16 *)v216[0],
        (__int64)&v224,
        (__int64)SubjectContext.ClientToken,
        (__int64)SubjectContext.PrimaryToken,
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        a8,
        (unsigned int *)v214,
        v165);
      v62 = 0;
      goto LABEL_96;
    }
    goto LABEL_95;
  }
  v62 = v197;
  if ( v165 )
    v62 = 1;
  if ( v178[0] && v58 )
  {
    v159 = 0LL;
    if ( v59 )
      v159 = (__int64)v60;
    v160 = &v224;
    if ( !v165 )
      LODWORD(v160) = 0;
    v162 = v61;
    v113 = v199;
    SepAdtOpenObjectAuditAlarm(
      v180[0],
      (int)v218,
      (int)v160,
      (int)v207,
      (__int64)v216[0],
      P,
      (__int64)SubjectContext.ClientToken,
      (__int64)SubjectContext.PrimaryToken,
      *v60,
      *v60,
      (__int64)v214,
      1,
      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
      v199,
      v204,
      v162,
      v159,
      0LL,
      0LL);
    v57 = v168;
  }
  else
  {
    v113 = v199;
  }
  if ( v173 && v57 )
  {
    v114 = 0LL;
    if ( v59 )
      v114 = (__int64)v60;
    v115 = &v224;
    if ( !v165 )
      LODWORD(v115) = 0;
    v63 = v172;
    SepAdtOpenObjectAuditAlarm(
      v180[0],
      (int)v218,
      (int)v115,
      (int)v207,
      (__int64)v216[0],
      P,
      (__int64)SubjectContext.ClientToken,
      (__int64)SubjectContext.PrimaryToken,
      a8,
      a8,
      (__int64)v214,
      0,
      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
      v113,
      v204,
      v172,
      v114,
      0LL,
      0LL);
    goto LABEL_97;
  }
LABEL_96:
  v63 = v172;
LABEL_97:
  ExReleaseResourceLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( SubjectContext.ClientToken )
  {
    ExReleaseResourceLite(*((PERESOURCE *)SubjectContext.ClientToken + 6));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( a17 )
  {
    v72 = v198;
    v71 = 0;
    v73 = v169;
    v203 = 0;
    if ( v198 )
    {
      v74 = v212;
      v75 = Address;
      v76 = v205;
      while ( v71 < v63 )
      {
        v77 = 4LL * v71;
        v75[(unsigned __int64)v77 / 4] = *(_DWORD *)&v72[v77];
        v74[(unsigned __int64)v77 / 4] = *(_DWORD *)((char *)v192 + v77);
        if ( SepRmEnforceCap && v73 && *(int *)&v72[v77] >= 0 )
        {
          v75[v71] = v206[v71];
          v74[v71] &= v76[v71];
        }
        v203 = ++v71;
      }
    }
    else
    {
      v66 = v175;
      v67 = (char *)v212;
      v68 = (char *)Address;
      while ( v71 < v63 )
      {
        v69 = (int *)&v68[4 * v71];
        *v69 = v66;
        v70 = (unsigned int *)&v67[4 * v71];
        *v70 = v182;
        if ( SepRmEnforceCap && v73 )
        {
          v66 = v175;
          if ( v175 >= 0 )
          {
            *v69 = v175;
            *v70 &= v182;
          }
        }
        else
        {
          v66 = v175;
        }
        v203 = ++v71;
      }
    }
  }
  else
  {
    v64 = Address;
    *(_DWORD *)Address = v175;
    v65 = v212;
    *(_DWORD *)v212 = v182;
    if ( SepRmEnforceCap && v169 && v175 >= 0 )
    {
      *v64 = *v206;
      *v65 &= *(_DWORD *)v205;
    }
  }
  *v234 = v62;
  v25 = 0;
  v170 = 0;
  v33 = (unsigned int *)P;
  PreviousMode = v163;
  v78 = v164;
LABEL_121:
  if ( v189 )
  {
    ObfDereferenceObject(v225);
    SubjectContext.ClientToken = ClientToken;
  }
  if ( v214 )
    ExFreePoolWithTag(v214, 0);
  SeReleaseSubjectContext(&SubjectContext);
  if ( PreviousMode == 1 && v33 )
    ExFreePoolWithTag(v33, 0);
  if ( v218 )
    ExFreePoolWithTag(v218, 0);
  if ( v207 )
    ExFreePoolWithTag(v207, 0);
  if ( v216[0] )
    ExFreePoolWithTag(v216[0], 0);
  if ( v213 )
  {
    LOBYTE(v79) = 1;
    SeReleaseSid(v213, PreviousMode, v79, v80);
  }
  if ( v204 )
    SeFreeCapturedObjectTypeList((void *)v204);
  if ( v174 )
  {
    if ( v192 )
      ExFreePoolWithTag(v192, 0);
    if ( v205 )
      ExFreePoolWithTag(v205, 0);
  }
  if ( v78 )
  {
    Blink = v215[1].Linkage.Blink;
    if ( Blink )
      SepRmDereferenceCapTable((volatile signed __int64 *)Blink);
  }
  if ( v222 )
    ExFreePoolWithTag(v222, 0);
  SepFreeResourceInfo((char *)v208);
  if ( v25 == -1073741670 || v190 )
    SepAuditFailed(v25);
  return (unsigned int)v25;
}
