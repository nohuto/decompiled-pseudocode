/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x180004FF0
 * Callers:
 *     LdrpInitializeKernel32Functions @ 0x1800032B8 (LdrpInitializeKernel32Functions.c)
 *     LdrGetProcedureAddress @ 0x180004B80 (LdrGetProcedureAddress.c)
 *     LdrGetProcedureAddressEx @ 0x180004FC0 (LdrGetProcedureAddressEx.c)
 *     LdrpGetShimEngineInterface @ 0x180009E88 (LdrpGetShimEngineInterface.c)
 *     LdrpCodeAuthzInitialize @ 0x180058660 (LdrpCodeAuthzInitialize.c)
 *     CsrClientConnectToServer @ 0x1800A67A0 (CsrClientConnectToServer.c)
 *     AVrfpDetectVerifiedExports @ 0x1800EC9CC (AVrfpDetectVerifiedExports.c)
 * Callees:
 *     LdrpDropLastInProgressCount @ 0x180001F40 (LdrpDropLastInProgressCount.c)
 *     LdrpDereferenceEnclave @ 0x180003B50 (LdrpDereferenceEnclave.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x180003BFC (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x180003CAC (RtlpGuardGrantSuppressedCallAccess.c)
 *     LdrpDrainWorkQueue @ 0x180003E20 (LdrpDrainWorkQueue.c)
 *     RtlValidateUserCallTarget @ 0x180004930 (RtlValidateUserCallTarget.c)
 *     LdrpReleaseTlsEntry @ 0x1800049CC (LdrpReleaseTlsEntry.c)
 *     LdrpDestroyNode @ 0x180004B28 (LdrpDestroyNode.c)
 *     LdrpInitializeGraphRecurse @ 0x180005AA0 (LdrpInitializeGraphRecurse.c)
 *     LdrpReportError @ 0x180005D20 (LdrpReportError.c)
 *     LdrpUnmapModule @ 0x1800067C8 (LdrpUnmapModule.c)
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpResolveProcedureAddress @ 0x180057F30 (LdrpResolveProcedureAddress.c)
 *     RtlReleaseActivationContext @ 0x18005E4D0 (RtlReleaseActivationContext.c)
 *     LdrpFreeUnicodeString @ 0x18007625C (LdrpFreeUnicodeString.c)
 *     AVrfCallAPILookupCallback @ 0x1800DE5CC (AVrfCallAPILookupCallback.c)
 *     ExecuteHotpatchTestRuntimeFunction @ 0x180131658 (ExecuteHotpatchTestRuntimeFunction.c)
 *     GetHotpatchTestRuntimeFunctionState @ 0x180131684 (GetHotpatchTestRuntimeFunctionState.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrGetProcedureAddressForCaller(
        unsigned __int64 a1,
        const void **a2,
        unsigned int a3,
        unsigned __int64 *a4,
        char a5,
        unsigned __int64 a6)
{
  __int64 v6; // r13
  int v11; // r15d
  size_t v12; // rbx
  unsigned int v13; // ecx
  _BYTE *v14; // r12
  __int64 v16; // r12
  __int64 *v17; // rax
  int v18; // ebx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r15
  int v23; // ebx
  int v24; // esi
  int v25; // ebx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 (__fastcall *v36)(_QWORD); // r10
  __int64 v37; // rax
  __int64 v38; // r8
  _QWORD *v39; // rdx
  __int64 v40; // rdx
  _QWORD *v41; // rcx
  _QWORD *v42; // r15
  _QWORD *v43; // r12
  __int64 v44; // rcx
  __int64 v45; // rbx
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rdi
  _QWORD *v51; // rsi
  __int64 v52; // rcx
  char v53; // [rsp+30h] [rbp-D0h]
  int v54; // [rsp+34h] [rbp-CCh]
  char v55[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v57; // [rsp+48h] [rbp-B8h] BYREF
  __int64 i; // [rsp+50h] [rbp-B0h]
  __int64 Heap; // [rsp+58h] [rbp-A8h]
  unsigned int v60; // [rsp+60h] [rbp-A0h]
  int v61; // [rsp+64h] [rbp-9Ch]
  int v62; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v63; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v64; // [rsp+78h] [rbp-88h]
  unsigned __int64 *v65; // [rsp+80h] [rbp-80h]
  _BYTE v66[128]; // [rsp+90h] [rbp-70h] BYREF

  v6 = 0LL;
  v54 = 0;
  v65 = a4;
  v62 = 0;
  v63 = 0LL;
  v60 = a3;
  ExecuteHotpatchTestRuntimeFunction();
  if ( (unsigned int)GetHotpatchTestRuntimeFunctionState() && !a1 && !a2 && !a3 && !a6 && a4 )
  {
    *a4 = 4025479151LL;
    return 3221225485LL;
  }
  v57 = 0LL;
  v53 = 0;
  if ( (a5 & 1) == 0 || (v11 = 6, (void *)qword_1801CC8F0 != NtCurrentTeb()->ClientId.UniqueThread) )
    v11 = 9;
  if ( a2 )
  {
    v12 = *(unsigned __int16 *)a2;
    v13 = v12 + 1;
    if ( *((unsigned __int16 *)a2 + 1) < (unsigned int)(v12 + 1) || (v14 = a2[1], Heap = (__int64)v14, v14[v12]) )
    {
      if ( v13 <= 0x80 )
      {
        v14 = v66;
        Heap = (__int64)v66;
      }
      else
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(NtdllBaseTag + 1572864), v13);
        v14 = (_BYTE *)Heap;
        if ( !Heap )
          return 3221225626LL;
        v53 = 1;
      }
      memmove(v14, a2[1], v12);
      v14[v12] = 0;
    }
  }
  else
  {
    v14 = 0LL;
    Heap = 0LL;
  }
  v64 = v14;
  v16 = 0LL;
  v61 = 1;
  for ( i = 0LL; ; i = v16 )
  {
    RtlEnterCriticalSection(&LdrpEnclaveListLock);
    v17 = (__int64 *)LdrpEnclaveList;
    if ( (__int64 *)LdrpEnclaveList != &LdrpEnclaveList )
    {
      while ( 1 )
      {
        v16 = (__int64)v17;
        i = (__int64)v17;
        if ( a1 == v17[9] )
          break;
        v17 = (__int64 *)*v17;
        if ( v17 == &LdrpEnclaveList )
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
    RtlEnterCriticalSection(v16 + 16);
    if ( *(_QWORD *)(v16 + 72) )
      break;
    RtlLeaveCriticalSection(v16 + 16);
    LdrpDereferenceEnclave(v16);
  }
  if ( *(_DWORD *)(v16 + 56) == 16 && *(_DWORD *)(v16 + 64) == 2 )
  {
    RtlLeaveCriticalSection(v16 + 16);
    v25 = 0;
    v54 = 9;
    v6 = *(_QWORD *)(v16 + 112);
    v24 = 3;
    v56 = v6;
    v61 = 3;
    goto LABEL_49;
  }
  RtlLeaveCriticalSection(v16 + 16);
  LdrpDereferenceEnclave(v16);
LABEL_19:
  i = 0LL;
  v16 = 0LL;
  v56 = 0LL;
  if ( !a1 )
  {
    v56 = 0LL;
LABEL_48:
    v25 = -1073741515;
    v24 = 1;
LABEL_49:
    v22 = v6;
    if ( !v6 )
    {
      v47 = v56;
      goto LABEL_129;
    }
    v23 = v61;
LABEL_51:
    RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
    v26 = LdrpModuleBaseAddressIndex;
    if ( (qword_1801D2460 & 1) != 0 )
    {
      if ( !LdrpModuleBaseAddressIndex )
        goto LABEL_117;
      v26 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
    }
    if ( v26 )
    {
      while ( 1 )
      {
        v27 = *(_QWORD *)(v26 - 152);
        if ( a6 < v27 )
          break;
        if ( a6 < v27 + *(unsigned int *)(v26 - 136) )
          goto LABEL_61;
        v28 = *(_QWORD *)(v26 + 8);
        if ( (qword_1801D2460 & 1) == 0 || !v28 )
          goto LABEL_59;
        v26 ^= v28;
LABEL_60:
        if ( !v26 )
          goto LABEL_61;
      }
      v28 = *(_QWORD *)v26;
      if ( (qword_1801D2460 & 1) != 0 && v28 )
      {
        v26 ^= v28;
        goto LABEL_60;
      }
LABEL_59:
      v26 = v28;
      goto LABEL_60;
    }
LABEL_61:
    i = v16;
    if ( v26 )
    {
      v29 = v26 - 200;
      v30 = *(_QWORD *)(v26 - 48);
      if ( *(_DWORD *)(v30 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v30 - 56LL) & 0x20) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v29 + 276));
      RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
      v31 = v56;
      v32 = v16;
      v25 = LdrpResolveProcedureAddress(v29, v56, Heap, v60, v23, &v57);
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
          if ( v54 != 7
            || (a5 & 1) != 0
            || (NtCurrentTeb()->SameTebFlags & 0x1000) == 0
            || (void *)qword_1801CC8F0 == NtCurrentTeb()->ClientId.UniqueThread
            || (v49 = *(_QWORD *)(v31 + 152), v55[0] = 0, v25 = LdrpInitializeGraphRecurse(v49, 0LL, v55), v25 >= 0) )
          {
            v33 = v35;
            if ( !v35 )
            {
              if ( AvrfpAPILookupCallbacksEnabled )
                AVrfCallAPILookupCallback(a6, *(_QWORD *)(v31 + 48), v57, 0, (__int64)&v57);
              v33 = 0LL;
              if ( g_ShimsEnabled )
              {
                v63 = 0LL;
                v36 = (__int64 (__fastcall *)(_QWORD))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                              g_pfnSE_GetProcAddressForCaller,
                                                                              64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
                if ( v36 == RtlLeaveCriticalSection )
                {
                  RtlLeaveCriticalSection(&v63);
                }
                else if ( v36 == RtlEnterCriticalSection )
                {
                  RtlEnterCriticalSection(&v63);
                }
                else
                {
                  ((void (__fastcall *)(unsigned __int64 *, __int64, unsigned __int64, _QWORD, unsigned __int64))v36)(
                    &v63,
                    v31,
                    v57,
                    0LL,
                    a6);
                }
                v33 = 0LL;
                if ( v63 )
                  v57 = v63;
              }
            }
LABEL_83:
            if ( v33 )
            {
              LdrpDereferenceEnclave(v33);
              v47 = v56;
              goto LABEL_132;
            }
            v37 = *(_QWORD *)(v31 + 152);
            if ( *(_DWORD *)(v37 + 24) == -1
              || (*(_BYTE *)(*(_QWORD *)v37 - 56LL) & 0x20) != 0
              || _InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 276), 0xFFFFFFFF) != 1 )
            {
              goto LABEL_86;
            }
            RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
            v38 = *(_QWORD *)(v31 + 160);
            if ( *(_QWORD *)(v38 + 8) == v31 + 160 )
            {
              v39 = *(_QWORD **)(v31 + 168);
              if ( *v39 == v31 + 160 )
              {
                *v39 = v38;
                *(_QWORD *)(v38 + 8) = v39;
                v50 = *(_QWORD **)(v31 + 152);
                v51 = (_QWORD *)*v50;
                RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
                if ( *(_WORD *)(v31 + 110) )
                  LdrpReleaseTlsEntry(v31, 0LL);
                LdrpUnmapModule(v31);
                v52 = *(_QWORD *)(v31 + 136);
                if ( (unsigned __int64)(v52 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                  RtlReleaseActivationContext(v52);
                if ( *(_QWORD *)(v31 + 80) )
                  LdrpFreeUnicodeString(v31 + 72);
                RtlFreeHeap(LdrpHeap, 0LL, v31);
                if ( v51 == v50 )
                  LdrpDestroyNode((__int64)v50);
                goto LABEL_86;
              }
            }
LABEL_95:
            __fastfail(3u);
          }
          v57 = 0LL;
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
      v44 = *(_QWORD *)(v29 + 136);
      if ( (unsigned __int64)(v44 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        RtlReleaseActivationContext(v44);
      if ( *(_QWORD *)(v29 + 80) )
        LdrpFreeUnicodeString(v29 + 72);
      RtlFreeHeap(LdrpHeap, 0LL, v29);
      v33 = v32;
      if ( v43 == v42 )
      {
        LdrpDestroyNode((__int64)v42);
        v31 = v56;
        v33 = v32;
        goto LABEL_69;
      }
LABEL_118:
      v31 = v56;
      goto LABEL_69;
    }
LABEL_117:
    RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
    v46 = LdrpResolveProcedureAddress(0LL, v22, Heap, v60, v24, &v57);
    v33 = i;
    v25 = v46;
    goto LABEL_118;
  }
  v18 = 0;
  while ( 1 )
  {
    v54 = v18;
    i = 0LL;
    if ( a1 == LdrpSystemDllBase )
    {
      v6 = LdrpNtDllDataTableEntry;
      v56 = LdrpNtDllDataTableEntry;
      i = 0LL;
      v18 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
      v54 = v18;
    }
    else
    {
      RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
      if ( (qword_1801D2460 & 1) != 0 )
      {
        if ( !LdrpModuleBaseAddressIndex )
        {
          i = 0LL;
          v56 = 0LL;
          goto LABEL_39;
        }
        v19 = LdrpModuleBaseAddressIndex ^ (unsigned __int64)&LdrpModuleBaseAddressIndex;
      }
      else
      {
        v19 = LdrpModuleBaseAddressIndex;
      }
      if ( v19 )
      {
        i = 0LL;
        v54 = v18;
        v56 = 0LL;
        while ( a1 >= *(_QWORD *)(v19 - 152) )
        {
          if ( a1 <= *(_QWORD *)(v19 - 152) )
            goto LABEL_34;
          v20 = *(_QWORD *)(v19 + 8);
          if ( (qword_1801D2460 & 1) == 0 || !v20 )
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
              v56 = v6;
              if ( *(_DWORD *)(v21 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v21 - 56LL) & 0x20) == 0 )
                _InterlockedIncrement((volatile signed __int32 *)(v6 + 276));
              v18 = *(_DWORD *)(*(_QWORD *)(v6 + 152) + 56LL);
LABEL_39:
              v54 = v18;
            }
            goto LABEL_40;
          }
        }
        v20 = *(_QWORD *)v19;
        if ( (qword_1801D2460 & 1) != 0 && v20 )
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
      v54 = v18;
      v22 = v6;
      v23 = 1;
      i = 0LL;
      v24 = 1;
      v56 = v6;
      goto LABEL_51;
    }
    LdrpDereferenceModule(v6);
    if ( v18 < 0 )
      break;
    LdrpDrainWorkQueue(0);
    LdrpDropLastInProgressCount();
    v6 = 0LL;
    v56 = 0LL;
  }
  v47 = 0LL;
  v25 = -1073741811;
LABEL_129:
  if ( v16 )
  {
LABEL_132:
    if ( v25 >= 0 )
    {
      v57 += *(_QWORD *)(v47 + 184) - *(_QWORD *)(v47 + 48);
      goto LABEL_87;
    }
  }
LABEL_86:
  if ( v25 == -1073741702 )
  {
    v48 = Heap;
    if ( !Heap )
    {
      v48 = v60;
      Heap = v60;
    }
    v25 = (v64 != 0LL) - 1073741512;
    LdrpReportError(0LL, v48, (unsigned int)v25);
  }
LABEL_87:
  if ( v53 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  if ( !UseWOW64
    && v25 >= 0
    && qword_1801EA508
    && (dword_1801EA4EC & 1) == 0
    && (BYTE5(xmmword_1801EA4F0) & 3) == 3
    && (unsigned int)RtlValidateUserCallTarget(v57, &v62) != 1
    && (v62 & 0x10) != 0 )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      v45 = v57;
      if ( RtlGuardIsExportSuppressedAddress(v57) != 1 || (v25 = RtlpGuardGrantSuppressedCallAccess(v45, 4u), v25 < 0) )
        __fastfail(0x2Eu);
    }
    else
    {
      v25 = 0;
    }
  }
  *v65 = v57;
  return (unsigned int)v25;
}
