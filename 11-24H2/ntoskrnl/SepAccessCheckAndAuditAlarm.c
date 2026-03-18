/*
 * XREFs of SepAccessCheckAndAuditAlarm @ 0x14091DB90
 * Callers:
 *     NtAccessCheckByTypeResultListAndAuditAlarm @ 0x1407925A0 (NtAccessCheckByTypeResultListAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x140792650 (NtAccessCheckByTypeResultListAndAuditAlarmByHandle.c)
 *     NtAccessCheckAndAuditAlarm @ 0x14091FA10 (NtAccessCheckAndAuditAlarm.c)
 *     NtAccessCheckByTypeAndAuditAlarm @ 0x14091FAA0 (NtAccessCheckByTypeAndAuditAlarm.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     SepMandatoryIntegrityCheck @ 0x140259F30 (SepMandatoryIntegrityCheck.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     SepLogLpacAccessFailure @ 0x14027BEC4 (SepLogLpacAccessFailure.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403450F0 (AuthzBasepEvaluateAceCondition.c)
 *     SepTrustLevelCheck @ 0x140357F50 (SepTrustLevelCheck.c)
 *     SepLocateTokenTrustLevel @ 0x1403581B0 (SepLocateTokenTrustLevel.c)
 *     SepFilterCheck @ 0x14035B6A0 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x14035BC30 (SepAccessCheck.c)
 *     SeCaptureObjectTypeList @ 0x14035ED40 (SeCaptureObjectTypeList.c)
 *     SeLogAccessFailure @ 0x14035F070 (SeLogAccessFailure.c)
 *     SePrivilegePolicyCheck @ 0x14035F1D0 (SePrivilegePolicyCheck.c)
 *     SepTokenIsOwner @ 0x140361440 (SepTokenIsOwner.c)
 *     SepFreeResourceInfo @ 0x1403620C0 (SepFreeResourceInfo.c)
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403642B0 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     RtlOwnerAcesPresent @ 0x1403FEA60 (RtlOwnerAcesPresent.c)
 *     SepPrivilegeCheck @ 0x140403670 (SepPrivilegeCheck.c)
 *     SepMandatoryToDiscretionary @ 0x14041B190 (SepMandatoryToDiscretionary.c)
 *     SepFilterToDiscretionary @ 0x14041EA00 (SepFilterToDiscretionary.c)
 *     SeTokenIsRestricted @ 0x140432500 (SeTokenIsRestricted.c)
 *     SepConstrainByMandatory @ 0x14043A820 (SepConstrainByMandatory.c)
 *     SepConstrainByConstraintMask @ 0x14043A9F0 (SepConstrainByConstraintMask.c)
 *     SepGetScopedPolicySid @ 0x140454F4C (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x140454FA4 (SepRmReferenceFindCap.c)
 *     SepLpacCausedAccessFailure @ 0x1404599D8 (SepLpacCausedAccessFailure.c)
 *     SeIsPermissiveLearningModeEnabled @ 0x14046210C (SeIsPermissiveLearningModeEnabled.c)
 *     SepExamineGlobalSaclEx @ 0x140462D6C (SepExamineGlobalSaclEx.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404D060C (SepBuildCapeSecurityDescriptor.c)
 *     SepRmDereferenceCapTable @ 0x1404F5488 (SepRmDereferenceCapTable.c)
 *     SeFreeCapturedObjectTypeList @ 0x1406087B4 (SeFreeCapturedObjectTypeList.c)
 *     SepCopyObjectTypeList @ 0x1406087D0 (SepCopyObjectTypeList.c)
 *     SepMergeObjectTypeListAccesses @ 0x140608888 (SepMergeObjectTypeListAccesses.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140850540 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x140850F60 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140851030 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140852C10 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140853560 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeCaptureSid @ 0x140864EF8 (SeCaptureSid.c)
 *     SeUnlockSubjectContext @ 0x1408684D0 (SeUnlockSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408F1214 (SepAdtOpenObjectAuditAlarm.c)
 *     SeCaptureSecurityDescriptor @ 0x14091CE60 (SeCaptureSecurityDescriptor.c)
 *     SepProbeAndCaptureString_U @ 0x14091F8F0 (SepProbeAndCaptureString_U.c)
 *     SepFilterPrivilegeAudits @ 0x14091FB50 (SepFilterPrivilegeAudits.c)
 *     SepExamineSaclEx @ 0x14091FD68 (SepExamineSaclEx.c)
 *     SeReleaseSid @ 0x140A249A0 (SeReleaseSid.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
        unsigned int a12,
        __int64 a13,
        volatile void *a14,
        volatile void *a15,
        char *a16,
        char a17)
{
  __int64 v18; // rsi
  __int64 v19; // r12
  __int64 v20; // rbx
  unsigned __int8 PreviousMode; // r15
  __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rcx
  signed int v25; // ebx
  SIZE_T v26; // rbx
  char v27; // si
  _DWORD *PrimaryToken; // r13
  char v29; // di
  PACCESS_TOKEN v30; // r14
  _QWORD **v31; // rax
  PACCESS_TOKEN v32; // rbx
  void *v33; // rsi
  unsigned int *v34; // rdi
  __int16 v35; // cx
  __int64 v36; // rax
  char *v37; // rax
  __int64 v38; // rax
  char *v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r12
  __int64 v43; // rcx
  int v44; // esi
  int v45; // r9d
  int v46; // eax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v48; // rax
  char IsOwner; // al
  unsigned int v50; // esi
  unsigned int v51; // r12d
  __int64 v52; // r14
  unsigned int *v53; // rdx
  char *v54; // rax
  __int64 v55; // r15
  char v56; // cl
  unsigned int v57; // r14d
  char *v58; // r10
  int v59; // r13d
  char v60; // dl
  char v61; // r8
  char v62; // si
  unsigned int v63; // ebx
  unsigned int *v64; // rdi
  char v65; // r12
  unsigned int v66; // esi
  _DWORD *v67; // rdx
  _DWORD *v68; // rcx
  int v69; // edx
  char *v70; // r10
  char *v71; // r11
  int *v72; // r9
  unsigned int *v73; // r8
  unsigned int v74; // ecx
  char *v75; // r8
  char v76; // di
  _DWORD *v77; // r9
  _DWORD *v78; // r10
  _DWORD *v79; // r11
  __int64 v80; // rdx
  char v81; // si
  __int64 v82; // r8
  PSE_EXPORTS v84; // r12
  __int16 v85; // ax
  __int64 v86; // rax
  __int64 v87; // rcx
  int v88; // eax
  int *v89; // rax
  int *v90; // r11
  __int64 v91; // rdi
  char *Pool2; // rax
  char *v93; // r10
  int v94; // r8d
  __int16 v95; // cx
  __int64 v96; // rdx
  __int64 v97; // rcx
  int v98; // r12d
  char *v99; // rbx
  int v100; // r8d
  __int16 v101; // ax
  __int64 v102; // rdx
  unsigned int v103; // eax
  void *v104; // rcx
  NTSTATUS v105; // eax
  unsigned int v106; // eax
  unsigned int v107; // edx
  struct _KTHREAD *v108; // rax
  char v109; // di
  char v110; // bl
  __int64 v111; // rdx
  ULONGLONG v112; // rax
  unsigned int *v113; // rax
  unsigned int v114; // eax
  unsigned int *v115; // rdx
  unsigned __int64 *v116; // r8
  int v117; // eax
  char *v118; // rax
  int *v119; // rcx
  __int16 v120; // dx
  __int64 v121; // rax
  int *v122; // r10
  int v123; // edx
  int v124; // r8d
  struct _LIST_ENTRY *Blink; // rcx
  char *v126; // rcx
  void *ScopedPolicySid; // rax
  __int64 v128; // r8
  int Cap; // eax
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *v130; // rdx
  int v131; // edx
  char v132; // al
  char v133; // cl
  __int64 v134; // r14
  char *v135; // rax
  char *v136; // r10
  char *v137; // rax
  int *v138; // rcx
  unsigned int v139; // eax
  int v140; // edx
  __int64 v141; // r15
  PVOID v142; // r8
  _QWORD *v143; // rax
  __int64 v144; // r10
  __int64 v145; // rdx
  __int64 v146; // rcx
  void *v147; // r9
  int v148; // eax
  int v149; // edi
  _QWORD *v150; // rax
  __int64 v151; // r8
  __int64 v152; // rdx
  __int64 v153; // rcx
  void *v154; // r9
  unsigned int v155; // edi
  unsigned int v156; // r15d
  unsigned int v157; // eax
  char *v158; // rcx
  __int64 v159; // rdx
  unsigned int *v160; // r8
  unsigned __int64 *v161; // r10
  int Object; // [rsp+20h] [rbp-318h]
  __int64 v163; // [rsp+38h] [rbp-300h]
  unsigned __int8 v164; // [rsp+A0h] [rbp-298h]
  char v165; // [rsp+A1h] [rbp-297h]
  char v166; // [rsp+A2h] [rbp-296h] BYREF
  char v167; // [rsp+A3h] [rbp-295h]
  char v168; // [rsp+A4h] [rbp-294h] BYREF
  char v169; // [rsp+A5h] [rbp-293h]
  char v170; // [rsp+A6h] [rbp-292h]
  int v171; // [rsp+A8h] [rbp-290h]
  char v172; // [rsp+ACh] [rbp-28Ch]
  int v173; // [rsp+B0h] [rbp-288h]
  char v174; // [rsp+B8h] [rbp-280h] BYREF
  char v175; // [rsp+B9h] [rbp-27Fh]
  int v176; // [rsp+BCh] [rbp-27Ch] BYREF
  char v177; // [rsp+C0h] [rbp-278h] BYREF
  char v178; // [rsp+C1h] [rbp-277h] BYREF
  _BYTE v179[6]; // [rsp+C2h] [rbp-276h] BYREF
  PVOID P; // [rsp+C8h] [rbp-270h] BYREF
  unsigned __int16 v181[2]; // [rsp+D0h] [rbp-268h] BYREF
  unsigned int v182; // [rsp+D4h] [rbp-264h] BYREF
  unsigned int v183; // [rsp+D8h] [rbp-260h] BYREF
  char v184; // [rsp+DCh] [rbp-25Ch] BYREF
  char v185; // [rsp+DDh] [rbp-25Bh] BYREF
  char v186; // [rsp+DEh] [rbp-25Ah]
  char v187; // [rsp+DFh] [rbp-259h]
  bool v188; // [rsp+E0h] [rbp-258h]
  char v189; // [rsp+E1h] [rbp-257h]
  char v190; // [rsp+E6h] [rbp-252h]
  unsigned int v191; // [rsp+E8h] [rbp-250h]
  char v192; // [rsp+ECh] [rbp-24Ch]
  PVOID v193; // [rsp+F0h] [rbp-248h]
  int v194; // [rsp+F8h] [rbp-240h]
  int v195; // [rsp+FCh] [rbp-23Ch]
  int v196; // [rsp+100h] [rbp-238h]
  int v197; // [rsp+104h] [rbp-234h]
  int v198; // [rsp+108h] [rbp-230h]
  char *v199; // [rsp+110h] [rbp-228h]
  unsigned int v200; // [rsp+118h] [rbp-220h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+120h] [rbp-218h] BYREF
  int v202; // [rsp+140h] [rbp-1F8h] BYREF
  unsigned int v203; // [rsp+144h] [rbp-1F4h]
  __int64 v204; // [rsp+148h] [rbp-1F0h] BYREF
  PVOID v205; // [rsp+150h] [rbp-1E8h]
  PVOID v206; // [rsp+158h] [rbp-1E0h] BYREF
  int *v207; // [rsp+160h] [rbp-1D8h]
  PVOID v208; // [rsp+168h] [rbp-1D0h] BYREF
  int v209; // [rsp+170h] [rbp-1C8h] BYREF
  char *v210; // [rsp+178h] [rbp-1C0h]
  volatile void *Address; // [rsp+180h] [rbp-1B8h]
  volatile void *v212; // [rsp+188h] [rbp-1B0h]
  __int64 v213; // [rsp+190h] [rbp-1A8h] BYREF
  PVOID v214; // [rsp+198h] [rbp-1A0h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v215; // [rsp+1A0h] [rbp-198h] BYREF
  int v216; // [rsp+1ACh] [rbp-18Ch]
  PVOID v217; // [rsp+1B0h] [rbp-188h] BYREF
  PVOID v218; // [rsp+1B8h] [rbp-180h] BYREF
  int v219[2]; // [rsp+1C0h] [rbp-178h] BYREF
  PVOID v220; // [rsp+1C8h] [rbp-170h] BYREF
  _DWORD *v221; // [rsp+1D0h] [rbp-168h]
  __int64 v222; // [rsp+1D8h] [rbp-160h]
  void *Src; // [rsp+1E0h] [rbp-158h]
  __int64 v224; // [rsp+1E8h] [rbp-150h] BYREF
  PVOID v225; // [rsp+1F0h] [rbp-148h]
  int v226; // [rsp+1F8h] [rbp-140h] BYREF
  __int64 v227; // [rsp+200h] [rbp-138h]
  int v228; // [rsp+208h] [rbp-130h] BYREF
  __int64 v229; // [rsp+210h] [rbp-128h]
  __int64 v230; // [rsp+218h] [rbp-120h]
  PVOID v231; // [rsp+230h] [rbp-108h] BYREF
  __int64 v232; // [rsp+238h] [rbp-100h]
  volatile void *v233; // [rsp+240h] [rbp-F8h]
  char *v234; // [rsp+248h] [rbp-F0h]
  PACCESS_TOKEN ClientToken; // [rsp+250h] [rbp-E8h]
  volatile void *v236; // [rsp+258h] [rbp-E0h]
  _DWORD *v237; // [rsp+260h] [rbp-D8h]
  __int128 v238; // [rsp+268h] [rbp-D0h] BYREF
  void **v239; // [rsp+278h] [rbp-C0h]
  __int64 v240; // [rsp+280h] [rbp-B8h]
  _OWORD SecurityDescriptor[2]; // [rsp+288h] [rbp-B0h] BYREF
  __int64 v242; // [rsp+2A8h] [rbp-90h]
  __int128 v243; // [rsp+2B0h] [rbp-88h] BYREF
  __int64 v244; // [rsp+2C0h] [rbp-78h]
  int v245; // [rsp+2C8h] [rbp-70h]
  unsigned int v246[2]; // [rsp+2D0h] [rbp-68h] BYREF
  __int64 v247; // [rsp+2D8h] [rbp-60h] BYREF
  int v248; // [rsp+2E0h] [rbp-58h]
  __int128 v249; // [rsp+2E8h] [rbp-50h] BYREF

  v229 = a4;
  v237 = a1;
  v191 = a12;
  v232 = (__int64)a16;
  v18 = a13;
  v212 = a14;
  Address = a15;
  v221 = a1;
  v224 = a2;
  v239 = a3;
  v240 = a4;
  v230 = a5;
  v19 = a6;
  v222 = a6;
  Src = a7;
  v227 = a11;
  v20 = a12;
  v173 = a12;
  LODWORD(v199) = a12;
  v236 = a14;
  v233 = a15;
  v234 = a16;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v171 = 0;
  v183 = 0;
  v193 = 0LL;
  v175 = 0;
  v176 = -1073741823;
  v226 = 0;
  v205 = 0LL;
  v228 = 0;
  v207 = 0LL;
  v196 = 0;
  v198 = 0;
  v189 = 0;
  v217 = 0LL;
  v208 = 0LL;
  v218 = 0LL;
  P = 0LL;
  v213 = 0LL;
  v204 = 0LL;
  v182 = 0;
  v249 = 0LL;
  v214 = 0LL;
  v166 = 0;
  v168 = 0;
  v179[0] = 0;
  v174 = 0;
  v186 = 0;
  v172 = 0;
  v169 = 0;
  v184 = 1;
  v185 = 0;
  v225 = 0LL;
  ClientToken = 0LL;
  v187 = 0;
  v238 = 0LL;
  v219[1] = 0;
  v210 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v242 = 0LL;
  v215 = 0LL;
  v165 = 0;
  v170 = 0;
  v167 = 0;
  v188 = 0;
  v181[0] = 999;
  v243 = 0LL;
  v244 = 0LL;
  v245 = 0;
  v194 = 0;
  v190 = 0;
  v197 = 0;
  v206 = 0LL;
  v202 = 0;
  v195 = 0;
  v192 = 0;
  v177 = 0;
  v178 = 0;
  v220 = 0LL;
  v209 = -1;
  v219[0] = -1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v164 = PreviousMode;
  v179[1] = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( a9 )
  {
    if ( a9 != 1 )
    {
      v25 = -1073741811;
LABEL_223:
      v81 = 0;
      goto LABEL_164;
    }
    v216 = 7;
  }
  else
  {
    v216 = 2;
  }
  if ( a3 )
    goto LABEL_6;
  if ( !SubjectContext.ClientToken )
  {
    v25 = -1073741732;
    goto LABEL_223;
  }
  if ( SubjectContext.ImpersonationLevel < SecurityIdentification )
  {
    v25 = -1073741659;
    goto LABEL_223;
  }
LABEL_6:
  if ( a17 )
  {
    if ( !(_DWORD)v20 || (unsigned int)v20 > 0x1000 )
    {
      v25 = -1073741811;
      v171 = -1073741811;
      v22 = 0x7FFFFFFF0000LL;
      goto LABEL_19;
    }
    v26 = 4 * v20;
    ProbeForWrite(Address, v26, 4u);
    ProbeForWrite(v212, v26, 4u);
    v22 = 0x7FFFFFFF0000LL;
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
  if ( (v18 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v249 = *(_OWORD *)v18;
  v25 = v171;
LABEL_19:
  v27 = v164;
  if ( v25 < 0 )
  {
LABEL_192:
    PreviousMode = v164;
    v81 = v165;
    v34 = (unsigned int *)P;
    goto LABEL_122;
  }
  if ( !a3 )
    goto LABEL_21;
  v104 = *a3;
  v231 = 0LL;
  v105 = ObReferenceObjectByHandle(v104, 8u, (POBJECT_TYPE)SeTokenObjectType, v164, &v231, 0LL);
  v25 = v105;
  v225 = v231;
  if ( v105 < 0 )
  {
    v225 = 0LL;
    v188 = v105 != -1073741816;
    goto LABEL_192;
  }
  ClientToken = SubjectContext.ClientToken;
  SubjectContext.ClientToken = v231;
  v187 = 1;
LABEL_21:
  PrimaryToken = SubjectContext.ClientToken;
  if ( !SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.PrimaryToken;
  v221 = PrimaryToken;
  v246[0] = 1;
  v246[1] = 1;
  v247 = SeAuditPrivilege;
  v248 = 0;
  v29 = SepPrivilegeCheck((__int64)SubjectContext.PrimaryToken, (__int64)&v247, 1u, 1, v164);
  if ( v164 )
  {
    v30 = SubjectContext.PrimaryToken;
    v31 = (_QWORD **)SubjectContext.PrimaryToken;
    v32 = SubjectContext.ClientToken;
    if ( SubjectContext.ClientToken )
      v31 = (_QWORD **)SubjectContext.ClientToken;
    v33 = (void *)*v31[19];
    if ( !RtlEqualSid(SeLocalSystemSid, v33) )
    {
      v84 = SeExports;
      if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v33) && !RtlEqualSid(v84->SeLocalServiceSid, v33)
        || (unsigned __int8)SepFilterPrivilegeAudits(1LL, v246) )
      {
        SepAdtPrivilegedServiceAuditAlarm(&SubjectContext, &SeSubsystemName, 0LL, (__int64)v32, (__int64)v30, v246, v29);
      }
      v19 = v222;
    }
    v27 = v164;
  }
  if ( !v29 )
  {
    if ( (a10 & 1) == 0 )
    {
      v25 = -1073741727;
      PreviousMode = v164;
      v81 = 0;
      goto LABEL_164;
    }
    v186 = 1;
  }
  if ( (a8 & 0xF0000000) != 0 )
  {
    v25 = -1073741594;
    PreviousMode = v164;
    v81 = 0;
    v34 = (unsigned int *)P;
    goto LABEL_122;
  }
  v25 = SeCaptureSecurityDescriptor(v19, v27, 1, 0, &P);
  v171 = v25;
  if ( v25 < 0 )
  {
    v34 = 0LL;
    PreviousMode = v164;
    v81 = 0;
    goto LABEL_122;
  }
  v34 = (unsigned int *)P;
  if ( !P )
    goto LABEL_257;
  v35 = *((_WORD *)P + 1);
  if ( v35 >= 0 )
  {
    v37 = (char *)*((_QWORD *)P + 1);
  }
  else
  {
    v36 = *((unsigned int *)P + 1);
    if ( !(_DWORD)v36 )
      goto LABEL_257;
    v37 = (char *)P + v36;
  }
  if ( !v37 )
    goto LABEL_257;
  if ( v35 < 0 )
  {
    v38 = *((unsigned int *)P + 2);
    if ( (_DWORD)v38 )
    {
      v39 = (char *)P + v38;
      goto LABEL_39;
    }
LABEL_257:
    v25 = -1073741703;
    goto LABEL_258;
  }
  v39 = (char *)*((_QWORD *)P + 2);
LABEL_39:
  if ( !v39 )
    goto LABEL_257;
  if ( (unsigned __int64)v234 < 0x7FFFFFFF0000LL )
    v22 = v232;
  *(_BYTE *)v22 = *(_BYTE *)v22;
  v25 = SepProbeAndCaptureString_U(v237, &v217);
  v171 = v25;
  if ( v25 >= 0 )
  {
    v25 = SepProbeAndCaptureString_U(v229, &v208);
    v171 = v25;
    if ( v25 >= 0 )
    {
      v25 = SepProbeAndCaptureString_U(v230, &v218);
      v171 = v25;
    }
  }
  if ( v25 < 0 )
    goto LABEL_192;
  if ( Src )
  {
    v25 = SeCaptureSid(Src, v27, v40, v41, Object, 1, (PSID *)&v213);
    if ( v25 < 0 )
    {
      v213 = 0LL;
      PreviousMode = v164;
      v81 = 0;
      goto LABEL_164;
    }
  }
  v42 = (unsigned int)v173;
  v25 = SeCaptureObjectTypeList(v227, v173, v27, &v204);
  if ( v25 < 0 )
    goto LABEL_192;
  v34 = (unsigned int *)P;
  v25 = SepTrustLevelCheck(v43, (__int64)P, &SubjectContext, 0LL, 0LL, 1, &v209);
  if ( v25 < 0 )
    goto LABEL_258;
  v44 = a8;
  v171 = SepFilterToDiscretionary(&v209, a8);
  if ( v171 < 0 )
  {
    v177 = 1;
    goto LABEL_58;
  }
  v25 = SepFilterCheck((__int64)v34, &v206, (__int64)PrimaryToken, 1, (__int64)v219);
  if ( v25 < 0 )
    goto LABEL_258;
  v171 = SepFilterToDiscretionary(v219, v44);
  if ( v171 < 0 )
  {
    v178 = 1;
    goto LABEL_58;
  }
  v25 = SepMandatoryIntegrityCheck(&v249, (__int64)v34, 0, (__int64)PrimaryToken, 1, (__int64)&v238);
  if ( v25 < 0 )
  {
LABEL_258:
    PreviousMode = v164;
    v81 = 0;
    goto LABEL_122;
  }
  v45 = SepMandatoryToDiscretionary(&v238, v44);
  v171 = v45;
  if ( (v45 < 0 || (v44 & 0x2000000) != 0) && (PrimaryToken[50] & 0x4000) != 0 )
  {
    v46 = (unsigned __int8)v194;
    if ( HIDWORD(v238) <= 0x2000 )
      v46 = 1;
    v194 = v46;
  }
  else
  {
    LOBYTE(v46) = v194;
  }
  if ( v45 >= 0 || (_BYTE)v46 )
  {
    v171 = SePrivilegePolicyCheck(&a8, &v182, (__int64 *)&SubjectContext, 0LL, (__int64)&v214, v164);
    if ( !a8 )
    {
      v117 = (unsigned __int8)v195;
      if ( v182 )
        v117 = 1;
      v195 = v117;
    }
  }
LABEL_58:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
  if ( SubjectContext.ClientToken )
  {
    v48 = KeGetCurrentThread();
    --v48->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.ClientToken + 6), 1u);
  }
  v25 = v171;
  if ( v171 < 0 && !(_BYTE)v194 )
  {
    v168 = 1;
    v176 = v171;
    if ( a17 )
    {
      v91 = v42;
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      v93 = Pool2;
      v193 = Pool2;
      if ( !Pool2 )
      {
        SeUnlockSubjectContext(&SubjectContext);
        v25 = -1073741670;
        PreviousMode = v164;
        v81 = 0;
        v34 = (unsigned int *)P;
        goto LABEL_122;
      }
      v175 = 1;
      v118 = &Pool2[4 * v42];
      v199 = v118;
      if ( (_DWORD)v42 )
      {
        v119 = (int *)v118;
        do
        {
          *(int *)((char *)v119 + v93 - v118) = v183;
          *v119++ = v176;
          --v91;
        }
        while ( v91 );
      }
      v50 = a8;
      v51 = v182;
    }
    else
    {
      v193 = &v183;
      v199 = (char *)&v176;
      v50 = a8;
      v51 = v182;
    }
    goto LABEL_76;
  }
  IsOwner = SepTokenIsOwner((__int64)PrimaryToken, (__int64)P);
  v167 = IsOwner;
  v34 = (unsigned int *)P;
  if ( !SepRmEnforceCap )
    goto LABEL_62;
  v120 = *((_WORD *)P + 1);
  if ( (v120 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_62;
  if ( v120 >= 0 )
  {
    v126 = (char *)*((_QWORD *)P + 3);
  }
  else
  {
    v121 = *((unsigned int *)P + 3);
    if ( !(_DWORD)v121 )
    {
      v210 = 0LL;
      goto LABEL_302;
    }
    v126 = (char *)P + v121;
    IsOwner = v167;
  }
  v210 = v126;
  if ( !v126 )
  {
LABEL_62:
    v25 = v171;
    goto LABEL_63;
  }
  ScopedPolicySid = (void *)SepGetScopedPolicySid((__int64)v126);
  if ( !ScopedPolicySid )
  {
LABEL_302:
    IsOwner = v167;
    goto LABEL_62;
  }
  Cap = SepRmReferenceFindCap(ScopedPolicySid, &v215, v128);
  v130 = v215;
  if ( Cap < 0 )
    v130 = (struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *)SepRmDefaultCap;
  v215 = v130;
  v25 = 0;
  v171 = 0;
  v165 = 1;
  IsOwner = v167;
LABEL_63:
  v50 = a8;
  if ( (a8 & 0x2060000) != 0
    && IsOwner
    && ((v85 = *((_WORD *)v34 + 1), (v85 & 4) == 0)
      ? (v87 = 0LL)
      : v85 >= 0
      ? (v87 = *((_QWORD *)v34 + 4))
      : (v86 = v34[4], !(_DWORD)v86)
      ? (v87 = 0LL)
      : (v87 = (__int64)v34 + v86),
        !RtlOwnerAcesPresent(v87)) )
  {
    if ( (v50 & 0x2000000) != 0 )
    {
      v88 = 393216;
      v51 = v182 | 0x60000;
    }
    else
    {
      v88 = v50 & 0x60000;
      v51 = v182 | v50 & 0x60000;
    }
    v197 = v88;
    v182 = v51;
    v50 &= 0xFFF9FFFF;
    a8 = v50;
  }
  else
  {
    v51 = v182;
  }
  if ( !v50 && (!v165 || (_BYTE)v195) && ((PrimaryToken[50] & 0x2000) != 0 || !v197) )
  {
    v183 = v51;
    if ( v51 )
    {
      v131 = 0;
      v132 = 0;
      v133 = 1;
    }
    else
    {
      v131 = -1073741790;
      v132 = 1;
      v133 = 0;
    }
    v166 = v133;
    v168 = v132;
    v176 = v131;
    if ( !a17 )
    {
      v193 = &v183;
      v199 = (char *)&v176;
      goto LABEL_77;
    }
    v134 = (unsigned int)v173;
    v135 = (char *)ExAllocatePool2(0x100uLL);
    v136 = v135;
    v193 = v135;
    if ( v135 )
    {
      v175 = 1;
      v137 = &v135[4 * v173];
      v199 = v137;
      if ( v173 )
      {
        v138 = (int *)v137;
        do
        {
          *(int *)((char *)v138 + v136 - v137) = v183;
          *v138++ = v176;
          --v134;
        }
        while ( v134 );
      }
      goto LABEL_77;
    }
LABEL_204:
    v25 = -1073741670;
    SeUnlockSubjectContext(&SubjectContext);
    PreviousMode = v164;
    v81 = v165;
    goto LABEL_122;
  }
  v52 = (unsigned int)v199;
  if ( a17 )
  {
    v113 = (unsigned int *)ExAllocatePool2(0x100uLL);
    v53 = v113;
    v193 = v113;
    if ( !v113 )
      goto LABEL_204;
    v175 = 1;
    v55 = v52;
    v54 = (char *)&v113[v52];
  }
  else
  {
    v53 = &v183;
    v193 = &v183;
    v54 = (char *)&v176;
    v55 = (unsigned int)v199;
  }
  v199 = v54;
  LODWORD(v243) = v197;
  SepAccessCheck(
    (__int64)v34,
    (unsigned __int8 *)v213,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)PrimaryToken,
    v50,
    (__int128 *)v204,
    v173,
    &v249,
    v51,
    v164,
    v53,
    0LL,
    (int *)v54,
    a17,
    v167,
    (__int64)&v243,
    &v206,
    &v166,
    &v168);
  if ( SepRmEnforceCap && *(int *)v199 >= 0 && (v81 = v165) != 0 )
  {
    if ( a17 )
    {
      v89 = (int *)ExAllocatePool2(0x100uLL);
      v90 = v89;
      v205 = v89;
      if ( !v89 )
      {
        SeUnlockSubjectContext(&SubjectContext);
        SeReleaseSubjectContext(&SubjectContext);
        v25 = -1073741670;
        PreviousMode = v164;
LABEL_164:
        v34 = (unsigned int *)P;
        goto LABEL_122;
      }
      v122 = &v89[v55];
    }
    else
    {
      v90 = &v226;
      v205 = &v226;
      v122 = &v228;
    }
    v207 = v122;
    if ( v173 )
    {
      v25 = SepCopyObjectTypeList(v204, v173, (__int64 *)&v220);
      v171 = v25;
      if ( v25 < 0 )
      {
        PreviousMode = v164;
        goto LABEL_164;
      }
      v90 = (int *)v205;
    }
    else
    {
      v25 = v171;
    }
    LOBYTE(v34) = 0;
    v195 = (int)v34;
    v139 = 0;
    v50 = a8;
    v51 = v182;
    v140 = v196;
    while ( 1 )
    {
      v200 = v139;
      if ( v139 >= HIDWORD(v215[2].Linkage.Blink) )
        break;
      v141 = *(&v215[2].Signature + v139);
      v227 = v141;
      if ( !*(_QWORD *)(v141 + 24) )
        goto LABEL_359;
      v142 = v206;
      if ( !v206 )
      {
        LODWORD(v34) = (unsigned __int8)v34;
        if ( (int)AuthzBasepInitializeResourceClaimsFromSacl((__int64)v210, (__int64 *)&v206) < 0 )
          LODWORD(v34) = 1;
        v195 = (int)v34;
        v142 = v206;
      }
      v143 = (_QWORD *)*((_QWORD *)PrimaryToken + 137);
      v144 = v143 ? v143[75] : 0LL;
      v145 = v143 ? v143[73] : 0LL;
      v146 = v143 ? v143[74] : 0LL;
      v147 = v143 ? (void *)v143[72] : 0LL;
      v148 = AuthzBasepEvaluateAceCondition(
               PrimaryToken,
               *((void **)PrimaryToken + 97),
               v142,
               v147,
               v146,
               v145,
               v144,
               *(_DWORD **)(v141 + 24),
               *(_DWORD *)(v141 + 16),
               1,
               0,
               &v202);
      v25 = v148;
      v171 = v148;
      v149 = v202;
      if ( v202 == 1 )
        goto LABEL_359;
      if ( v148 < 0 )
        goto LABEL_192;
      if ( SeTokenIsRestricted(PrimaryToken) )
      {
        v150 = (_QWORD *)*((_QWORD *)PrimaryToken + 137);
        if ( v150 )
          v151 = v150[75];
        else
          v151 = 0LL;
        if ( v150 )
          v152 = v150[73];
        else
          v152 = 0LL;
        if ( v150 )
          v153 = v150[74];
        else
          v153 = 0LL;
        if ( v150 )
          v154 = (void *)v150[72];
        else
          v154 = 0LL;
        v25 = AuthzBasepEvaluateAceCondition(
                PrimaryToken,
                *((void **)PrimaryToken + 97),
                v206,
                v154,
                v153,
                v152,
                v151,
                *(_DWORD **)(v141 + 24),
                *(_DWORD *)(v141 + 16),
                1,
                1,
                &v202);
        v171 = v25;
        if ( v25 < 0 )
          goto LABEL_192;
        v149 = v202;
      }
      if ( (_BYTE)v195 || v149 == 1 )
      {
LABEL_359:
        if ( (*(_DWORD *)(v141 + 48) & 1) != 0 )
        {
          if ( (v50 & 0x2000000) != 0 )
            v155 = v50;
          else
            v155 = v50 | v51;
          v156 = 0;
        }
        else
        {
          v155 = v50;
          v156 = v51;
        }
        v25 = SepBuildCapeSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 **)(v227 + 32), (__int64)v210);
        v171 = v25;
        if ( v25 < 0 )
          goto LABEL_192;
        SepAccessCheck(
          (__int64)SecurityDescriptor,
          (unsigned __int8 *)v213,
          (__int64)SubjectContext.PrimaryToken,
          (__int64)SubjectContext.ClientToken,
          v155,
          (__int128 *)v220,
          v173,
          &v249,
          v156,
          v164,
          v205,
          0LL,
          v207,
          a17,
          v167,
          (__int64)&v243,
          &v206,
          &v184,
          &v185);
        v90 = (int *)v205;
        if ( v170 )
          v140 = *(_DWORD *)v205 & v196;
        else
          v140 = *(_DWORD *)v205;
        v196 = v140;
        if ( v220 )
        {
          SepMergeObjectTypeListAccesses(v204, (__int64)v220, v173);
          v140 = v196;
        }
        v170 = 1;
      }
      else
      {
        v140 = v196;
        v90 = (int *)v205;
      }
      v139 = v200 + 1;
      LOBYTE(v34) = v195;
    }
    v166 = v184;
    v168 = v185;
    *v90 &= v140;
    if ( !v140 )
    {
      *v207 = -1073741790;
      v166 = 0;
      v168 = 1;
    }
  }
  else
  {
    v50 = a8;
    v25 = v171;
    v51 = v182;
  }
  if ( (v50 & 0x2000000) != 0 )
  {
    if ( !(_BYTE)v194 || !*(_WORD *)((char *)&v244 + 5) && !SeIsPermissiveLearningModeEnabled((__int64)PrimaryToken) )
    {
      v57 = v191;
      v114 = v191;
      if ( !a17 )
        v114 = 0;
      SepConstrainByMandatory((__int64)&v238, v50, (char *)v193, v199, 0LL, v114);
      v56 = a17;
      goto LABEL_74;
    }
    goto LABEL_72;
  }
  if ( !(_BYTE)v194 || *(_WORD *)((char *)&v244 + 5) )
  {
LABEL_72:
    v56 = a17;
LABEL_73:
    v57 = v191;
LABEL_74:
    v58 = (char *)v193;
    goto LABEL_75;
  }
  if ( SeIsPermissiveLearningModeEnabled((__int64)PrimaryToken) && !HIDWORD(v243) )
  {
    HIBYTE(v244) = 1;
    v166 = 1;
    v168 = 0;
    v183 = v50;
    v176 = 0;
    goto LABEL_72;
  }
  v166 = 0;
  v168 = 1;
  v157 = 0;
  v183 = 0;
  v176 = v123;
  v56 = a17;
  if ( !a17 || !v124 )
    goto LABEL_73;
  v158 = v199;
  v58 = (char *)v193;
  v159 = (_BYTE *)v193 - v199;
  while ( 1 )
  {
    *(_DWORD *)&v158[v159] = v157;
    *(_DWORD *)v158 = v176;
    v158 += 4;
    if ( !--v52 )
      break;
    v157 = v183;
  }
  v56 = a17;
  v57 = v191;
LABEL_75:
  if ( (v50 & 0x2000000) != 0 )
  {
    if ( !v56 )
      v57 = 0;
    SepConstrainByConstraintMask(v209, v50, v58, v199, 0LL, v57, &v177);
    SepConstrainByConstraintMask(v219[0], v50, (char *)v193, v199, 0LL, v57, &v178);
  }
LABEL_76:
  v34 = (unsigned int *)P;
LABEL_77:
  if ( !PrimaryToken )
    goto LABEL_84;
  if ( v178 || v177 )
    goto LABEL_202;
  if ( !HIDWORD(v243) && (PrimaryToken[50] & 0x4000) != 0 )
  {
    if ( v25 < 0 )
      goto LABEL_84;
    if ( v176 < 0 || HIBYTE(v244) )
    {
LABEL_202:
      v108 = KeGetCurrentThread();
      --v108->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)PrimaryToken + 6), 1u);
      v109 = v176 >= 0;
      v110 = a8 | v182;
      v112 = SepLocateTokenTrustLevel(&SubjectContext, v111);
      SeLogAccessFailure((const void ***)PrimaryToken, 0LL, 0LL, v112, (__int64)P, v110, v109);
      ExReleaseResourceLite(*((PERESOURCE *)PrimaryToken + 6));
      KeLeaveCriticalRegionThread();
      v50 = a8;
      v25 = v171;
      v34 = (unsigned int *)P;
      v51 = v182;
    }
  }
  if ( v25 >= 0
    && v176 < 0
    && !HIDWORD(v243)
    && (PrimaryToken[50] & 0x4000) != 0
    && SepLpacCausedAccessFailure((__int64)&v243, v50) )
  {
    SepLogLpacAccessFailure();
  }
LABEL_84:
  if ( v186 )
  {
LABEL_96:
    v65 = v198;
    goto LABEL_97;
  }
  v59 = v216;
  if ( v216 != 2 )
  {
    if ( v166 )
    {
      v181[0] = 152;
      v172 = SepAdtAuditThisEventWithContext(152LL, v166, 0, &SubjectContext);
    }
    if ( v168 )
    {
      v181[0] = 152;
      v60 = SepAdtAuditThisEventWithContext(152LL, 0, v168, &SubjectContext);
      v169 = v60;
      goto LABEL_90;
    }
    goto LABEL_189;
  }
  if ( v166 )
    v172 = SepAdtAuditObjectAccessWithContext(0LL, (unsigned __int16 *)v208, v166, 0, &SubjectContext, 0, v181);
  if ( !v168 )
  {
LABEL_189:
    v60 = v169;
    goto LABEL_90;
  }
  v60 = SepAdtAuditObjectAccessWithContext(0LL, (unsigned __int16 *)v208, 0, v168, &SubjectContext, 0, v181);
  v169 = v60;
LABEL_90:
  v61 = v172;
  if ( v172 || v60 )
  {
    v94 = (int)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      v94 = (int)SubjectContext.ClientToken;
    v95 = *((_WORD *)v34 + 1);
    if ( (v95 & 0x10) != 0 )
    {
      if ( v95 >= 0 )
      {
        v96 = *((_QWORD *)v34 + 3);
      }
      else
      {
        v107 = v34[3];
        if ( v107 )
          LODWORD(v96) = (_DWORD)v34 + v107;
        else
          LODWORD(v96) = 0;
      }
    }
    else
    {
      LODWORD(v96) = 0;
    }
    if ( (v95 & 0x10) != 0 )
    {
      if ( v95 >= 0 )
      {
        v97 = *((_QWORD *)v34 + 3);
      }
      else
      {
        v106 = v34[3];
        if ( v106 )
          LODWORD(v97) = (_DWORD)v34 + v106;
        else
          LODWORD(v97) = 0;
      }
    }
    else
    {
      LODWORD(v97) = 0;
    }
    v98 = v50 | v51;
    v99 = v199;
    v62 = a17;
    SepExamineSaclEx(
      v97,
      v96,
      v94,
      v98,
      v204,
      v173,
      a17,
      (__int64)v199,
      (__int64)v193,
      v213,
      v167,
      (__int64)v179,
      (__int64)&v174);
    v100 = (int)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      v100 = (int)SubjectContext.ClientToken;
    v101 = *((_WORD *)v34 + 1);
    if ( (v101 & 0x10) != 0 )
    {
      if ( v101 >= 0 )
      {
        v102 = *((_QWORD *)v34 + 3);
      }
      else
      {
        v103 = v34[3];
        if ( v103 )
          LODWORD(v102) = (_DWORD)v34 + v103;
        else
          LODWORD(v102) = 0;
      }
    }
    else
    {
      LODWORD(v102) = 0;
    }
    v64 = (unsigned int *)v193;
    v163 = (__int64)v99;
    v63 = v173;
    SepExamineGlobalSaclEx(
      (__int64)v208,
      v102,
      v100,
      v98,
      v204,
      v173,
      v62,
      v163,
      (__int64)v193,
      v213,
      v167,
      (__int64)v179,
      &v174);
    v60 = v169;
    v61 = v172;
  }
  else
  {
    v62 = a17;
    v63 = v173;
    v64 = (unsigned int *)v193;
  }
  if ( !v179[0] && !v174 )
  {
    if ( v214 && v166 )
    {
      SepAdtPrivilegeObjectAuditAlarm(
        (const int *)v217,
        (unsigned __int16 *)v208,
        (unsigned __int16 *)v218,
        (__int64)&v224,
        (__int64)SubjectContext.ClientToken,
        (__int64)SubjectContext.PrimaryToken,
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        a8,
        (unsigned int *)v214,
        v166);
      v65 = 0;
      goto LABEL_97;
    }
    goto LABEL_96;
  }
  v65 = v198;
  if ( v166 )
    v65 = 1;
  if ( v179[0] && v61 )
  {
    v160 = 0LL;
    if ( v62 )
      v160 = v64;
    v161 = (unsigned __int64 *)&v224;
    if ( !v166 )
      v161 = 0LL;
    SepAdtOpenObjectAuditAlarm(
      v181[0],
      (const int *)v217,
      v161,
      (unsigned __int16 *)v208,
      (unsigned __int16 *)v218,
      (__int16 *)P,
      SubjectContext.ClientToken,
      (_QWORD *)SubjectContext.PrimaryToken,
      *v64,
      *v64,
      (int *)v214,
      1u,
      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
      v59,
      v204,
      v63,
      v160,
      0LL,
      0LL);
    v60 = v169;
  }
  if ( v174 && v60 )
  {
    v115 = 0LL;
    if ( v62 )
      v115 = v64;
    v116 = (unsigned __int64 *)&v224;
    if ( !v166 )
      v116 = 0LL;
    v66 = v173;
    SepAdtOpenObjectAuditAlarm(
      v181[0],
      (const int *)v217,
      v116,
      (unsigned __int16 *)v208,
      (unsigned __int16 *)v218,
      (__int16 *)P,
      SubjectContext.ClientToken,
      (_QWORD *)SubjectContext.PrimaryToken,
      a8,
      a8,
      (int *)v214,
      0,
      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
      v59,
      v204,
      v173,
      v115,
      0LL,
      0LL);
    goto LABEL_98;
  }
LABEL_97:
  v66 = v173;
LABEL_98:
  ExReleaseResourceLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6));
  KeLeaveCriticalRegionThread();
  if ( SubjectContext.ClientToken )
  {
    ExReleaseResourceLite(*((PERESOURCE *)SubjectContext.ClientToken + 6));
    KeLeaveCriticalRegionThread();
  }
  if ( a17 )
  {
    v75 = v199;
    v74 = 0;
    v76 = v170;
    v203 = 0;
    if ( v199 )
    {
      v77 = v212;
      v78 = Address;
      v79 = v205;
      while ( v74 < v66 )
      {
        v80 = 4LL * v74;
        v78[(unsigned __int64)v80 / 4] = *(_DWORD *)&v75[v80];
        v77[(unsigned __int64)v80 / 4] = *(_DWORD *)((char *)v193 + v80);
        if ( SepRmEnforceCap && v76 && *(int *)&v75[v80] >= 0 )
        {
          v78[v74] = v207[v74];
          v77[v74] &= v79[v74];
        }
        v203 = ++v74;
      }
    }
    else
    {
      v69 = v176;
      v70 = (char *)v212;
      v71 = (char *)Address;
      while ( v74 < v66 )
      {
        v72 = (int *)&v71[4 * v74];
        *v72 = v69;
        v73 = (unsigned int *)&v70[4 * v74];
        *v73 = v183;
        if ( SepRmEnforceCap && v76 )
        {
          v69 = v176;
          if ( v176 >= 0 )
          {
            *v72 = v176;
            *v73 &= v183;
          }
        }
        else
        {
          v69 = v176;
        }
        v203 = ++v74;
      }
    }
  }
  else
  {
    v67 = Address;
    *(_DWORD *)Address = v176;
    v68 = v212;
    *(_DWORD *)v212 = v183;
    if ( SepRmEnforceCap && v170 && v176 >= 0 )
    {
      *v67 = *v207;
      *v68 &= *(_DWORD *)v205;
    }
  }
  *v234 = v65;
  v25 = 0;
  v171 = 0;
  v34 = (unsigned int *)P;
  PreviousMode = v164;
  v81 = v165;
LABEL_122:
  if ( v187 )
  {
    ObfDereferenceObject(v225);
    SubjectContext.ClientToken = ClientToken;
  }
  if ( v214 )
    ExFreePoolWithTag(v214, 0);
  SeReleaseSubjectContext(&SubjectContext);
  if ( PreviousMode == 1 && v34 )
    ExFreePoolWithTag(v34, 0);
  if ( v217 )
    ExFreePoolWithTag(v217, 0);
  if ( v208 )
    ExFreePoolWithTag(v208, 0);
  if ( v218 )
    ExFreePoolWithTag(v218, 0);
  if ( v213 )
  {
    LOBYTE(v82) = 1;
    SeReleaseSid(v213, PreviousMode, v82);
  }
  if ( v204 )
    SeFreeCapturedObjectTypeList((void *)v204);
  if ( v175 )
  {
    if ( v193 )
      ExFreePoolWithTag(v193, 0);
    if ( v205 )
      ExFreePoolWithTag(v205, 0);
  }
  if ( v81 )
  {
    Blink = v215[1].Linkage.Blink;
    if ( Blink )
      SepRmDereferenceCapTable((volatile signed __int64 *)Blink);
  }
  if ( v220 )
    ExFreePoolWithTag(v220, 0);
  SepFreeResourceInfo((char *)v206);
  if ( v25 == -1073741670 || v188 )
    SepAuditFailed(v25);
  return (unsigned int)v25;
}
