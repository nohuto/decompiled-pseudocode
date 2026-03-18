/*
 * XREFs of NtQueryInformationJobObject @ 0x140ACCBF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     PspGetJobSilo @ 0x14040EFB0 (PspGetJobSilo.c)
 *     PsIsHostSilo @ 0x14043E2E0 (PsIsHostSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404566C0 (PsGetServerSiloServiceSessionId.c)
 *     KeIsSingleGroupAffinityEx @ 0x14046F090 (KeIsSingleGroupAffinityEx.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 *     MmQueryApiSetSchema @ 0x1404B62CC (MmQueryApiSetSchema.c)
 *     PsGetJobServerSilo @ 0x1404B7940 (PsGetJobServerSilo.c)
 *     PspIsSiloInServerSilo @ 0x1405E4DD4 (PspIsSiloInServerSilo.c)
 *     Feature_Servicing_MSRC100723__private_IsEnabledDeviceUsageNoInline @ 0x1405E5778 (Feature_Servicing_MSRC100723__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlCopyToUser @ 0x1406FC3C8 (RtlCopyToUser.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1407779F0 (PspQueryJobHierarchyInterferenceCount.c)
 *     ObGetSiloRootDirectoryPath @ 0x14082AF14 (ObGetSiloRootDirectoryPath.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14085CCAC (PspAllocateAndQueryNotificationChannel.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     PspLockJobExclusive @ 0x1408EB430 (PspLockJobExclusive.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1408EB554 (PspQueryJobHierarchyProcessIdList.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1408EB654 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspQueryRateControlHistory @ 0x1408EC2DC (PspQueryRateControlHistory.c)
 *     PspUnlockJob @ 0x1408ED360 (PspUnlockJob.c)
 *     PspLockJobMemoryLimitsShared @ 0x1408ED4D8 (PspLockJobMemoryLimitsShared.c)
 *     PspRateControlLimitFlag @ 0x1408ED540 (PspRateControlLimitFlag.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1408ED564 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobShared @ 0x1408ED5D4 (PspLockJobShared.c)
 *     PspUnlockJobListShared @ 0x1409F7488 (PspUnlockJobListShared.c)
 *     PspLockJobListShared @ 0x1409FBF04 (PspLockJobListShared.c)
 *     PspGetJobLimitInformationValidFlags @ 0x140A37330 (PspGetJobLimitInformationValidFlags.c)
 *     PspQueryJobIoAttribution @ 0x140A4DD18 (PspQueryJobIoAttribution.c)
 *     EtwTraceJobSetQuery @ 0x140A56390 (EtwTraceJobSetQuery.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x140A59264 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PsGetParentSilo @ 0x140A59700 (PsGetParentSilo.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x140A5AF90 (PspNotificationLimitRateControlToleranceField.c)
 *     PspLimitViolationRateControlToleranceLimitField @ 0x140A6633C (PspLimitViolationRateControlToleranceLimitField.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQueryInformationJobObject(ULONG_PTR a1, int a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  int v6; // edi
  __int64 v7; // r14
  unsigned int v8; // r12d
  int v9; // r13d
  bool v10; // zf
  struct _KTHREAD *CurrentThread; // rcx
  char PreviousMode; // al
  unsigned int v13; // eax
  __int64 result; // rax
  __int64 v15; // rdx
  char *v16; // rdi
  char *v17; // r15
  signed int JobIoAttribution; // ebx
  void *v19; // r14
  unsigned int *v20; // r13
  unsigned int v21; // r14d
  int v22; // r12d
  unsigned __int16 v23; // r9
  _QWORD *v24; // rcx
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // dx
  unsigned __int16 v27; // r8
  int NotificationChannel; // eax
  int v29; // ecx
  __int64 v30; // rax
  int v31; // r9d
  unsigned int v32; // edx
  int v33; // ecx
  int v34; // edx
  int v35; // eax
  unsigned int v36; // ebx
  __int64 v37; // rax
  unsigned __int16 *v38; // rcx
  struct _KAFFINITY_EX *v39; // rdx
  _OWORD *v40; // rcx
  unsigned __int16 *v41; // rdx
  int v42; // r14d
  _BYTE *v43; // rdx
  char *v44; // r8
  unsigned __int16 v45; // cx
  unsigned __int16 v46; // ax
  int v47; // r14d
  int v48; // r14d
  int v49; // r14d
  int v50; // r14d
  __int64 v51; // rcx
  int v52; // edx
  int *v53; // rcx
  int k; // edx
  _DWORD *v55; // rax
  __int64 v56; // r8
  int v57; // edx
  _DWORD *v58; // rax
  _DWORD *v59; // r8
  int v60; // edx
  __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 JobSilo; // rax
  size_t v64; // r13
  __int64 ParentSilo; // rbx
  _DWORD *v66; // rax
  _QWORD *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  int i; // edx
  _DWORD *v74; // rax
  int v75; // edx
  int *v76; // r8
  _BYTE *v77; // r9
  int v78; // ecx
  int j; // edx
  int v80; // edx
  int v81; // r15d
  char *v82; // rbx
  int v83; // eax
  _DWORD *v84; // rdx
  __int64 v85; // r8
  int v86; // edx
  char *v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rbx
  __int64 v90; // rax
  const void **v91; // rax
  size_t v92; // r8
  int v93; // r14d
  int v94; // r14d
  int v95; // r14d
  int v96; // r14d
  int v97; // r14d
  int v98; // r14d
  int v99; // r14d
  int v100; // r14d
  char *ServerSiloGlobals; // rax
  unsigned int v102; // ecx
  _WORD *v103; // rdx
  unsigned __int8 *v104; // r8
  unsigned int v105; // ecx
  int v106; // eax
  unsigned int v107; // ecx
  int v108; // eax
  __int64 v109; // rcx
  char v110; // al
  bool v111; // [rsp+40h] [rbp-A78h]
  int v113; // [rsp+58h] [rbp-A60h] BYREF
  char v114; // [rsp+5Ch] [rbp-A5Ch]
  char v115; // [rsp+5Dh] [rbp-A5Bh] BYREF
  bool v116; // [rsp+5Eh] [rbp-A5Ah] BYREF
  bool v117; // [rsp+5Fh] [rbp-A59h] BYREF
  struct _KTHREAD *v118; // [rsp+60h] [rbp-A58h]
  unsigned __int16 v119[2]; // [rsp+68h] [rbp-A50h] BYREF
  size_t v120; // [rsp+6Ch] [rbp-A4Ch] BYREF
  PVOID Object; // [rsp+78h] [rbp-A40h] BYREF
  __int64 v122; // [rsp+80h] [rbp-A38h] BYREF
  int v123; // [rsp+88h] [rbp-A30h] BYREF
  _DWORD Size[3]; // [rsp+8Ch] [rbp-A2Ch] BYREF
  void *v125; // [rsp+98h] [rbp-A20h]
  ULONG_PTR BugCheckParameter1; // [rsp+A0h] [rbp-A18h]
  __int64 v127; // [rsp+A8h] [rbp-A10h] BYREF
  int v128; // [rsp+B0h] [rbp-A08h] BYREF
  int v129; // [rsp+B4h] [rbp-A04h] BYREF
  int v130; // [rsp+B8h] [rbp-A00h] BYREF
  int v131; // [rsp+BCh] [rbp-9FCh] BYREF
  unsigned __int64 v132; // [rsp+C0h] [rbp-9F8h] BYREF
  unsigned __int64 v133; // [rsp+C8h] [rbp-9F0h] BYREF
  int v134; // [rsp+D0h] [rbp-9E8h] BYREF
  __int64 v135; // [rsp+D8h] [rbp-9E0h] BYREF
  PVOID P[2]; // [rsp+E0h] [rbp-9D8h] BYREF
  __int64 v137; // [rsp+F0h] [rbp-9C8h] BYREF
  __int64 v138; // [rsp+F8h] [rbp-9C0h] BYREF
  __int64 v139; // [rsp+100h] [rbp-9B8h] BYREF
  __int128 v140; // [rsp+108h] [rbp-9B0h] BYREF
  __int128 v141; // [rsp+118h] [rbp-9A0h]
  __int64 v142; // [rsp+128h] [rbp-990h]
  __int128 v143; // [rsp+130h] [rbp-988h]
  __int128 v144; // [rsp+140h] [rbp-978h]
  __int64 v145; // [rsp+150h] [rbp-968h]
  __int64 v146; // [rsp+160h] [rbp-958h] BYREF
  __int64 v147; // [rsp+168h] [rbp-950h]
  __int64 v148; // [rsp+170h] [rbp-948h]
  __int64 v149; // [rsp+178h] [rbp-940h]
  __int64 v150; // [rsp+180h] [rbp-938h]
  __int64 v151; // [rsp+188h] [rbp-930h]
  __int64 v152; // [rsp+190h] [rbp-928h]
  __int64 v153; // [rsp+198h] [rbp-920h]
  __int64 v154; // [rsp+1A0h] [rbp-918h]
  int v155; // [rsp+1A8h] [rbp-910h] BYREF
  int v156; // [rsp+1ACh] [rbp-90Ch]
  __int64 v157; // [rsp+1B0h] [rbp-908h]
  char v158; // [rsp+1B8h] [rbp-900h] BYREF
  char v159; // [rsp+1C0h] [rbp-8F8h] BYREF
  __int128 v160; // [rsp+1D0h] [rbp-8E8h] BYREF
  __int128 v161; // [rsp+1E0h] [rbp-8D8h] BYREF
  __int128 v162; // [rsp+1F0h] [rbp-8C8h] BYREF
  __int128 v163; // [rsp+200h] [rbp-8B8h] BYREF
  _BYTE v164[24]; // [rsp+210h] [rbp-8A8h]
  int v165; // [rsp+228h] [rbp-890h]
  __int64 v166; // [rsp+230h] [rbp-888h]
  __int128 v167; // [rsp+250h] [rbp-868h] BYREF
  __int128 v168; // [rsp+260h] [rbp-858h] BYREF
  __int128 v169; // [rsp+270h] [rbp-848h]
  __int128 v170; // [rsp+280h] [rbp-838h]
  __int128 v171; // [rsp+290h] [rbp-828h] BYREF
  __int128 v172; // [rsp+2A0h] [rbp-818h]
  __int128 v173; // [rsp+2B0h] [rbp-808h]
  __int64 v174; // [rsp+2C0h] [rbp-7F8h]
  _BYTE v175[40]; // [rsp+2C8h] [rbp-7F0h] BYREF
  __int128 v176; // [rsp+2F0h] [rbp-7C8h] BYREF
  __int128 v177; // [rsp+300h] [rbp-7B8h]
  int v178; // [rsp+310h] [rbp-7A8h]
  __int128 v179; // [rsp+318h] [rbp-7A0h] BYREF
  _QWORD v180[9]; // [rsp+330h] [rbp-788h] BYREF
  int v181; // [rsp+378h] [rbp-740h]
  int v182; // [rsp+37Ch] [rbp-73Ch]
  _QWORD v183[10]; // [rsp+380h] [rbp-738h] BYREF
  int v184; // [rsp+3D0h] [rbp-6E8h]
  int v185; // [rsp+3D4h] [rbp-6E4h]
  _OWORD v186[3]; // [rsp+3E0h] [rbp-6D8h] BYREF
  int v187; // [rsp+410h] [rbp-6A8h]
  _QWORD v188[2]; // [rsp+420h] [rbp-698h] BYREF
  int v189; // [rsp+430h] [rbp-688h]
  __int64 v190; // [rsp+438h] [rbp-680h]
  __int64 v191; // [rsp+440h] [rbp-678h]
  int v192; // [rsp+448h] [rbp-670h]
  __int64 v193; // [rsp+450h] [rbp-668h]
  int v194; // [rsp+458h] [rbp-660h]
  int v195; // [rsp+45Ch] [rbp-65Ch]
  __int64 v196; // [rsp+490h] [rbp-628h]
  __int64 v197; // [rsp+498h] [rbp-620h]
  __int64 v198; // [rsp+4A0h] [rbp-618h]
  __int64 v199; // [rsp+4A8h] [rbp-610h]
  __int64 v200; // [rsp+4B0h] [rbp-608h]
  _BYTE v201[4]; // [rsp+4C0h] [rbp-5F8h] BYREF
  int v202; // [rsp+4C4h] [rbp-5F4h]
  _OWORD v203[4]; // [rsp+510h] [rbp-5A8h] BYREF
  _QWORD v204[56]; // [rsp+550h] [rbp-568h] BYREF
  __int128 v205; // [rsp+710h] [rbp-3A8h]
  unsigned __int16 v206; // [rsp+720h] [rbp-398h] BYREF
  char v207; // [rsp+728h] [rbp-390h] BYREF
  _BYTE v208[512]; // [rsp+830h] [rbp-288h] BYREF
  _WORD Src[32]; // [rsp+A30h] [rbp-88h] BYREF

  v120 = a4;
  v6 = a3;
  v7 = a2;
  BugCheckParameter1 = a1;
  v127 = a3;
  v122 = (__int64)a5;
  memset_0(v204, 0, 0x1D0uLL);
  v167 = 0LL;
  memset_0(&v206, 0, 0x108uLL);
  v116 = 0;
  v133 = 0LL;
  v132 = 0LL;
  v128 = 0;
  v139 = 0LL;
  v130 = 0;
  v176 = 0LL;
  v177 = 0LL;
  v178 = 0;
  v179 = 0LL;
  v135 = 0LL;
  v129 = 0;
  v138 = 0LL;
  memset_0(v188, 0, 0x98uLL);
  v161 = 0LL;
  v119[0] = 0;
  v123 = 0;
  v202 = 0;
  memset_0(v201, 0, 0x44uLL);
  Object = 0LL;
  v134 = 0;
  memset_0(&v146, 0, 0x68uLL);
  memset_0(v180, 0, 0x50uLL);
  memset_0(v183, 0, 0x58uLL);
  memset(v175, 0, sizeof(v175));
  v160 = 0LL;
  memset_0(&v163, 0, 0x48uLL);
  v168 = 0LL;
  v169 = 0LL;
  v170 = 0LL;
  v171 = 0LL;
  v172 = 0LL;
  v173 = 0LL;
  v174 = 0LL;
  v131 = 0;
  *(_OWORD *)P = 0LL;
  v143 = 0LL;
  v144 = 0LL;
  LODWORD(v145) = 0;
  v137 = 0LL;
  memset_0(v203, 0, sizeof(v203));
  v162 = 0LL;
  v140 = 0LL;
  v141 = 0LL;
  v142 = 0LL;
  memset(v186, 0, sizeof(v186));
  v187 = 0;
  *(_QWORD *)&Size[1] = 0LL;
  v115 = 0;
  v117 = 0;
  if ( (unsigned int)(v7 - 1) > 0x32 )
    return 3221225475LL;
  switch ( (_DWORD)v7 )
  {
    case 9:
      if ( a4 != 144 && a4 != 152 )
        return 3221225476LL;
      goto LABEL_27;
    case 0xC:
      v13 = a4 - 48;
      goto LABEL_41;
    case 0xD:
      v13 = a4 - 80;
LABEL_41:
      v10 = (v13 & 0xFFFFFFF7) == 0;
LABEL_26:
      if ( !v10 )
        return 3221225476LL;
      goto LABEL_27;
    case 0x13:
      if ( a4 == 432 || a4 == 448 )
        goto LABEL_27;
      v10 = a4 == 464;
      goto LABEL_26;
    case 0x14:
      if ( a4 == 40 )
        goto LABEL_27;
      v10 = a4 == 64;
      goto LABEL_26;
    case 0x1C:
      if ( a4 == 16 )
        goto LABEL_27;
      v10 = a4 == 40;
      goto LABEL_26;
    case 0x1E:
      if ( a4 == 16 )
        goto LABEL_27;
      v10 = a4 == 36;
      goto LABEL_26;
    case 0x2B:
      if ( a4 == 1 )
      {
        v9 = 1;
        v8 = 1;
        v113 = 1;
        goto LABEL_29;
      }
      return 3221225476LL;
  }
  v8 = dword_140B3E7CC[v7];
  v113 = v8;
  if ( a4 != v8 )
  {
    if ( (_DWORD)v7 != 3
      && (_DWORD)v7 != 5
      && (_DWORD)v7 != 11
      && (_DWORD)v7 != 14
      && (_DWORD)v7 != 31
      && (_DWORD)v7 != 37 )
    {
      if ( (_DWORD)v7 == 38 && a4 == 32 )
      {
        v8 = 32;
        v113 = 32;
        goto LABEL_28;
      }
      return 3221225476LL;
    }
    if ( a4 < v8 )
      return 3221225476LL;
LABEL_27:
    v113 = a4;
    v8 = a4;
  }
LABEL_28:
  v9 = 1;
LABEL_29:
  Size[0] = v8;
  CurrentThread = KeGetCurrentThread();
  v118 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v114 = PreviousMode;
  if ( PreviousMode )
  {
    if ( a4 )
    {
      if ( ((dword_140B3E6FC[v7] - 1) & v6) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = 0x7FFFFFFF0000LL;
      CurrentThread = v118;
    }
    else
    {
      v15 = 0x7FFFFFFF0000LL;
    }
    if ( a5 )
    {
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a5;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
    PreviousMode = v114;
  }
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               4,
               (__int64)PsJobType,
               PreviousMode,
               0x79517350u,
               &Object,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    v16 = (char *)Object;
    goto LABEL_57;
  }
  v16 = (char *)CurrentThread->ApcState.Process[1].Padding[3];
  Object = v16;
  if ( v16 )
  {
    ObfReferenceObjectWithTag(v16, 0x79517350u);
LABEL_57:
    CurrentThread = v118;
    goto LABEL_60;
  }
  if ( (((_DWORD)v7 - 31) & 0xFFFFFFF7) != 0 )
    return 3221225506LL;
LABEL_60:
  HIDWORD(v120) = v8;
  v111 = 0;
  v17 = 0LL;
  JobIoAttribution = 0;
  if ( (int)v7 > 26 )
  {
    if ( (int)v7 > 39 )
    {
      v93 = v7 - 42;
      if ( !v93 )
      {
        memset_0(v201, 0, 0x48uLL);
        PspLockJobShared((__int64)v16, (__int64)v118);
        JobIoAttribution = PspQueryJobIoAttribution((__int64)v16, (__int64)v201);
        PspUnlockJob((__int64)v16, (__int64)v118);
        v17 = v201;
        goto LABEL_283;
      }
      v94 = v93 - 1;
      if ( !v94 )
      {
        JobIoAttribution = 0;
        v109 = *((_QWORD *)v16 + 224);
        if ( v109 )
        {
          v110 = v115;
          if ( v109 != -1 )
            v110 = 1;
          v115 = v110;
        }
        v17 = &v115;
        goto LABEL_283;
      }
      v95 = v94 - 1;
      if ( !v95 )
      {
        v179 = *((_OWORD *)v16 + 93);
        v17 = (char *)&v179;
        goto LABEL_73;
      }
      v96 = v95 - 2;
      if ( !v96 )
      {
        PspLockJobShared((__int64)v16, (__int64)CurrentThread);
        v138 = *((_QWORD *)v16 + 226);
        PspUnlockJob((__int64)v16, (__int64)v118);
        v17 = (char *)&v138;
        goto LABEL_73;
      }
      v97 = v96 - 1;
      if ( !v97 )
      {
        v117 = (*((_DWORD *)v16 + 389) & 2) != 0;
        v17 = (char *)&v117;
        goto LABEL_73;
      }
      v98 = v97 - 1;
      if ( !v98 )
      {
        PspLockJobShared((__int64)v16, (__int64)CurrentThread);
        v107 = *((_DWORD *)v16 + 272);
        v108 = v133;
        if ( v107 < 5 )
          v108 = 1;
        v133 = __PAIR64__(v107, v108);
        PspUnlockJob((__int64)v16, (__int64)v118);
        v17 = (char *)&v133;
        goto LABEL_73;
      }
      v99 = v98 - 1;
      if ( !v99 )
      {
        PspLockJobShared((__int64)v16, (__int64)CurrentThread);
        v105 = *((_DWORD *)v16 + 274);
        v106 = v132;
        if ( v105 < 8 )
          v106 = 1;
        v132 = __PAIR64__(v105, v106);
        PspUnlockJob((__int64)v16, (__int64)v118);
        v17 = (char *)&v132;
        goto LABEL_73;
      }
      v100 = v99 - 1;
      if ( v100 )
      {
        if ( v100 != 1 )
          goto LABEL_260;
        PspQueryJobHierarchyAccountingInformation(v16, (__int64)v204);
        v167 = v205;
        v17 = (char *)&v167;
        goto LABEL_73;
      }
      PsGetJobServerSilo((__int64)v16, (__int64 *)&Size[1]);
      if ( !PsIsHostSilo(*(__int64 *)&Size[1]) )
      {
        ServerSiloGlobals = (char *)PsGetServerSiloGlobals(*(__int64 *)&Size[1]);
        if ( *((_DWORD *)ServerSiloGlobals + 335) )
        {
          v186[0] = *(_OWORD *)(ServerSiloGlobals + 1368);
          LODWORD(v186[1]) = *((_DWORD *)ServerSiloGlobals + 336);
          v102 = 0;
          v103 = (_WORD *)&v186[1] + 2;
          v104 = (unsigned __int8 *)(ServerSiloGlobals + 1348);
          do
          {
            *v103 = *v104;
            ++v102;
            ++v104;
            ++v103;
          }
          while ( v102 < 0xF );
          JobIoAttribution = 0;
          v17 = (char *)v186;
        }
        else
        {
          JobIoAttribution = -2147483614;
        }
        goto LABEL_283;
      }
    }
    else
    {
      if ( (_DWORD)v7 == 39 )
      {
        if ( v16 )
        {
          PsGetJobServerSilo((__int64)v16, (__int64 *)&Size[1]);
          v90 = *(_QWORD *)&Size[1];
        }
        else
        {
          v90 = PdcCreateWatchdogAroundClientCall();
        }
        v91 = (const void **)PsGetServerSiloGlobals(v90);
        v19 = (void *)a3;
        memmove((void *)a3, v91[161], v92);
        v111 = 1;
        v20 = a5;
        goto LABEL_285;
      }
      if ( (int)v7 <= 33 )
      {
        if ( (_DWORD)v7 != 33 )
        {
          v47 = v7 - 28;
          if ( v47 )
          {
            v48 = v47 - 1;
            if ( !v48 )
            {
              v137 = *((_QWORD *)v16 + 196);
              v17 = (char *)&v137;
              JobIoAttribution = 0;
              v16 = (char *)Object;
              goto LABEL_283;
            }
            v49 = v48 - 1;
            if ( v49 )
            {
              v50 = v49 - 1;
              if ( !v50 )
              {
                JobIoAttribution = -1073741822;
                goto LABEL_283;
              }
              if ( v50 != 1 )
                goto LABEL_260;
              PspLockJobShared((__int64)v16, (__int64)CurrentThread);
              v51 = *((_QWORD *)v16 + 193);
              if ( v51 )
              {
                DWORD2(v160) = 1;
                v52 = *(_DWORD *)(v51 + 48);
                if ( (v52 & 1) != 0 )
                {
                  v9 = 3;
                  DWORD2(v160) = 3;
                  *(_QWORD *)&v160 = *(_QWORD *)(v51 + 40);
                }
                if ( (v52 & 2) != 0 )
                {
                  DWORD2(v160) = v9 | 4;
                  BYTE12(v160) = *(_BYTE *)(v51 + 64);
                }
              }
              PspUnlockJob((__int64)v16, (__int64)v118);
              v17 = (char *)&v160;
            }
            else
            {
              v176 = *((_OWORD *)v16 + 92);
              if ( (_DWORD)v120 == 36 )
              {
                v177 = *((_OWORD *)v16 + 93);
                v178 = *((_DWORD *)v16 + 367);
              }
              v17 = (char *)&v176;
            }
          }
          else
          {
            *(_OWORD *)&v175[24] = 0LL;
            PspLockJobMemoryLimitsShared((__int64)v16, (__int64)CurrentThread);
            *(_QWORD *)&v175[8] = *((_QWORD *)v16 + 90) << 12;
            *(_QWORD *)v175 = *((_QWORD *)v16 + 151) << 12;
            *(_QWORD *)&v175[16] = *((_QWORD *)v16 + 196) << 12;
            v16 = (char *)Object;
            PspUnlockJobMemoryLimitsShared((__int64)Object, (__int64)v118);
            v17 = v175;
          }
          goto LABEL_73;
        }
        goto LABEL_167;
      }
      switch ( (_DWORD)v7 )
      {
        case '"':
LABEL_206:
          LOWORD(v113) = 0;
          BYTE2(v113) = 0;
          PspQueryJobHierarchyAccountingInformation(v16, (__int64)v204);
          v147 = v204[9];
          v149 = v204[10];
          v151 = v204[0];
          PspLockJobExclusive((__int64)v16, (__int64)v118);
          if ( (*((_DWORD *)v16 + 388) & 0x4008) != 0x4008 )
          {
            _InterlockedAnd((volatile signed __int32 *)v16 + 388, 0xFFFFFFFB);
            v16 = (char *)Object;
          }
          PspLockJobMemoryLimitsShared((__int64)v16, 0LL);
          v153 = *((_QWORD *)v16 + 151) << 12;
          PspUnlockJobMemoryLimitsShared((__int64)v16, 0LL);
          v66 = (_DWORD *)*((_QWORD *)v16 + 152);
          if ( v66 )
          {
            LODWORD(v146) = *v66;
            HIDWORD(v146) = *(_DWORD *)(*((_QWORD *)v16 + 152) + 4LL);
            v67 = (_QWORD *)*((_QWORD *)v16 + 152);
            v68 = v67[9];
            if ( !v68 )
              v68 = v67[1];
            v148 = v68;
            v69 = v67[10];
            if ( !v69 )
              v69 = v67[2];
            v150 = v69;
            v70 = v67[11];
            if ( !v70 )
              v70 = v67[3];
            v152 = v70;
            v71 = v67[12];
            if ( !v71 )
              v71 = v67[4];
            v157 = v71 << 12;
            v72 = v67[13];
            if ( !v72 )
              v72 = v67[5];
            v154 = v72 << 12;
            for ( i = 0; i < 3; i = v75 + 1 )
            {
              v74 = (_DWORD *)PspLimitViolationRateControlToleranceLimitField((__int64)&v146, i);
              v78 = v76[16];
              if ( v78 )
                *v77 = 1;
              else
                v78 = *v76;
              *v74 = v78;
            }
          }
          else
          {
            v146 = 0LL;
            v148 = 0LL;
            v150 = 0LL;
            v152 = 0LL;
            v157 = 0LL;
            v154 = 0LL;
            for ( j = 0; j < 3; j = v80 + 1 )
              *(_DWORD *)PspLimitViolationRateControlToleranceLimitField((__int64)&v146, j) = 0;
          }
          v81 = 0;
          v82 = (char *)&v113;
          v122 = 60LL;
          do
          {
            if ( *((_QWORD *)v16 + 152) && (v83 = PspRateControlLimitFlag(v81), (v83 & *v84) != 0) )
              v86 = *(_DWORD *)((char *)v84 + v85);
            else
              v86 = 1;
            v123 = v86;
            PspQueryRateControlHistory((__int64)v16, v86, *v82, &v131, v81);
            if ( v81 )
            {
              if ( v81 == 1 )
                v87 = &v158;
              else
                v87 = (char *)&v155;
            }
            else
            {
              v87 = &v159;
            }
            *(_DWORD *)v87 = v131;
            ++v81;
            v122 += 4LL;
            ++v82;
          }
          while ( v81 < 3 );
          v88 = *((_QWORD *)v16 + 152);
          v89 = (__int64)v118;
          if ( v88 )
          {
            *(_DWORD *)(v88 + 4) = 0;
            memset_0((void *)(*((_QWORD *)v16 + 152) + 72LL), 0, 0x40uLL);
          }
          PspUnlockJob((__int64)v16, v89);
          if ( (_DWORD)v120 == 88 )
          {
            v183[1] = v147;
            v183[2] = v148;
            v183[3] = v149;
            v183[4] = v150;
            v183[5] = v151;
            v183[6] = v152;
            v183[7] = v153;
            v183[8] = v157;
            v183[9] = v154;
            v184 = v155;
            v185 = v156;
            v183[0] = v146 & 0x27820400278204LL;
            v17 = (char *)v183;
          }
          else if ( (_DWORD)v120 == 80 )
          {
            v180[1] = v147;
            v180[2] = v148;
            v180[3] = v149;
            v180[4] = v150;
            v180[5] = v151;
            v180[6] = v152;
            v180[7] = v153;
            v180[8] = v154;
            v181 = v155;
            v182 = v156;
            v180[0] = v146 & 0x7020400070204LL;
            v17 = (char *)v180;
          }
          else
          {
            v17 = (char *)&v146;
          }
          JobIoAttribution = 0;
          if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
            EtwTraceJobSetQuery((__int64)v16, v7, (__int64)&v146, &v123, 0, 0x726u);
          goto LABEL_283;
        case '$':
          if ( (*((_DWORD *)v16 + 388) & 0x40000000) != 0 )
          {
            LODWORD(v162) = *((_DWORD *)v16 + 367);
            ParentSilo = PsGetParentSilo((__int64)v16);
            if ( PsIsHostSilo(ParentSilo) )
              DWORD1(v162) = 0;
            else
              DWORD1(v162) = *(_DWORD *)(ParentSilo + 1468);
            DWORD2(v162) = *((_DWORD *)v16 + 364);
            BYTE12(v162) = PspIsSiloInServerSilo((__int64)v16);
            v17 = (char *)&v162;
            goto LABEL_73;
          }
          break;
        case '%':
          JobSilo = PspGetJobSilo((__int64)v16);
          if ( JobSilo )
          {
            JobIoAttribution = ObGetSiloRootDirectoryPath(JobSilo, (UNICODE_STRING *)P);
            if ( JobIoAttribution >= 0 )
            {
              v111 = 1;
              v64 = LOWORD(P[0]);
              v8 = LOWORD(P[0]) + 16;
              v113 = v8;
              if ( v8 > (unsigned int)v120 )
              {
                JobIoAttribution = -1073741789;
                v19 = (void *)a3;
                v20 = a5;
              }
              else
              {
                v19 = (void *)a3;
                if ( (unsigned int)Feature_Servicing_MSRC100723__private_IsEnabledDeviceUsageNoInline() )
                {
                  Size[2] = 0;
                  LOWORD(Size[1]) = v64;
                  HIWORD(Size[1]) = v64;
                  v125 = (void *)(a3 + 16);
                  if ( v114 )
                    RtlCopyToUser((void *)a3, &Size[1], 0x10uLL);
                  else
                    RtlCopyVolatileMemory((void *)a3, &Size[1], 0x10uLL);
                  if ( v114 )
                    RtlCopyToUser(v125, P[1], v64);
                  else
                    RtlCopyVolatileMemory(v125, P[1], v64);
                }
                else
                {
                  *(_WORD *)a3 = v64;
                  *(_WORD *)(a3 + 2) = v64;
                  *(_QWORD *)(a3 + 8) = a3 + 16;
                  memmove((void *)(a3 + 16), P[1], (unsigned int)v64);
                }
                v20 = a5;
                if ( a5 )
                  *a5 = v8;
              }
              ExFreePoolWithTag(P[1], 0);
              goto LABEL_285;
            }
            goto LABEL_283;
          }
          break;
        case '&':
          PsGetJobServerSilo((__int64)v16, (__int64 *)&Size[1]);
          v61 = *(_QWORD *)&Size[1];
          if ( !PsIsHostSilo(*(__int64 *)&Size[1]) )
          {
            v62 = *(_QWORD *)(v61 + 1504);
            *(_QWORD *)((char *)&v140 + 4) = *(_QWORD *)(v62 + 1272);
            BYTE12(v140) = 0;
            LODWORD(v142) = *(_DWORD *)(v62 + 1336);
            HIDWORD(v142) = (unsigned __int16)NtBuildNumber;
            if ( v114 )
            {
              v141 = 0LL;
            }
            else
            {
              v122 = 0LL;
              MmQueryApiSetSchema(&v122, &v127);
              *(_QWORD *)&v141 = *((_QWORD *)PsGetServerSiloGlobals(v61) + 126);
              *((_QWORD *)&v141 + 1) = *(_QWORD *)v122;
            }
            LODWORD(v140) = PsGetServerSiloServiceSessionId(v61);
            JobIoAttribution = 0;
            v17 = (char *)&v140;
            goto LABEL_283;
          }
          break;
        default:
          goto LABEL_260;
      }
    }
    JobIoAttribution = -1073740535;
    goto LABEL_283;
  }
  if ( (_DWORD)v7 == 26 )
  {
    v19 = (void *)a3;
    JobIoAttribution = PspQueryJobHierarchyInterferenceCount(v16, (_QWORD *)a3);
    v111 = JobIoAttribution >= 0;
    HIDWORD(v120) = ((JobIoAttribution >> 31) & 0xFFFFFFF8) + 8;
    goto LABEL_284;
  }
  if ( (int)v7 > 12 )
  {
    if ( (_DWORD)v7 != 13 )
    {
      if ( (_DWORD)v7 != 14 )
      {
        switch ( (_DWORD)v7 )
        {
          case 0xF:
            PspLockJobShared((__int64)v16, (__int64)CurrentThread);
            v30 = *((_QWORD *)v16 + 155);
            if ( v30 )
            {
              v31 = *(_DWORD *)(v30 + 40);
              if ( (v31 & 0x40) == 0 )
              {
                HIDWORD(v135) = *(_DWORD *)(v30 + 44);
                v32 = ((v31 & 4 | 2u) >> 1) | 4;
                if ( (v31 & 1) == 0 )
                  v32 = (v31 & 4 | 2u) >> 1;
                v33 = v32 | 8;
                if ( (v31 & 2) == 0 )
                  v33 = v32;
                v34 = v33 | 0x10;
                if ( (v31 & 0x20) == 0 )
                  v34 = v33;
                v35 = v34 | 0x20;
                if ( (v31 & 0x80) == 0 )
                  v35 = v34;
                LODWORD(v135) = v35;
              }
            }
            PspUnlockJob((__int64)v16, (__int64)v118);
            v17 = (char *)&v135;
            goto LABEL_73;
          case 0x10:
            v130 = *((_DWORD *)v16 + 276);
            v17 = (char *)&v130;
            goto LABEL_73;
          case 0x11:
            v139 = *((_QWORD *)v16 + 71);
            v17 = (char *)&v139;
            goto LABEL_73;
          case 0x12:
            WORD3(v161) = 0;
            PspLockJobShared((__int64)v16, (__int64)CurrentThread);
            v29 = *((_DWORD *)v16 + 388);
            BYTE4(v161) = (v29 & 0x200) != 0;
            BYTE5(v161) = (v29 & 0x80000) != 0;
            LODWORD(v161) = ~(unsigned __int8)*((_DWORD *)v16 + 389) & 8 | 7;
            *((_QWORD *)&v161 + 1) = *((_QWORD *)v16 + 148);
            PspUnlockJob((__int64)v16, (__int64)v118);
            v17 = (char *)&v161;
            goto LABEL_73;
        }
        if ( (_DWORD)v7 != 19 )
        {
          if ( (_DWORD)v7 == 20 )
          {
            NotificationChannel = PspAllocateAndQueryNotificationChannel((__int64)CurrentThread, (__int64)v16, v203);
            v17 = (char *)v203;
            if ( NotificationChannel < 0 )
              v17 = 0LL;
            JobIoAttribution = 0;
            if ( NotificationChannel < 0 )
              JobIoAttribution = NotificationChannel;
            goto LABEL_283;
          }
          if ( (_DWORD)v7 != 21 )
            goto LABEL_260;
          v116 = (*((_DWORD *)v16 + 388) & 0x400) != 0;
          v17 = (char *)&v116;
          goto LABEL_73;
        }
        goto LABEL_114;
      }
      if ( a5 )
      {
        v36 = v120;
        if ( (v120 & 0xF) == 0 )
        {
          PspLockJobShared((__int64)v16, (__int64)CurrentThread);
          v37 = 2LL;
          if ( (*((_DWORD *)v16 + 64) & 0x10) != 0 )
          {
            v40 = v16 + 264;
            v41 = &v206;
            do
            {
              *(_OWORD *)v41 = *v40;
              *((_OWORD *)v41 + 1) = v40[1];
              *((_OWORD *)v41 + 2) = v40[2];
              *((_OWORD *)v41 + 3) = v40[3];
              *((_OWORD *)v41 + 4) = v40[4];
              *((_OWORD *)v41 + 5) = v40[5];
              *((_OWORD *)v41 + 6) = v40[6];
              v41 += 64;
              *((_OWORD *)v41 - 1) = v40[7];
              v40 += 8;
              --v37;
            }
            while ( v37 );
            *(_QWORD *)v41 = *(_QWORD *)v40;
          }
          else
          {
            v38 = &v206;
            v39 = &KeActiveProcessors;
            do
            {
              *(_OWORD *)v38 = *(_OWORD *)&v39->Count;
              *((_OWORD *)v38 + 1) = *(_OWORD *)&v39->StaticBitmap[1];
              *((_OWORD *)v38 + 2) = *(_OWORD *)&v39->StaticBitmap[3];
              *((_OWORD *)v38 + 3) = *(_OWORD *)&v39->StaticBitmap[5];
              *((_OWORD *)v38 + 4) = *(_OWORD *)&v39->StaticBitmap[7];
              *((_OWORD *)v38 + 5) = *(_OWORD *)&v39->StaticBitmap[9];
              *((_OWORD *)v38 + 6) = *(_OWORD *)&v39->StaticBitmap[11];
              v38 += 64;
              *((_OWORD *)v38 - 1) = *(_OWORD *)&v39->StaticBitmap[13];
              v39 = (struct _KAFFINITY_EX *)((char *)v39 + 128);
              --v37;
            }
            while ( v37 );
            *(_QWORD *)v38 = *(_QWORD *)&v39->Count;
          }
          PspUnlockJob((__int64)v16, (__int64)v118);
          v42 = v206;
          memset_0(v208, 0, 16LL * v206);
          if ( (_WORD)v42 )
          {
            v43 = v208;
            v44 = &v207;
            v45 = 0;
            v46 = v119[0];
            do
            {
              *((_WORD *)v43 + 4) = v46;
              *(_QWORD *)v43 = *(_QWORD *)v44;
              v46 = ++v45;
              v44 += 8;
              v43 += 16;
            }
            while ( v45 < (unsigned __int16)v42 );
          }
          HIDWORD(v120) = 16 * v42;
          v8 = 16 * v42;
          if ( v36 < 16 * v42 )
            v8 = v36;
          v113 = v8;
          JobIoAttribution = v36 < 16 * v42 ? 0xC0000023 : 0;
          v111 = 1;
          v19 = (void *)a3;
          memmove((void *)a3, v208, v8);
          v20 = a5;
          goto LABEL_285;
        }
      }
      goto LABEL_90;
    }
    goto LABEL_206;
  }
  if ( (_DWORD)v7 == 12 )
  {
LABEL_167:
    PspLockJobShared((__int64)v16, (__int64)CurrentThread);
    v53 = (int *)*((_QWORD *)v16 + 152);
    if ( v53 )
    {
      v165 = *v53;
      v163 = *(_OWORD *)(v53 + 2);
      *(_QWORD *)v164 = *((_QWORD *)v53 + 3);
      v166 = *((_QWORD *)v53 + 4) << 12;
      *(_QWORD *)&v164[8] = *((_QWORD *)v53 + 5) << 12;
      for ( k = 0; k < 3; k = v60 + 1 )
      {
        v55 = (_DWORD *)PspNotificationLimitRateControlToleranceField((__int64)&v163, k);
        *v55 = *(_DWORD *)(v56 - 12);
        v58 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField((__int64)&v163, v57);
        *v58 = *v59;
      }
    }
    PspUnlockJob((__int64)v16, (__int64)v118);
    if ( (_DWORD)v120 == 48 )
    {
      v168 = v163;
      v169 = *(_OWORD *)v164;
      *(_QWORD *)&v170 = *(_QWORD *)&v164[16];
      *((_QWORD *)&v170 + 1) = v165 & 0x70204LL;
      v17 = (char *)&v168;
    }
    else if ( (_DWORD)v120 == 56 )
    {
      v171 = v163;
      *(_QWORD *)&v172 = *(_QWORD *)v164;
      *((_QWORD *)&v172 + 1) = v166;
      v173 = *(_OWORD *)&v164[8];
      v174 = v165 & 0x278204LL;
      v17 = (char *)&v171;
    }
    else
    {
      v17 = (char *)&v163;
    }
    goto LABEL_73;
  }
  if ( (int)v7 > 6 )
  {
    switch ( (_DWORD)v7 )
    {
      case 8:
        goto LABEL_114;
      case 9:
        goto LABEL_92;
      case 0xA:
        PspLockJobListShared((__int64)CurrentThread);
        PspUnlockJobListShared((__int64)v118);
        v17 = (char *)&v134;
        goto LABEL_73;
    }
    if ( (_DWORD)v7 != 11 )
      goto LABEL_260;
    if ( a5 )
    {
      v21 = v120;
      if ( (v120 & 1) == 0 )
      {
        PspLockJobShared((__int64)v16, (__int64)CurrentThread);
        v22 = 0;
        v23 = *((_WORD *)v16 + 132);
        if ( v23 )
        {
          v24 = v16 + 272;
          v25 = 0;
          v26 = 0;
          v27 = v119[0];
          do
          {
            if ( *v24 )
            {
              Src[v22++] = v27;
              v25 = v26;
            }
            v27 = ++v25;
            ++v24;
            v26 = v25;
          }
          while ( v25 < v23 );
        }
        PspUnlockJob((__int64)v16, (__int64)v118);
        v8 = 2 * v22;
        HIDWORD(v120) = v8;
        v111 = 1;
        JobIoAttribution = v21 < v8 ? 0xC0000023 : 0;
        if ( v8 > v21 )
          v8 = Size[0];
        Size[0] = v8;
        v19 = (void *)a3;
        memmove((void *)a3, Src, v8);
        v20 = a5;
        goto LABEL_285;
      }
    }
LABEL_90:
    JobIoAttribution = -1073741811;
    goto LABEL_283;
  }
  switch ( (_DWORD)v7 )
  {
    case 6:
      v129 = *((_DWORD *)v16 + 137);
      v17 = (char *)&v129;
      goto LABEL_73;
    case 1:
LABEL_114:
      PspQueryJobHierarchyAccountingInformation(v16, (__int64)v204);
      v17 = (char *)v204;
      goto LABEL_73;
    case 2:
LABEL_92:
      PspLockJobShared((__int64)v16, (__int64)CurrentThread);
      v190 = *((_QWORD *)v16 + 30);
      v191 = *((_QWORD *)v16 + 31);
      v192 = *((_DWORD *)v16 + 65);
      v194 = (unsigned __int8)v16[1101];
      v195 = *((_DWORD *)v16 + 145);
      if ( (unsigned int)KeIsSingleGroupAffinityEx((unsigned __int16 *)v16 + 132, v119) )
        v193 = *(_QWORD *)&v16[8 * v119[0] + 272];
      else
        v193 = 0LL;
      v188[0] = *((_QWORD *)v16 + 28);
      v188[1] = *((_QWORD *)v16 + 29);
      v189 = (PspGetJobLimitInformationValidFlags(v7, v120) | 0x7FFF) & *((_DWORD *)v16 + 64);
      if ( (_DWORD)v7 == 9 )
      {
        PspLockJobMemoryLimitsShared((__int64)v16, 0LL);
        v196 = *((_QWORD *)v16 + 86) << 12;
        v197 = *((_QWORD *)v16 + 87) << 12;
        v199 = *((_QWORD *)v16 + 90) << 12;
        v200 = *((_QWORD *)v16 + 88) << 12;
        PspUnlockJobMemoryLimitsShared((__int64)v16, 0LL);
        PspUnlockJob((__int64)v16, (__int64)v118);
        v198 = *((_QWORD *)v16 + 89) << 12;
      }
      else
      {
        PspUnlockJob((__int64)v16, (__int64)v118);
      }
      v17 = (char *)v188;
      goto LABEL_73;
    case 3:
      HIDWORD(v120) = 0;
      v19 = (void *)a3;
      JobIoAttribution = PspQueryJobHierarchyProcessIdList(v16, (_DWORD *)a3, v120, (_DWORD *)&v120 + 1);
      v111 = 1;
LABEL_284:
      v20 = a5;
      goto LABEL_285;
    case 4:
      PspLockJobShared((__int64)v16, (__int64)CurrentThread);
      v128 = *((_DWORD *)v16 + 136);
      PspUnlockJob((__int64)v16, (__int64)v118);
      v17 = (char *)&v128;
LABEL_73:
      JobIoAttribution = 0;
LABEL_283:
      v19 = (void *)a3;
      goto LABEL_284;
  }
  if ( (_DWORD)v7 != 5 )
  {
LABEL_260:
    JobIoAttribution = -1073741821;
    goto LABEL_283;
  }
  v145 = 0LL;
  v111 = 1;
  v19 = (void *)a3;
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = v145;
  v20 = a5;
LABEL_285:
  if ( v16 )
    ObfDereferenceObjectWithTag(v16, 0x79517350u);
  if ( JobIoAttribution >= 0 && !v111 )
    memmove(v19, v17, v8);
  if ( v20 )
    *v20 = HIDWORD(v120);
  return (unsigned int)JobIoAttribution;
}
