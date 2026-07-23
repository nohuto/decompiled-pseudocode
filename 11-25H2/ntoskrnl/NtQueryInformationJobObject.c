/*
 * XREFs of NtQueryInformationJobObject @ 0x1409ECC70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PspGetJobSilo @ 0x14041A350 (PspGetJobSilo.c)
 *     PsIsHostSilo @ 0x14043DF70 (PsIsHostSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404565D0 (PsGetServerSiloServiceSessionId.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     MmQueryApiSetSchema @ 0x1404B681C (MmQueryApiSetSchema.c)
 *     PsGetJobServerSilo @ 0x1404B8060 (PsGetJobServerSilo.c)
 *     PspIsSiloInServerSilo @ 0x1405D8E38 (PspIsSiloInServerSilo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140767F10 (PspQueryJobHierarchyInterferenceCount.c)
 *     ObGetSiloRootDirectoryPath @ 0x14081B1D4 (ObGetSiloRootDirectoryPath.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     PsGetParentSilo @ 0x140862140 (PsGetParentSilo.c)
 *     PspLockJobExclusive @ 0x1408DC060 (PspLockJobExclusive.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1408DC184 (PspQueryJobHierarchyProcessIdList.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1408DC284 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspQueryRateControlHistory @ 0x1408DCF0C (PspQueryRateControlHistory.c)
 *     PspUnlockJob @ 0x1408DDFF0 (PspUnlockJob.c)
 *     PspLockJobMemoryLimitsShared @ 0x1408DE168 (PspLockJobMemoryLimitsShared.c)
 *     PspRateControlLimitFlag @ 0x1408DE1D0 (PspRateControlLimitFlag.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1408DE1F4 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobShared @ 0x1408DE264 (PspLockJobShared.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140969360 (PspAllocateAndQueryNotificationChannel.c)
 *     PspGetJobLimitInformationValidFlags @ 0x1409EDE5C (PspGetJobLimitInformationValidFlags.c)
 *     PspQueryJobIoAttribution @ 0x1409EDE84 (PspQueryJobIoAttribution.c)
 *     PspLockJobListShared @ 0x1409EDF30 (PspLockJobListShared.c)
 *     PspUnlockJobListShared @ 0x1409EDF94 (PspUnlockJobListShared.c)
 *     EtwTraceJobSetQuery @ 0x140A51B40 (EtwTraceJobSetQuery.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength,
        PULONG ReturnLength)
{
  int v6; // edi
  __int64 v7; // r14
  unsigned int v8; // r13d
  int v9; // r12d
  struct _KTHREAD *CurrentThread; // rcx
  char PreviousMode; // al
  __int64 v12; // rdx
  NTSTATUS result; // eax
  char *v14; // rdi
  char *v15; // r15
  NTSTATUS JobIoAttribution; // ebx
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // r8
  unsigned __int16 v19; // r9
  PULONG v20; // r12
  PVOID v21; // r14
  int v22; // r14d
  bool v23; // zf
  int NotificationChannel; // eax
  int v25; // r14d
  _DWORD *v26; // rax
  int i; // ecx
  int *v28; // rax
  int v29; // r15d
  char *v30; // rbx
  int v31; // edx
  char *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rbx
  int *v35; // rcx
  unsigned int v36; // r14d
  int v37; // r13d
  unsigned __int16 v38; // r9
  _QWORD *v39; // rcx
  unsigned __int16 v40; // ax
  unsigned __int16 v41; // dx
  __int16 v42; // r8
  int v43; // r14d
  int v44; // r14d
  int v45; // edx
  _DWORD *v46; // rcx
  char *v47; // r8
  char *v48; // r8
  _QWORD *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // edx
  ULONG *v56; // r9
  int *v57; // rcx
  int *v58; // rax
  int v59; // r8d
  int v60; // eax
  _DWORD *v61; // rdx
  __int64 v62; // r8
  __int64 v63; // rax
  int v64; // ecx
  __int64 v65; // rax
  int v66; // r9d
  unsigned int v67; // edx
  int v68; // ecx
  int v69; // edx
  int v70; // eax
  unsigned int v71; // ebx
  __int64 v72; // rax
  unsigned __int16 *v73; // rcx
  struct _KAFFINITY_EX *v74; // rdx
  _OWORD *v75; // rcx
  unsigned __int16 *v76; // rdx
  int v77; // r14d
  _BYTE *v78; // rdx
  char *v79; // r8
  unsigned __int16 v80; // cx
  __int16 v81; // ax
  int v82; // r14d
  __int64 v83; // rcx
  int v84; // edx
  __int64 v85; // rbx
  __int64 v86; // rcx
  __int64 JobSilo; // rax
  unsigned int v88; // edx
  __int64 ParentSilo; // rbx
  const void **v90; // rax
  size_t v91; // r8
  int v92; // r14d
  int v93; // r14d
  int v94; // r14d
  int v95; // r14d
  int v96; // r14d
  int v97; // r14d
  int v98; // r14d
  char *ServerSiloGlobals; // rax
  unsigned int v100; // ecx
  _WORD *v101; // rdx
  unsigned __int8 *v102; // r8
  unsigned int v103; // ecx
  int v104; // eax
  unsigned int v105; // ecx
  int v106; // eax
  __int64 v107; // rcx
  char v108; // al
  bool v109; // [rsp+40h] [rbp-A68h]
  ULONG v111; // [rsp+58h] [rbp-A50h] BYREF
  char v112; // [rsp+5Ch] [rbp-A4Ch] BYREF
  bool v113; // [rsp+5Dh] [rbp-A4Bh] BYREF
  char v114; // [rsp+5Eh] [rbp-A4Ah]
  bool v115; // [rsp+5Fh] [rbp-A49h] BYREF
  struct _KTHREAD *v116; // [rsp+60h] [rbp-A48h]
  __int16 v117; // [rsp+68h] [rbp-A40h]
  size_t v118; // [rsp+6Ch] [rbp-A3Ch] BYREF
  PVOID Object; // [rsp+78h] [rbp-A30h] BYREF
  __int64 v120; // [rsp+80h] [rbp-A28h] BYREF
  int v121; // [rsp+88h] [rbp-A20h] BYREF
  _DWORD Size[3]; // [rsp+8Ch] [rbp-A1Ch] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+98h] [rbp-A10h]
  PVOID v124; // [rsp+A0h] [rbp-A08h] BYREF
  int v125; // [rsp+A8h] [rbp-A00h] BYREF
  int v126; // [rsp+ACh] [rbp-9FCh] BYREF
  int v127; // [rsp+B0h] [rbp-9F8h] BYREF
  int v128; // [rsp+B4h] [rbp-9F4h] BYREF
  unsigned __int64 v129; // [rsp+B8h] [rbp-9F0h] BYREF
  unsigned __int64 v130; // [rsp+C0h] [rbp-9E8h] BYREF
  int v131; // [rsp+C8h] [rbp-9E0h] BYREF
  __int64 v132; // [rsp+D0h] [rbp-9D8h] BYREF
  __int64 v133; // [rsp+D8h] [rbp-9D0h] BYREF
  __int64 v134; // [rsp+E0h] [rbp-9C8h] BYREF
  __int64 v135; // [rsp+E8h] [rbp-9C0h] BYREF
  __int128 v136; // [rsp+F0h] [rbp-9B8h] BYREF
  __int128 v137; // [rsp+100h] [rbp-9A8h]
  __int64 v138; // [rsp+110h] [rbp-998h]
  PVOID P[2]; // [rsp+118h] [rbp-990h] BYREF
  __int128 v140; // [rsp+128h] [rbp-980h]
  __int128 v141; // [rsp+138h] [rbp-970h]
  __int64 v142; // [rsp+148h] [rbp-960h]
  __int64 v143; // [rsp+150h] [rbp-958h] BYREF
  __int64 v144; // [rsp+158h] [rbp-950h]
  __int64 v145; // [rsp+160h] [rbp-948h]
  __int64 v146; // [rsp+168h] [rbp-940h]
  __int64 v147; // [rsp+170h] [rbp-938h]
  __int64 v148; // [rsp+178h] [rbp-930h]
  __int64 v149; // [rsp+180h] [rbp-928h]
  __int64 v150; // [rsp+188h] [rbp-920h]
  __int64 v151; // [rsp+190h] [rbp-918h]
  int v152; // [rsp+198h] [rbp-910h] BYREF
  int v153; // [rsp+19Ch] [rbp-90Ch] BYREF
  __int64 v154; // [rsp+1A0h] [rbp-908h]
  char v155; // [rsp+1A8h] [rbp-900h] BYREF
  _BYTE v156[4]; // [rsp+1ACh] [rbp-8FCh] BYREF
  char v157; // [rsp+1B0h] [rbp-8F8h] BYREF
  _BYTE v158[12]; // [rsp+1B4h] [rbp-8F4h] BYREF
  __int128 v159; // [rsp+1C0h] [rbp-8E8h] BYREF
  __int128 v160; // [rsp+1D0h] [rbp-8D8h] BYREF
  __int128 v161; // [rsp+1E0h] [rbp-8C8h] BYREF
  __int128 v162; // [rsp+1F0h] [rbp-8B8h] BYREF
  _BYTE v163[24]; // [rsp+200h] [rbp-8A8h] BYREF
  int v164; // [rsp+218h] [rbp-890h]
  char v165; // [rsp+21Ch] [rbp-88Ch] BYREF
  __int64 v166; // [rsp+220h] [rbp-888h]
  char v167; // [rsp+228h] [rbp-880h] BYREF
  char v168; // [rsp+22Ch] [rbp-87Ch] BYREF
  char v169; // [rsp+230h] [rbp-878h] BYREF
  __int128 v170; // [rsp+240h] [rbp-868h] BYREF
  __int128 v171; // [rsp+250h] [rbp-858h] BYREF
  __int128 v172; // [rsp+260h] [rbp-848h]
  __int128 v173; // [rsp+270h] [rbp-838h]
  __int128 v174; // [rsp+280h] [rbp-828h] BYREF
  __int128 v175; // [rsp+290h] [rbp-818h]
  __int128 v176; // [rsp+2A0h] [rbp-808h]
  __int64 v177; // [rsp+2B0h] [rbp-7F8h]
  _BYTE v178[40]; // [rsp+2B8h] [rbp-7F0h] BYREF
  __int128 v179; // [rsp+2E0h] [rbp-7C8h] BYREF
  __int128 v180; // [rsp+2F0h] [rbp-7B8h]
  int v181; // [rsp+300h] [rbp-7A8h]
  __int128 v182; // [rsp+308h] [rbp-7A0h] BYREF
  _QWORD v183[9]; // [rsp+320h] [rbp-788h] BYREF
  int v184; // [rsp+368h] [rbp-740h]
  int v185; // [rsp+36Ch] [rbp-73Ch]
  _QWORD v186[10]; // [rsp+370h] [rbp-738h] BYREF
  int v187; // [rsp+3C0h] [rbp-6E8h]
  int v188; // [rsp+3C4h] [rbp-6E4h]
  _OWORD v189[3]; // [rsp+3D0h] [rbp-6D8h] BYREF
  int v190; // [rsp+400h] [rbp-6A8h]
  _QWORD Src[2]; // [rsp+410h] [rbp-698h] BYREF
  int v192; // [rsp+420h] [rbp-688h]
  __int64 v193; // [rsp+428h] [rbp-680h]
  __int64 v194; // [rsp+430h] [rbp-678h]
  int v195; // [rsp+438h] [rbp-670h]
  __int64 v196; // [rsp+440h] [rbp-668h]
  int v197; // [rsp+448h] [rbp-660h]
  int v198; // [rsp+44Ch] [rbp-65Ch]
  __int64 v199; // [rsp+480h] [rbp-628h]
  __int64 v200; // [rsp+488h] [rbp-620h]
  __int64 v201; // [rsp+490h] [rbp-618h]
  __int64 v202; // [rsp+498h] [rbp-610h]
  __int64 v203; // [rsp+4A0h] [rbp-608h]
  _BYTE v204[4]; // [rsp+4B0h] [rbp-5F8h] BYREF
  int v205; // [rsp+4B4h] [rbp-5F4h]
  _OWORD v206[4]; // [rsp+500h] [rbp-5A8h] BYREF
  _QWORD v207[56]; // [rsp+540h] [rbp-568h] BYREF
  __int128 v208; // [rsp+700h] [rbp-3A8h]
  unsigned __int16 v209; // [rsp+710h] [rbp-398h] BYREF
  char v210; // [rsp+718h] [rbp-390h] BYREF
  _BYTE v211[512]; // [rsp+820h] [rbp-288h] BYREF
  _WORD v212[32]; // [rsp+A20h] [rbp-88h] BYREF

  v118 = JobObjectInformationLength;
  v6 = (int)JobObjectInformation;
  v7 = JobObjectInformationClass;
  BugCheckParameter1 = (ULONG_PTR)JobHandle;
  v124 = JobObjectInformation;
  v120 = (__int64)ReturnLength;
  memset_0(v207, 0, 0x1D0uLL);
  v170 = 0LL;
  memset_0(&v209, 0, 0x108uLL);
  v113 = 0;
  v130 = 0LL;
  v129 = 0LL;
  v125 = 0;
  v133 = 0LL;
  v127 = 0;
  v179 = 0LL;
  v180 = 0LL;
  v181 = 0;
  v182 = 0LL;
  v132 = 0LL;
  v126 = 0;
  v135 = 0LL;
  memset_0(Src, 0, 0x98uLL);
  v159 = 0LL;
  v117 = 0;
  v121 = 0;
  v205 = 0;
  memset_0(v204, 0, 0x44uLL);
  Object = 0LL;
  v131 = 0;
  memset_0(&v143, 0, 0x68uLL);
  memset_0(v183, 0, 0x50uLL);
  memset_0(v186, 0, 0x58uLL);
  memset(v178, 0, sizeof(v178));
  v160 = 0LL;
  memset_0(&v162, 0, 0x48uLL);
  v171 = 0LL;
  v172 = 0LL;
  v173 = 0LL;
  v174 = 0LL;
  v175 = 0LL;
  v176 = 0LL;
  v177 = 0LL;
  v128 = 0;
  *(_OWORD *)P = 0LL;
  v140 = 0LL;
  v141 = 0LL;
  LODWORD(v142) = 0;
  v134 = 0LL;
  memset_0(v206, 0, sizeof(v206));
  v161 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  memset(v189, 0, sizeof(v189));
  v190 = 0;
  *(_QWORD *)&Size[1] = 0LL;
  v112 = 0;
  v115 = 0;
  if ( (unsigned int)(v7 - 1) > 0x32 )
    return -1073741821;
  switch ( (_DWORD)v7 )
  {
    case 9:
      if ( JobObjectInformationLength != 144 && JobObjectInformationLength != 152 )
        return -1073741820;
      goto LABEL_61;
    case 0xC:
      if ( JobObjectInformationLength == 48 )
        goto LABEL_61;
      v23 = JobObjectInformationLength == 56;
      goto LABEL_84;
    case 0xD:
      if ( JobObjectInformationLength == 80 )
        goto LABEL_61;
      v23 = JobObjectInformationLength == 88;
      goto LABEL_84;
    case 0x13:
      if ( JobObjectInformationLength == 432 || JobObjectInformationLength == 448 )
        goto LABEL_61;
      v23 = JobObjectInformationLength == 464;
LABEL_84:
      if ( !v23 )
        return -1073741820;
      goto LABEL_61;
    case 0x14:
      if ( JobObjectInformationLength == 40 )
        goto LABEL_61;
      v23 = JobObjectInformationLength == 64;
      goto LABEL_84;
    case 0x1C:
      if ( JobObjectInformationLength == 16 )
        goto LABEL_61;
      v23 = JobObjectInformationLength == 40;
      goto LABEL_84;
    case 0x1E:
      if ( JobObjectInformationLength == 16 )
        goto LABEL_61;
      v23 = JobObjectInformationLength == 36;
      goto LABEL_84;
  }
  if ( (_DWORD)v7 != 43 )
  {
    v8 = dword_140B2F42C[v7];
    v111 = v8;
    if ( JobObjectInformationLength == v8 )
    {
LABEL_11:
      v9 = 1;
      goto LABEL_12;
    }
    if ( (_DWORD)v7 != 3
      && (_DWORD)v7 != 5
      && (_DWORD)v7 != 11
      && (_DWORD)v7 != 14
      && (_DWORD)v7 != 31
      && (_DWORD)v7 != 37 )
    {
      if ( (_DWORD)v7 == 38 && JobObjectInformationLength == 32 )
      {
        v8 = 32;
        v111 = 32;
        goto LABEL_11;
      }
      return -1073741820;
    }
    if ( JobObjectInformationLength < v8 )
      return -1073741820;
LABEL_61:
    v111 = JobObjectInformationLength;
    v8 = JobObjectInformationLength;
    goto LABEL_11;
  }
  if ( JobObjectInformationLength != 1 )
    return -1073741820;
  v9 = 1;
  v8 = 1;
  v111 = 1;
LABEL_12:
  Size[0] = v8;
  CurrentThread = KeGetCurrentThread();
  v116 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v114 = PreviousMode;
  if ( PreviousMode )
  {
    if ( JobObjectInformationLength )
    {
      if ( ((dword_140B2F4FC[v7] - 1) & v6) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = 0x7FFFFFFF0000LL;
      CurrentThread = v116;
    }
    else
    {
      v12 = 0x7FFFFFFF0000LL;
    }
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v12 = (__int64)ReturnLength;
      *(_DWORD *)v12 = *(_DWORD *)v12;
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
    if ( result < 0 )
      return result;
    v14 = (char *)Object;
    goto LABEL_26;
  }
  v14 = (char *)CurrentThread->ApcState.Process[1].Padding[3];
  Object = v14;
  if ( v14 )
  {
    ObfReferenceObjectWithTag(v14, 0x79517350u);
LABEL_26:
    CurrentThread = v116;
    goto LABEL_27;
  }
  if ( (((_DWORD)v7 - 31) & 0xFFFFFFF7) != 0 )
    return -1073741790;
LABEL_27:
  HIDWORD(v118) = v8;
  v109 = 0;
  v15 = 0LL;
  JobIoAttribution = 0;
  if ( (int)v7 > 26 )
  {
    if ( (int)v7 > 39 )
    {
      v43 = v7 - 42;
      if ( !v43 )
      {
        memset_0(v204, 0, 0x48uLL);
        PspLockJobShared((__int64)v14, (__int64)v116);
        JobIoAttribution = PspQueryJobIoAttribution(v14, v204);
        PspUnlockJob((__int64)v14, (__int64)v116);
        v15 = v204;
        goto LABEL_45;
      }
      v92 = v43 - 1;
      if ( !v92 )
      {
        JobIoAttribution = 0;
        v107 = *((_QWORD *)v14 + 224);
        if ( v107 )
        {
          v108 = v112;
          if ( v107 != -1 )
            v108 = 1;
          v112 = v108;
        }
        v15 = &v112;
        goto LABEL_45;
      }
      v93 = v92 - 1;
      if ( !v93 )
      {
        v182 = *((_OWORD *)v14 + 93);
        v15 = (char *)&v182;
        goto LABEL_44;
      }
      v94 = v93 - 2;
      if ( !v94 )
      {
        PspLockJobShared((__int64)v14, (__int64)CurrentThread);
        v135 = *((_QWORD *)v14 + 226);
        PspUnlockJob((__int64)v14, (__int64)v116);
        v15 = (char *)&v135;
        goto LABEL_44;
      }
      v95 = v94 - 1;
      if ( !v95 )
      {
        v115 = (*((_DWORD *)v14 + 389) & 2) != 0;
        v15 = (char *)&v115;
        goto LABEL_44;
      }
      v96 = v95 - 1;
      if ( !v96 )
      {
        PspLockJobShared((__int64)v14, (__int64)CurrentThread);
        v105 = *((_DWORD *)v14 + 272);
        v106 = v130;
        if ( v105 < 5 )
          v106 = 1;
        v130 = __PAIR64__(v105, v106);
        PspUnlockJob((__int64)v14, (__int64)v116);
        v15 = (char *)&v130;
        goto LABEL_44;
      }
      v97 = v96 - 1;
      if ( !v97 )
      {
        PspLockJobShared((__int64)v14, (__int64)CurrentThread);
        v103 = *((_DWORD *)v14 + 274);
        v104 = v129;
        if ( v103 < 8 )
          v104 = 1;
        v129 = __PAIR64__(v103, v104);
        PspUnlockJob((__int64)v14, (__int64)v116);
        v15 = (char *)&v129;
        goto LABEL_44;
      }
      v98 = v97 - 1;
      if ( v98 )
      {
        if ( v98 == 1 )
        {
          PspQueryJobHierarchyAccountingInformation(v14, (__int64)v207);
          v170 = v208;
          v15 = (char *)&v170;
          goto LABEL_44;
        }
        goto LABEL_220;
      }
      PsGetJobServerSilo((__int64)v14, (__int64 *)&Size[1]);
      if ( !PsIsHostSilo(*(__int64 *)&Size[1]) )
      {
        ServerSiloGlobals = (char *)PsGetServerSiloGlobals(*(__int64 *)&Size[1]);
        if ( *((_DWORD *)ServerSiloGlobals + 335) )
        {
          v189[0] = *(_OWORD *)(ServerSiloGlobals + 1368);
          LODWORD(v189[1]) = *((_DWORD *)ServerSiloGlobals + 336);
          v100 = 0;
          v101 = (_WORD *)&v189[1] + 2;
          v102 = (unsigned __int8 *)(ServerSiloGlobals + 1348);
          do
          {
            *v101 = *v102;
            ++v100;
            ++v102;
            ++v101;
          }
          while ( v100 < 0xF );
          JobIoAttribution = 0;
          v15 = (char *)v189;
        }
        else
        {
          JobIoAttribution = -2147483614;
        }
        goto LABEL_45;
      }
    }
    else
    {
      if ( (_DWORD)v7 == 39 )
      {
        if ( v14 )
        {
          PsGetJobServerSilo((__int64)v14, (__int64 *)&Size[1]);
          v63 = *(_QWORD *)&Size[1];
        }
        else
        {
          v63 = PdcCreateWatchdogAroundClientCall();
        }
        v90 = (const void **)PsGetServerSiloGlobals(v63);
        v21 = JobObjectInformation;
        memmove(JobObjectInformation, v90[161], v91);
        v109 = 1;
        v20 = ReturnLength;
        goto LABEL_47;
      }
      if ( (int)v7 <= 33 )
      {
        if ( (_DWORD)v7 != 33 )
        {
          v22 = v7 - 28;
          if ( v22 )
          {
            v25 = v22 - 1;
            if ( !v25 )
            {
              v134 = *((_QWORD *)v14 + 196);
              v15 = (char *)&v134;
              JobIoAttribution = 0;
              v14 = (char *)Object;
              goto LABEL_45;
            }
            v44 = v25 - 1;
            if ( v44 )
            {
              v82 = v44 - 1;
              if ( !v82 )
              {
                JobIoAttribution = -1073741822;
                goto LABEL_45;
              }
              if ( v82 != 1 )
                goto LABEL_220;
              PspLockJobShared((__int64)v14, (__int64)CurrentThread);
              v83 = *((_QWORD *)v14 + 193);
              if ( v83 )
              {
                DWORD2(v160) = 1;
                v84 = *(_DWORD *)(v83 + 48);
                if ( (v84 & 1) != 0 )
                {
                  v9 = 3;
                  DWORD2(v160) = 3;
                  *(_QWORD *)&v160 = *(_QWORD *)(v83 + 40);
                }
                if ( (v84 & 2) != 0 )
                {
                  DWORD2(v160) = v9 | 4;
                  BYTE12(v160) = *(_BYTE *)(v83 + 64);
                }
              }
              PspUnlockJob((__int64)v14, (__int64)v116);
              v15 = (char *)&v160;
            }
            else
            {
              v179 = *((_OWORD *)v14 + 92);
              if ( (_DWORD)v118 == 36 )
              {
                v180 = *((_OWORD *)v14 + 93);
                v181 = *((_DWORD *)v14 + 367);
              }
              v15 = (char *)&v179;
            }
          }
          else
          {
            *(_OWORD *)&v178[24] = 0LL;
            PspLockJobMemoryLimitsShared((__int64)v14, (__int64)CurrentThread);
            *(_QWORD *)&v178[8] = *((_QWORD *)v14 + 90) << 12;
            *(_QWORD *)v178 = *((_QWORD *)v14 + 151) << 12;
            *(_QWORD *)&v178[16] = *((_QWORD *)v14 + 196) << 12;
            v14 = (char *)Object;
            PspUnlockJobMemoryLimitsShared((__int64)Object, (__int64)v116);
            v15 = v178;
          }
          goto LABEL_44;
        }
LABEL_134:
        PspLockJobShared((__int64)v14, (__int64)CurrentThread);
        v35 = (int *)*((_QWORD *)v14 + 152);
        if ( v35 )
        {
          v164 = *v35;
          v162 = *(_OWORD *)(v35 + 2);
          *(_QWORD *)v163 = *((_QWORD *)v35 + 3);
          v166 = *((_QWORD *)v35 + 4) << 12;
          *(_QWORD *)&v163[8] = *((_QWORD *)v35 + 5) << 12;
          v45 = 0;
          v46 = v35 + 15;
          do
          {
            if ( v45 )
            {
              if ( v45 == 1 )
                v47 = &v165;
              else
                v47 = &v163[16];
            }
            else
            {
              v47 = &v168;
            }
            *(_DWORD *)v47 = *(v46 - 3);
            if ( v45 )
            {
              if ( v45 == 1 )
                v48 = &v167;
              else
                v48 = &v163[20];
            }
            else
            {
              v48 = &v169;
            }
            *(_DWORD *)v48 = *v46;
            ++v45;
            ++v46;
          }
          while ( v45 < 3 );
        }
        PspUnlockJob((__int64)v14, (__int64)v116);
        if ( (_DWORD)v118 == 48 )
        {
          v171 = v162;
          v172 = *(_OWORD *)v163;
          *(_QWORD *)&v173 = *(_QWORD *)&v163[16];
          *((_QWORD *)&v173 + 1) = v164 & 0x70204LL;
          v15 = (char *)&v171;
        }
        else if ( (_DWORD)v118 == 56 )
        {
          v174 = v162;
          *(_QWORD *)&v175 = *(_QWORD *)v163;
          *((_QWORD *)&v175 + 1) = v166;
          v176 = *(_OWORD *)&v163[8];
          v177 = v164 & 0x278204LL;
          v15 = (char *)&v174;
        }
        else
        {
          v15 = (char *)&v162;
        }
        goto LABEL_44;
      }
      switch ( (_DWORD)v7 )
      {
        case '"':
LABEL_108:
          LOWORD(v111) = 0;
          BYTE2(v111) = 0;
          PspQueryJobHierarchyAccountingInformation(v14, (__int64)v207);
          v144 = v207[9];
          v146 = v207[10];
          v148 = v207[0];
          PspLockJobExclusive((__int64)v14, (__int64)v116);
          if ( (*((_DWORD *)v14 + 388) & 0x4008) != 0x4008 )
          {
            _InterlockedAnd((volatile signed __int32 *)v14 + 388, 0xFFFFFFFB);
            v14 = (char *)Object;
          }
          PspLockJobMemoryLimitsShared((__int64)v14, 0LL);
          v150 = *((_QWORD *)v14 + 151) << 12;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v14 + 158, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v14 + 158);
          KeAbPostRelease((ULONG_PTR)(v14 + 1264));
          v14 = (char *)Object;
          v26 = (_DWORD *)*((_QWORD *)Object + 152);
          if ( v26 )
          {
            LODWORD(v143) = *v26;
            HIDWORD(v143) = *(_DWORD *)(*((_QWORD *)Object + 152) + 4LL);
            v49 = (_QWORD *)*((_QWORD *)Object + 152);
            v50 = v49[9];
            if ( !v50 )
              v50 = v49[1];
            v145 = v50;
            v51 = v49[10];
            if ( !v51 )
              v51 = v49[2];
            v147 = v51;
            v52 = v49[11];
            if ( !v52 )
              v52 = v49[3];
            v149 = v52;
            v53 = v49[12];
            if ( !v53 )
              v53 = v49[4];
            v154 = v53 << 12;
            v54 = v49[13];
            if ( !v54 )
              v54 = v49[5];
            v151 = v54 << 12;
            v55 = 0;
            v56 = &v111;
            v57 = (int *)(v49 + 6);
            do
            {
              if ( v55 )
              {
                if ( v55 == 1 )
                  v58 = (int *)v156;
                else
                  v58 = &v153;
              }
              else
              {
                v58 = (int *)v158;
              }
              v59 = v57[16];
              if ( v59 )
                *(_BYTE *)v56 = 1;
              else
                v59 = *v57;
              *v58 = v59;
              ++v55;
              ++v57;
              v56 = (ULONG *)((char *)v56 + 1);
            }
            while ( v55 < 3 );
          }
          else
          {
            v143 = 0LL;
            v145 = 0LL;
            v147 = 0LL;
            v149 = 0LL;
            v154 = 0LL;
            v151 = 0LL;
            for ( i = 0; i < 3; ++i )
            {
              if ( i )
              {
                if ( i == 1 )
                  v28 = (int *)v156;
                else
                  v28 = &v153;
              }
              else
              {
                v28 = (int *)v158;
              }
              *v28 = 0;
            }
          }
          v29 = 0;
          v30 = (char *)&v111;
          v120 = 60LL;
          do
          {
            if ( *((_QWORD *)v14 + 152) && (v60 = PspRateControlLimitFlag(v29), (v60 & *v61) != 0) )
              v31 = *(_DWORD *)((char *)v61 + v62);
            else
              v31 = 1;
            v121 = v31;
            PspQueryRateControlHistory((__int64)v14, v31, *v30, &v128, v29);
            if ( v29 )
            {
              if ( v29 == 1 )
                v32 = &v155;
              else
                v32 = (char *)&v152;
            }
            else
            {
              v32 = &v157;
            }
            *(_DWORD *)v32 = v128;
            ++v29;
            v120 += 4LL;
            ++v30;
          }
          while ( v29 < 3 );
          v33 = *((_QWORD *)v14 + 152);
          v34 = (__int64)v116;
          if ( v33 )
          {
            *(_DWORD *)(v33 + 4) = 0;
            memset_0((void *)(*((_QWORD *)v14 + 152) + 72LL), 0, 0x40uLL);
          }
          PspUnlockJob((__int64)v14, v34);
          if ( (_DWORD)v118 == 88 )
          {
            v186[1] = v144;
            v186[2] = v145;
            v186[3] = v146;
            v186[4] = v147;
            v186[5] = v148;
            v186[6] = v149;
            v186[7] = v150;
            v186[8] = v154;
            v186[9] = v151;
            v187 = v152;
            v188 = v153;
            v186[0] = v143 & 0x27820400278204LL;
            v15 = (char *)v186;
          }
          else if ( (_DWORD)v118 == 80 )
          {
            v183[1] = v144;
            v183[2] = v145;
            v183[3] = v146;
            v183[4] = v147;
            v183[5] = v148;
            v183[6] = v149;
            v183[7] = v150;
            v183[8] = v151;
            v184 = v152;
            v185 = v153;
            v183[0] = v143 & 0x7020400070204LL;
            v15 = (char *)v183;
          }
          else
          {
            v15 = (char *)&v143;
          }
          JobIoAttribution = 0;
          if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
            EtwTraceJobSetQuery((_DWORD)v14, v7, (unsigned int)&v143, (unsigned int)&v121, 0, 1830);
          goto LABEL_45;
        case '$':
          if ( (*((_DWORD *)v14 + 388) & 0x40000000) != 0 )
          {
            LODWORD(v161) = *((_DWORD *)v14 + 367);
            ParentSilo = PsGetParentSilo((__int64)v14);
            if ( PsIsHostSilo(ParentSilo) )
              DWORD1(v161) = 0;
            else
              DWORD1(v161) = *(_DWORD *)(ParentSilo + 1468);
            DWORD2(v161) = *((_DWORD *)v14 + 364);
            BYTE12(v161) = PspIsSiloInServerSilo((__int64)v14);
            v15 = (char *)&v161;
            goto LABEL_44;
          }
          break;
        case '%':
          JobSilo = PspGetJobSilo((__int64)v14);
          if ( JobSilo )
          {
            JobIoAttribution = ObGetSiloRootDirectoryPath(JobSilo, (UNICODE_STRING *)P);
            if ( JobIoAttribution >= 0 )
            {
              v109 = 1;
              v88 = LOWORD(P[0]);
              v8 = LOWORD(P[0]) + 16;
              v111 = v8;
              if ( v8 > (unsigned int)v118 )
              {
                JobIoAttribution = -1073741789;
                v21 = JobObjectInformation;
                v20 = ReturnLength;
              }
              else
              {
                v21 = JobObjectInformation;
                *(_WORD *)JobObjectInformation = P[0];
                *((_WORD *)JobObjectInformation + 1) = v88;
                *((_QWORD *)JobObjectInformation + 1) = (char *)JobObjectInformation + 16;
                memmove((char *)JobObjectInformation + 16, P[1], v88);
                v20 = ReturnLength;
                if ( ReturnLength )
                  *ReturnLength = v8;
              }
              ExFreePoolWithTag(P[1], 0);
              goto LABEL_47;
            }
            goto LABEL_45;
          }
          break;
        case '&':
          PsGetJobServerSilo((__int64)v14, (__int64 *)&Size[1]);
          v85 = *(_QWORD *)&Size[1];
          if ( !PsIsHostSilo(*(__int64 *)&Size[1]) )
          {
            v86 = *(_QWORD *)(v85 + 1504);
            *(_QWORD *)((char *)&v136 + 4) = *(_QWORD *)(v86 + 1272);
            BYTE12(v136) = 0;
            LODWORD(v138) = *(_DWORD *)(v86 + 1336);
            HIDWORD(v138) = (unsigned __int16)NtBuildNumber;
            if ( v114 )
            {
              v137 = 0LL;
            }
            else
            {
              v120 = 0LL;
              MmQueryApiSetSchema(&v120, &v124);
              *(_QWORD *)&v137 = *((_QWORD *)PsGetServerSiloGlobals(v85) + 126);
              *((_QWORD *)&v137 + 1) = *(_QWORD *)v120;
            }
            LODWORD(v136) = PsGetServerSiloServiceSessionId(v85);
            JobIoAttribution = 0;
            v15 = (char *)&v136;
            goto LABEL_45;
          }
          break;
        default:
          goto LABEL_220;
      }
    }
    JobIoAttribution = -1073740535;
    goto LABEL_45;
  }
  if ( (_DWORD)v7 == 26 )
  {
    v21 = JobObjectInformation;
    JobIoAttribution = PspQueryJobHierarchyInterferenceCount(v14, JobObjectInformation);
    v109 = JobIoAttribution >= 0;
    HIDWORD(v118) = ((JobIoAttribution >> 31) & 0xFFFFFFF8) + 8;
    goto LABEL_81;
  }
  if ( (int)v7 > 12 )
  {
    if ( (_DWORD)v7 != 13 )
    {
      switch ( (_DWORD)v7 )
      {
        case 0xE:
          if ( ReturnLength )
          {
            v71 = v118;
            if ( (v118 & 0xF) == 0 )
            {
              PspLockJobShared((__int64)v14, (__int64)CurrentThread);
              v72 = 2LL;
              if ( (*((_DWORD *)v14 + 64) & 0x10) != 0 )
              {
                v75 = v14 + 264;
                v76 = &v209;
                do
                {
                  *(_OWORD *)v76 = *v75;
                  *((_OWORD *)v76 + 1) = v75[1];
                  *((_OWORD *)v76 + 2) = v75[2];
                  *((_OWORD *)v76 + 3) = v75[3];
                  *((_OWORD *)v76 + 4) = v75[4];
                  *((_OWORD *)v76 + 5) = v75[5];
                  *((_OWORD *)v76 + 6) = v75[6];
                  v76 += 64;
                  *((_OWORD *)v76 - 1) = v75[7];
                  v75 += 8;
                  --v72;
                }
                while ( v72 );
                *(_QWORD *)v76 = *(_QWORD *)v75;
              }
              else
              {
                v73 = &v209;
                v74 = &KeActiveProcessors;
                do
                {
                  *(_OWORD *)v73 = *(_OWORD *)&v74->Count;
                  *((_OWORD *)v73 + 1) = *(_OWORD *)&v74->StaticBitmap[1];
                  *((_OWORD *)v73 + 2) = *(_OWORD *)&v74->StaticBitmap[3];
                  *((_OWORD *)v73 + 3) = *(_OWORD *)&v74->StaticBitmap[5];
                  *((_OWORD *)v73 + 4) = *(_OWORD *)&v74->StaticBitmap[7];
                  *((_OWORD *)v73 + 5) = *(_OWORD *)&v74->StaticBitmap[9];
                  *((_OWORD *)v73 + 6) = *(_OWORD *)&v74->StaticBitmap[11];
                  v73 += 64;
                  *((_OWORD *)v73 - 1) = *(_OWORD *)&v74->StaticBitmap[13];
                  v74 = (struct _KAFFINITY_EX *)((char *)v74 + 128);
                  --v72;
                }
                while ( v72 );
                *(_QWORD *)v73 = *(_QWORD *)&v74->Count;
              }
              PspUnlockJob((__int64)v14, (__int64)v116);
              v77 = v209;
              memset_0(v211, 0, 16LL * v209);
              if ( (_WORD)v77 )
              {
                v78 = v211;
                v79 = &v210;
                v80 = 0;
                v81 = v117;
                do
                {
                  *((_WORD *)v78 + 4) = v81;
                  *(_QWORD *)v78 = *(_QWORD *)v79;
                  v81 = ++v80;
                  v79 += 8;
                  v78 += 16;
                }
                while ( v80 < (unsigned __int16)v77 );
              }
              HIDWORD(v118) = 16 * v77;
              v8 = 16 * v77;
              if ( v71 < 16 * v77 )
                v8 = v71;
              v111 = v8;
              JobIoAttribution = v71 < 16 * v77 ? 0xC0000023 : 0;
              v109 = 1;
              v21 = JobObjectInformation;
              memmove(JobObjectInformation, v211, v8);
              v20 = ReturnLength;
              goto LABEL_47;
            }
          }
LABEL_215:
          JobIoAttribution = -1073741811;
          goto LABEL_45;
        case 0xF:
          PspLockJobShared((__int64)v14, (__int64)CurrentThread);
          v65 = *((_QWORD *)v14 + 155);
          if ( v65 )
          {
            v66 = *(_DWORD *)(v65 + 40);
            if ( (v66 & 0x40) == 0 )
            {
              HIDWORD(v132) = *(_DWORD *)(v65 + 44);
              v67 = ((v66 & 4 | 2u) >> 1) | 4;
              if ( (v66 & 1) == 0 )
                v67 = (v66 & 4 | 2u) >> 1;
              v68 = v67 | 8;
              if ( (v66 & 2) == 0 )
                v68 = v67;
              v69 = v68 | 0x10;
              if ( (v66 & 0x20) == 0 )
                v69 = v68;
              v70 = v69 | 0x20;
              if ( (v66 & 0x80) == 0 )
                v70 = v69;
              LODWORD(v132) = v70;
            }
          }
          PspUnlockJob((__int64)v14, (__int64)v116);
          v15 = (char *)&v132;
          goto LABEL_44;
        case 0x10:
          v127 = *((_DWORD *)v14 + 276);
          v15 = (char *)&v127;
          goto LABEL_44;
        case 0x11:
          v133 = *((_QWORD *)v14 + 71);
          v15 = (char *)&v133;
          goto LABEL_44;
        case 0x12:
          WORD3(v159) = 0;
          PspLockJobShared((__int64)v14, (__int64)CurrentThread);
          v64 = *((_DWORD *)v14 + 388);
          BYTE4(v159) = (v64 & 0x200) != 0;
          BYTE5(v159) = (v64 & 0x80000) != 0;
          LODWORD(v159) = ~(unsigned __int8)*((_DWORD *)v14 + 389) & 8 | 7;
          *((_QWORD *)&v159 + 1) = *((_QWORD *)v14 + 148);
          PspUnlockJob((__int64)v14, (__int64)v116);
          v15 = (char *)&v159;
          goto LABEL_44;
      }
      if ( (_DWORD)v7 != 19 )
      {
        if ( (_DWORD)v7 == 20 )
        {
          NotificationChannel = PspAllocateAndQueryNotificationChannel((__int64)CurrentThread, (__int64)v14, v206);
          v15 = (char *)v206;
          if ( NotificationChannel < 0 )
            v15 = 0LL;
          JobIoAttribution = 0;
          if ( NotificationChannel < 0 )
            JobIoAttribution = NotificationChannel;
          goto LABEL_45;
        }
        if ( (_DWORD)v7 != 21 )
          goto LABEL_220;
        v113 = (*((_DWORD *)v14 + 388) & 0x400) != 0;
        v15 = (char *)&v113;
        goto LABEL_44;
      }
      goto LABEL_72;
    }
    goto LABEL_108;
  }
  if ( (_DWORD)v7 == 12 )
    goto LABEL_134;
  if ( (int)v7 > 6 )
  {
    if ( (_DWORD)v7 != 8 )
    {
      switch ( (_DWORD)v7 )
      {
        case 9:
LABEL_35:
          PspLockJobShared((__int64)v14, (__int64)CurrentThread);
          v193 = *((_QWORD *)v14 + 30);
          v194 = *((_QWORD *)v14 + 31);
          v195 = *((_DWORD *)v14 + 65);
          v197 = (unsigned __int8)v14[1101];
          v198 = *((_DWORD *)v14 + 145);
          v17 = 32;
          v117 = 32;
          v18 = 0;
          v19 = *((_WORD *)v14 + 132);
          while ( v18 < v19 )
          {
            if ( *(_QWORD *)&v14[8 * v18 + 272] )
            {
              if ( v17 != 32 )
                goto LABEL_207;
              v17 = v18;
              v117 = v18;
            }
            ++v18;
          }
          if ( v17 != 32 )
          {
            v196 = *(_QWORD *)&v14[8 * v17 + 272];
            goto LABEL_39;
          }
LABEL_207:
          v196 = 0LL;
LABEL_39:
          Src[0] = *((_QWORD *)v14 + 28);
          Src[1] = *((_QWORD *)v14 + 29);
          v192 = (PspGetJobLimitInformationValidFlags((unsigned int)v7, (unsigned int)v118) | 0x7FFF) & *((_DWORD *)v14 + 64);
          if ( (_DWORD)v7 == 9 )
          {
            PspLockJobMemoryLimitsShared((__int64)v14, 0LL);
            v199 = *((_QWORD *)v14 + 86) << 12;
            v200 = *((_QWORD *)v14 + 87) << 12;
            v202 = *((_QWORD *)v14 + 90) << 12;
            v203 = *((_QWORD *)v14 + 88) << 12;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v14 + 158, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v14 + 158);
            KeAbPostRelease((ULONG_PTR)(v14 + 1264));
            v14 = (char *)Object;
            PspUnlockJob((__int64)Object, (__int64)v116);
            v201 = *((_QWORD *)v14 + 89) << 12;
          }
          else
          {
            PspUnlockJob((__int64)v14, (__int64)v116);
          }
          v15 = (char *)Src;
          goto LABEL_44;
        case 0xA:
          PspLockJobListShared(CurrentThread);
          PspUnlockJobListShared(v116);
          v15 = (char *)&v131;
          goto LABEL_44;
        case 0xB:
          if ( ReturnLength )
          {
            v36 = v118;
            if ( (v118 & 1) == 0 )
            {
              PspLockJobShared((__int64)v14, (__int64)CurrentThread);
              v37 = 0;
              v38 = *((_WORD *)v14 + 132);
              if ( v38 )
              {
                v39 = v14 + 272;
                v40 = 0;
                v41 = 0;
                v42 = v117;
                do
                {
                  if ( *v39 )
                  {
                    v212[v37++] = v42;
                    v40 = v41;
                  }
                  v42 = ++v40;
                  ++v39;
                  v41 = v40;
                }
                while ( v40 < v38 );
              }
              PspUnlockJob((__int64)v14, (__int64)v116);
              v8 = 2 * v37;
              HIDWORD(v118) = v8;
              v109 = 1;
              JobIoAttribution = v36 < v8 ? 0xC0000023 : 0;
              if ( v8 > v36 )
                v8 = Size[0];
              Size[0] = v8;
              v21 = JobObjectInformation;
              memmove(JobObjectInformation, v212, v8);
              v20 = ReturnLength;
              goto LABEL_47;
            }
          }
          goto LABEL_215;
      }
LABEL_220:
      JobIoAttribution = -1073741821;
      goto LABEL_45;
    }
LABEL_72:
    PspQueryJobHierarchyAccountingInformation(v14, (__int64)v207);
    v15 = (char *)v207;
    goto LABEL_44;
  }
  switch ( (_DWORD)v7 )
  {
    case 6:
      v126 = *((_DWORD *)v14 + 137);
      v15 = (char *)&v126;
      goto LABEL_44;
    case 1:
      goto LABEL_72;
    case 2:
      goto LABEL_35;
    case 3:
      HIDWORD(v118) = 0;
      v21 = JobObjectInformation;
      JobIoAttribution = PspQueryJobHierarchyProcessIdList(v14, JobObjectInformation, v118, (_DWORD *)&v118 + 1);
      v109 = 1;
LABEL_81:
      v20 = ReturnLength;
      goto LABEL_47;
  }
  if ( (_DWORD)v7 != 4 )
  {
    if ( (_DWORD)v7 == 5 )
    {
      v142 = 0LL;
      v109 = 1;
      *(_OWORD *)JobObjectInformation = 0LL;
      *((_OWORD *)JobObjectInformation + 1) = 0LL;
      *((_QWORD *)JobObjectInformation + 4) = v142;
      v20 = ReturnLength;
      goto LABEL_46;
    }
    goto LABEL_220;
  }
  PspLockJobShared((__int64)v14, (__int64)CurrentThread);
  v125 = *((_DWORD *)v14 + 136);
  PspUnlockJob((__int64)v14, (__int64)v116);
  v15 = (char *)&v125;
LABEL_44:
  JobIoAttribution = 0;
LABEL_45:
  v20 = ReturnLength;
LABEL_46:
  v21 = JobObjectInformation;
LABEL_47:
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x79517350u);
  if ( JobIoAttribution >= 0 && !v109 )
    memmove(v21, v15, v8);
  if ( v20 )
    *v20 = HIDWORD(v118);
  return JobIoAttribution;
}
