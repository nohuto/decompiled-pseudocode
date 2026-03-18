/*
 * XREFs of EtwSetPerformanceTraceInformation @ 0x140A440A4
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     wcsnlen @ 0x140500090 (wcsnlen.c)
 *     wcsncpy_s @ 0x140504980 (wcsncpy_s.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1407A6C78 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1407A7EEC (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1407A91EC (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpUpdateContextRegisterTraceEvents @ 0x1407A92B8 (EtwpUpdateContextRegisterTraceEvents.c)
 *     EtwpUpdatePmcEvents @ 0x1407A9378 (EtwpUpdatePmcEvents.c)
 *     EtwpUpdateTagFilter @ 0x1407A9424 (EtwpUpdateTagFilter.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1407A9470 (EtwpUserInAdminOrLogUsersGroup.c)
 *     EtwpSetPmcProfileSource @ 0x1407AA0E8 (EtwpSetPmcProfileSource.c)
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1407B19EC (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x1407B1A98 (EtwpUpdateLastBranchTracingEvents.c)
 *     EtwpUpdateProcessorTraceConfiguration @ 0x1407B1CAC (EtwpUpdateProcessorTraceConfiguration.c)
 *     EtwpUpdateProcessorTraceEvents @ 0x1407B1D54 (EtwpUpdateProcessorTraceEvents.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407B3064 (EtwpSetCoverageSamplerInformation.c)
 *     NtSetIntervalProfile @ 0x1407C43E0 (NtSetIntervalProfile.c)
 *     EtwpUpdateGroupMasks @ 0x140830E90 (EtwpUpdateGroupMasks.c)
 *     EtwpUpdateStackTracing @ 0x1408310EC (EtwpUpdateStackTracing.c)
 *     EtwpCheckLoggerControlAccess @ 0x140836724 (EtwpCheckLoggerControlAccess.c)
 *     EtwpCheckGuidAccess @ 0x14083848C (EtwpCheckGuidAccess.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140926F50 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14095D644 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckSystemTraceAccess @ 0x14095D9F0 (EtwpCheckSystemTraceAccess.c)
 *     EtwpEnableStackCaching @ 0x140A443E8 (EtwpEnableStackCaching.c)
 *     EtwpSetSoftRestartInformation @ 0x140A44534 (EtwpSetSoftRestartInformation.c)
 *     EtwpUpdatePmcCounters @ 0x140A9ED3C (EtwpUpdatePmcCounters.c)
 *     KiGetCpuVendor @ 0x140B6D9F4 (KiGetCpuVendor.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwSetPerformanceTraceInformation(
        unsigned __int8 *Address,
        SIZE_T Length,
        KPROCESSOR_MODE PreviousMode)
{
  unsigned int v4; // r14d
  unsigned __int16 v6; // dx
  unsigned __int8 v7; // r8
  struct _LIST_ENTRY *Flink; // r15
  __int64 result; // rax
  void *v10; // rcx
  unsigned int v11; // edx
  bool v12; // r14
  struct _KTHREAD *v13; // rax
  __int64 v14; // rax
  unsigned int *v15; // rdi
  int v16; // ebx
  __int64 v17; // r9
  unsigned int v18; // r14d
  unsigned int v19; // r14d
  char *v20; // r12
  unsigned int v21; // edx
  struct _KTHREAD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  unsigned int Blink_low; // edx
  __int64 v27; // r9
  int updated; // eax
  int v29; // r15d
  unsigned int v30; // r12d
  int v31; // r13d
  int v32; // esi
  unsigned int v33; // edi
  unsigned int v34; // edx
  struct _KTHREAD *v35; // rax
  __int64 v36; // rax
  unsigned int *v37; // rcx
  unsigned int v38; // r14d
  wchar_t *v39; // rax
  wchar_t *v40; // rsi
  ULONG v41; // edx
  wchar_t *v42; // rcx
  unsigned int v43; // r14d
  unsigned int v44; // r14d
  void *v45; // rbx
  unsigned int v46; // edx
  struct _KTHREAD *v47; // rax
  __int64 v48; // rax
  unsigned int v49; // r14d
  unsigned int v50; // r14d
  unsigned int v51; // edx
  struct _KTHREAD *v52; // rax
  __int64 v53; // rax
  __int16 *v54; // r8
  unsigned int v55; // esi
  wchar_t *v56; // rax
  wchar_t *v57; // rdi
  __int64 v58; // r9
  unsigned __int8 v59; // al
  unsigned int v60; // r13d
  unsigned int v61; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v63; // r14
  int CpuVendor; // eax
  __int64 v65; // r9
  unsigned int v66; // edx
  struct _KTHREAD *v67; // rax
  __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v72; // rax
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned int v75; // r14d
  unsigned int v76; // r14d
  char *v77; // r12
  unsigned int v78; // edx
  struct _KTHREAD *v79; // rax
  __int64 v80; // rax
  char v81; // [rsp+30h] [rbp-1C8h]
  unsigned __int8 v82; // [rsp+31h] [rbp-1C7h]
  PVOID P; // [rsp+38h] [rbp-1C0h] BYREF
  unsigned __int8 v84; // [rsp+40h] [rbp-1B8h]
  int v86; // [rsp+44h] [rbp-1B4h]
  int v87; // [rsp+48h] [rbp-1B0h]
  int v88; // [rsp+4Ch] [rbp-1ACh]
  unsigned int v89; // [rsp+50h] [rbp-1A8h]
  unsigned int v90; // [rsp+54h] [rbp-1A4h]
  int v91; // [rsp+58h] [rbp-1A0h]
  int v92; // [rsp+5Ch] [rbp-19Ch]
  int v93; // [rsp+60h] [rbp-198h]
  int v94; // [rsp+64h] [rbp-194h]
  unsigned int v95; // [rsp+68h] [rbp-190h]
  int v96; // [rsp+6Ch] [rbp-18Ch]
  unsigned int v97; // [rsp+70h] [rbp-188h]
  __int128 v98; // [rsp+78h] [rbp-180h] BYREF
  wchar_t *Src[2]; // [rsp+88h] [rbp-170h]
  _DWORD v100[2]; // [rsp+A0h] [rbp-158h] BYREF
  _DWORD v101[2]; // [rsp+A8h] [rbp-150h] BYREF
  char v102[256]; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v103; // [rsp+1B0h] [rbp-48h] BYREF
  int v104; // [rsp+1B8h] [rbp-40h]

  v4 = Length;
  if ( (unsigned int)Length < 4 )
    return 3221225485LL;
  v86 = *(_DWORD *)Address;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  if ( v86 > 17 )
  {
    if ( v86 <= 23 )
    {
      if ( v86 == 23 )
      {
        if ( v4 < 0x18 )
          return 3221225476LL;
        v98 = *(_OWORD *)Address;
        Src[0] = *((wchar_t **)Address + 2);
        Blink_low = WORD4(v98);
        if ( WORD4(v98) == 0xFFFF )
          Blink_low = LOBYTE(Flink[281].Blink);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v72 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, Blink_low, 1u);
        v24 = v72;
        if ( v72 )
        {
          v16 = EtwpCheckLoggerControlAccess(0x80u, v72);
          if ( v16 >= 0 )
          {
            updated = EtwpUpdateProcessorTraceConfiguration(v24, (__int64)&v98, v73, v74);
            goto LABEL_177;
          }
          goto LABEL_178;
        }
        goto LABEL_31;
      }
      if ( v86 != 18 )
      {
        if ( v86 != 19 )
        {
          if ( v86 == 20 )
            goto LABEL_9;
          if ( v86 == 21 )
          {
            if ( PreviousMode && !EtwpUserInAdminOrLogUsersGroup() )
              return 3221225506LL;
            if ( v4 - 36 > 0x1FC )
              return 3221225476LL;
            v59 = Address[4];
            if ( v59 < 2u || v59 > 3u )
              return 3221225561LL;
            v60 = v4 - 34 + 280;
            v61 = (v4 - 34) >> 1;
            Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
            v63 = Pool2;
            P = Pool2;
            if ( !Pool2 )
              return 3221225495LL;
            wcsncpy_s(Pool2 + 140, v61, (const wchar_t *)Address + 17, v61);
            v103 = *((_QWORD *)Address + 2);
            v104 = *((_DWORD *)Address + 6);
            *((_DWORD *)v63 + 2) = *((_DWORD *)Address + 7);
            v82 = Address[32];
            v84 = v82;
            CpuVendor = KiGetCpuVendor();
            if ( CpuVendor == 2 )
            {
              *(_BYTE *)v63 = Address[8];
              *((_BYTE *)v63 + 1) = Address[9];
              *((_BYTE *)v63 + 2) = Address[10];
              *((_BYTE *)v63 + 3) = Address[11];
              *((_BYTE *)v63 + 4) = Address[12];
              *((_BYTE *)v63 + 5) = Address[13];
            }
            else if ( CpuVendor == 1 )
            {
              if ( Address[4] == 2 )
              {
                *v63 = Address[8];
                *((_BYTE *)v63 + 2) = Address[9];
              }
              else
              {
                *v63 = *((_WORD *)Address + 4);
                *((_BYTE *)v63 + 2) = Address[10];
                *((_BYTE *)v63 + 3) = Address[11];
                *((_BYTE *)v63 + 4) = Address[12];
                *((_BYTE *)v63 + 5) = Address[13];
                *((_BYTE *)v63 + 6) = Address[14];
                *((_BYTE *)v63 + 7) = Address[15];
              }
            }
            *((_DWORD *)v63 + 4) = 2097153;
            *((_DWORD *)v63 + 5) = 0;
            memset_0(v63 + 12, 0, 0x100uLL);
            EtwpGetMicroarchitecturalPmcAffinity((__int64)&v103, v63 + 8);
            v16 = guard_dispatch_icall_no_overrides(20LL, v60, v63, v65);
            if ( v82 )
              v16 = EtwpAddMicroarchitecturalPmcToRegistry((unsigned __int8 *)v63, &v103);
            v42 = v63;
          }
          else
          {
            v98 = 0LL;
            Src[0] = 0LL;
            v100[1] = 0;
            memset_0(v100, 0, 0x10CuLL);
            LODWORD(P) = 0;
            if ( PreviousMode && !EtwpUserInAdminOrLogUsersGroup() )
              return 3221225506LL;
            if ( v4 != 20 )
              return 3221225476LL;
            v103 = *((_QWORD *)Address + 1);
            v104 = *((_DWORD *)Address + 4);
            LODWORD(v98) = *((_DWORD *)Address + 1);
            v16 = guard_dispatch_icall_no_overrides(1LL, 24LL, &v98, &P);
            if ( v16 < 0 )
              return (unsigned int)v16;
            v100[0] = v98;
            v101[0] = 2097153;
            v101[1] = 0;
            memset_0(v102, 0, sizeof(v102));
            EtwpGetMicroarchitecturalPmcAffinity((__int64)&v103, (unsigned __int16 *)v101);
            v55 = wcsnlen(Src[0], 0xFFuLL);
            v56 = (wchar_t *)ExAllocatePool2(0x100uLL);
            v57 = v56;
            if ( !v56 )
              return 3221225495LL;
            wcsncpy_s(v56, v55 + 1, Src[0], v55);
            v16 = guard_dispatch_icall_no_overrides(21LL, 272LL, v100, v58);
            EtwpRemoveMicroarchitecturalPmcFromRegistry(v57, v55, (__int64)&v103);
            v42 = v57;
          }
          v41 = 1350005829;
          goto LABEL_145;
        }
        if ( v4 < 0x18 )
          return 3221225476LL;
        v98 = *(_OWORD *)Address;
        Src[0] = *((wchar_t **)Address + 2);
        v66 = WORD4(v98);
        if ( WORD4(v98) == 0xFFFF )
          v66 = LOBYTE(Flink[281].Blink);
        v67 = KeGetCurrentThread();
        --v67->KernelApcDisable;
        v68 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v66, 1u);
        v24 = v68;
        if ( v68 )
        {
          v16 = EtwpCheckLoggerControlAccess(0x80u, v68);
          if ( v16 >= 0 )
          {
            updated = EtwpUpdateLastBranchTracingConfiguration(v24, LODWORD(Src[0]), v69, v70);
            goto LABEL_177;
          }
          goto LABEL_178;
        }
        goto LABEL_31;
      }
      return (unsigned int)EtwpSetSoftRestartInformation(Address, v4);
    }
    else
    {
      if ( v86 == 24 )
        goto LABEL_9;
      if ( v86 != 25 )
      {
        if ( v86 == 26 )
          goto LABEL_15;
        if ( v86 != 27 )
          return (unsigned int)-1073741822;
        if ( v4 < 0x14 )
          return 3221225476LL;
        v75 = v4 - 20;
        if ( (v75 & 3) != 0 )
          return 3221225485LL;
        if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, 1) )
          return 3221225569LL;
        v76 = v75 >> 2;
        v77 = (char *)(Address + 20);
        v88 = *((_DWORD *)Address + 4);
        P = (PVOID)*((_QWORD *)Address + 1);
        v78 = (unsigned __int16)P;
        if ( (unsigned __int16)P == 0xFFFF )
          v78 = LOBYTE(Flink[281].Blink);
        v79 = KeGetCurrentThread();
        --v79->KernelApcDisable;
        v80 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v78, 1u);
        v24 = v80;
        if ( v80 )
        {
          v16 = EtwpCheckLoggerControlAccess(0x80u, v80);
          if ( v16 >= 0 )
          {
            updated = EtwpUpdateContextRegisterTraceEvents(v24, v88, (__int64)v77, v76);
            goto LABEL_177;
          }
          goto LABEL_178;
        }
        goto LABEL_31;
      }
      return (unsigned int)EtwpSetCoverageSamplerInformation(Address, v4, v7);
    }
  }
  if ( v86 == 17 )
  {
LABEL_108:
    if ( v4 < 0x10 )
      return 3221225476LL;
    v49 = v4 - 16;
    if ( (v49 & 3) != 0 )
      return 3221225485LL;
    v50 = v49 >> 2;
    if ( (unsigned __int16)v50 > v6 )
      return 3221225485LL;
    if ( PsIsCurrentThreadInServerSilo() )
      return 3221225506LL;
    P = (PVOID)*((_QWORD *)Address + 1);
    memmove(&v103, Address + 16, 4LL * (unsigned __int16)v50);
    v51 = (unsigned __int16)P;
    if ( (unsigned __int16)P == 0xFFFF )
      v51 = LOBYTE(Flink[281].Blink);
    v52 = KeGetCurrentThread();
    --v52->KernelApcDisable;
    v53 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v51, 1u);
    v24 = v53;
    if ( !v53 )
      goto LABEL_31;
    v37 = (unsigned int *)v53;
    if ( (*(_DWORD *)(v53 + 12) & 0x2000000) != 0 )
    {
      v16 = EtwpCheckSystemTraceAccess(v53, 0x80u);
      if ( v16 >= 0 )
      {
        v54 = EtwpPoolTagFilter;
        if ( v86 != 10 )
          v54 = (__int16 *)&EtwpObjectTypeFilter;
        EtwpUpdateTagFilter(&v103, v50, (__int64)&v54[10 * *(unsigned __int8 *)(v24 + 818)]);
      }
      goto LABEL_178;
    }
LABEL_84:
    EtwpReleaseLoggerContext(v37, 1);
    v16 = -1073741811;
    goto LABEL_23;
  }
  if ( v86 <= 10 )
  {
    if ( v86 != 10 )
    {
      if ( v86 != 1 )
      {
        switch ( v86 )
        {
          case 3:
            if ( v4 != 8 )
              return 3221225476LL;
            if ( PsIsCurrentThreadInServerSilo() )
              return 3221225506LL;
            v33 = *((_DWORD *)Address + 1);
            v97 = v33;
            KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
            v16 = NtSetIntervalProfile(v33, 0);
            if ( v16 >= 0 )
              EtwpProfileInterval = v33;
            break;
          case 5:
            if ( ((v4 - 16) & 0xFFFFFFFB) != 0 )
              return 3221225476LL;
            result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u, 0LL);
            v16 = result;
            if ( (int)result < 0 )
              return result;
            if ( PsIsCurrentThreadInServerSilo() )
              return 3221225506LL;
            v29 = *((_DWORD *)Address + 1);
            v94 = v29;
            if ( !v29 )
              return 3221225485LL;
            v30 = *((_DWORD *)Address + 2);
            v95 = v30;
            if ( v30 < 0x3E8 )
              return 3221225485LL;
            v31 = *((_DWORD *)Address + 3);
            v96 = v31;
            if ( !v31 )
              return 3221225485LL;
            v32 = EtwpSpinLockHoldThreshold;
            v87 = EtwpSpinLockHoldThreshold;
            if ( v4 == 20 )
            {
              v32 = *((_DWORD *)Address + 4);
              v87 = v32;
              if ( (unsigned int)(v32 - 1) <= 0xF423E )
                return 3221225485LL;
            }
            KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
            EtwpSpinLockHoldThreshold = v32;
            EtwpSpinLockSpinThreshold = v29;
            EtwpSpinLockAcquireSampleRate = v30;
            EtwpSpinLockContentionSampleRate = v31;
            break;
          case 6:
            goto LABEL_9;
          case 7:
            if ( v4 != 16 )
              return 3221225476LL;
            result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u, 0LL);
            v16 = result;
            if ( (int)result < 0 )
              return result;
            if ( PsIsCurrentThreadInServerSilo() )
              return 3221225506LL;
            v91 = *((_DWORD *)Address + 1);
            v92 = *((_DWORD *)Address + 2);
            v93 = *((_DWORD *)Address + 3);
            KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
            EtwpExecutiveResourceReleaseSampleRate = v91;
            EtwpExecutiveResourceContentionSampleRate = v92;
            EtwpExecutiveResourceTimeout = v93;
            break;
          default:
            return (unsigned int)-1073741822;
        }
        KeReleaseMutex(&EtwpGroupMaskMutex, 0);
        return (unsigned int)v16;
      }
      if ( v4 != 48 )
        return 3221225476LL;
      P = (PVOID)*((_QWORD *)Address + 1);
      v98 = *((_OWORD *)Address + 1);
      *(_OWORD *)Src = *((_OWORD *)Address + 2);
      v34 = (unsigned __int16)P;
      if ( (unsigned __int16)P == 0xFFFF )
        v34 = LOBYTE(Flink[281].Blink);
      v35 = KeGetCurrentThread();
      --v35->KernelApcDisable;
      v36 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v34, 1u);
      v24 = v36;
      if ( v36 )
      {
        v37 = (unsigned int *)v36;
        if ( (*(_DWORD *)(v36 + 12) & 0x2000000) != 0 )
        {
          v16 = EtwpCheckSystemTraceAccess(v36, 0x80u);
          if ( v16 >= 0 )
          {
            updated = EtwpUpdateGroupMasks((int *)v24, &v98);
            goto LABEL_177;
          }
LABEL_178:
          EtwpReleaseLoggerContext((unsigned int *)v24, 1);
          goto LABEL_23;
        }
        goto LABEL_84;
      }
LABEL_31:
      v16 = -1073741162;
LABEL_23:
      KeLeaveCriticalRegion();
      return (unsigned int)v16;
    }
    goto LABEL_108;
  }
  if ( v86 == 11 )
  {
    v81 = 0;
    if ( v4 < 0x10 )
      return 3221225476LL;
    v43 = v4 - 16;
    if ( (v43 & 3) != 0 )
      return 3221225485LL;
    v44 = v43 >> 2;
    if ( v44 > 1 )
      return 3221225485LL;
    v45 = (void *)*((_QWORD *)Address + 1);
    P = v45;
    if ( v44 )
    {
      if ( *((_DWORD *)Address + 4) != 1316 )
        return 3221225485LL;
      v81 = 1;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
      return 3221225569LL;
    if ( PsIsCurrentThreadInServerSilo() )
      return 3221225506LL;
    v46 = (unsigned __int16)v45;
    if ( (unsigned __int16)v45 == 0xFFFF )
      v46 = LOBYTE(Flink[281].Blink);
    v47 = KeGetCurrentThread();
    --v47->KernelApcDisable;
    v48 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v46, 1u);
    v24 = v48;
    if ( v48 )
    {
      v16 = EtwpCheckLoggerControlAccess(0x80u, v48);
      if ( v16 >= 0 )
      {
        if ( v81 )
          _InterlockedOr((volatile signed __int32 *)(v24 + 816), 0x400u);
        else
          _InterlockedAnd((volatile signed __int32 *)(v24 + 816), 0xFFFFFBFF);
      }
      goto LABEL_178;
    }
    goto LABEL_31;
  }
  if ( v86 != 12 )
  {
    if ( v86 == 14 || v86 == 15 )
    {
LABEL_9:
      if ( v4 < 0x10 )
        return 3221225476LL;
      v18 = v4 - 16;
      if ( (v18 & 3) == 0 )
      {
        if ( PsIsCurrentThreadInServerSilo() && (unsigned int)(v86 - 14) <= 1 )
          return 3221225506LL;
        v19 = v18 >> 2;
        v20 = (char *)(Address + 16);
        P = (PVOID)*((_QWORD *)Address + 1);
        v21 = (unsigned __int16)P;
        if ( (unsigned __int16)P == 0xFFFF )
          v21 = LOBYTE(Flink[281].Blink);
        v22 = KeGetCurrentThread();
        --v22->KernelApcDisable;
        v23 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v21, 1u);
        v24 = v23;
        if ( !v23 )
          goto LABEL_31;
        v16 = EtwpCheckLoggerControlAccess(0x80u, v23);
        if ( v16 >= 0 )
        {
          switch ( v86 )
          {
            case 6:
              updated = EtwpUpdateStackTracing((RTL_BITMAP *)v24, (__int64)v20, v19);
LABEL_177:
              v16 = updated;
              goto LABEL_178;
            case 15:
              updated = EtwpUpdatePmcCounters(v24, v20, v19);
              goto LABEL_177;
            case 14:
              updated = EtwpUpdatePmcEvents(v24, (__int64)v20, v19);
              goto LABEL_177;
            case 20:
              EtwpUpdateLastBranchTracingEvents(v24, (__int64)v20, v19, v27);
              break;
            case 24:
              updated = EtwpUpdateProcessorTraceEvents(v24, (__int64)v20, v19);
              goto LABEL_177;
          }
        }
        goto LABEL_178;
      }
      return 3221225485LL;
    }
    if ( v86 != 16 )
      return (unsigned int)-1073741822;
LABEL_15:
    if ( v4 != 32 )
      return 3221225476LL;
    v10 = (void *)*((_QWORD *)Address + 1);
    P = v10;
    v90 = *((_DWORD *)Address + 5);
    v89 = *((_DWORD *)Address + 6);
    if ( !Address[16] )
      return 3221225659LL;
    v11 = (unsigned __int16)v10;
    if ( (unsigned __int16)v10 == 0xFFFF )
      v11 = LOBYTE(Flink[281].Blink);
    v12 = v86 == 26;
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    v14 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v11, 1u);
    v15 = (unsigned int *)v14;
    if ( v14 )
    {
      v16 = EtwpCheckLoggerControlAccess(0x80u, v14);
      if ( v16 >= 0 )
      {
        LOBYTE(v17) = v12;
        v16 = EtwpEnableStackCaching(v15, v90, v89, v17);
      }
      KeReleaseMutex((PRKMUTEX)(v15 + 158), 0);
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v15 + 170) + 704LL) + 8LL * *v15),
        1u);
      goto LABEL_23;
    }
    goto LABEL_31;
  }
  if ( v4 < 0x10 )
    return 3221225476LL;
  result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u, 0LL);
  if ( (int)result >= 0 )
  {
    if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
    {
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        v38 = (v4 - 16) >> 2;
        if ( v38 > EtwpMaxProfilingSources )
          return 3221225485LL;
        v39 = (wchar_t *)ExAllocatePool2(0x40uLL);
        v40 = v39;
        P = v39;
        if ( v39 )
        {
          memmove(v39, Address + 16, 4LL * v38);
          v16 = EtwpSetPmcProfileSource(v40, v38);
          v41 = 0;
          v42 = v40;
LABEL_145:
          ExFreePoolWithTag(v42, v41);
          return (unsigned int)v16;
        }
        return 3221225495LL;
      }
      return 3221225506LL;
    }
    return 3221225569LL;
  }
  return result;
}
