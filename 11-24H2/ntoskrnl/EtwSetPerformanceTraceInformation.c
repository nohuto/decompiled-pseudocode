/*
 * XREFs of EtwSetPerformanceTraceInformation @ 0x140A39934
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     wcsnlen @ 0x1404FD950 (wcsnlen.c)
 *     wcsncpy_s @ 0x140502240 (wcsncpy_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1407A6DB8 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1407A802C (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1407A932C (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpUpdateContextRegisterTraceEvents @ 0x1407A93F8 (EtwpUpdateContextRegisterTraceEvents.c)
 *     EtwpUpdatePmcEvents @ 0x1407A94B8 (EtwpUpdatePmcEvents.c)
 *     EtwpUpdateTagFilter @ 0x1407A9564 (EtwpUpdateTagFilter.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1407A95B0 (EtwpUserInAdminOrLogUsersGroup.c)
 *     EtwpSetPmcProfileSource @ 0x1407AA228 (EtwpSetPmcProfileSource.c)
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1407B1E3C (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x1407B1EE8 (EtwpUpdateLastBranchTracingEvents.c)
 *     EtwpUpdateProcessorTraceConfiguration @ 0x1407B20FC (EtwpUpdateProcessorTraceConfiguration.c)
 *     EtwpUpdateProcessorTraceEvents @ 0x1407B21A4 (EtwpUpdateProcessorTraceEvents.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407B34B4 (EtwpSetCoverageSamplerInformation.c)
 *     NtSetIntervalProfile @ 0x1407C2200 (NtSetIntervalProfile.c)
 *     EtwpCheckGuidAccess @ 0x140836754 (EtwpCheckGuidAccess.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408375F4 (EtwpCheckLoggerControlAccess.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckSystemTraceAccess @ 0x1409454B0 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdateGroupMasks @ 0x1409D112C (EtwpUpdateGroupMasks.c)
 *     EtwpUpdateStackTracing @ 0x1409D1388 (EtwpUpdateStackTracing.c)
 *     EtwpEnableStackCaching @ 0x140A39C78 (EtwpEnableStackCaching.c)
 *     EtwpSetSoftRestartInformation @ 0x140A39DC4 (EtwpSetSoftRestartInformation.c)
 *     EtwpUpdatePmcCounters @ 0x140A9A104 (EtwpUpdatePmcCounters.c)
 *     KiGetCpuVendor @ 0x140B6F294 (KiGetCpuVendor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwSetPerformanceTraceInformation(
        unsigned __int8 *Address,
        SIZE_T Length,
        KPROCESSOR_MODE PreviousMode)
{
  unsigned int v4; // r14d
  int v6; // ebx
  unsigned __int16 v7; // dx
  unsigned __int8 v8; // r8
  struct _LIST_ENTRY *Flink; // r15
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned int v12; // edx
  bool v13; // r14
  struct _KTHREAD *v14; // rax
  __int64 v15; // rax
  unsigned int *v16; // rdi
  int v17; // ebx
  __int64 v18; // r9
  unsigned int v19; // r14d
  unsigned int v20; // r14d
  char *v21; // r12
  unsigned int v22; // edx
  struct _KTHREAD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned int Blink_low; // edx
  int updated; // eax
  int v29; // esi
  int v30; // r14d
  int v31; // r15d
  unsigned int v32; // r12d
  int v33; // r13d
  int v34; // esi
  ULONG v35; // edi
  __int64 v36; // rax
  unsigned int v37; // edx
  struct _KTHREAD *v38; // rax
  __int64 v39; // rax
  unsigned int *v40; // rcx
  unsigned int v41; // r14d
  wchar_t *v42; // rax
  wchar_t *v43; // rsi
  ULONG v44; // edx
  wchar_t *v45; // rcx
  unsigned int v46; // r14d
  unsigned int v47; // r14d
  __int64 v48; // rbx
  unsigned int v49; // edx
  struct _KTHREAD *v50; // rax
  __int64 v51; // rax
  unsigned int v52; // r14d
  unsigned int v53; // r14d
  __int64 v54; // rbx
  unsigned int v55; // edx
  struct _KTHREAD *v56; // rax
  __int64 v57; // rax
  __int16 *v58; // r8
  unsigned int v59; // esi
  wchar_t *v60; // rax
  wchar_t *v61; // rdi
  unsigned __int8 v62; // al
  unsigned int v63; // r13d
  unsigned int v64; // ebx
  __int64 Pool2; // rax
  __int64 v66; // r14
  int CpuVendor; // eax
  unsigned int v68; // edx
  struct _KTHREAD *v69; // rax
  __int64 v70; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v72; // rax
  unsigned int v73; // r14d
  unsigned int v74; // r14d
  char *v75; // r12
  unsigned int v76; // edx
  struct _KTHREAD *v77; // rax
  __int64 v78; // rax
  char v79; // [rsp+30h] [rbp-1C8h]
  unsigned __int8 v80; // [rsp+31h] [rbp-1C7h]
  int v81; // [rsp+44h] [rbp-1B4h]
  int v82; // [rsp+4Ch] [rbp-1ACh]
  unsigned int v83; // [rsp+50h] [rbp-1A8h]
  unsigned int v84; // [rsp+54h] [rbp-1A4h]
  int v85; // [rsp+60h] [rbp-198h]
  __int128 v86; // [rsp+78h] [rbp-180h] BYREF
  wchar_t *Src[2]; // [rsp+88h] [rbp-170h]
  _DWORD v88[2]; // [rsp+A0h] [rbp-158h] BYREF
  _DWORD v89[2]; // [rsp+A8h] [rbp-150h] BYREF
  char v90[256]; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v91; // [rsp+1B0h] [rbp-48h] BYREF
  int v92; // [rsp+1B8h] [rbp-40h]

  v4 = Length;
  if ( (unsigned int)Length < 4 )
    return 3221225485LL;
  v6 = *(_DWORD *)Address;
  v81 = *(_DWORD *)Address;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  if ( v6 > 17 )
  {
    if ( v6 <= 23 )
    {
      if ( v6 == 23 )
      {
        if ( v4 < 0x18 )
          return 3221225476LL;
        v86 = *(_OWORD *)Address;
        Src[0] = *((wchar_t **)Address + 2);
        Blink_low = WORD4(v86);
        if ( WORD4(v86) == 0xFFFF )
          Blink_low = LOBYTE(Flink[281].Blink);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v72 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, Blink_low, 1u);
        v25 = v72;
        if ( v72 )
        {
          v17 = EtwpCheckLoggerControlAccess(0x80u, v72);
          if ( v17 >= 0 )
          {
            updated = EtwpUpdateProcessorTraceConfiguration(v25, (__int64)&v86);
            goto LABEL_177;
          }
          goto LABEL_178;
        }
        goto LABEL_31;
      }
      if ( v6 != 18 )
      {
        if ( v6 != 19 )
        {
          if ( v6 == 20 )
            goto LABEL_9;
          if ( v6 == 21 )
          {
            if ( PreviousMode && !EtwpUserInAdminOrLogUsersGroup() )
              return 3221225506LL;
            if ( v4 - 36 > 0x1FC )
              return 3221225476LL;
            v62 = Address[4];
            if ( v62 < 2u || v62 > 3u )
              return 3221225561LL;
            v63 = v4 - 34 + 280;
            v64 = (v4 - 34) >> 1;
            Pool2 = ExAllocatePool2(0x100uLL, v63, 0x50777445u);
            v66 = Pool2;
            if ( !Pool2 )
              return 3221225495LL;
            wcsncpy_s((wchar_t *)(Pool2 + 280), v64, (const wchar_t *)Address + 17, v64);
            v91 = *((_QWORD *)Address + 2);
            v92 = *((_DWORD *)Address + 6);
            *(_DWORD *)(v66 + 8) = *((_DWORD *)Address + 7);
            v80 = Address[32];
            CpuVendor = KiGetCpuVendor();
            if ( CpuVendor == 2 )
            {
              *(_BYTE *)v66 = Address[8];
              *(_BYTE *)(v66 + 1) = Address[9];
              *(_BYTE *)(v66 + 2) = Address[10];
              *(_BYTE *)(v66 + 3) = Address[11];
              *(_BYTE *)(v66 + 4) = Address[12];
              *(_BYTE *)(v66 + 5) = Address[13];
            }
            else if ( CpuVendor == 1 )
            {
              if ( Address[4] == 2 )
              {
                *(_WORD *)v66 = Address[8];
                *(_BYTE *)(v66 + 2) = Address[9];
              }
              else
              {
                *(_WORD *)v66 = *((_WORD *)Address + 4);
                *(_BYTE *)(v66 + 2) = Address[10];
                *(_BYTE *)(v66 + 3) = Address[11];
                *(_BYTE *)(v66 + 4) = Address[12];
                *(_BYTE *)(v66 + 5) = Address[13];
                *(_BYTE *)(v66 + 6) = Address[14];
                *(_BYTE *)(v66 + 7) = Address[15];
              }
            }
            *(_DWORD *)(v66 + 16) = 2097153;
            *(_DWORD *)(v66 + 20) = 0;
            memset_0((void *)(v66 + 24), 0, 0x100uLL);
            EtwpGetMicroarchitecturalPmcAffinity((__int64)&v91, (unsigned __int16 *)(v66 + 16));
            v17 = guard_dispatch_icall_no_overrides(20LL, v63);
            if ( v80 )
              v17 = EtwpAddMicroarchitecturalPmcToRegistry((unsigned __int8 *)v66, &v91);
            v45 = (wchar_t *)v66;
          }
          else
          {
            v86 = 0LL;
            Src[0] = 0LL;
            v88[1] = 0;
            memset_0(v88, 0, 0x10CuLL);
            if ( PreviousMode && !EtwpUserInAdminOrLogUsersGroup() )
              return 3221225506LL;
            if ( v4 != 20 )
              return 3221225476LL;
            v91 = *((_QWORD *)Address + 1);
            v92 = *((_DWORD *)Address + 4);
            LODWORD(v86) = *((_DWORD *)Address + 1);
            v17 = guard_dispatch_icall_no_overrides(1LL, 24LL);
            if ( v17 < 0 )
              return (unsigned int)v17;
            v88[0] = v86;
            v89[0] = 2097153;
            v89[1] = 0;
            memset_0(v90, 0, sizeof(v90));
            EtwpGetMicroarchitecturalPmcAffinity((__int64)&v91, (unsigned __int16 *)v89);
            v59 = wcsnlen(Src[0], 0xFFuLL);
            v60 = (wchar_t *)ExAllocatePool2(0x100uLL, 2LL * (v59 + 1), 0x50777445u);
            v61 = v60;
            if ( !v60 )
              return 3221225495LL;
            wcsncpy_s(v60, v59 + 1, Src[0], v59);
            v17 = guard_dispatch_icall_no_overrides(21LL, 272LL);
            EtwpRemoveMicroarchitecturalPmcFromRegistry(v61, v59, (__int64)&v91);
            v45 = v61;
          }
          v44 = 1350005829;
          goto LABEL_145;
        }
        if ( v4 < 0x18 )
          return 3221225476LL;
        v86 = *(_OWORD *)Address;
        Src[0] = *((wchar_t **)Address + 2);
        v68 = WORD4(v86);
        if ( WORD4(v86) == 0xFFFF )
          v68 = LOBYTE(Flink[281].Blink);
        v69 = KeGetCurrentThread();
        --v69->KernelApcDisable;
        v70 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v68, 1u);
        v25 = v70;
        if ( v70 )
        {
          v17 = EtwpCheckLoggerControlAccess(0x80u, v70);
          if ( v17 >= 0 )
          {
            updated = EtwpUpdateLastBranchTracingConfiguration(v25, LODWORD(Src[0]));
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
      if ( v6 == 24 )
        goto LABEL_9;
      if ( v6 != 25 )
      {
        if ( v6 == 26 )
          goto LABEL_15;
        if ( v6 != 27 )
          return (unsigned int)-1073741822;
        if ( v4 < 0x14 )
          return 3221225476LL;
        v73 = v4 - 20;
        if ( (v73 & 3) != 0 )
          return 3221225485LL;
        if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, 1) )
          return 3221225569LL;
        v74 = v73 >> 2;
        v75 = (char *)(Address + 20);
        v82 = *((_DWORD *)Address + 4);
        v76 = (unsigned __int16)*((_QWORD *)Address + 1);
        if ( v76 == 0xFFFF )
          v76 = LOBYTE(Flink[281].Blink);
        v77 = KeGetCurrentThread();
        --v77->KernelApcDisable;
        v78 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v76, 1u);
        v25 = v78;
        if ( v78 )
        {
          v17 = EtwpCheckLoggerControlAccess(0x80u, v78);
          if ( v17 >= 0 )
          {
            updated = EtwpUpdateContextRegisterTraceEvents(v25, v82, (__int64)v75, v74);
            goto LABEL_177;
          }
          goto LABEL_178;
        }
        goto LABEL_31;
      }
      return (unsigned int)EtwpSetCoverageSamplerInformation(Address, v4, v8);
    }
  }
  if ( v6 == 17 )
  {
LABEL_108:
    if ( v4 < 0x10 )
      return 3221225476LL;
    v52 = v4 - 16;
    if ( (v52 & 3) != 0 )
      return 3221225485LL;
    v53 = v52 >> 2;
    if ( (unsigned __int16)v53 > v7 )
      return 3221225485LL;
    if ( PsIsCurrentThreadInServerSilo() )
      return 3221225506LL;
    v54 = *((_QWORD *)Address + 1);
    memmove(&v91, Address + 16, 4LL * (unsigned __int16)v53);
    v55 = (unsigned __int16)v54;
    if ( (unsigned __int16)v54 == 0xFFFF )
      v55 = LOBYTE(Flink[281].Blink);
    v56 = KeGetCurrentThread();
    --v56->KernelApcDisable;
    v57 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v55, 1u);
    v25 = v57;
    if ( !v57 )
      goto LABEL_31;
    v40 = (unsigned int *)v57;
    if ( (*(_DWORD *)(v57 + 12) & 0x2000000) != 0 )
    {
      v17 = EtwpCheckSystemTraceAccess(v57, 0x80u);
      if ( v17 >= 0 )
      {
        v58 = EtwpPoolTagFilter;
        if ( v81 != 10 )
          v58 = (__int16 *)&EtwpObjectTypeFilter;
        EtwpUpdateTagFilter(&v91, v53, (__int64)&v58[10 * *(unsigned __int8 *)(v25 + 818)]);
      }
      goto LABEL_178;
    }
LABEL_84:
    EtwpReleaseLoggerContext(v40, 1);
    v17 = -1073741811;
    goto LABEL_23;
  }
  if ( v6 <= 10 )
  {
    if ( v6 != 10 )
    {
      if ( v6 != 1 )
      {
        switch ( v6 )
        {
          case 3:
            if ( v4 != 8 )
              return 3221225476LL;
            if ( PsIsCurrentThreadInServerSilo() )
              return 3221225506LL;
            v35 = *((_DWORD *)Address + 1);
            KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
            v17 = NtSetIntervalProfile(v35, ProfileTime);
            if ( v17 >= 0 )
              EtwpProfileInterval = v35;
            break;
          case 5:
            if ( ((v4 - 16) & 0xFFFFFFFB) != 0 )
              return 3221225476LL;
            result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u, 0LL);
            v17 = result;
            if ( (int)result < 0 )
              return result;
            if ( PsIsCurrentThreadInServerSilo() )
              return 3221225506LL;
            v31 = *((_DWORD *)Address + 1);
            if ( !v31 )
              return 3221225485LL;
            v32 = *((_DWORD *)Address + 2);
            if ( v32 < 0x3E8 )
              return 3221225485LL;
            v33 = *((_DWORD *)Address + 3);
            if ( !v33 )
              return 3221225485LL;
            v34 = EtwpSpinLockHoldThreshold;
            if ( v4 == 20 )
            {
              v34 = *((_DWORD *)Address + 4);
              if ( (unsigned int)(v34 - 1) <= 0xF423E )
                return 3221225485LL;
            }
            KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
            EtwpSpinLockHoldThreshold = v34;
            EtwpSpinLockSpinThreshold = v31;
            EtwpSpinLockAcquireSampleRate = v32;
            EtwpSpinLockContentionSampleRate = v33;
            break;
          case 6:
            goto LABEL_9;
          case 7:
            if ( v4 != 16 )
              return 3221225476LL;
            result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u, 0LL);
            v17 = result;
            if ( (int)result < 0 )
              return result;
            if ( PsIsCurrentThreadInServerSilo() )
              return 3221225506LL;
            v29 = *((_DWORD *)Address + 1);
            v30 = *((_DWORD *)Address + 2);
            v85 = *((_DWORD *)Address + 3);
            KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
            EtwpExecutiveResourceReleaseSampleRate = v29;
            EtwpExecutiveResourceContentionSampleRate = v30;
            EtwpExecutiveResourceTimeout = v85;
            break;
          default:
            return (unsigned int)-1073741822;
        }
        KeReleaseMutex(&EtwpGroupMaskMutex, 0);
        return (unsigned int)v17;
      }
      if ( v4 != 48 )
        return 3221225476LL;
      v36 = *((_QWORD *)Address + 1);
      v86 = *((_OWORD *)Address + 1);
      *(_OWORD *)Src = *((_OWORD *)Address + 2);
      v37 = (unsigned __int16)v36;
      if ( (unsigned __int16)v36 == 0xFFFF )
        v37 = LOBYTE(Flink[281].Blink);
      v38 = KeGetCurrentThread();
      --v38->KernelApcDisable;
      v39 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v37, 1u);
      v25 = v39;
      if ( v39 )
      {
        v40 = (unsigned int *)v39;
        if ( (*(_DWORD *)(v39 + 12) & 0x2000000) != 0 )
        {
          v17 = EtwpCheckSystemTraceAccess(v39, 0x80u);
          if ( v17 >= 0 )
          {
            updated = EtwpUpdateGroupMasks((int *)v25, &v86);
            goto LABEL_177;
          }
LABEL_178:
          EtwpReleaseLoggerContext((unsigned int *)v25, 1);
          goto LABEL_23;
        }
        goto LABEL_84;
      }
LABEL_31:
      v17 = -1073741162;
LABEL_23:
      KeLeaveCriticalRegion();
      return (unsigned int)v17;
    }
    goto LABEL_108;
  }
  if ( v6 == 11 )
  {
    v79 = 0;
    if ( v4 < 0x10 )
      return 3221225476LL;
    v46 = v4 - 16;
    if ( (v46 & 3) != 0 )
      return 3221225485LL;
    v47 = v46 >> 2;
    if ( v47 > 1 )
      return 3221225485LL;
    v48 = *((_QWORD *)Address + 1);
    if ( v47 )
    {
      if ( *((_DWORD *)Address + 4) != 1316 )
        return 3221225485LL;
      v79 = 1;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
      return 3221225569LL;
    if ( PsIsCurrentThreadInServerSilo() )
      return 3221225506LL;
    v49 = (unsigned __int16)v48;
    if ( (unsigned __int16)v48 == 0xFFFF )
      v49 = LOBYTE(Flink[281].Blink);
    v50 = KeGetCurrentThread();
    --v50->KernelApcDisable;
    v51 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v49, 1u);
    v25 = v51;
    if ( v51 )
    {
      v17 = EtwpCheckLoggerControlAccess(0x80u, v51);
      if ( v17 >= 0 )
      {
        if ( v79 )
          _InterlockedOr((volatile signed __int32 *)(v25 + 816), 0x400u);
        else
          _InterlockedAnd((volatile signed __int32 *)(v25 + 816), 0xFFFFFBFF);
      }
      goto LABEL_178;
    }
    goto LABEL_31;
  }
  if ( v6 != 12 )
  {
    if ( v6 == 14 || v6 == 15 )
    {
LABEL_9:
      if ( v4 < 0x10 )
        return 3221225476LL;
      v19 = v4 - 16;
      if ( (v19 & 3) == 0 )
      {
        if ( PsIsCurrentThreadInServerSilo() && (unsigned int)(v6 - 14) <= 1 )
          return 3221225506LL;
        v20 = v19 >> 2;
        v21 = (char *)(Address + 16);
        v22 = (unsigned __int16)*((_QWORD *)Address + 1);
        if ( v22 == 0xFFFF )
          v22 = LOBYTE(Flink[281].Blink);
        v23 = KeGetCurrentThread();
        --v23->KernelApcDisable;
        v24 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v22, 1u);
        v25 = v24;
        if ( !v24 )
          goto LABEL_31;
        v17 = EtwpCheckLoggerControlAccess(0x80u, v24);
        if ( v17 >= 0 )
        {
          switch ( v81 )
          {
            case 6:
              updated = EtwpUpdateStackTracing((_RTL_BITMAP *)v25, (__int64)v21, v20);
LABEL_177:
              v17 = updated;
              goto LABEL_178;
            case 15:
              updated = EtwpUpdatePmcCounters(v25, v21, v20);
              goto LABEL_177;
            case 14:
              updated = EtwpUpdatePmcEvents(v25, (__int64)v21, v20);
              goto LABEL_177;
            case 20:
              EtwpUpdateLastBranchTracingEvents(v25, (__int64)v21, v20);
              break;
            case 24:
              updated = EtwpUpdateProcessorTraceEvents(v25, (__int64)v21, v20);
              goto LABEL_177;
          }
        }
        goto LABEL_178;
      }
      return 3221225485LL;
    }
    if ( v6 != 16 )
      return (unsigned int)-1073741822;
LABEL_15:
    if ( v4 != 32 )
      return 3221225476LL;
    v11 = *((_QWORD *)Address + 1);
    v84 = *((_DWORD *)Address + 5);
    v83 = *((_DWORD *)Address + 6);
    if ( !Address[16] )
      return 3221225659LL;
    v12 = (unsigned __int16)v11;
    if ( (unsigned __int16)v11 == 0xFFFF )
      v12 = LOBYTE(Flink[281].Blink);
    v13 = v6 == 26;
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    v15 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v12, 1u);
    v16 = (unsigned int *)v15;
    if ( v15 )
    {
      v17 = EtwpCheckLoggerControlAccess(0x80u, v15);
      if ( v17 >= 0 )
      {
        LOBYTE(v18) = v13;
        v17 = EtwpEnableStackCaching(v16, v84, v83, v18);
      }
      KeReleaseMutex((PRKMUTEX)(v16 + 158), 0);
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v16 + 170) + 704LL) + 8LL * *v16),
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
        v41 = (v4 - 16) >> 2;
        if ( v41 > EtwpMaxProfilingSources )
          return 3221225485LL;
        v42 = (wchar_t *)ExAllocatePool2(0x40uLL, 4LL * v41, 0x58777445u);
        v43 = v42;
        if ( v42 )
        {
          memmove(v42, Address + 16, 4LL * v41);
          v17 = EtwpSetPmcProfileSource(v43, v41);
          v44 = 0;
          v45 = v43;
LABEL_145:
          ExFreePoolWithTag(v45, v44);
          return (unsigned int)v17;
        }
        return 3221225495LL;
      }
      return 3221225506LL;
    }
    return 3221225569LL;
  }
  return result;
}
