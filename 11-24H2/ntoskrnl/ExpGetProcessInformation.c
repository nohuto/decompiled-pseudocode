/*
 * XREFs of ExpGetProcessInformation @ 0x140ADC640
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     KeFlushProcessWriteBuffers @ 0x14039E2AC (KeFlushProcessWriteBuffers.c)
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     KeQueryValuesThread @ 0x1403CAE20 (KeQueryValuesThread.c)
 *     PsQueryThreadStartAddress @ 0x1403F6A60 (PsQueryThreadStartAddress.c)
 *     PsIsProcessInSilo @ 0x140407120 (PsIsProcessInSilo.c)
 *     RtlQueryPackageIdentity @ 0x140422B10 (RtlQueryPackageIdentity.c)
 *     Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline @ 0x1404813E8 (Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline.c)
 *     PsGetProcessActiveThreadCount @ 0x1404C0FE0 (PsGetProcessActiveThreadCount.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExpCopyProcessInfo @ 0x14085DF24 (ExpCopyProcessInfo.c)
 *     ObGetProcessHandleCount @ 0x14085E360 (ObGetProcessHandleCount.c)
 *     PsQueryProcessEnergyValues @ 0x14085EE30 (PsQueryProcessEnergyValues.c)
 *     ExGetNextProcess @ 0x140860570 (ExGetNextProcess.c)
 *     ExpSysInfoShouldSkipProcess @ 0x140860880 (ExpSysInfoShouldSkipProcess.c)
 *     SeQueryUserSidToken @ 0x1408E1C90 (SeQueryUserSidToken.c)
 *     ExpGetNextProcessThread @ 0x140940F10 (ExpGetNextProcessThread.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409470EC (ExCheckFullProcessInformationAccess.c)
 *     PsQueryProcessAttributes @ 0x1409C65D0 (PsQueryProcessAttributes.c)
 */

NTSTATUS __fastcall ExpGetProcessInformation(unsigned int *a1, unsigned int a2, unsigned int *a3, _DWORD *a4, int a5)
{
  __int64 v6; // rcx
  int v7; // eax
  bool v8; // cf
  NTSTATUS result; // eax
  unsigned int v10; // esi
  KPROCESSOR_MODE PreviousMode; // bl
  BOOLEAN v12; // bl
  char v13; // al
  __int64 *NextProcess; // r12
  unsigned int v15; // r14d
  char *v16; // rsi
  unsigned int *v17; // r13
  int SessionId; // eax
  int v19; // ebx
  unsigned int *v20; // rbx
  unsigned int v21; // ecx
  int v22; // edi
  unsigned int *v23; // rcx
  __int64 v24; // r13
  int v25; // eax
  __int64 v26; // rax
  char *v27; // rsi
  _QWORD *v28; // rdx
  PVOID *NextProcessThread; // rax
  __int64 v30; // rbx
  int v31; // ecx
  int v32; // ecx
  __int64 v33; // rcx
  unsigned __int64 ThreadStartAddress; // rax
  unsigned __int64 v35; // rax
  char *v36; // r13
  char *v37; // rbx
  __int64 *v38; // rdi
  __int64 v39; // rax
  int v40; // eax
  bool v41; // cl
  int v42; // eax
  unsigned int v43; // eax
  _OWORD *v44; // rax
  _OWORD *v45; // rcx
  __int64 v46; // rdx
  int v47; // eax
  char v48; // cl
  void *v49; // rdi
  ULONG_PTR v50; // rbx
  ULONG_PTR v51; // r12
  size_t v52; // rdx
  unsigned int v53; // r15d
  __int64 *v54; // r10
  char *v55; // rax
  unsigned int v56; // ecx
  _WORD *v57; // r9
  _WORD *v58; // rdx
  unsigned int v59; // eax
  unsigned int v60; // r8d
  unsigned __int64 v61; // rbx
  unsigned int v62; // r15d
  int v63; // edi
  PVOID *v64; // rsi
  _DWORD *v65; // rcx
  int v66; // [rsp+50h] [rbp-5C8h]
  int v67; // [rsp+54h] [rbp-5C4h]
  int v68; // [rsp+54h] [rbp-5C4h]
  int v69; // [rsp+58h] [rbp-5C0h]
  PVOID *v70; // [rsp+60h] [rbp-5B8h]
  __int64 *Object; // [rsp+68h] [rbp-5B0h]
  char v72; // [rsp+70h] [rbp-5A8h]
  char v73; // [rsp+71h] [rbp-5A7h]
  unsigned int v74; // [rsp+74h] [rbp-5A4h]
  char v75[8]; // [rsp+78h] [rbp-5A0h] BYREF
  __int64 *v76; // [rsp+80h] [rbp-598h]
  PVOID *v77; // [rsp+88h] [rbp-590h]
  void *v78; // [rsp+90h] [rbp-588h]
  unsigned int *v79; // [rsp+98h] [rbp-580h]
  bool v80; // [rsp+A4h] [rbp-574h]
  int v81; // [rsp+ACh] [rbp-56Ch]
  unsigned int v82; // [rsp+B4h] [rbp-564h]
  unsigned int v83; // [rsp+B8h] [rbp-560h]
  BOOL v84; // [rsp+BCh] [rbp-55Ch]
  size_t Size; // [rsp+C0h] [rbp-558h] BYREF
  unsigned int *v86; // [rsp+C8h] [rbp-550h]
  unsigned int *v87; // [rsp+D0h] [rbp-548h]
  ULONG_PTR AppIdSize; // [rsp+D8h] [rbp-540h] BYREF
  ULONG_PTR PackageSize; // [rsp+E0h] [rbp-538h] BYREF
  char *v90; // [rsp+E8h] [rbp-530h]
  NTSTATUS AccessStatus; // [rsp+F0h] [rbp-528h] BYREF
  unsigned int *v92; // [rsp+F8h] [rbp-520h]
  char *v93; // [rsp+100h] [rbp-518h]
  unsigned int v94; // [rsp+108h] [rbp-510h]
  ACCESS_MASK GrantedAccess; // [rsp+10Ch] [rbp-50Ch] BYREF
  unsigned int *v96; // [rsp+110h] [rbp-508h]
  char *v97; // [rsp+118h] [rbp-500h]
  _WORD *v98; // [rsp+120h] [rbp-4F8h]
  int v99; // [rsp+148h] [rbp-4D0h]
  unsigned __int64 CurrentServerSilo; // [rsp+158h] [rbp-4C0h]
  unsigned int *v101; // [rsp+160h] [rbp-4B8h]
  unsigned __int64 v102; // [rsp+168h] [rbp-4B0h]
  _OWORD v103[2]; // [rsp+170h] [rbp-4A8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+190h] [rbp-488h] BYREF
  __int128 v105; // [rsp+1B0h] [rbp-468h] BYREF
  __int128 v106; // [rsp+1C0h] [rbp-458h]
  __int128 v107; // [rsp+1D0h] [rbp-448h]
  __int128 v108; // [rsp+1E0h] [rbp-438h]
  __int128 v109; // [rsp+1F0h] [rbp-428h]
  __int128 v110; // [rsp+200h] [rbp-418h]
  __int64 v111; // [rsp+210h] [rbp-408h]
  void *v112; // [rsp+220h] [rbp-3F8h]
  _OWORD Src[4]; // [rsp+230h] [rbp-3E8h] BYREF
  int v114; // [rsp+270h] [rbp-3A8h]
  _OWORD v115[28]; // [rsp+280h] [rbp-398h] BYREF
  WCHAR AppId[72]; // [rsp+440h] [rbp-1D8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+4D0h] [rbp-148h] BYREF

  v92 = a1;
  v101 = a1;
  v86 = a3;
  AppIdSize = 0LL;
  memset_0(v115, 0, 0x1B8uLL);
  v81 = 0;
  LODWORD(Size) = 0;
  v74 = 0;
  PackageSize = 0LL;
  v76 = 0LL;
  v105 = 0LL;
  v106 = 0LL;
  v107 = 0LL;
  v108 = 0LL;
  v109 = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  v75[0] = 0;
  v77 = 0LL;
  memset(v103, 0, sizeof(v103));
  v67 = 0;
  v90 = 0LL;
  memset(Src, 0, sizeof(Src));
  v114 = 0;
  v78 = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( a5 == 252 )
  {
    v73 = 0;
    v82 = 48;
    v83 = 0;
    v87 = v92;
    v79 = 0LL;
  }
  else
  {
    v87 = 0LL;
    if ( a5 == 253 )
    {
      v73 = 0;
      v82 = 12;
      v67 = 12;
      v83 = 0;
      v96 = v92;
      v79 = 0LL;
      goto LABEL_11;
    }
    v82 = 624;
    v79 = v92;
    v7 = 136;
    v6 = 80LL;
    if ( a5 == 5 )
      v7 = 80;
    v83 = v7;
    v73 = a5 != 5;
  }
  v96 = 0LL;
LABEL_11:
  v94 = v82;
  v8 = a2 < v82;
  if ( a2 < v82 )
  {
    if ( !a3 )
      return -1073741820;
    v8 = a2 < v82;
  }
  v10 = v8 ? 0xC0000004 : 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a5 != 148 || (result = ExCheckFullProcessInformationAccess(PreviousMode), result >= 0) )
  {
    AccessStatus = 0;
    GrantedAccess = 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    v84 = 0;
    if ( !PreviousMode )
      goto LABEL_23;
    if ( (unsigned int)Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline() )
      v84 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) == 0;
    SeCaptureSubjectContext(&SubjectContext);
    v12 = SeAccessCheck(
            SeMediumDaclSd,
            &SubjectContext,
            0,
            0x20000u,
            0,
            0LL,
            (PGENERIC_MAPPING)&ExpRestrictedGenericMapping,
            1,
            &GrantedAccess,
            &AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
    if ( v12 && AccessStatus >= 0 )
LABEL_23:
      v13 = 0;
    else
      v13 = 1;
    v72 = v13;
    if ( (unsigned int)(a5 - 252) > 1 && a2 )
    {
      LOBYTE(v6) = 1;
      KeFlushProcessWriteBuffers(v6);
    }
    CurrentServerSilo = PsGetCurrentServerSilo();
    NextProcess = (__int64 *)PsIdleProcess;
    Object = (__int64 *)PsIdleProcess;
    v76 = (__int64 *)PsIdleProcess;
    v66 = v10;
    v70 = v77;
    v15 = v67;
    v16 = (char *)v78;
    v17 = v79;
    while ( 1 )
    {
      if ( !NextProcess )
      {
        if ( v66 < 0 )
          goto LABEL_207;
        if ( a5 == 252 )
        {
          if ( !v87 )
          {
LABEL_207:
            v64 = v70;
            goto LABEL_208;
          }
        }
        else if ( !v17 )
        {
          goto LABEL_207;
        }
        if ( a5 == 252 )
          *v87 = 0;
        else
          *v17 = 0;
        v64 = v70;
LABEL_208:
        if ( v86 )
          *v86 = v15;
LABEL_212:
        v54 = Object;
LABEL_213:
        if ( v54 && v54 != PsIdleProcess )
          ObfDereferenceObjectWithTag(v54, 0x6E457350u);
        if ( v64 )
        {
          if ( v64[68] != PsIdleProcess )
            ObfDereferenceObjectWithTag(v64, 0x6E457350u);
        }
        return v66;
      }
      if ( !ExpSysInfoShouldSkipProcess((__int64)NextProcess) && (!a4 || NextProcess != PsIdleProcess) )
      {
        SessionId = PsGetSessionId((__int64)NextProcess);
        v19 = SessionId;
        v99 = SessionId;
        if ( (!a4 || SessionId == *a4) && PsIsProcessInSilo((struct _KPROCESS *)NextProcess, CurrentServerSilo) )
          break;
      }
LABEL_195:
      if ( NextProcess == PsIdleProcess )
        NextProcess = 0LL;
      NextProcess = ExGetNextProcess(NextProcess, v72);
      Object = NextProcess;
      v76 = NextProcess;
    }
    if ( a5 == 253 )
    {
      v20 = v96;
      ++*v96;
      v20[1] += PsGetProcessActiveThreadCount((__int64)NextProcess);
      v20[2] += ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)NextProcess, 0LL);
    }
    else
    {
      v21 = v15 + v94;
      if ( a5 == 252 )
      {
        v87 = (unsigned int *)((char *)v101 + v15);
        v74 = v82;
        if ( v21 < v15 )
        {
          v15 = -1;
          v22 = -1073741675;
        }
        else
        {
          v15 += v94;
          v22 = 0;
        }
        if ( v22 < 0 )
          goto LABEL_210;
        if ( v15 > a2 )
        {
          v66 = -1073741820;
          if ( !v86 )
            goto LABEL_211;
        }
        if ( v66 >= 0 )
        {
          v23 = v87;
          *((_QWORD *)v87 + 1) = NextProcess[58];
          *((_QWORD *)v23 + 2) = NextProcess[90];
          *((_QWORD *)v23 + 3) = NextProcess[207];
          *((_QWORD *)v23 + 5) = 0LL;
          v23[8] = 0;
          v16 = (char *)v92 + v15;
          v78 = v16;
        }
      }
      else
      {
        v24 = (__int64)v101 + v15;
        v79 = (unsigned int *)v24;
        v74 = v82;
        if ( v21 < v15 )
        {
          v15 = -1;
          v68 = -1;
          v22 = -1073741675;
        }
        else
        {
          v15 += v94;
          v68 = v21;
          v22 = 0;
        }
        v69 = v22;
        if ( v22 < 0 )
          goto LABEL_210;
        v105 = 0LL;
        v106 = 0LL;
        v107 = 0LL;
        v108 = 0LL;
        v109 = 0LL;
        v110 = 0LL;
        v111 = 0LL;
        if ( v15 <= a2 )
        {
          v25 = ExpCopyProcessInfo(v24, (__int64)NextProcess, v73, &v105);
          v22 = v25;
          v69 = v25;
          if ( v25 < 0 )
          {
            v66 = v25;
LABEL_211:
            v64 = v70;
            goto LABEL_212;
          }
          *(_QWORD *)v24 = 0LL;
          *(_DWORD *)(v24 + 100) = v19;
          *(_QWORD *)(v24 + 64) = 0LL;
          *(_DWORD *)(v24 + 56) = 0;
          if ( NextProcess == PsIdleProcess )
            *(_QWORD *)(v24 + 96) = 0LL;
          if ( NextProcess == (__int64 *)PsSecureSystemProcess )
          {
            v26 = qword_140E2DD28 << 12;
            *(_QWORD *)(v24 + 144) = qword_140E2DD28 << 12;
            *(_QWORD *)(v24 + 8) = v26;
          }
          if ( v22 < 0 )
          {
LABEL_210:
            v66 = v22;
            goto LABEL_211;
          }
        }
        else
        {
          v66 = -1073741820;
          if ( !v86 )
            goto LABEL_211;
        }
        v27 = (char *)(v24 + 256);
        v78 = (void *)(v24 + 256);
        v28 = 0LL;
        while ( 1 )
        {
          NextProcessThread = (PVOID *)ExpGetNextProcessThread((char *)NextProcess, v28);
          v77 = NextProcessThread;
          v70 = NextProcessThread;
          v30 = (__int64)NextProcessThread;
          if ( !NextProcessThread )
            break;
          if ( *((_BYTE *)NextProcessThread + 4) )
          {
            v28 = NextProcessThread;
          }
          else
          {
            v31 = v15 + v83;
            if ( v15 + v83 < v15 )
            {
              v15 = -1;
              v68 = -1;
              v22 = -1073741675;
            }
            else
            {
              v15 += v83;
              v68 = v31;
              v22 = 0;
            }
            v69 = v22;
            if ( v22 < 0 )
              goto LABEL_210;
            v74 += v83;
            if ( v15 <= a2 )
            {
              KeQueryValuesThread((__int64)NextProcessThread, (__int64)v103);
              v32 = BYTE8(v103[0]);
              if ( BYTE8(v103[0]) == 4 )
              {
                v74 -= v83;
                v15 -= v83;
                v68 = v15;
                v28 = (_QWORD *)v30;
              }
              else
              {
                *((_DWORD *)v27 + 6) = v103[0];
                *((_DWORD *)v27 + 17) = v32;
                *((_DWORD *)v27 + 18) = BYTE9(v103[0]);
                *((_DWORD *)v27 + 14) = SBYTE10(v103[0]);
                *((_DWORD *)v27 + 15) = SBYTE11(v103[0]);
                v33 = KeMaximumIncrement;
                *(_QWORD *)v27 = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(v30 + 652);
                *((_QWORD *)v27 + 1) = v33 * *(unsigned int *)(v30 + 732);
                *((_QWORD *)v27 + 2) = *(_QWORD *)(v30 + 1216);
                *((_DWORD *)v27 + 16) = *(_DWORD *)(v30 + 340);
                *(_OWORD *)(v27 + 40) = *(_OWORD *)(v30 + 1288);
                ThreadStartAddress = PsQueryThreadStartAddress(v30, 1);
                v102 = ThreadStartAddress;
                if ( v84 || v72 && ThreadStartAddress > 0x7FFFFFFEFFFFLL )
                  *((_QWORD *)v27 + 4) = 0LL;
                else
                  *((_QWORD *)v27 + 4) = ThreadStartAddress;
                if ( v73 )
                {
                  if ( v84 || v72 )
                  {
                    *((_QWORD *)v27 + 10) = 0LL;
                    *((_QWORD *)v27 + 11) = 0LL;
                  }
                  else
                  {
                    *((_QWORD *)v27 + 10) = *(_QWORD *)(v30 + 56);
                    v27 = (char *)v78;
                    *((_QWORD *)v78 + 11) = *(_QWORD *)(v30 + 48);
                    NextProcess = v76;
                    Object = v76;
                    v30 = (__int64)v77;
                    v15 = v68;
                    v24 = (__int64)v79;
                  }
                  v35 = *(_QWORD *)(v30 + 1376);
                  v102 = v35;
                  if ( v84 || v72 && v35 > 0x7FFFFFFEFFFFLL )
                    *((_QWORD *)v27 + 12) = 0LL;
                  else
                    *((_QWORD *)v27 + 12) = v35;
                  *((_QWORD *)v27 + 13) = *(_QWORD *)(v30 + 240);
                  *((_QWORD *)v27 + 14) = 0LL;
                  *((_QWORD *)v27 + 15) = 0LL;
                  *((_QWORD *)v27 + 16) = 0LL;
                }
                ++*(_DWORD *)(v24 + 4);
                v27 += v83;
                v78 = v27;
                v28 = (_QWORD *)v30;
              }
            }
            else
            {
              v66 = -1073741820;
              if ( !v86 )
                goto LABEL_211;
              v28 = NextProcessThread;
            }
          }
        }
        v36 = v27;
        v93 = v27;
        v16 = v27 + 368;
        v78 = v16;
        if ( v66 >= 0 )
        {
          PsQueryProcessAttributes((__int64)NextProcess, v75, 0LL);
          *(_QWORD *)(v36 + 52) = 0LL;
          *((_DWORD *)v36 + 84) = 0;
          v37 = v93;
          *((_QWORD *)v93 + 43) = NextProcess[213] << 12;
          *((_QWORD *)v37 + 5) = v107;
          *((_DWORD *)v37 + 12) = 0;
          if ( v75[0] )
            *((_DWORD *)v37 + 12) = 1;
          v38 = v76;
          v39 = v76[199];
          if ( v39 )
          {
            *(_OWORD *)v37 = *(_OWORD *)v39;
            *((_OWORD *)v37 + 1) = *(_OWORD *)(v39 + 16);
            *((_QWORD *)v37 + 4) = *(_QWORD *)(v39 + 32);
          }
          else
          {
            *(_OWORD *)v37 = 0LL;
            *((_OWORD *)v37 + 1) = 0LL;
            *((_QWORD *)v37 + 4) = 0LL;
          }
          v40 = *((_DWORD *)v38 + 383);
          if ( (v40 & 0x1000) != 0 )
          {
            *((_DWORD *)v37 + 12) = *((_DWORD *)v37 + 12) & 0xFFFFFFE1 | 2;
          }
          else if ( v38 == (__int64 *)PsSecureSystemProcess )
          {
            *((_DWORD *)v37 + 12) = *((_DWORD *)v37 + 12) & 0xFFFFFFE1 | 4;
          }
          else if ( (v40 & 0x40000000) != 0 )
          {
            *((_DWORD *)v37 + 12) = *((_DWORD *)v37 + 12) & 0xFFFFFFE1 | 6;
          }
          else
          {
            if ( *((_QWORD *)&CmpRegistryProcess + 1) )
              v41 = v38 == *((__int64 **)&CmpRegistryProcess + 1);
            else
              v41 = 0;
            v80 = v41;
            v42 = *((_DWORD *)v36 + 12);
            if ( v41 )
              v43 = v42 & 0xFFFFFFE1 | 8;
            else
              v43 = v42 & 0xFFFFFFE1;
            *((_DWORD *)v36 + 12) = v43;
          }
          *((_QWORD *)v37 + 45) = v38[207];
          PsQueryProcessEnergyValues(v38, v115);
          v44 = v37 + 64;
          v45 = v115;
          v46 = 2LL;
          do
          {
            *v44 = *v45;
            v44[1] = v45[1];
            v44[2] = v45[2];
            v44[3] = v45[3];
            v44[4] = v45[4];
            v44[5] = v45[5];
            v44[6] = v45[6];
            v44 += 8;
            *(v44 - 1) = v45[7];
            v45 += 8;
            --v46;
          }
          while ( v46 );
          *v44 = *v45;
          if ( v38[84] )
            *((_DWORD *)v36 + 88) = *(_DWORD *)(v76[84] + 1468);
          else
            *((_DWORD *)v36 + 88) = 0;
          NextProcess = v76;
          Object = v76;
          if ( *((_DWORD *)v76 + 17)
            || KeHeteroSystem
            && ((v47 = KiProcessPolicyToQosMappingTable[(*((_DWORD *)v76 + 34) >> 7) & 0xF], v47 != 7)
             || *((_BYTE *)v76 + 839) != 1
              ? (v48 = 0)
              : (v48 = 1),
                PpmPerfQosEnabled && (((v47 - 1) & 0xFFFFFFFA) == 0 || v48)) )
          {
            *((_DWORD *)v37 + 12) |= 0x20u;
          }
          if ( v69 < 0 )
          {
            v66 = v69;
            v70 = v77;
            goto LABEL_211;
          }
          v36 = v93;
          v70 = v77;
          v15 = v68;
          v16 = (char *)v78;
        }
        if ( a5 == 148 )
        {
          v49 = (void *)PsReferencePrimaryTokenWithTag((__int64)NextProcess, 0x746C6644u);
          v112 = v49;
          SeQueryUserSidToken((__int64)v49, Src, 0x44u, (unsigned int *)&Size);
          PackageSize = 254LL;
          AppIdSize = 130LL;
          if ( RtlQueryPackageIdentity(v49, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL) >= 0 )
          {
            v51 = AppIdSize;
            v50 = PackageSize;
          }
          else
          {
            v50 = 0LL;
            PackageSize = 0LL;
            v51 = 0LL;
            AppIdSize = 0LL;
          }
          ObFastDereferenceObject(Object + 73, (ULONG_PTR)v49, 0x746C6644u);
          v52 = (unsigned int)Size;
          v53 = (Size + 7) & 0xFFFFFFF8;
          v81 = v53;
          if ( v53 + v15 < v15 )
          {
            v15 = -1;
            v22 = -1073741675;
          }
          else
          {
            v15 += v53;
            v22 = 0;
          }
          if ( v22 < 0 )
            goto LABEL_210;
          v74 += v53;
          if ( v15 <= a2 )
          {
            *((_DWORD *)v36 + 13) = 368;
            memmove(v16, Src, v52);
            v16 += v53;
            v78 = v16;
          }
          else
          {
            v66 = -1073741820;
            if ( !v86 )
              goto LABEL_211;
          }
          if ( v50 - 1 <= 0xFFFFFFFE )
          {
            v81 = v50;
            if ( (unsigned int)v50 + v15 < v15 )
            {
              v15 = -1;
              v22 = -1073741675;
            }
            else
            {
              v15 += v50;
              v22 = 0;
            }
            if ( v22 < 0 )
              goto LABEL_210;
            v74 += v50;
            if ( v15 <= a2 )
            {
              *((_DWORD *)v36 + 14) = (_DWORD)v16 - (_DWORD)v36;
              memmove(v16, PackageFullName, (unsigned int)v50);
              v16 += (unsigned int)v50;
              v78 = v16;
            }
            else
            {
              v66 = -1073741820;
              if ( !v86 )
                goto LABEL_211;
            }
          }
          if ( v51 - 1 <= 0xFFFFFFFE )
          {
            v81 = v51;
            if ( (unsigned int)v51 + v15 < v15 )
            {
              v15 = -1;
              v22 = -1073741675;
            }
            else
            {
              v15 += v51;
              v22 = 0;
            }
            if ( v22 < 0 )
              goto LABEL_210;
            v74 += v51;
            if ( v15 <= a2 )
            {
              *((_DWORD *)v36 + 84) = (_DWORD)v16 - (_DWORD)v36;
              memmove(v16, AppId, (unsigned int)v51);
              v16 += (unsigned int)v51;
              v78 = v16;
            }
            else
            {
              v66 = -1073741820;
              if ( !v86 )
                goto LABEL_211;
            }
          }
        }
        v17 = v79;
      }
    }
    if ( a5 != 253 )
    {
      v54 = Object;
      if ( Object != PsIdleProcess )
      {
        if ( Object == (__int64 *)PsInitialSystemProcess )
        {
          v55 = ExpSystemProcessName;
        }
        else if ( Object == (__int64 *)PsSecureSystemProcess )
        {
          v55 = ExpSecureSystemProcessName;
        }
        else
        {
          v55 = (char *)L"$&";
          if ( (*((_DWORD *)Object + 383) & 0x40000000) == 0 )
            v55 = (char *)Object[106];
        }
        v97 = v55;
        v56 = *(unsigned __int16 *)v55;
        v81 = v56;
        LODWORD(Size) = v56;
        v57 = (_WORD *)*((_QWORD *)v55 + 1);
        v58 = v57;
        v98 = v57;
        v59 = v56;
        v60 = v56;
        if ( a5 != 148 && v56 )
        {
          v58 = &v57[(unsigned __int64)v56 >> 1];
          v98 = v58;
          while ( v58 != v57 )
          {
            v98 = --v58;
            if ( *v58 == 92 )
            {
              v98 = ++v58;
              break;
            }
          }
          v56 -= 2 * (v58 - v57);
          v60 = v56;
          LODWORD(Size) = v56;
          v59 = v56;
        }
        v61 = v60;
        v62 = (v59 + 9) & 0xFFFFFFF8;
        v81 = v62;
        if ( v62 + v15 < v15 )
        {
          v15 = -1;
          v63 = -1073741675;
        }
        else
        {
          v15 += v62;
          v63 = 0;
        }
        if ( v63 < 0 )
        {
          v66 = v63;
LABEL_179:
          v64 = v70;
          goto LABEL_213;
        }
        v74 += v62;
        if ( v15 <= a2 )
        {
          v90 = v16;
          if ( v56 )
          {
            memmove(v16, v58, v60);
            v90 = &v16[2 * (v61 >> 1)];
          }
          *(_WORD *)v90 = 0;
          v90 += 2;
        }
        else
        {
          v66 = -1073741820;
          if ( !v86 )
            goto LABEL_179;
        }
        if ( v66 < 0 )
          goto LABEL_194;
        if ( a5 == 252 )
          v65 = v87 + 8;
        else
          v65 = v17 + 14;
        *(_WORD *)v65 = (_WORD)v90 - (_WORD)v16 - 2;
        *((_WORD *)v65 + 1) = v62;
        *((_QWORD *)v65 + 1) = v16;
      }
      if ( v66 >= 0 )
      {
        if ( a5 == 252 )
          *v87 = v74;
        else
          *v17 = v74;
      }
    }
LABEL_194:
    NextProcess = Object;
    goto LABEL_195;
  }
  return result;
}
