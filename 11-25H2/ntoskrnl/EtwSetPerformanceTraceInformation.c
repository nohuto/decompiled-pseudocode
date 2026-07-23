/*
 * XREFs of EtwSetPerformanceTraceInformation @ 0x140A3F778
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     wcsnlen @ 0x1404FD910 (wcsnlen.c)
 *     wcsncpy_s @ 0x140502200 (wcsncpy_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1407978A8 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x140798B1C (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x140799E1C (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpUpdateContextRegisterTraceEvents @ 0x140799EE8 (EtwpUpdateContextRegisterTraceEvents.c)
 *     EtwpUpdatePmcEvents @ 0x140799FA8 (EtwpUpdatePmcEvents.c)
 *     EtwpUpdateTagFilter @ 0x14079A054 (EtwpUpdateTagFilter.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x14079A0A0 (EtwpUserInAdminOrLogUsersGroup.c)
 *     EtwpSetPmcProfileSource @ 0x14079AD18 (EtwpSetPmcProfileSource.c)
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1407A261C (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x1407A26C8 (EtwpUpdateLastBranchTracingEvents.c)
 *     EtwpUpdateProcessorTraceConfiguration @ 0x1407A28DC (EtwpUpdateProcessorTraceConfiguration.c)
 *     EtwpUpdateProcessorTraceEvents @ 0x1407A2984 (EtwpUpdateProcessorTraceEvents.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407A3C94 (EtwpSetCoverageSamplerInformation.c)
 *     NtSetIntervalProfile @ 0x1407B25E0 (NtSetIntervalProfile.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408970A0 (EtwpCheckLoggerControlAccess.c)
 *     EtwpCheckGuidAccess @ 0x140898F2C (EtwpCheckGuidAccess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1409328B0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1409FF024 (EtwpReleaseLoggerContext.c)
 *     EtwpUpdateGroupMasks @ 0x140A3848C (EtwpUpdateGroupMasks.c)
 *     EtwpUpdateStackTracing @ 0x140A386E8 (EtwpUpdateStackTracing.c)
 *     EtwpEnableStackCaching @ 0x140A3FABC (EtwpEnableStackCaching.c)
 *     EtwpSetSoftRestartInformation @ 0x140A3FC08 (EtwpSetSoftRestartInformation.c)
 *     EtwpCheckSystemTraceAccess @ 0x140A74364 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdatePmcCounters @ 0x140A99C44 (EtwpUpdatePmcCounters.c)
 *     KiGetCpuVendor @ 0x140B5E944 (KiGetCpuVendor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  unsigned int v63; // ebx
  __int64 Pool2; // rax
  __int64 v65; // r14
  int CpuVendor; // eax
  unsigned int v67; // edx
  struct _KTHREAD *v68; // rax
  __int64 v69; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v71; // rax
  unsigned int v72; // r14d
  unsigned int v73; // r14d
  char *v74; // r12
  unsigned int v75; // edx
  struct _KTHREAD *v76; // rax
  __int64 v77; // rax
  char v78; // [rsp+30h] [rbp-1C8h]
  unsigned __int8 v79; // [rsp+31h] [rbp-1C7h]
  int v80; // [rsp+44h] [rbp-1B4h]
  int v81; // [rsp+4Ch] [rbp-1ACh]
  unsigned int v82; // [rsp+50h] [rbp-1A8h]
  unsigned int v83; // [rsp+54h] [rbp-1A4h]
  int v84; // [rsp+60h] [rbp-198h]
  __int128 v85; // [rsp+78h] [rbp-180h] BYREF
  wchar_t *Src[2]; // [rsp+88h] [rbp-170h]
  _DWORD v87[2]; // [rsp+A0h] [rbp-158h] BYREF
  _DWORD v88[2]; // [rsp+A8h] [rbp-150h] BYREF
  char v89[256]; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v90; // [rsp+1B0h] [rbp-48h] BYREF
  int v91; // [rsp+1B8h] [rbp-40h]

  v4 = Length;
  if ( (unsigned int)Length < 4 )
    return 3221225485LL;
  v6 = *(_DWORD *)Address;
  v80 = *(_DWORD *)Address;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  if ( v6 > 17 )
  {
    if ( v6 <= 23 )
    {
      if ( v6 == 23 )
      {
        if ( v4 < 0x18 )
          return 3221225476LL;
        v85 = *(_OWORD *)Address;
        Src[0] = *((wchar_t **)Address + 2);
        Blink_low = WORD4(v85);
        if ( WORD4(v85) == 0xFFFF )
          Blink_low = LOBYTE(Flink[264].Blink);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v71 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, Blink_low, 1u);
        v25 = v71;
        if ( v71 )
        {
          v17 = EtwpCheckLoggerControlAccess(0x80u, v71);
          if ( v17 >= 0 )
          {
            updated = EtwpUpdateProcessorTraceConfiguration(v25, (__int64)&v85);
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
            v63 = (v4 - 34) >> 1;
            Pool2 = ExAllocatePool2(0x100uLL);
            v65 = Pool2;
            if ( !Pool2 )
              return 3221225495LL;
            wcsncpy_s((wchar_t *)(Pool2 + 280), v63, (const wchar_t *)Address + 17, v63);
            v90 = *((_QWORD *)Address + 2);
            v91 = *((_DWORD *)Address + 6);
            *(_DWORD *)(v65 + 8) = *((_DWORD *)Address + 7);
            v79 = Address[32];
            CpuVendor = KiGetCpuVendor();
            if ( CpuVendor == 2 )
            {
              *(_BYTE *)v65 = Address[8];
              *(_BYTE *)(v65 + 1) = Address[9];
              *(_BYTE *)(v65 + 2) = Address[10];
              *(_BYTE *)(v65 + 3) = Address[11];
              *(_BYTE *)(v65 + 4) = Address[12];
              *(_BYTE *)(v65 + 5) = Address[13];
            }
            else if ( CpuVendor == 1 )
            {
              if ( Address[4] == 2 )
              {
                *(_WORD *)v65 = Address[8];
                *(_BYTE *)(v65 + 2) = Address[9];
              }
              else
              {
                *(_WORD *)v65 = *((_WORD *)Address + 4);
                *(_BYTE *)(v65 + 2) = Address[10];
                *(_BYTE *)(v65 + 3) = Address[11];
                *(_BYTE *)(v65 + 4) = Address[12];
                *(_BYTE *)(v65 + 5) = Address[13];
                *(_BYTE *)(v65 + 6) = Address[14];
                *(_BYTE *)(v65 + 7) = Address[15];
              }
            }
            *(_DWORD *)(v65 + 16) = 2097153;
            *(_DWORD *)(v65 + 20) = 0;
            memset_0((void *)(v65 + 24), 0, 0x100uLL);
            EtwpGetMicroarchitecturalPmcAffinity((__int64)&v90, (unsigned __int16 *)(v65 + 16));
            v17 = guard_dispatch_icall_no_overrides(20LL);
            if ( v79 )
              v17 = EtwpAddMicroarchitecturalPmcToRegistry((unsigned __int8 *)v65, &v90);
            v45 = (wchar_t *)v65;
          }
          else
          {
            v85 = 0LL;
            Src[0] = 0LL;
            v87[1] = 0;
            memset_0(v87, 0, 0x10CuLL);
            if ( PreviousMode && !EtwpUserInAdminOrLogUsersGroup() )
              return 3221225506LL;
            if ( v4 != 20 )
              return 3221225476LL;
            v90 = *((_QWORD *)Address + 1);
            v91 = *((_DWORD *)Address + 4);
            LODWORD(v85) = *((_DWORD *)Address + 1);
            v17 = guard_dispatch_icall_no_overrides(1LL);
            if ( v17 < 0 )
              return (unsigned int)v17;
            v87[0] = v85;
            v88[0] = 2097153;
            v88[1] = 0;
            memset_0(v89, 0, sizeof(v89));
            EtwpGetMicroarchitecturalPmcAffinity((__int64)&v90, (unsigned __int16 *)v88);
            v59 = wcsnlen(Src[0], 0xFFuLL);
            v60 = (wchar_t *)ExAllocatePool2(0x100uLL);
            v61 = v60;
            if ( !v60 )
              return 3221225495LL;
            wcsncpy_s(v60, v59 + 1, Src[0], v59);
            v17 = guard_dispatch_icall_no_overrides(21LL);
            EtwpRemoveMicroarchitecturalPmcFromRegistry(v61, v59, (__int64)&v90);
            v45 = v61;
          }
          v44 = 1350005829;
          goto LABEL_145;
        }
        if ( v4 < 0x18 )
          return 3221225476LL;
        v85 = *(_OWORD *)Address;
        Src[0] = *((wchar_t **)Address + 2);
        v67 = WORD4(v85);
        if ( WORD4(v85) == 0xFFFF )
          v67 = LOBYTE(Flink[264].Blink);
        v68 = KeGetCurrentThread();
        --v68->KernelApcDisable;
        v69 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v67, 1u);
        v25 = v69;
        if ( v69 )
        {
          v17 = EtwpCheckLoggerControlAccess(0x80u, v69);
          if ( v17 >= 0 )
          {
            updated = EtwpUpdateLastBranchTracingConfiguration(v25, (unsigned __int32)Src[0]);
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
        v72 = v4 - 20;
        if ( (v72 & 3) != 0 )
          return 3221225485LL;
        if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, 1) )
          return 3221225569LL;
        v73 = v72 >> 2;
        v74 = (char *)(Address + 20);
        v81 = *((_DWORD *)Address + 4);
        v75 = (unsigned __int16)*((_QWORD *)Address + 1);
        if ( v75 == 0xFFFF )
          v75 = LOBYTE(Flink[264].Blink);
        v76 = KeGetCurrentThread();
        --v76->KernelApcDisable;
        v77 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v75, 1u);
        v25 = v77;
        if ( v77 )
        {
          v17 = EtwpCheckLoggerControlAccess(0x80u, v77);
          if ( v17 >= 0 )
          {
            updated = EtwpUpdateContextRegisterTraceEvents(v25, v81, (__int64)v74, v73);
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
    memmove(&v90, Address + 16, 4LL * (unsigned __int16)v53);
    v55 = (unsigned __int16)v54;
    if ( (unsigned __int16)v54 == 0xFFFF )
      v55 = LOBYTE(Flink[264].Blink);
    v56 = KeGetCurrentThread();
    --v56->KernelApcDisable;
    v57 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v55, 1u);
    v25 = v57;
    if ( !v57 )
      goto LABEL_31;
    v40 = (unsigned int *)v57;
    if ( (*(_DWORD *)(v57 + 12) & 0x2000000) != 0 )
    {
      v17 = EtwpCheckSystemTraceAccess(v57, 128LL);
      if ( v17 >= 0 )
      {
        v58 = EtwpPoolTagFilter;
        if ( v80 != 10 )
          v58 = (__int16 *)&EtwpObjectTypeFilter;
        EtwpUpdateTagFilter(&v90, v53, (__int64)&v58[10 * *(unsigned __int8 *)(v25 + 818)]);
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
            v84 = *((_DWORD *)Address + 3);
            KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
            EtwpExecutiveResourceReleaseSampleRate = v29;
            EtwpExecutiveResourceContentionSampleRate = v30;
            EtwpExecutiveResourceTimeout = v84;
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
      v85 = *((_OWORD *)Address + 1);
      *(_OWORD *)Src = *((_OWORD *)Address + 2);
      v37 = (unsigned __int16)v36;
      if ( (unsigned __int16)v36 == 0xFFFF )
        v37 = LOBYTE(Flink[264].Blink);
      v38 = KeGetCurrentThread();
      --v38->KernelApcDisable;
      v39 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v37, 1u);
      v25 = v39;
      if ( v39 )
      {
        v40 = (unsigned int *)v39;
        if ( (*(_DWORD *)(v39 + 12) & 0x2000000) != 0 )
        {
          v17 = EtwpCheckSystemTraceAccess(v39, 128LL);
          if ( v17 >= 0 )
          {
            updated = EtwpUpdateGroupMasks((int *)v25, &v85);
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
    v78 = 0;
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
      v78 = 1;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
      return 3221225569LL;
    if ( PsIsCurrentThreadInServerSilo() )
      return 3221225506LL;
    v49 = (unsigned __int16)v48;
    if ( (unsigned __int16)v48 == 0xFFFF )
      v49 = LOBYTE(Flink[264].Blink);
    v50 = KeGetCurrentThread();
    --v50->KernelApcDisable;
    v51 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v49, 1u);
    v25 = v51;
    if ( v51 )
    {
      v17 = EtwpCheckLoggerControlAccess(0x80u, v51);
      if ( v17 >= 0 )
      {
        if ( v78 )
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
          v22 = LOBYTE(Flink[264].Blink);
        v23 = KeGetCurrentThread();
        --v23->KernelApcDisable;
        v24 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v22, 1u);
        v25 = v24;
        if ( !v24 )
          goto LABEL_31;
        v17 = EtwpCheckLoggerControlAccess(0x80u, v24);
        if ( v17 >= 0 )
        {
          switch ( v80 )
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
    v83 = *((_DWORD *)Address + 5);
    v82 = *((_DWORD *)Address + 6);
    if ( !Address[16] )
      return 3221225659LL;
    v12 = (unsigned __int16)v11;
    if ( (unsigned __int16)v11 == 0xFFFF )
      v12 = LOBYTE(Flink[264].Blink);
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
        v17 = EtwpEnableStackCaching(v16, v83, v82, v18);
      }
      KeReleaseMutex((PRKMUTEX)(v16 + 158), 0);
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v16 + 170) + 448LL) + 8LL * *v16),
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
        v42 = (wchar_t *)ExAllocatePool2(0x40uLL);
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
