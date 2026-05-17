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

__int64 __fastcall LdrGetProcedureAddressForCaller(
        unsigned __int64 a1,
        const void **a2,
        unsigned int a3,
        _QWORD *a4,
        char a5,
        unsigned __int64 a6)
{
  __int64 v6; // r13
  int v11; // r15d
  size_t v12; // rbx
  _BYTE *v13; // r12
  __int64 *v15; // r12
  __int64 *v16; // rax
  int v17; // ebx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r15
  int v22; // ebx
  int v23; // esi
  int v24; // ebx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 *v31; // r14
  __int64 *v32; // rcx
  __int64 v33; // rcx
  __int64 *v34; // rsi
  __int64 (__fastcall *v35)(_QWORD); // r10
  __int64 v36; // rax
  __int64 v37; // r8
  _QWORD *v38; // rdx
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  _QWORD *v41; // r15
  _QWORD *v42; // r12
  __int64 v43; // rbx
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rdi
  _QWORD *v49; // rsi
  char v50; // [rsp+30h] [rbp-D0h]
  int v51; // [rsp+34h] [rbp-CCh]
  char v52[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+40h] [rbp-C0h]
  __int64 v54; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *i; // [rsp+50h] [rbp-B0h]
  __int64 Heap; // [rsp+58h] [rbp-A8h]
  unsigned int v57; // [rsp+60h] [rbp-A0h]
  int v58; // [rsp+64h] [rbp-9Ch]
  int v59; // [rsp+68h] [rbp-98h] BYREF
  __int64 v60; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v61; // [rsp+78h] [rbp-88h]
  _QWORD *v62; // [rsp+80h] [rbp-80h]
  _BYTE v63[128]; // [rsp+90h] [rbp-70h] BYREF

  v6 = 0LL;
  v51 = 0;
  v62 = a4;
  v59 = 0;
  v60 = 0LL;
  v57 = a3;
  ExecuteHotpatchTestRuntimeFunction();
  if ( (unsigned int)GetHotpatchTestRuntimeFunctionState() && !a1 && !a2 && !a3 && !a6 && a4 )
  {
    *a4 = 4025479151LL;
    return 3221225485LL;
  }
  v54 = 0LL;
  v50 = 0;
  if ( (a5 & 1) == 0 || (v11 = 6, (void *)qword_1801CE8F0 != NtCurrentTeb()->ClientId.UniqueThread) )
    v11 = 9;
  if ( a2 )
  {
    v12 = *(unsigned __int16 *)a2;
    if ( *((unsigned __int16 *)a2 + 1) < (unsigned int)(v12 + 1) || (v13 = a2[1], Heap = (__int64)v13, v13[v12]) )
    {
      if ( (unsigned int)(v12 + 1) <= 0x80 )
      {
        v13 = v63;
        Heap = (__int64)v63;
      }
      else
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
        v13 = (_BYTE *)Heap;
        if ( !Heap )
          return 3221225626LL;
        v50 = 1;
      }
      memmove(v13, a2[1], v12);
      v13[v12] = 0;
    }
  }
  else
  {
    v13 = 0LL;
    Heap = 0LL;
  }
  v61 = v13;
  v15 = 0LL;
  v58 = 1;
  for ( i = 0LL; ; i = v15 )
  {
    RtlEnterCriticalSection(&LdrpEnclaveListLock);
    v16 = (__int64 *)LdrpEnclaveList;
    if ( (__int64 *)LdrpEnclaveList != &LdrpEnclaveList )
    {
      while ( 1 )
      {
        v15 = v16;
        i = v16;
        if ( a1 == v16[9] )
          break;
        v16 = (__int64 *)*v16;
        if ( v16 == &LdrpEnclaveList )
          goto LABEL_18;
      }
    }
    if ( !v15 )
    {
LABEL_18:
      RtlLeaveCriticalSection(&LdrpEnclaveListLock);
      goto LABEL_19;
    }
    _InterlockedIncrement((volatile signed __int32 *)v15 + 15);
    RtlLeaveCriticalSection(&LdrpEnclaveListLock);
    RtlEnterCriticalSection(v15 + 2);
    if ( v15[9] )
      break;
    RtlLeaveCriticalSection(v15 + 2);
    LdrpDereferenceEnclave(v15);
  }
  if ( *((_DWORD *)v15 + 14) == 16 && *((_DWORD *)v15 + 16) == 2 )
  {
    RtlLeaveCriticalSection(v15 + 2);
    v24 = 0;
    v51 = 9;
    v6 = v15[14];
    v23 = 3;
    v53 = v6;
    v58 = 3;
    goto LABEL_49;
  }
  RtlLeaveCriticalSection(v15 + 2);
  LdrpDereferenceEnclave(v15);
LABEL_19:
  i = 0LL;
  v15 = 0LL;
  v53 = 0LL;
  if ( !a1 )
  {
    v53 = 0LL;
LABEL_48:
    v24 = -1073741515;
    v23 = 1;
LABEL_49:
    v21 = v6;
    if ( !v6 )
    {
      v45 = v53;
      goto LABEL_129;
    }
    v22 = v58;
LABEL_51:
    RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
    v25 = LdrpModuleBaseAddressIndex;
    if ( (qword_1801D44B0 & 1) != 0 )
    {
      if ( !LdrpModuleBaseAddressIndex )
        goto LABEL_117;
      v25 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
    }
    if ( v25 )
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)(v25 - 152);
        if ( a6 < v26 )
          break;
        if ( a6 < v26 + *(unsigned int *)(v25 - 136) )
          goto LABEL_61;
        v27 = *(_QWORD *)(v25 + 8);
        if ( (qword_1801D44B0 & 1) == 0 || !v27 )
          goto LABEL_59;
        v25 ^= v27;
LABEL_60:
        if ( !v25 )
          goto LABEL_61;
      }
      v27 = *(_QWORD *)v25;
      if ( (qword_1801D44B0 & 1) != 0 && v27 )
      {
        v25 ^= v27;
        goto LABEL_60;
      }
LABEL_59:
      v25 = v27;
      goto LABEL_60;
    }
LABEL_61:
    i = v15;
    if ( v25 )
    {
      v28 = v25 - 200;
      v29 = *(_QWORD *)(v25 - 48);
      if ( *(_DWORD *)(v29 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v29 - 56LL) & 0x20) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v28 + 276));
      RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
      v30 = v53;
      v31 = v15;
      v24 = LdrpResolveProcedureAddress(v28, v53, Heap, v57, v22, &v54);
      v32 = v15;
      if ( !v28 )
        goto LABEL_69;
      v33 = *(_QWORD *)(v28 + 152);
      if ( *(_DWORD *)(v33 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v33 - 56LL) & 0x20) != 0 )
      {
        v32 = v15;
        goto LABEL_69;
      }
      v32 = v15;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v28 + 276), 0xFFFFFFFF) != 1 )
      {
LABEL_69:
        if ( v24 >= 0 )
        {
          v34 = v32;
          if ( v51 != 7
            || (a5 & 1) != 0
            || (NtCurrentTeb()->SameTebFlags & 0x1000) == 0
            || (void *)qword_1801CE8F0 == NtCurrentTeb()->ClientId.UniqueThread
            || (v47 = *(_QWORD *)(v30 + 152), v52[0] = 0, v24 = LdrpInitializeGraphRecurse(v47, 0LL, v52), v24 >= 0) )
          {
            v32 = v34;
            if ( !v34 )
            {
              if ( AvrfpAPILookupCallbacksEnabled )
                AVrfCallAPILookupCallback(a6, *(_QWORD *)(v30 + 48), v54, 0, (__int64)&v54);
              v32 = 0LL;
              if ( g_ShimsEnabled )
              {
                v60 = 0LL;
                v35 = (__int64 (__fastcall *)(_QWORD))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                              g_pfnSE_GetProcAddressForCaller,
                                                                              64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
                if ( v35 == RtlLeaveCriticalSection )
                {
                  RtlLeaveCriticalSection(&v60);
                }
                else if ( v35 == RtlEnterCriticalSection )
                {
                  RtlEnterCriticalSection(&v60);
                }
                else
                {
                  ((void (__fastcall *)(__int64 *, __int64, __int64, _QWORD, unsigned __int64))v35)(
                    &v60,
                    v30,
                    v54,
                    0LL,
                    a6);
                }
                v32 = 0LL;
                if ( v60 )
                  v54 = v60;
              }
            }
LABEL_83:
            if ( v32 )
            {
              LdrpDereferenceEnclave(v32);
              v45 = v53;
              goto LABEL_132;
            }
            v36 = *(_QWORD *)(v30 + 152);
            if ( *(_DWORD *)(v36 + 24) == -1
              || (*(_BYTE *)(*(_QWORD *)v36 - 56LL) & 0x20) != 0
              || _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 276), 0xFFFFFFFF) != 1 )
            {
              goto LABEL_86;
            }
            RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
            v37 = *(_QWORD *)(v30 + 160);
            if ( *(_QWORD *)(v37 + 8) == v30 + 160 )
            {
              v38 = *(_QWORD **)(v30 + 168);
              if ( *v38 == v30 + 160 )
              {
                *v38 = v37;
                *(_QWORD *)(v37 + 8) = v38;
                v48 = *(_QWORD **)(v30 + 152);
                v49 = (_QWORD *)*v48;
                RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
                if ( *(_WORD *)(v30 + 110) )
                  LdrpReleaseTlsEntry(v30, 0LL);
                LdrpUnmapModule(v30);
                if ( (unsigned __int64)(*(_QWORD *)(v30 + 136) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
                  RtlReleaseActivationContext();
                if ( *(_QWORD *)(v30 + 80) )
                  LdrpFreeUnicodeString(v30 + 72);
                RtlFreeHeap(LdrpHeap, 0LL, v30);
                if ( v49 == v48 )
                  LdrpDestroyNode(v48);
                goto LABEL_86;
              }
            }
LABEL_95:
            __fastfail(3u);
          }
          v54 = 0LL;
          v32 = v34;
        }
        if ( v24 == -1073741515 || v24 == -1073741502 )
          v24 = -1073741702;
        goto LABEL_83;
      }
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v39 = *(_QWORD *)(v28 + 160);
      if ( *(_QWORD *)(v39 + 8) != v28 + 160 )
        goto LABEL_95;
      v40 = *(_QWORD **)(v28 + 168);
      if ( *v40 != v28 + 160 )
        goto LABEL_95;
      *v40 = v39;
      *(_QWORD *)(v39 + 8) = v40;
      v41 = *(_QWORD **)(v28 + 152);
      v42 = (_QWORD *)*v41;
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( *(_WORD *)(v28 + 110) )
        LdrpReleaseTlsEntry(v28, 0LL);
      LdrpUnmapModule(v28);
      if ( (unsigned __int64)(*(_QWORD *)(v28 + 136) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
        RtlReleaseActivationContext();
      if ( *(_QWORD *)(v28 + 80) )
        LdrpFreeUnicodeString(v28 + 72);
      RtlFreeHeap(LdrpHeap, 0LL, v28);
      v32 = v31;
      if ( v42 == v41 )
      {
        LdrpDestroyNode(v41);
        v30 = v53;
        v32 = v31;
        goto LABEL_69;
      }
LABEL_118:
      v30 = v53;
      goto LABEL_69;
    }
LABEL_117:
    RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
    v44 = LdrpResolveProcedureAddress(0LL, v21, Heap, v57, v23, &v54);
    v32 = i;
    v24 = v44;
    goto LABEL_118;
  }
  v17 = 0;
  while ( 1 )
  {
    v51 = v17;
    i = 0LL;
    if ( a1 == LdrpSystemDllBase )
    {
      v6 = LdrpNtDllDataTableEntry;
      v53 = LdrpNtDllDataTableEntry;
      i = 0LL;
      v17 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
      v51 = v17;
    }
    else
    {
      RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
      if ( (qword_1801D44B0 & 1) != 0 )
      {
        if ( !LdrpModuleBaseAddressIndex )
        {
          i = 0LL;
          v53 = 0LL;
          goto LABEL_39;
        }
        v18 = LdrpModuleBaseAddressIndex ^ (unsigned __int64)&LdrpModuleBaseAddressIndex;
      }
      else
      {
        v18 = LdrpModuleBaseAddressIndex;
      }
      if ( v18 )
      {
        i = 0LL;
        v51 = v17;
        v53 = 0LL;
        while ( a1 >= *(_QWORD *)(v18 - 152) )
        {
          if ( a1 <= *(_QWORD *)(v18 - 152) )
            goto LABEL_34;
          v19 = *(_QWORD *)(v18 + 8);
          if ( (qword_1801D44B0 & 1) == 0 || !v19 )
            goto LABEL_32;
          v18 ^= v19;
LABEL_33:
          if ( !v18 )
          {
LABEL_34:
            if ( v18 )
            {
              v6 = v18 - 200;
              v20 = *(_QWORD *)(v18 - 48);
              v53 = v6;
              if ( *(_DWORD *)(v20 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v20 - 56LL) & 0x20) == 0 )
                _InterlockedIncrement((volatile signed __int32 *)(v6 + 276));
              v17 = *(_DWORD *)(*(_QWORD *)(v6 + 152) + 56LL);
LABEL_39:
              v51 = v17;
            }
            goto LABEL_40;
          }
        }
        v19 = *(_QWORD *)v18;
        if ( (qword_1801D44B0 & 1) != 0 && v19 )
        {
          v18 ^= v19;
          goto LABEL_33;
        }
LABEL_32:
        v18 = v19;
        goto LABEL_33;
      }
LABEL_40:
      RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
    }
    if ( !v6 )
      goto LABEL_48;
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 || v17 >= v11 )
    {
      v51 = v17;
      v21 = v6;
      v22 = 1;
      i = 0LL;
      v23 = 1;
      v53 = v6;
      goto LABEL_51;
    }
    LdrpDereferenceModule(v6);
    if ( v17 < 0 )
      break;
    LdrpDrainWorkQueue(0LL);
    LdrpDropLastInProgressCount();
    v6 = 0LL;
    v53 = 0LL;
  }
  v45 = 0LL;
  v24 = -1073741811;
LABEL_129:
  if ( v15 )
  {
LABEL_132:
    if ( v24 >= 0 )
    {
      v54 += *(_QWORD *)(v45 + 184) - *(_QWORD *)(v45 + 48);
      goto LABEL_87;
    }
  }
LABEL_86:
  if ( v24 == -1073741702 )
  {
    v46 = Heap;
    if ( !Heap )
    {
      v46 = v57;
      Heap = v57;
    }
    v24 = (v61 != 0LL) - 1073741512;
    LdrpReportError(0LL, v46, (unsigned int)v24);
  }
LABEL_87:
  if ( v50 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  if ( !UseWOW64
    && v24 >= 0
    && qword_1801EC4F8
    && (dword_1801EC4DC & 1) == 0
    && (BYTE5(xmmword_1801EC4E0) & 3) == 3
    && (unsigned int)RtlValidateUserCallTarget(v54, &v59) != 1
    && (v59 & 0x10) != 0 )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      v43 = v54;
      if ( (unsigned __int8)RtlGuardIsExportSuppressedAddress(v54) != 1
        || (v24 = RtlpGuardGrantSuppressedCallAccess(v43, 4LL), v24 < 0) )
      {
        __fastfail(0x2Eu);
      }
    }
    else
    {
      v24 = 0;
    }
  }
  *v62 = v54;
  return (unsigned int)v24;
}
