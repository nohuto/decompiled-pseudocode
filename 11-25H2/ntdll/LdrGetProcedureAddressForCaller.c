/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x180007BE0
 * Callers:
 *     LdrGetProcedureAddress @ 0x180007770 (LdrGetProcedureAddress.c)
 *     LdrGetProcedureAddressEx @ 0x180007BB0 (LdrGetProcedureAddressEx.c)
 *     LdrpCodeAuthzInitialize @ 0x1800142A0 (LdrpCodeAuthzInitialize.c)
 *     CsrClientConnectToServer @ 0x1800355E0 (CsrClientConnectToServer.c)
 *     LdrpInitializeKernel32Functions @ 0x1800CB874 (LdrpInitializeKernel32Functions.c)
 *     LdrpGetShimEngineInterface @ 0x1800D11F0 (LdrpGetShimEngineInterface.c)
 *     AVrfpDetectVerifiedExports @ 0x1800ED1AC (AVrfpDetectVerifiedExports.c)
 * Callees:
 *     LdrpInitializeGraphRecurse @ 0x180008690 (LdrpInitializeGraphRecurse.c)
 *     LdrpReportError @ 0x180008910 (LdrpReportError.c)
 *     LdrpDestroyNode @ 0x180008BB8 (LdrpDestroyNode.c)
 *     LdrpReleaseTlsEntry @ 0x180008C0C (LdrpReleaseTlsEntry.c)
 *     RtlValidateUserCallTarget @ 0x180008CD0 (RtlValidateUserCallTarget.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800096CC (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x180009774 (RtlGuardIsExportSuppressedAddress.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpResolveProcedureAddress @ 0x180013B70 (LdrpResolveProcedureAddress.c)
 *     RtlReleaseActivationContext @ 0x18001A130 (RtlReleaseActivationContext.c)
 *     LdrControlFlowGuardEnforced @ 0x180023510 (LdrControlFlowGuardEnforced.c)
 *     LdrpUnmapModule @ 0x180024A44 (LdrpUnmapModule.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     LdrpFreeUnicodeString @ 0x18006F7E0 (LdrpFreeUnicodeString.c)
 *     LdrpDrainWorkQueue @ 0x18006FAA0 (LdrpDrainWorkQueue.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     AVrfCallAPILookupCallback @ 0x1800DC4EC (AVrfCallAPILookupCallback.c)
 *     LdrpDereferenceEnclave @ 0x1800DE050 (LdrpDereferenceEnclave.c)
 *     LdrpDropLastInProgressCount @ 0x1800F05A0 (LdrpDropLastInProgressCount.c)
 *     ExecuteHotpatchTestRuntimeFunction @ 0x180133138 (ExecuteHotpatchTestRuntimeFunction.c)
 *     GetHotpatchTestRuntimeFunctionState @ 0x180133164 (GetHotpatchTestRuntimeFunctionState.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl LdrGetProcedureAddressForCaller(
        PVOID DllHandle,
        PANSI_STRING ProcedureName,
        ULONG ProcedureNumber,
        PVOID *ProcedureAddress,
        ULONG Flags,
        PVOID *Callback)
{
  __int64 v6; // r13
  int v11; // r15d
  size_t Length; // rbx
  unsigned int v13; // ecx
  void *p_SpinCount; // r12
  __int64 v16; // r12
  __int64 v17; // rax
  int v18; // ebx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // r15d
  int v23; // ebx
  int v24; // esi
  NTSTATUS v25; // ebx
  unsigned __int64 Root; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rsi
  __int64 v30; // rax
  char *v31; // r15
  __int64 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rsi
  NTSTATUS (__cdecl *v36)(PRTL_CRITICAL_SECTION); // r10
  __int64 v37; // rax
  _QWORD *v38; // r8
  PVOID *v39; // rdx
  __int64 v40; // rdx
  _QWORD *v41; // rcx
  _QWORD *v42; // r15
  _QWORD *v43; // r12
  _ACTIVATION_CONTEXT *v44; // rcx
  int v45; // eax
  _RTL_CRITICAL_SECTION_DEBUG *v46; // rbx
  NTSTATUS v47; // eax
  _QWORD *v48; // rcx
  PVOID v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rdi
  _QWORD *v52; // rsi
  _ACTIVATION_CONTEXT *v53; // rcx
  char v54; // [rsp+30h] [rbp-D0h]
  int v55; // [rsp+34h] [rbp-CCh]
  char v56[8]; // [rsp+38h] [rbp-C8h] BYREF
  PVOID v57; // [rsp+40h] [rbp-C0h]
  _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // [rsp+48h] [rbp-B8h] BYREF
  __int64 i; // [rsp+50h] [rbp-B0h]
  PVOID BaseAddress; // [rsp+58h] [rbp-A8h]
  ULONG v61; // [rsp+60h] [rbp-A0h]
  int v62; // [rsp+64h] [rbp-9Ch]
  int v63; // [rsp+68h] [rbp-98h] BYREF
  _RTL_CRITICAL_SECTION CriticalSection; // [rsp+70h] [rbp-90h] BYREF

  v6 = 0LL;
  v55 = 0;
  CriticalSection.OwningThread = ProcedureAddress;
  v63 = 0;
  CriticalSection.DebugInfo = 0LL;
  v61 = ProcedureNumber;
  ExecuteHotpatchTestRuntimeFunction();
  if ( (unsigned int)GetHotpatchTestRuntimeFunctionState()
    && !DllHandle
    && !ProcedureName
    && !ProcedureNumber
    && !Callback
    && ProcedureAddress )
  {
    *ProcedureAddress = (PVOID)4025479151LL;
    return -1073741811;
  }
  DebugInfo = 0LL;
  v54 = 0;
  if ( (Flags & 1) == 0 || (v11 = 6, LdrpDllNotificationLock.OwningThread != NtCurrentTeb()->ClientId.UniqueThread) )
    v11 = 9;
  if ( ProcedureName )
  {
    Length = ProcedureName->Length;
    v13 = Length + 1;
    if ( ProcedureName->MaximumLength < (unsigned int)(Length + 1)
      || (p_SpinCount = ProcedureName->Buffer, BaseAddress = p_SpinCount, *((_BYTE *)p_SpinCount + Length)) )
    {
      if ( v13 <= 0x80 )
      {
        p_SpinCount = &CriticalSection.SpinCount;
        BaseAddress = &CriticalSection.SpinCount;
      }
      else
      {
        BaseAddress = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v13);
        p_SpinCount = BaseAddress;
        if ( !BaseAddress )
          return -1073741670;
        v54 = 1;
      }
      memmove(p_SpinCount, ProcedureName->Buffer, Length);
      *((_BYTE *)p_SpinCount + Length) = 0;
    }
  }
  else
  {
    p_SpinCount = 0LL;
    BaseAddress = 0LL;
  }
  *(_QWORD *)&CriticalSection.LockCount = p_SpinCount;
  v16 = 0LL;
  v62 = 1;
  for ( i = 0LL; ; i = v16 )
  {
    RtlEnterCriticalSection(&LdrpEnclaveListLock);
    v17 = LdrpEnclaveList;
    if ( (__int64 *)LdrpEnclaveList != &LdrpEnclaveList )
    {
      while ( 1 )
      {
        v16 = v17;
        i = v17;
        if ( DllHandle == *(PVOID *)(v17 + 72) )
          break;
        v17 = *(_QWORD *)v17;
        if ( (__int64 *)v17 == &LdrpEnclaveList )
          goto LABEL_18;
      }
    }
    if ( !v16 )
    {
LABEL_18:
      RtlLeaveCriticalSection(&LdrpEnclaveListLock);
      goto LABEL_19;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 60));
    RtlLeaveCriticalSection(&LdrpEnclaveListLock);
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(v16 + 16));
    if ( *(_QWORD *)(v16 + 72) )
      break;
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v16 + 16));
    LdrpDereferenceEnclave(v16);
  }
  if ( *(_DWORD *)(v16 + 56) == 16 && *(_DWORD *)(v16 + 64) == 2 )
  {
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v16 + 16));
    v25 = 0;
    v55 = 9;
    v6 = *(_QWORD *)(v16 + 112);
    v24 = 3;
    v57 = (PVOID)v6;
    v62 = 3;
    goto LABEL_49;
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v16 + 16));
  LdrpDereferenceEnclave(v16);
LABEL_19:
  i = 0LL;
  v16 = 0LL;
  v57 = 0LL;
  if ( !DllHandle )
  {
    v57 = 0LL;
LABEL_48:
    v25 = -1073741515;
    v24 = 1;
LABEL_49:
    v22 = v6;
    if ( !v6 )
    {
      v48 = v57;
      goto LABEL_129;
    }
    v23 = v62;
LABEL_51:
    RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
    Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
    if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
    {
      if ( !LdrpModuleBaseAddressIndex.Root )
        goto LABEL_117;
      Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
    }
    if ( Root )
    {
      while ( 1 )
      {
        v27 = *(_QWORD *)(Root - 152);
        if ( (unsigned __int64)Callback < v27 )
          break;
        if ( (unsigned __int64)Callback < v27 + *(unsigned int *)(Root - 136) )
          goto LABEL_61;
        v28 = *(_QWORD *)(Root + 8);
        if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) == 0 || !v28 )
          goto LABEL_59;
        Root ^= v28;
LABEL_60:
        if ( !Root )
          goto LABEL_61;
      }
      v28 = *(_QWORD *)Root;
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v28 )
      {
        Root ^= v28;
        goto LABEL_60;
      }
LABEL_59:
      Root = v28;
      goto LABEL_60;
    }
LABEL_61:
    i = v16;
    if ( Root )
    {
      v29 = Root - 200;
      v30 = *(_QWORD *)(Root - 48);
      if ( *(_DWORD *)(v30 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v30 - 56LL) & 0x20) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v29 + 276));
      RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
      v31 = (char *)v57;
      v32 = v16;
      v25 = LdrpResolveProcedureAddress(v29, (_DWORD)v57, (_DWORD)BaseAddress, v61, v23, (__int64)&DebugInfo);
      v33 = v16;
      if ( !v29 )
        goto LABEL_69;
      v34 = *(_QWORD *)(v29 + 152);
      if ( *(_DWORD *)(v34 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v34 - 56LL) & 0x20) != 0 )
      {
        v33 = v16;
        goto LABEL_69;
      }
      v33 = v16;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 276), 0xFFFFFFFF) != 1 )
      {
LABEL_69:
        if ( v25 >= 0 )
        {
          v35 = v33;
          if ( v55 != 7
            || (Flags & 1) != 0
            || (NtCurrentTeb()->SameTebFlags & 0x1000) == 0
            || LdrpDllNotificationLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread
            || (v50 = *((_QWORD *)v31 + 19), v56[0] = 0, v25 = LdrpInitializeGraphRecurse(v50, 0LL, v56), v25 >= 0) )
          {
            v33 = v35;
            if ( !v35 )
            {
              if ( AvrfpAPILookupCallbacksEnabled )
                AVrfCallAPILookupCallback(
                  (_DWORD)Callback,
                  *((_QWORD *)v31 + 6),
                  (_DWORD)DebugInfo,
                  0,
                  (__int64)&DebugInfo);
              v33 = 0LL;
              if ( g_ShimsEnabled )
              {
                CriticalSection.DebugInfo = 0LL;
                v36 = (NTSTATUS (__cdecl *)(PRTL_CRITICAL_SECTION))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                                           g_pfnSE_GetProcAddressForCaller,
                                                                                           64
                                                                                         - (MEMORY[0x7FFE0330] & 0x3Fu)));
                if ( v36 == RtlLeaveCriticalSection )
                {
                  RtlLeaveCriticalSection(&CriticalSection);
                }
                else if ( v36 == RtlEnterCriticalSection )
                {
                  RtlEnterCriticalSection(&CriticalSection);
                }
                else
                {
                  ((void (__fastcall *)(_RTL_CRITICAL_SECTION *, char *, _RTL_CRITICAL_SECTION_DEBUG *, _QWORD, PVOID *))v36)(
                    &CriticalSection,
                    v31,
                    DebugInfo,
                    0LL,
                    Callback);
                }
                v33 = 0LL;
                if ( CriticalSection.DebugInfo )
                  DebugInfo = CriticalSection.DebugInfo;
              }
            }
LABEL_83:
            if ( v33 )
            {
              LdrpDereferenceEnclave(v33);
              v48 = v57;
              goto LABEL_132;
            }
            v37 = *((_QWORD *)v31 + 19);
            if ( *(_DWORD *)(v37 + 24) == -1
              || (*(_BYTE *)(*(_QWORD *)v37 - 56LL) & 0x20) != 0
              || _InterlockedExchangeAdd((volatile signed __int32 *)v31 + 69, 0xFFFFFFFF) != 1 )
            {
              goto LABEL_86;
            }
            RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
            v38 = (_QWORD *)*((_QWORD *)v31 + 20);
            if ( (char *)v38[1] == v31 + 160 )
            {
              v39 = (PVOID *)*((_QWORD *)v31 + 21);
              if ( *v39 == v31 + 160 )
              {
                *v39 = v38;
                v38[1] = v39;
                v51 = (_QWORD *)*((_QWORD *)v31 + 19);
                v52 = (_QWORD *)*v51;
                RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
                if ( *((_WORD *)v31 + 55) )
                  LdrpReleaseTlsEntry(v31, 0LL);
                LdrpUnmapModule(v31);
                v53 = (_ACTIVATION_CONTEXT *)*((_QWORD *)v31 + 17);
                if ( (unsigned __int64)&v53[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
                  RtlReleaseActivationContext(v53);
                if ( *((_QWORD *)v31 + 10) )
                  LdrpFreeUnicodeString(v31 + 72);
                RtlFreeHeap(LdrpHeap, 0, v31);
                if ( v52 == v51 )
                  LdrpDestroyNode(v51);
                goto LABEL_86;
              }
            }
LABEL_95:
            __fastfail(3u);
          }
          DebugInfo = 0LL;
          v33 = v35;
        }
        if ( v25 == -1073741515 || v25 == -1073741502 )
          v25 = -1073741702;
        goto LABEL_83;
      }
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v40 = *(_QWORD *)(v29 + 160);
      if ( *(_QWORD *)(v40 + 8) != v29 + 160 )
        goto LABEL_95;
      v41 = *(_QWORD **)(v29 + 168);
      if ( *v41 != v29 + 160 )
        goto LABEL_95;
      *v41 = v40;
      *(_QWORD *)(v40 + 8) = v41;
      v42 = *(_QWORD **)(v29 + 152);
      v43 = (_QWORD *)*v42;
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( *(_WORD *)(v29 + 110) )
        LdrpReleaseTlsEntry(v29, 0LL);
      LdrpUnmapModule(v29);
      v44 = *(_ACTIVATION_CONTEXT **)(v29 + 136);
      if ( (unsigned __int64)&v44[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
        RtlReleaseActivationContext(v44);
      if ( *(_QWORD *)(v29 + 80) )
        LdrpFreeUnicodeString(v29 + 72);
      RtlFreeHeap(LdrpHeap, 0, (PVOID)v29);
      v33 = v32;
      if ( v43 == v42 )
      {
        LdrpDestroyNode(v42);
        v31 = (char *)v57;
        v33 = v32;
        goto LABEL_69;
      }
LABEL_118:
      v31 = (char *)v57;
      goto LABEL_69;
    }
LABEL_117:
    RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
    v47 = LdrpResolveProcedureAddress(0, v22, (_DWORD)BaseAddress, v61, v24, (__int64)&DebugInfo);
    v33 = i;
    v25 = v47;
    goto LABEL_118;
  }
  v18 = 0;
  while ( 1 )
  {
    v55 = v18;
    i = 0LL;
    if ( DllHandle == LdrpSystemDllBase )
    {
      v6 = LdrpNtDllDataTableEntry;
      v57 = (PVOID)LdrpNtDllDataTableEntry;
      i = 0LL;
      v18 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
      v55 = v18;
    }
    else
    {
      RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
      {
        if ( !LdrpModuleBaseAddressIndex.Root )
        {
          i = 0LL;
          v57 = 0LL;
          goto LABEL_39;
        }
        v19 = (unsigned __int64)LdrpModuleBaseAddressIndex.Root ^ (unsigned __int64)&LdrpModuleBaseAddressIndex;
      }
      else
      {
        v19 = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
      }
      if ( v19 )
      {
        i = 0LL;
        v55 = v18;
        v57 = 0LL;
        while ( (unsigned __int64)DllHandle >= *(_QWORD *)(v19 - 152) )
        {
          if ( (unsigned __int64)DllHandle <= *(_QWORD *)(v19 - 152) )
            goto LABEL_34;
          v20 = *(_QWORD *)(v19 + 8);
          if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) == 0 || !v20 )
            goto LABEL_32;
          v19 ^= v20;
LABEL_33:
          if ( !v19 )
          {
LABEL_34:
            if ( v19 )
            {
              v6 = v19 - 200;
              v21 = *(_QWORD *)(v19 - 48);
              v57 = (PVOID)v6;
              if ( *(_DWORD *)(v21 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v21 - 56LL) & 0x20) == 0 )
                _InterlockedIncrement((volatile signed __int32 *)(v6 + 276));
              v18 = *(_DWORD *)(*(_QWORD *)(v6 + 152) + 56LL);
LABEL_39:
              v55 = v18;
            }
            goto LABEL_40;
          }
        }
        v20 = *(_QWORD *)v19;
        if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v20 )
        {
          v19 ^= v20;
          goto LABEL_33;
        }
LABEL_32:
        v19 = v20;
        goto LABEL_33;
      }
LABEL_40:
      RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
    }
    if ( !v6 )
      goto LABEL_48;
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 || v18 >= v11 )
    {
      v55 = v18;
      v22 = v6;
      v23 = 1;
      i = 0LL;
      v24 = 1;
      v57 = (PVOID)v6;
      goto LABEL_51;
    }
    LdrpDereferenceModule((PVOID)v6);
    if ( v18 < 0 )
      break;
    LdrpDrainWorkQueue(0LL);
    LdrpDropLastInProgressCount();
    v6 = 0LL;
    v57 = 0LL;
  }
  v48 = 0LL;
  v25 = -1073741811;
LABEL_129:
  if ( v16 )
  {
LABEL_132:
    if ( v25 >= 0 )
    {
      DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)((char *)DebugInfo + v48[23] - v48[6]);
      goto LABEL_87;
    }
  }
LABEL_86:
  if ( v25 == -1073741702 )
  {
    v49 = BaseAddress;
    if ( !BaseAddress )
    {
      v49 = (PVOID)v61;
      BaseAddress = (PVOID)v61;
    }
    v25 = (*(_QWORD *)&CriticalSection.LockCount != 0LL) - 1073741512;
    LdrpReportError(0LL, v49, (unsigned int)v25);
  }
LABEL_87:
  if ( v54 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  if ( !UseWOW64
    && v25 >= 0
    && LdrSystemDllInitBlock.CfgBitMap
    && (LdrSystemDllInitBlock.Flags & 1) == 0
    && (BYTE5(LdrSystemDllInitBlock.MitigationOptionsMap.Map[0]) & 3) == 3
    && (unsigned int)RtlValidateUserCallTarget(DebugInfo, &v63) != 1
    && (v63 & 0x10) != 0 )
  {
    LOBYTE(v45) = LdrControlFlowGuardEnforced();
    if ( v45 )
    {
      v46 = DebugInfo;
      if ( (unsigned __int8)RtlGuardIsExportSuppressedAddress(DebugInfo) != 1
        || (v25 = RtlpGuardGrantSuppressedCallAccess(v46, 4LL), v25 < 0) )
      {
        __fastfail(0x2Eu);
      }
    }
    else
    {
      v25 = 0;
    }
  }
  *(_QWORD *)CriticalSection.OwningThread = DebugInfo;
  return v25;
}
