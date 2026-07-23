/*
 * XREFs of EtwQueryPerformanceTraceInformation @ 0x14094649C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x14025FDEC (ExUnlockUserBuffer.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlNumberOfSetBits @ 0x140377880 (RtlNumberOfSetBits.c)
 *     RtlFindSetBits @ 0x1403E6CF0 (RtlFindSetBits.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     EtwpGetPmcProfileSource @ 0x1407A9E20 (EtwpGetPmcProfileSource.c)
 *     EtwpUMGLEnabled @ 0x1407AA76C (EtwpUMGLEnabled.c)
 *     EtwpGetSoftRestartInformation @ 0x1407AFBC0 (EtwpGetSoftRestartInformation.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14083732C (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpCheckLoggerControlAccess @ 0x1408375F4 (EtwpCheckLoggerControlAccess.c)
 *     PsGetNextProcess @ 0x1408603A0 (PsGetNextProcess.c)
 *     SeQuerySecurityDescriptorInfo @ 0x14087CD40 (SeQuerySecurityDescriptorInfo.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckSystemTraceAccess @ 0x1409454B0 (EtwpCheckSystemTraceAccess.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x140946A88 (EtwpQueryCoverageSamplerInformation.c)
 *     ExLockUserBuffer @ 0x14094F5B8 (ExLockUserBuffer.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x140A1F830 (EtwpDereferenceLoggerSecurityDescriptor.c)
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
  unsigned int v16; // r14d
  unsigned int v17; // edx
  struct _KTHREAD *v18; // rax
  __int64 v19; // rax
  unsigned int *v20; // rbx
  unsigned int v21; // edx
  struct _KTHREAD *v22; // rax
  unsigned int *v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // eax
  unsigned int Blink_low; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v28; // rax
  ULONG v29; // ecx
  unsigned int v30; // eax
  DWORD v31; // esi
  _DWORD *v32; // r14
  _OWORD *v33; // rsi
  __int64 v34; // rax
  unsigned int i; // edx
  unsigned __int64 v36; // rax
  char v37; // dl
  unsigned int *v38; // rcx
  unsigned int v39; // r13d
  unsigned int v40; // r14d
  struct _KPROCESS *j; // rcx
  unsigned int v42; // edx
  struct _KTHREAD *v43; // rax
  __int64 v44; // rax
  unsigned int *v45; // r13
  void *v46; // rbx
  __int64 *NextProcess; // rax
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
        Blink_low = LOBYTE(Flink[281].Blink);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v28 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId((__int64)Flink, Blink_low, 1u);
      v20 = v28;
      v54 = v28;
      if ( v28 )
      {
        v8 = EtwpCheckLoggerControlAccess(1u, (__int64)v28);
        if ( (v8 & 0x80000000) != 0 )
          goto LABEL_39;
        if ( (v20[204] & 0x80u) != 0 )
        {
          v29 = RtlNumberOfSetBits((PRTL_BITMAP)v20 + 65);
          Length = v29;
        }
        else
        {
          v29 = Length;
        }
        v30 = 4 * v29 + 16;
        *a4 = v30;
        if ( v30 <= a2 )
        {
          v31 = 0;
          v32 = ObjectsSecurityDescriptor;
          while ( 1 )
          {
            SecurityInformation = v31;
            if ( v31 >= v29 )
              break;
            SetBits = RtlFindSetBits((PRTL_BITMAP)v20 + 65, 1u, SetBits + 1);
            LODWORD(v51) = SetBits;
            v32[v31++] = SetBits;
            v29 = Length;
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
          *(_QWORD *)(a1 + 8) = PsGetCurrentServerSiloGlobals()[52].Flink[275].Blink;
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
        v42 = LOBYTE(Flink[281].Blink);
      v43 = KeGetCurrentThread();
      --v43->KernelApcDisable;
      v44 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v42, 0);
      v45 = (unsigned int *)v44;
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
        v37 = 0;
        v38 = v45;
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
    v17 = (unsigned __int16)v54;
    if ( (unsigned __int16)v54 == 0xFFFF )
      v17 = LOBYTE(Flink[281].Blink);
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    v19 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v17, 1u);
    v20 = (unsigned int *)v19;
    ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)v19;
    if ( !v19 )
      goto LABEL_60;
    if ( (*(_DWORD *)(v19 + 12) & 0x2000000) != 0 )
    {
      v33 = (_OWORD *)(a1 + 16);
      v34 = 2LL * *(unsigned __int8 *)(v19 + 818);
      *v33 = *(_OWORD *)((char *)&Flink[v34 + 284].Blink + 4);
      v33[1] = *(_OWORD *)((char *)&Flink[v34 + 285].Blink + 4);
      for ( i = 0; i < 8; ++i )
      {
        if ( v33
          && (dword_140B3F494[2 * i] & *((_DWORD *)v33 + ((unsigned __int64)(unsigned int)dword_140B3F494[2 * i] >> 29)) & 0x1FFFFFFF) != 0 )
        {
          v36 = (unsigned __int64)(unsigned int)EtwpEnableFlagMap[2 * i] >> 29;
          *((_DWORD *)v33 + v36) |= EtwpEnableFlagMap[2 * i] & 0x1FFFFFFF;
        }
      }
      goto LABEL_39;
    }
    KeReleaseMutex((PRKMUTEX)(v19 + 632), 0);
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v20 + 170) + 704LL) + 8LL * *v20),
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
          NextProcess = PsGetNextProcess(j);
          v48 = (struct _KPROCESS *)NextProcess;
          ObjectsSecurityDescriptor = NextProcess;
          if ( !NextProcess )
            break;
          if ( (*((_DWORD *)NextProcess + 383) & 0x1000) == 0 && (v9 == 9 || EtwpUMGLEnabled((ULONG_PTR)NextProcess)) )
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
          v21 = LOBYTE(Flink[281].Blink);
        v22 = KeGetCurrentThread();
        --v22->KernelApcDisable;
        v23 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v21, 1u);
        v20 = v23;
        ObjectsSecurityDescriptor = v23;
        if ( v23 )
        {
          if ( (v23[3] & 0x2000000) == 0 )
          {
            EtwpReleaseLoggerContext(v23, 1);
            v8 = -1073741811;
            goto LABEL_40;
          }
          v8 = EtwpCheckSystemTraceAccess((__int64)v23, 1u);
          if ( (v8 & 0x80000000) == 0 )
          {
            v24 = 5LL * *((unsigned __int8 *)v20 + 818);
            v25 = 4 * (unsigned __int16)EtwpPoolTagFilter[10 * *((unsigned __int8 *)v20 + 818)] + 16;
            *a4 = v25;
            if ( v25 <= a2 )
            {
              memmove(
                v54,
                (const void *)(0x140000000LL + 4 * v24 + 15726116),
                4LL * (unsigned __int16)EtwpPoolTagFilter[2 * v24]);
LABEL_39:
              KeReleaseMutex((PRKMUTEX)(v20 + 158), 0);
              ExReleaseRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v20 + 170) + 704LL) + 8LL * *v20),
                1u);
LABEL_40:
              KeLeaveCriticalRegion();
              return v8;
            }
LABEL_61:
            v8 = -1073741789;
            goto LABEL_39;
          }
          v37 = 1;
          v38 = v20;
LABEL_89:
          EtwpReleaseLoggerContext(v38, v37);
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
  v16 = a2 - 8;
  result = ExLockUserBuffer(a1 + 8, v16, v11, 1LL, &v51, &ObjectsSecurityDescriptor);
  if ( (int)result >= 0 )
  {
    v8 = guard_dispatch_icall_no_overrides(20LL, v16);
    if ( v51 )
      ExUnlockUserBuffer((struct _MDL *)ObjectsSecurityDescriptor);
    return v8;
  }
  return result;
}
