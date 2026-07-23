/*
 * XREFs of EtwQueryPerformanceTraceInformation @ 0x14082425C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExUnlockUserBuffer @ 0x1402D31E0 (ExUnlockUserBuffer.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     RtlNumberOfSetBits @ 0x140395F40 (RtlNumberOfSetBits.c)
 *     RtlFindSetBits @ 0x1403ED2E0 (RtlFindSetBits.c)
 *     PsGetProcessId @ 0x140438AF0 (PsGetProcessId.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     EtwpGetPmcProfileSource @ 0x14079A910 (EtwpGetPmcProfileSource.c)
 *     EtwpUMGLEnabled @ 0x14079B25C (EtwpUMGLEnabled.c)
 *     EtwpGetSoftRestartInformation @ 0x1407A03A0 (EtwpGetSoftRestartInformation.c)
 *     ExLockUserBuffer @ 0x140823168 (ExLockUserBuffer.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x140824848 (EtwpQueryCoverageSamplerInformation.c)
 *     SeQuerySecurityDescriptorInfo @ 0x140870750 (SeQuerySecurityDescriptorInfo.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408970A0 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140897194 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     PsGetNextProcess @ 0x1408DF760 (PsGetNextProcess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1409328B0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1409FF024 (EtwpReleaseLoggerContext.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x140A21F74 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpCheckSystemTraceAccess @ 0x140A74364 (EtwpCheckSystemTraceAccess.c)
 */

__int64 __fastcall EtwQueryPerformanceTraceInformation(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  ULONG SetBits; // r15d
  unsigned int v8; // edi
  int v9; // ebx
  unsigned int v10; // edx
  __int64 v11; // r8
  _DWORD *v12; // r9
  struct _LIST_ENTRY *Flink; // r13
  __int64 result; // rax
  __int64 v16; // rdx
  struct _KTHREAD *v17; // rax
  __int64 v18; // rax
  unsigned int *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rdx
  struct _KTHREAD *v22; // rax
  unsigned int *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 Blink_low; // rdx
  struct _KTHREAD *CurrentThread; // rax
  ULONG v30; // ecx
  unsigned int v31; // eax
  DWORD v32; // esi
  _DWORD *v33; // r14
  _OWORD *v34; // rsi
  __int64 v35; // rax
  unsigned int i; // edx
  unsigned __int64 v37; // rax
  unsigned int *v38; // rcx
  unsigned int v39; // r13d
  unsigned int v40; // r14d
  struct _KPROCESS *j; // rcx
  __int64 v42; // rdx
  struct _KTHREAD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // r13
  void *v46; // rbx
  struct _KPROCESS *NextProcess; // rax
  struct _KPROCESS *v48; // rdi
  unsigned int ProcessId; // eax
  DWORD SecurityInformation; // [rsp+34h] [rbp-54h] BYREF
  __int64 v51; // [rsp+38h] [rbp-50h] BYREF
  int v52; // [rsp+40h] [rbp-48h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+48h] [rbp-40h] BYREF
  void *v54; // [rsp+50h] [rbp-38h]
  ULONG Length; // [rsp+98h] [rbp+10h] BYREF

  SetBits = 0;
  v8 = 0;
  if ( a2 < 4 )
    return 3221225485LL;
  v52 = *(_DWORD *)a1;
  v9 = v52;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  if ( v52 > 18 )
  {
    if ( v52 == 25 )
      return (unsigned int)EtwpQueryCoverageSamplerInformation(a1);
    return (unsigned int)-1073741822;
  }
  if ( v52 == 18 )
    return (unsigned int)EtwpGetSoftRestartInformation(a1, v10, a4);
  if ( v52 <= 6 )
  {
    if ( v52 == 6 )
    {
      Length = 0;
      ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(a1 + 16);
      if ( a2 < 0x10 )
        return 3221225476LL;
      v54 = *(void **)(a1 + 8);
      Blink_low = (unsigned __int16)v54;
      if ( (unsigned __int16)v54 == 0xFFFF )
        Blink_low = LOBYTE(Flink[264].Blink);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      LOBYTE(v11) = 1;
      v19 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(Flink, Blink_low, v11);
      v54 = v19;
      if ( v19 )
      {
        v8 = EtwpCheckLoggerControlAccess(1u);
        if ( (v8 & 0x80000000) != 0 )
          goto LABEL_39;
        if ( (v19[204] & 0x80u) != 0 )
        {
          v30 = RtlNumberOfSetBits((PRTL_BITMAP)v19 + 65);
          Length = v30;
        }
        else
        {
          v30 = Length;
        }
        v31 = 4 * v30 + 16;
        *a4 = v31;
        if ( v31 <= a2 )
        {
          v32 = 0;
          v33 = ObjectsSecurityDescriptor;
          while ( 1 )
          {
            SecurityInformation = v32;
            if ( v32 >= v30 )
              break;
            SetBits = RtlFindSetBits((PRTL_BITMAP)v19 + 65, 1u, SetBits + 1);
            LODWORD(v51) = SetBits;
            v33[v32++] = SetBits;
            v30 = Length;
          }
          goto LABEL_39;
        }
        goto LABEL_61;
      }
      goto LABEL_60;
    }
    if ( !v52 )
    {
      *v12 = 8;
      if ( a2 == 8 )
      {
        *(_DWORD *)(a1 + 4) = 85;
        return v8;
      }
      return 3221225476LL;
    }
    if ( v52 != 1 )
    {
      if ( v52 == 2 )
      {
        *v12 = 16;
        if ( a2 == 16 )
        {
          *(_QWORD *)(a1 + 8) = PsGetCurrentServerSiloGlobals()[52].Flink[258].Blink;
          return v8;
        }
        return 3221225476LL;
      }
      if ( v52 == 3 )
      {
        *v12 = 8;
        if ( a2 == 8 )
        {
          *(_DWORD *)(a1 + 4) = EtwpProfileInterval;
          return v8;
        }
        return 3221225476LL;
      }
      if ( v52 != 4 )
      {
        if ( v52 != 5 )
          return (unsigned int)-1073741822;
        *v12 = 20;
        if ( ((v10 - 16) & 0xFFFFFFFB) == 0 )
        {
          *(_DWORD *)(a1 + 4) = EtwpSpinLockSpinThreshold;
          *(_DWORD *)(a1 + 8) = EtwpSpinLockAcquireSampleRate;
          *(_DWORD *)(a1 + 12) = EtwpSpinLockContentionSampleRate;
          if ( a2 == 20 )
            *(_DWORD *)(a1 + 16) = EtwpSpinLockHoldThreshold;
          return v8;
        }
        return 3221225476LL;
      }
      *v12 = 24;
      if ( a2 < 0x18 )
        return 3221225476LL;
      v54 = *(void **)(a1 + 8);
      SecurityInformation = *(_DWORD *)(a1 + 4);
      v42 = (unsigned __int16)v54;
      if ( (unsigned __int16)v54 == 0xFFFF )
        v42 = LOBYTE(Flink[264].Blink);
      v43 = KeGetCurrentThread();
      --v43->KernelApcDisable;
      v44 = EtwpAcquireLoggerContextByLoggerId(Flink, v42, 0LL);
      v45 = v44;
      if ( v44 )
      {
        v46 = (void *)EtwpReferenceLoggerSecurityDescriptor(v44);
        ObjectsSecurityDescriptor = v46;
        Length = a2 - 16;
        v8 = SeQuerySecurityDescriptorInfo(
               &SecurityInformation,
               (PSECURITY_DESCRIPTOR)(a1 + 16),
               &Length,
               &ObjectsSecurityDescriptor);
        *a4 = Length + 16;
        EtwpDereferenceLoggerSecurityDescriptor(v45, v46);
        v25 = 0LL;
        v38 = (unsigned int *)v45;
        goto LABEL_89;
      }
LABEL_60:
      v8 = -1073741162;
      goto LABEL_40;
    }
    *v12 = 48;
    if ( a2 != 48 )
      return 3221225476LL;
    v54 = *(void **)(a1 + 8);
    v16 = (unsigned __int16)v54;
    if ( (unsigned __int16)v54 == 0xFFFF )
      v16 = LOBYTE(Flink[264].Blink);
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    LOBYTE(v11) = 1;
    v18 = EtwpAcquireLoggerContextByLoggerId(Flink, v16, v11);
    v19 = (unsigned int *)v18;
    ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)v18;
    if ( !v18 )
      goto LABEL_60;
    if ( (*(_DWORD *)(v18 + 12) & 0x2000000) != 0 )
    {
      v34 = (_OWORD *)(a1 + 16);
      v35 = 2LL * *(unsigned __int8 *)(v18 + 818);
      *v34 = *(_OWORD *)((char *)&Flink[v35 + 267].Blink + 4);
      v34[1] = *(_OWORD *)((char *)&Flink[v35 + 268].Blink + 4);
      for ( i = 0; i < 8; ++i )
      {
        if ( v34
          && (dword_140B2E414[2 * i] & *((_DWORD *)v34 + ((unsigned __int64)(unsigned int)dword_140B2E414[2 * i] >> 29)) & 0x1FFFFFFF) != 0 )
        {
          v37 = (unsigned __int64)(unsigned int)EtwpEnableFlagMap[2 * i] >> 29;
          *((_DWORD *)v34 + v37) |= EtwpEnableFlagMap[2 * i] & 0x1FFFFFFF;
        }
      }
      goto LABEL_39;
    }
    KeReleaseMutex((PRKMUTEX)(v18 + 632), 0);
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v19 + 170) + 448LL) + 8LL * *v19),
      1u);
    KeLeaveCriticalRegion();
    return 3221225485LL;
  }
  switch ( v52 )
  {
    case 7:
      *v12 = 16;
      if ( a2 == 16 )
      {
        *(_DWORD *)(a1 + 4) = EtwpExecutiveResourceReleaseSampleRate;
        *(_DWORD *)(a1 + 8) = EtwpExecutiveResourceContentionSampleRate;
        *(_DWORD *)(a1 + 12) = EtwpExecutiveResourceTimeout;
        return v8;
      }
      return 3221225476LL;
    case 8:
    case 9:
      v39 = 0;
      if ( a2 < 8 )
        return 3221225476LL;
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        v40 = (a2 - 4) >> 2;
        for ( j = 0LL; ; j = v48 )
        {
          NextProcess = (struct _KPROCESS *)PsGetNextProcess(j);
          v48 = NextProcess;
          ObjectsSecurityDescriptor = NextProcess;
          if ( !NextProcess )
            break;
          if ( (NextProcess[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0
            && (v9 == 9 || EtwpUMGLEnabled((ULONG_PTR)NextProcess)) )
          {
            ProcessId = (unsigned int)PsGetProcessId(v48);
            if ( v39 < v40 )
              *(_DWORD *)(a1 + 4LL * v39 + 4) = ProcessId;
            ++v39;
          }
        }
        *a4 = 4 * v39 + 4;
        return v40 < v39 ? 0xC0000023 : 0;
      }
      return 3221225506LL;
    case 10:
      v54 = (void *)(a1 + 16);
      if ( a2 < 0x10 )
        return 3221225476LL;
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        ObjectsSecurityDescriptor = *(PSECURITY_DESCRIPTOR *)(a1 + 8);
        v21 = (unsigned __int16)ObjectsSecurityDescriptor;
        if ( (unsigned __int16)ObjectsSecurityDescriptor == 0xFFFF )
          v21 = LOBYTE(Flink[264].Blink);
        v22 = KeGetCurrentThread();
        --v22->KernelApcDisable;
        LOBYTE(v20) = 1;
        v23 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(Flink, v21, v20);
        v19 = v23;
        ObjectsSecurityDescriptor = v23;
        if ( v23 )
        {
          if ( (v23[3] & 0x2000000) == 0 )
          {
            LOBYTE(v24) = 1;
            EtwpReleaseLoggerContext(v23, v24);
            v8 = -1073741811;
            goto LABEL_40;
          }
          v8 = EtwpCheckSystemTraceAccess(v23, 1LL);
          if ( (v8 & 0x80000000) == 0 )
          {
            v26 = 5LL * *((unsigned __int8 *)v19 + 818);
            v27 = 4 * (unsigned __int16)EtwpPoolTagFilter[10 * *((unsigned __int8 *)v19 + 818)] + 16;
            *a4 = v27;
            if ( v27 <= a2 )
            {
              memmove(
                v54,
                (const void *)(0x140000000LL + 4 * v26 + 15724068),
                4LL * (unsigned __int16)EtwpPoolTagFilter[2 * v26]);
LABEL_39:
              KeReleaseMutex((PRKMUTEX)(v19 + 158), 0);
              ExReleaseRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v19 + 170) + 448LL) + 8LL * *v19),
                1u);
LABEL_40:
              KeLeaveCriticalRegion();
              return v8;
            }
LABEL_61:
            v8 = -1073741789;
            goto LABEL_39;
          }
          LOBYTE(v25) = 1;
          v38 = v19;
LABEL_89:
          EtwpReleaseLoggerContext(v38, v25);
          goto LABEL_40;
        }
        goto LABEL_60;
      }
      return 3221225506LL;
    case 12:
      return (unsigned int)EtwpGetPmcProfileSource(a1, v10, a4);
  }
  if ( v52 != 13 )
    return (unsigned int)-1073741822;
  ObjectsSecurityDescriptor = 0LL;
  v51 = 0LL;
  if ( a2 < 0x28 )
    return 3221225476LL;
  result = ExLockUserBuffer(a1 + 8, a2 - 8, v11, IoWriteAccess, &v51, (struct _MDL **)&ObjectsSecurityDescriptor);
  if ( (int)result >= 0 )
  {
    v8 = guard_dispatch_icall_no_overrides(20LL);
    if ( v51 )
      ExUnlockUserBuffer((struct _MDL *)ObjectsSecurityDescriptor);
    return v8;
  }
  return result;
}
