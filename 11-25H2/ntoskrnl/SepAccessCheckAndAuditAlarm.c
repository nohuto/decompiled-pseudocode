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
  ACL *v85; // rcx
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
  _DWORD *v109; // rax
  unsigned int *v110; // rax
  unsigned int v111; // eax
  int v112; // ebx
  __int64 v113; // rdx
  __int64 *v114; // r8
  int v115; // eax
  char *v116; // rax
  int *v117; // rcx
  __int16 v118; // dx
  __int64 v119; // rax
  int *v120; // r10
  int v121; // edx
  int v122; // r8d
  struct _LIST_ENTRY *Blink; // rcx
  ACL *v124; // rcx
  void *ScopedPolicySid; // rax
  __int64 v126; // r8
  int Cap; // eax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v128; // rdx
  int v129; // edx
  char v130; // al
  char v131; // cl
  __int64 v132; // r14
  char *v133; // rax
  char *v134; // r10
  char *v135; // rax
  int *v136; // rcx
  unsigned int v137; // eax
  int v138; // edx
  __int64 v139; // r15
  PVOID v140; // r8
  _QWORD *v141; // rax
  void *v142; // r10
  void *v143; // rdx
  void *v144; // rcx
  void *v145; // r9
  int v146; // eax
  int v147; // ebx
  _QWORD *v148; // rax
  void *v149; // r8
  void *v150; // rdx
  void *v151; // rcx
  void *v152; // r9
  unsigned int v153; // ebx
  unsigned int v154; // r15d
  unsigned int v155; // eax
  char *v156; // rcx
  __int64 v157; // rdx
  __int64 v158; // r8
  __int64 *v159; // r10
  int Object; // [rsp+20h] [rbp-318h]
  int v161; // [rsp+78h] [rbp-2C0h]
  unsigned __int8 v162; // [rsp+A0h] [rbp-298h]
  char v163; // [rsp+A1h] [rbp-297h]
  char v164; // [rsp+A2h] [rbp-296h] BYREF
  char v165; // [rsp+A3h] [rbp-295h]
  char v166; // [rsp+A4h] [rbp-294h] BYREF
  char v167; // [rsp+A5h] [rbp-293h]
  char v168; // [rsp+A6h] [rbp-292h]
  int v169; // [rsp+A8h] [rbp-290h]
  char v170; // [rsp+ACh] [rbp-28Ch]
  int v171; // [rsp+B0h] [rbp-288h]
  char v172; // [rsp+B8h] [rbp-280h] BYREF
  char v173; // [rsp+B9h] [rbp-27Fh]
  int v174; // [rsp+BCh] [rbp-27Ch] BYREF
  char v175; // [rsp+C0h] [rbp-278h] BYREF
  char v176; // [rsp+C1h] [rbp-277h] BYREF
  _BYTE v177[6]; // [rsp+C2h] [rbp-276h] BYREF
  PVOID P; // [rsp+C8h] [rbp-270h] BYREF
  unsigned __int16 v179[2]; // [rsp+D0h] [rbp-268h] BYREF
  unsigned int v180; // [rsp+D4h] [rbp-264h] BYREF
  unsigned int v181; // [rsp+D8h] [rbp-260h] BYREF
  char v182; // [rsp+DCh] [rbp-25Ch]
  char v183; // [rsp+DDh] [rbp-25Bh]
  char v184; // [rsp+DEh] [rbp-25Ah]
  char v185; // [rsp+DFh] [rbp-259h] BYREF
  char v186; // [rsp+E0h] [rbp-258h] BYREF
  char v187; // [rsp+E1h] [rbp-257h]
  char v188; // [rsp+E2h] [rbp-256h]
  bool v189; // [rsp+E3h] [rbp-255h]
  unsigned int v190; // [rsp+E8h] [rbp-250h]
  PVOID v191; // [rsp+F0h] [rbp-248h]
  int v192; // [rsp+F8h] [rbp-240h]
  int v193; // [rsp+FCh] [rbp-23Ch]
  int v194; // [rsp+100h] [rbp-238h]
  int v195; // [rsp+104h] [rbp-234h]
  int v196; // [rsp+108h] [rbp-230h]
  char *v197; // [rsp+110h] [rbp-228h]
  int v198; // [rsp+118h] [rbp-220h]
  unsigned int v199; // [rsp+11Ch] [rbp-21Ch]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+120h] [rbp-218h] BYREF
  int v201; // [rsp+140h] [rbp-1F8h] BYREF
  unsigned int v202; // [rsp+144h] [rbp-1F4h]
  __int64 v203; // [rsp+148h] [rbp-1F0h] BYREF
  PVOID v204; // [rsp+150h] [rbp-1E8h]
  int *v205; // [rsp+158h] [rbp-1E0h]
  PVOID v206; // [rsp+160h] [rbp-1D8h] BYREF
  PVOID v207; // [rsp+168h] [rbp-1D0h] BYREF
  int v208; // [rsp+170h] [rbp-1C8h] BYREF
  ACL *v209; // [rsp+178h] [rbp-1C0h]
  volatile void *Address; // [rsp+180h] [rbp-1B8h]
  volatile void *v211; // [rsp+188h] [rbp-1B0h]
  __int64 v212; // [rsp+190h] [rbp-1A8h] BYREF
  PVOID v213; // [rsp+198h] [rbp-1A0h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v214; // [rsp+1A0h] [rbp-198h] BYREF
  PVOID v215[2]; // [rsp+1A8h] [rbp-190h] BYREF
  __int64 v216; // [rsp+1B8h] [rbp-180h]
  PVOID v217; // [rsp+1C0h] [rbp-178h] BYREF
  _DWORD *v218; // [rsp+1C8h] [rbp-170h]
  __int64 v219; // [rsp+1D0h] [rbp-168h]
  int v220[2]; // [rsp+1D8h] [rbp-160h] BYREF
  PVOID v221; // [rsp+1E0h] [rbp-158h] BYREF
  int v222; // [rsp+1E8h] [rbp-150h] BYREF
  __int64 v223; // [rsp+1F0h] [rbp-148h] BYREF
  PVOID v224; // [rsp+1F8h] [rbp-140h]
  void *Src; // [rsp+200h] [rbp-138h]
  __int64 v226; // [rsp+208h] [rbp-130h]
  int v227; // [rsp+210h] [rbp-128h] BYREF
  PVOID v228; // [rsp+218h] [rbp-120h] BYREF
  _DWORD *v229; // [rsp+220h] [rbp-118h]
  __int64 v230; // [rsp+228h] [rbp-110h]
  __int64 v231; // [rsp+230h] [rbp-108h]
  volatile void *v232; // [rsp+248h] [rbp-F0h]
  char *v233; // [rsp+250h] [rbp-E8h]
  PACCESS_TOKEN ClientToken; // [rsp+258h] [rbp-E0h]
  volatile void *v235; // [rsp+260h] [rbp-D8h]
  __int128 v236; // [rsp+268h] [rbp-D0h] BYREF
  void **v237; // [rsp+278h] [rbp-C0h]
  __int64 v238; // [rsp+280h] [rbp-B8h]
  _OWORD SecurityDescriptor[2]; // [rsp+288h] [rbp-B0h] BYREF
  __int64 v240; // [rsp+2A8h] [rbp-90h]
  __int128 v241; // [rsp+2B0h] [rbp-88h] BYREF
  __int64 v242; // [rsp+2C0h] [rbp-78h]
  int v243; // [rsp+2C8h] [rbp-70h]
  unsigned int v244[2]; // [rsp+2D0h] [rbp-68h] BYREF
  __int64 v245; // [rsp+2D8h] [rbp-60h] BYREF
  int v246; // [rsp+2E0h] [rbp-58h]
  __int128 v247; // [rsp+2E8h] [rbp-50h] BYREF

  v230 = a4;
  v229 = a1;
  v190 = a12;
  v18 = (__int64)a16;
  v219 = (__int64)a16;
  v19 = a13;
  v211 = a14;
  Address = a15;
  v218 = a1;
  v223 = a2;
  v237 = a3;
  v238 = a4;
  v231 = a5;
  v20 = a6;
  v216 = a6;
  Src = a7;
  v226 = a11;
  v171 = a12;
  LODWORD(v197) = a12;
  v235 = a14;
  v232 = a15;
  v233 = a16;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v169 = 0;
  v181 = 0;
  v191 = 0LL;
  v173 = 0;
  v174 = -1073741823;
  v222 = 0;
  v204 = 0LL;
  v227 = 0;
  v205 = 0LL;
  v193 = 0;
  v196 = 0;
  v182 = 0;
  v217 = 0LL;
  v206 = 0LL;
  v215[0] = 0LL;
  P = 0LL;
  v212 = 0LL;
  v203 = 0LL;
  v180 = 0;
  v247 = 0LL;
  v213 = 0LL;
  v164 = 0;
  v166 = 0;
  v177[0] = 0;
  v172 = 0;
  v187 = 0;
  v170 = 0;
  v167 = 0;
  v185 = 1;
  v186 = 0;
  v224 = 0LL;
  ClientToken = 0LL;
  v188 = 0;
  v236 = 0LL;
  v220[1] = 0;
  v209 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v240 = 0LL;
  v214 = 0LL;
  v163 = 0;
  v168 = 0;
  v165 = 0;
  v189 = 0;
  v179[0] = 999;
  v241 = 0LL;
  v242 = 0LL;
  v243 = 0;
  v195 = 0;
  v183 = 0;
  v194 = 0;
  v207 = 0LL;
  v201 = 0;
  v192 = 0;
  v184 = 0;
  v175 = 0;
  v176 = 0;
  v221 = 0LL;
  v208 = -1;
  v220[0] = -1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v162 = PreviousMode;
  v177[1] = PreviousMode;
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
    v198 = 7;
  }
  else
  {
    v198 = 2;
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
    if ( !v171 || (unsigned int)v171 > 0x1000 )
    {
      v25 = -1073741811;
      v169 = -1073741811;
      v22 = 0x7FFFFFFF0000LL;
      goto LABEL_19;
    }
    ProbeForWrite(Address, 4LL * (unsigned int)v171, 4u);
    ProbeForWrite(v211, 4LL * (unsigned int)v171, 4u);
    v22 = 0x7FFFFFFF0000LL;
    v20 = v216;
  }
  else
  {
    v22 = 0x7FFFFFFF0000LL;
    v23 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Address < 0x7FFFFFFF0000LL )
      v23 = (__int64)Address;
    *(_DWORD *)v23 = *(_DWORD *)v23;
    v24 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v211 < 0x7FFFFFFF0000LL )
      v24 = (__int64)v211;
    *(_DWORD *)v24 = *(_DWORD *)v24;
  }
  if ( (v19 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v247 = *(_OWORD *)v19;
  v25 = v169;
LABEL_19:
  if ( v25 < 0 )
  {
LABEL_192:
    PreviousMode = v162;
    v78 = v163;
    v33 = (unsigned int *)P;
    goto LABEL_121;
  }
  if ( !a3 )
    goto LABEL_21;
  v102 = *a3;
  v228 = 0LL;
  v103 = ObReferenceObjectByHandle(v102, 8u, (POBJECT_TYPE)SeTokenObjectType, v162, &v228, 0LL);
  v25 = v103;
  v224 = v228;
  if ( v103 < 0 )
  {
    v224 = 0LL;
    v189 = v103 != -1073741816;
    goto LABEL_192;
  }
  ClientToken = SubjectContext.ClientToken;
  SubjectContext.ClientToken = v228;
  v188 = 1;
LABEL_21:
  PrimaryToken = SubjectContext.ClientToken;
  if ( !SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.PrimaryToken;
  v218 = PrimaryToken;
  v244[0] = 1;
  v244[1] = 1;
  v245 = SeAuditPrivilege;
  v246 = 0;
  v27 = v162;
  v28 = SepPrivilegeCheck((__int64)SubjectContext.PrimaryToken, (__int64)&v245, 1u, 1, v162);
  if ( v162 )
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
        || (unsigned __int8)SepFilterPrivilegeAudits(1LL, v244) )
      {
        SepAdtPrivilegedServiceAuditAlarm(&SubjectContext, &SeSubsystemName, 0LL, (__int64)v31, (__int64)v29, v244, v28);
      }
    }
    v20 = v216;
    v18 = v219;
    v27 = v162;
  }
  if ( !v28 )
  {
    if ( (a10 & 1) == 0 )
    {
      v25 = -1073741727;
      PreviousMode = v162;
      v78 = 0;
      goto LABEL_162;
    }
    v187 = 1;
  }
  if ( (a8 & 0xF0000000) != 0 )
  {
    v25 = -1073741594;
    PreviousMode = v162;
    v78 = 0;
    v33 = (unsigned int *)P;
    goto LABEL_121;
  }
  v25 = SeCaptureSecurityDescriptor(v20, v27, 1, 0, &P);
  v169 = v25;
  if ( v25 < 0 )
  {
    v33 = 0LL;
    PreviousMode = v162;
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
  if ( (unsigned __int64)v233 < 0x7FFFFFFF0000LL )
    v22 = v18;
  *(_BYTE *)v22 = *(_BYTE *)v22;
  v25 = SepProbeAndCaptureString_U(v229, &v217);
  v169 = v25;
  if ( v25 >= 0 )
  {
    v25 = SepProbeAndCaptureString_U(v230, &v206);
    v169 = v25;
    if ( v25 >= 0 )
    {
      v25 = SepProbeAndCaptureString_U(v231, v215);
      v169 = v25;
    }
  }
  PreviousMode = v162;
  LOBYTE(v41) = v195;
  if ( v25 < 0 )
    goto LABEL_192;
  if ( Src )
  {
    v25 = SeCaptureSid(Src, v162, v39, v40, Object, 1, (PSID *)&v212);
    if ( v25 < 0 )
    {
      v212 = 0LL;
      v78 = 0;
      goto LABEL_162;
    }
  }
  v25 = SeCaptureObjectTypeList(v226, v171, v162, &v203);
  if ( v25 < 0 )
    goto LABEL_192;
  v33 = (unsigned int *)P;
  v25 = SepTrustLevelCheck(v42, (__int64)P, &SubjectContext, 0LL, 0LL, 1, &v208);
  if ( v25 < 0 )
  {
LABEL_170:
    v78 = 0;
    goto LABEL_121;
  }
  v43 = a8;
  v169 = SepFilterToDiscretionary(&v208, a8);
  if ( v169 < 0 )
  {
    v175 = 1;
LABEL_293:
    PreviousMode = v162;
    goto LABEL_57;
  }
  v25 = SepFilterCheck((__int64)v33, &v207, (__int64)PrimaryToken, 1, (__int64)v220);
  if ( v25 < 0 )
  {
LABEL_169:
    PreviousMode = v162;
    goto LABEL_170;
  }
  v169 = SepFilterToDiscretionary(v220, v43);
  if ( v169 < 0 )
  {
    v176 = 1;
    goto LABEL_293;
  }
  v25 = SepMandatoryIntegrityCheck(&v247, (__int64)v33, 0LL, (__int64)PrimaryToken, 1, (__int64)&v236);
  if ( v25 < 0 )
    goto LABEL_169;
  v44 = SepMandatoryToDiscretionary(&v236, v43);
  v169 = v44;
  if ( (v44 < 0 || (v43 & 0x2000000) != 0) && (PrimaryToken[50] & 0x4000) != 0 )
  {
    v41 = (unsigned __int8)v41;
    if ( HIDWORD(v236) <= 0x2000 )
      v41 = 1;
    v195 = v41;
  }
  if ( v44 < 0 && !(_BYTE)v41 )
    goto LABEL_293;
  PreviousMode = v162;
  v169 = SePrivilegePolicyCheck(&a8, &v180, (__int64 *)&SubjectContext, 0LL, (__int64)&v213, v162);
  if ( !a8 )
  {
    v115 = (unsigned __int8)v192;
    if ( v180 )
      v115 = 1;
    v192 = v115;
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
  v25 = v169;
  if ( v169 < 0 && !(_BYTE)v41 )
  {
    v166 = 1;
    v174 = v169;
    if ( a17 )
    {
      v89 = (unsigned int)v171;
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      v91 = Pool2;
      v191 = Pool2;
      if ( !Pool2 )
      {
        SeUnlockSubjectContext(&SubjectContext);
        v25 = -1073741670;
        v78 = 0;
        v33 = (unsigned int *)P;
        goto LABEL_121;
      }
      v173 = 1;
      v116 = &Pool2[4 * v171];
      v197 = v116;
      if ( v171 )
      {
        v117 = (int *)v116;
        do
        {
          *(int *)((char *)v117 + v91 - v116) = v181;
          *v117++ = v174;
          --v89;
        }
        while ( v89 );
      }
      v48 = a8;
      v49 = v180;
    }
    else
    {
      v191 = &v181;
      v197 = (char *)&v174;
      v48 = a8;
      v49 = v180;
    }
    goto LABEL_75;
  }
  IsOwner = SepTokenIsOwner((__int64)PrimaryToken, (__int64)P);
  v165 = IsOwner;
  v33 = (unsigned int *)P;
  if ( !SepRmEnforceCap )
    goto LABEL_61;
  v118 = *((_WORD *)P + 1);
  if ( (v118 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_61;
  if ( v118 >= 0 )
  {
    v124 = (ACL *)*((_QWORD *)P + 3);
  }
  else
  {
    v119 = *((unsigned int *)P + 3);
    if ( !(_DWORD)v119 )
    {
      v209 = 0LL;
      goto LABEL_303;
    }
    v124 = (ACL *)((char *)P + v119);
    IsOwner = v165;
  }
  v209 = v124;
  if ( !v124 )
  {
LABEL_61:
    v25 = v169;
    goto LABEL_62;
  }
  ScopedPolicySid = (void *)SepGetScopedPolicySid((__int64)v124);
  if ( !ScopedPolicySid )
  {
LABEL_303:
    IsOwner = v165;
    goto LABEL_61;
  }
  Cap = SepRmReferenceFindCap(ScopedPolicySid, &v214, v126);
  v128 = v214;
  if ( Cap < 0 )
    v128 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)SepRmDefaultCap;
  v214 = v128;
  v25 = 0;
  v169 = 0;
  v163 = 1;
  IsOwner = v165;
LABEL_62:
  v48 = a8;
  if ( (a8 & 0x2060000) != 0
    && IsOwner
    && ((v83 = *((_WORD *)v33 + 1), (v83 & 4) == 0)
      ? (v85 = 0LL)
      : v83 >= 0
      ? (v85 = (ACL *)*((_QWORD *)v33 + 4))
      : (v84 = v33[4], !(_DWORD)v84)
      ? (v85 = 0LL)
      : (v85 = (ACL *)((char *)v33 + v84)),
        !RtlOwnerAcesPresent(v85)) )
  {
    if ( (v48 & 0x2000000) != 0 )
    {
      v86 = 393216;
      v49 = v180 | 0x60000;
    }
    else
    {
      v86 = v48 & 0x60000;
      v49 = v180 | v48 & 0x60000;
    }
    v194 = v86;
    v180 = v49;
    v48 &= 0xFFF9FFFF;
    a8 = v48;
  }
  else
  {
    v49 = v180;
  }
  if ( !v48 && (!v163 || (_BYTE)v192) && ((PrimaryToken[50] & 0x2000) != 0 || !v194) )
  {
    v181 = v49;
    if ( v49 )
    {
      v129 = 0;
      v130 = 0;
      v131 = 1;
    }
    else
    {
      v129 = -1073741790;
      v130 = 1;
      v131 = 0;
    }
    v164 = v131;
    v166 = v130;
    v174 = v129;
    if ( !a17 )
    {
      v191 = &v181;
      v197 = (char *)&v174;
      goto LABEL_76;
    }
    v132 = (unsigned int)v171;
    v133 = (char *)ExAllocatePool2(0x100uLL);
    v134 = v133;
    v191 = v133;
    if ( v133 )
    {
      v173 = 1;
      v135 = &v133[4 * v171];
      v197 = v135;
      if ( v171 )
      {
        v136 = (int *)v135;
        do
        {
          *(int *)((char *)v136 + v134 - v135) = v181;
          *v136++ = v174;
          --v132;
        }
        while ( v132 );
      }
      goto LABEL_76;
    }
LABEL_221:
    v25 = -1073741670;
    SeUnlockSubjectContext(&SubjectContext);
    PreviousMode = v162;
    v78 = v163;
    goto LABEL_121;
  }
  v50 = (unsigned int)v197;
  if ( a17 )
  {
    v110 = (unsigned int *)ExAllocatePool2(0x100uLL);
    v51 = v110;
    v191 = v110;
    if ( !v110 )
      goto LABEL_221;
    v173 = 1;
    v53 = v50;
    v52 = (char *)&v110[v50];
  }
  else
  {
    v51 = &v181;
    v191 = &v181;
    v52 = (char *)&v174;
    v53 = (unsigned int)v197;
  }
  v197 = v52;
  LODWORD(v241) = v194;
  SepAccessCheck(
    (__int64)v33,
    v212,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)PrimaryToken,
    v48,
    (__int128 *)v203,
    v171,
    &v247,
    v49,
    v162,
    v51,
    0LL,
    (int *)v52,
    a17,
    v165,
    (__int64)&v241,
    (__int64)&v207,
    &v164,
    &v166);
  if ( SepRmEnforceCap && *(int *)v197 >= 0 && (v78 = v163) != 0 )
  {
    if ( a17 )
    {
      v87 = (int *)ExAllocatePool2(0x100uLL);
      v88 = v87;
      v204 = v87;
      if ( !v87 )
      {
        SeUnlockSubjectContext(&SubjectContext);
        SeReleaseSubjectContext(&SubjectContext);
        v25 = -1073741670;
        PreviousMode = v162;
LABEL_162:
        v33 = (unsigned int *)P;
        goto LABEL_121;
      }
      v120 = &v87[v53];
    }
    else
    {
      v88 = &v222;
      v204 = &v222;
      v120 = &v227;
    }
    v205 = v120;
    if ( v171 )
    {
      v25 = SepCopyObjectTypeList(v203, v171, (__int64 *)&v221);
      v169 = v25;
      if ( v25 < 0 )
      {
        PreviousMode = v162;
        goto LABEL_162;
      }
      v88 = (int *)v204;
    }
    else
    {
      v25 = v169;
    }
    LOBYTE(v33) = 0;
    v192 = (int)v33;
    v137 = 0;
    v48 = a8;
    v49 = v180;
    v138 = v193;
    while ( 1 )
    {
      v199 = v137;
      if ( v137 >= HIDWORD(v214[2].Linkage.Blink) )
        break;
      v139 = *(&v214[2].Signature + v137);
      v226 = v139;
      if ( !*(_QWORD *)(v139 + 24) )
        goto LABEL_360;
      v140 = v207;
      if ( !v207 )
      {
        LODWORD(v33) = (unsigned __int8)v33;
        if ( (int)AuthzBasepInitializeResourceClaimsFromSacl((__int64)v209, (__int64 *)&v207) < 0 )
          LODWORD(v33) = 1;
        v192 = (int)v33;
        v140 = v207;
      }
      v141 = (_QWORD *)*((_QWORD *)PrimaryToken + 137);
      v142 = v141 ? (void *)v141[75] : 0LL;
      v143 = v141 ? (void *)v141[73] : 0LL;
      v144 = v141 ? (void *)v141[74] : 0LL;
      v145 = v141 ? (void *)v141[72] : 0LL;
      v146 = AuthzBasepEvaluateAceCondition(
               PrimaryToken,
               *((void **)PrimaryToken + 97),
               v140,
               v145,
               v144,
               v143,
               v142,
               *(_DWORD **)(v139 + 24),
               *(_DWORD *)(v139 + 16),
               1u,
               0,
               &v201);
      v25 = v146;
      v169 = v146;
      v147 = v201;
      if ( v201 == 1 )
        goto LABEL_360;
      if ( v146 < 0 )
        goto LABEL_192;
      if ( SeTokenIsRestricted(PrimaryToken) )
      {
        v148 = (_QWORD *)*((_QWORD *)PrimaryToken + 137);
        if ( v148 )
          v149 = (void *)v148[75];
        else
          v149 = 0LL;
        if ( v148 )
          v150 = (void *)v148[73];
        else
          v150 = 0LL;
        if ( v148 )
          v151 = (void *)v148[74];
        else
          v151 = 0LL;
        if ( v148 )
          v152 = (void *)v148[72];
        else
          v152 = 0LL;
        v25 = AuthzBasepEvaluateAceCondition(
                PrimaryToken,
                *((void **)PrimaryToken + 97),
                v207,
                v152,
                v151,
                v150,
                v149,
                *(_DWORD **)(v139 + 24),
                *(_DWORD *)(v139 + 16),
                1u,
                1u,
                &v201);
        v169 = v25;
        if ( v25 < 0 )
          goto LABEL_192;
        v147 = v201;
      }
      if ( (_BYTE)v192 || v147 == 1 )
      {
LABEL_360:
        if ( (*(_DWORD *)(v139 + 48) & 1) != 0 )
        {
          if ( (v48 & 0x2000000) != 0 )
            v153 = v48;
          else
            v153 = v48 | v49;
          v154 = 0;
        }
        else
        {
          v153 = v48;
          v154 = v49;
        }
        v25 = SepBuildCapeSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 **)(v226 + 32), v209);
        v169 = v25;
        if ( v25 < 0 )
          goto LABEL_192;
        SepAccessCheck(
          (__int64)SecurityDescriptor,
          v212,
          (__int64)SubjectContext.PrimaryToken,
          (__int64)SubjectContext.ClientToken,
          v153,
          (__int128 *)v221,
          v171,
          &v247,
          v154,
          v162,
          v204,
          0LL,
          v205,
          a17,
          v165,
          (__int64)&v241,
          (__int64)&v207,
          &v185,
          &v186);
        v88 = (int *)v204;
        if ( v168 )
          v138 = *(_DWORD *)v204 & v193;
        else
          v138 = *(_DWORD *)v204;
        v193 = v138;
        if ( v221 )
        {
          SepMergeObjectTypeListAccesses(v203, (__int64)v221, v171);
          v138 = v193;
        }
        v168 = 1;
      }
      else
      {
        v138 = v193;
        v88 = (int *)v204;
      }
      v137 = v199 + 1;
      LOBYTE(v33) = v192;
    }
    v164 = v185;
    v166 = v186;
    *v88 &= v138;
    if ( !v138 )
    {
      *v205 = -1073741790;
      v164 = 0;
      v166 = 1;
    }
  }
  else
  {
    v48 = a8;
    v25 = v169;
    v49 = v180;
  }
  if ( (v48 & 0x2000000) != 0 )
  {
    if ( !(_BYTE)v195 || !*(_WORD *)((char *)&v242 + 5) && !SeIsPermissiveLearningModeEnabled((__int64)PrimaryToken) )
    {
      v55 = v190;
      v111 = v190;
      if ( !a17 )
        v111 = 0;
      SepConstrainByMandatory((__int64)&v236, v48, (char *)v191, v197, 0LL, v111);
      v54 = a17;
      goto LABEL_73;
    }
    goto LABEL_71;
  }
  if ( !(_BYTE)v195 || *(_WORD *)((char *)&v242 + 5) )
  {
LABEL_71:
    v54 = a17;
LABEL_72:
    v55 = v190;
LABEL_73:
    v56 = (char *)v191;
    goto LABEL_74;
  }
  if ( SeIsPermissiveLearningModeEnabled((__int64)PrimaryToken) && !HIDWORD(v241) )
  {
    HIBYTE(v242) = 1;
    v164 = 1;
    v166 = 0;
    v181 = v48;
    v174 = 0;
    goto LABEL_71;
  }
  v164 = 0;
  v166 = 1;
  v155 = 0;
  v181 = 0;
  v174 = v121;
  v54 = a17;
  if ( !a17 || !v122 )
    goto LABEL_72;
  v156 = v197;
  v56 = (char *)v191;
  v157 = (_BYTE *)v191 - v197;
  while ( 1 )
  {
    *(_DWORD *)&v156[v157] = v155;
    *(_DWORD *)v156 = v174;
    v156 += 4;
    if ( !--v50 )
      break;
    v155 = v181;
  }
  v54 = a17;
  v55 = v190;
LABEL_74:
  if ( (v48 & 0x2000000) != 0 )
  {
    if ( !v54 )
      v55 = 0;
    SepConstrainByConstraintMask(v208, v48, v56, v197, 0LL, v55, &v175);
    SepConstrainByConstraintMask(v220[0], v48, (char *)v191, v197, 0LL, v55, &v176);
  }
LABEL_75:
  v33 = (unsigned int *)P;
LABEL_76:
  if ( !PrimaryToken )
    goto LABEL_83;
  if ( v176 || v175 )
    goto LABEL_202;
  if ( !HIDWORD(v241) && (PrimaryToken[50] & 0x4000) != 0 )
  {
    if ( v25 < 0 )
      goto LABEL_83;
    if ( v174 < 0 || HIBYTE(v242) )
    {
LABEL_202:
      v106 = KeGetCurrentThread();
      --v106->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)PrimaryToken + 6), 1u);
      v107 = v174 >= 0;
      v108 = a8 | v180;
      v109 = SepLocateTokenTrustLevel(&SubjectContext);
      SeLogAccessFailure((char *)PrimaryToken, 0LL, 0LL, (ULONGLONG)v109, (__int64)P, v108, v107);
      ExReleaseResourceLite(*((PERESOURCE *)PrimaryToken + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v48 = a8;
      v25 = v169;
      v33 = (unsigned int *)P;
      v49 = v180;
    }
  }
  if ( v25 >= 0
    && v174 < 0
    && !HIDWORD(v241)
    && (PrimaryToken[50] & 0x4000) != 0
    && SepLpacCausedAccessFailure((__int64)&v241, v48) )
  {
    SepLogLpacAccessFailure();
  }
LABEL_83:
  if ( v187 )
  {
LABEL_95:
    v62 = v196;
    goto LABEL_96;
  }
  if ( v198 != 2 )
  {
    if ( v164 )
    {
      v179[0] = 152;
      v170 = SepAdtAuditThisEventWithContext(152LL, v164, 0, &SubjectContext);
    }
    if ( v166 )
    {
      v179[0] = 152;
      v57 = SepAdtAuditThisEventWithContext(152LL, 0, v166, &SubjectContext);
      v167 = v57;
      goto LABEL_89;
    }
    goto LABEL_186;
  }
  if ( v164 )
    v170 = SepAdtAuditObjectAccessWithContext(0LL, (unsigned __int16 *)v206, v164, 0, &SubjectContext, 0, v179);
  if ( !v166 )
  {
LABEL_186:
    v57 = v167;
    goto LABEL_89;
  }
  v57 = SepAdtAuditObjectAccessWithContext(0LL, (unsigned __int16 *)v206, 0, v166, &SubjectContext, 0, v179);
  v167 = v57;
LABEL_89:
  v58 = v170;
  if ( v170 || v57 )
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
    v60 = (int *)v191;
    v97 = v197;
    v59 = a17;
    SepExamineSaclEx(
      v95,
      v94,
      v92,
      v96,
      v203,
      v171,
      a17,
      (__int64)v197,
      (__int64)v191,
      v212,
      v165,
      (__int64)v177,
      (__int64)&v172);
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
    v61 = v171;
    SepExamineGlobalSaclEx(
      (__int64)v206,
      v100,
      v98,
      v96,
      v203,
      v171,
      v59,
      (__int64)v97,
      (__int64)v60,
      v212,
      v165,
      (__int64)v177,
      &v172);
    v57 = v167;
    v58 = v170;
  }
  else
  {
    v59 = a17;
    v60 = (int *)v191;
    v61 = v171;
  }
  if ( !v177[0] && !v172 )
  {
    if ( v213 && v164 )
    {
      SepAdtPrivilegeObjectAuditAlarm(
        (const int *)v217,
        (unsigned __int16 *)v206,
        (unsigned __int16 *)v215[0],
        (__int64)&v223,
        (__int64)SubjectContext.ClientToken,
        (__int64)SubjectContext.PrimaryToken,
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        a8,
        (unsigned int *)v213,
        v164);
      v62 = 0;
      goto LABEL_96;
    }
    goto LABEL_95;
  }
  v62 = v196;
  if ( v164 )
    v62 = 1;
  if ( v177[0] && v58 )
  {
    v158 = 0LL;
    if ( v59 )
      v158 = (__int64)v60;
    v159 = &v223;
    if ( !v164 )
      LODWORD(v159) = 0;
    v161 = v61;
    v112 = v198;
    SepAdtOpenObjectAuditAlarm(
      v179[0],
      (int)v217,
      (int)v159,
      (int)v206,
      (__int64)v215[0],
      P,
      (__int64)SubjectContext.ClientToken,
      (__int64)SubjectContext.PrimaryToken,
      *v60,
      *v60,
      (__int64)v213,
      1,
      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
      v198,
      v203,
      v161,
      v158,
      0LL,
      0LL);
    v57 = v167;
  }
  else
  {
    v112 = v198;
  }
  if ( v172 && v57 )
  {
    v113 = 0LL;
    if ( v59 )
      v113 = (__int64)v60;
    v114 = &v223;
    if ( !v164 )
      LODWORD(v114) = 0;
    v63 = v171;
    SepAdtOpenObjectAuditAlarm(
      v179[0],
      (int)v217,
      (int)v114,
      (int)v206,
      (__int64)v215[0],
      P,
      (__int64)SubjectContext.ClientToken,
      (__int64)SubjectContext.PrimaryToken,
      a8,
      a8,
      (__int64)v213,
      0,
      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
      v112,
      v203,
      v171,
      v113,
      0LL,
      0LL);
    goto LABEL_97;
  }
LABEL_96:
  v63 = v171;
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
    v72 = v197;
    v71 = 0;
    v73 = v168;
    v202 = 0;
    if ( v197 )
    {
      v74 = v211;
      v75 = Address;
      v76 = v204;
      while ( v71 < v63 )
      {
        v77 = 4LL * v71;
        v75[(unsigned __int64)v77 / 4] = *(_DWORD *)&v72[v77];
        v74[(unsigned __int64)v77 / 4] = *(_DWORD *)((char *)v191 + v77);
        if ( SepRmEnforceCap && v73 && *(int *)&v72[v77] >= 0 )
        {
          v75[v71] = v205[v71];
          v74[v71] &= v76[v71];
        }
        v202 = ++v71;
      }
    }
    else
    {
      v66 = v174;
      v67 = (char *)v211;
      v68 = (char *)Address;
      while ( v71 < v63 )
      {
        v69 = (int *)&v68[4 * v71];
        *v69 = v66;
        v70 = (unsigned int *)&v67[4 * v71];
        *v70 = v181;
        if ( SepRmEnforceCap && v73 )
        {
          v66 = v174;
          if ( v174 >= 0 )
          {
            *v69 = v174;
            *v70 &= v181;
          }
        }
        else
        {
          v66 = v174;
        }
        v202 = ++v71;
      }
    }
  }
  else
  {
    v64 = Address;
    *(_DWORD *)Address = v174;
    v65 = v211;
    *(_DWORD *)v211 = v181;
    if ( SepRmEnforceCap && v168 && v174 >= 0 )
    {
      *v64 = *v205;
      *v65 &= *(_DWORD *)v204;
    }
  }
  *v233 = v62;
  v25 = 0;
  v169 = 0;
  v33 = (unsigned int *)P;
  PreviousMode = v162;
  v78 = v163;
LABEL_121:
  if ( v188 )
  {
    ObfDereferenceObject(v224);
    SubjectContext.ClientToken = ClientToken;
  }
  if ( v213 )
    ExFreePoolWithTag(v213, 0);
  SeReleaseSubjectContext(&SubjectContext);
  if ( PreviousMode == 1 && v33 )
    ExFreePoolWithTag(v33, 0);
  if ( v217 )
    ExFreePoolWithTag(v217, 0);
  if ( v206 )
    ExFreePoolWithTag(v206, 0);
  if ( v215[0] )
    ExFreePoolWithTag(v215[0], 0);
  if ( v212 )
  {
    LOBYTE(v79) = 1;
    SeReleaseSid(v212, PreviousMode, v79, v80);
  }
  if ( v203 )
    SeFreeCapturedObjectTypeList((void *)v203);
  if ( v173 )
  {
    if ( v191 )
      ExFreePoolWithTag(v191, 0);
    if ( v204 )
      ExFreePoolWithTag(v204, 0);
  }
  if ( v78 )
  {
    Blink = v214[1].Linkage.Blink;
    if ( Blink )
      SepRmDereferenceCapTable((volatile signed __int64 *)Blink);
  }
  if ( v221 )
    ExFreePoolWithTag(v221, 0);
  SepFreeResourceInfo((char *)v207);
  if ( v25 == -1073741670 || v189 )
    SepAuditFailed(v25);
  return (unsigned int)v25;
}
