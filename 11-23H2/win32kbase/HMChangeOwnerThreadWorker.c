/*
 * XREFs of HMChangeOwnerThreadWorker @ 0x1C00A1CD8
 * Callers:
 *     MarkThreadsObjects @ 0x1C004F750 (MarkThreadsObjects.c)
 *     HMChangeOwnerThread @ 0x1C00A1CC0 (HMChangeOwnerThread.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C004F94C (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C005CCDC (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C005CD00 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     LockObjectAssignment @ 0x1C0099630 (LockObjectAssignment.c)
 *     EtwTraceUserUpdateHandleOwner @ 0x1C00A2178 (EtwTraceUserUpdateHandleOwner.c)
 *     IsGetClassPtrSupported @ 0x1C00A21B4 (IsGetClassPtrSupported.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

LONG_PTR __fastcall HMChangeOwnerThreadWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // r15
  __int64 v6; // rax
  char *v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rcx
  HANDLE ThreadId; // rax
  unsigned __int8 v11; // cl
  unsigned int EtwUserHandleType; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  LONG_PTR result; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 CurrentProcessWin32Process; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v4 = gpKernelHandleTable;
  v6 = (unsigned __int16)*(_DWORD *)a1;
  v7 = (char *)qword_1C028FE68 + (unsigned int)(dword_1C028FE70 * v6);
  v8 = 3 * v6;
  if ( v2 == a2 && !gbIgnoreStressedOutStuff )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3669LL);
  v9 = *(_QWORD *)(v4[v8 + 1] + 424LL);
  --*(_DWORD *)(v9 + 68);
  v4[v8 + 1] = a2;
  ThreadId = PsGetThreadId(*(PETHREAD *)a2);
  v11 = v7[24];
  *((_QWORD *)v7 + 1) = ThreadId;
  EtwUserHandleType = GetEtwUserHandleType(v11);
  EtwTraceUserUpdateHandleOwner(*(_QWORD *)v4[v8], EtwUserHandleType);
  *(_QWORD *)(a1 + 16) = v4[v8 + 1];
  result = v4[v8 + 1];
  ++*(_DWORD *)(*(_QWORD *)(result + 424) + 68LL);
  v17 = (unsigned int)(unsigned __int8)v7[24] - 1;
  if ( v7[24] == 1 )
  {
    ++*(_DWORD *)(a2 + 904);
    --*(_DWORD *)(v2 + 904);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0
      && qword_1C0295C18
      && (int)qword_1C0295C18() >= 0
      && qword_1C0295C20
      && (unsigned int)qword_1C0295C20(a1) )
    {
      ++*(_DWORD *)(a2 + 908);
      --*(_DWORD *)(v2 + 908);
    }
    if ( v2 != a2 )
    {
      if ( (*(_DWORD *)(a1 + 320) & 0x10000000) != 0 )
      {
        --*(_DWORD *)(v2 + 912);
        if ( !gbInDestroyHandleTableObjects
          && !IS_USERCRIT_OWNED_EXCLUSIVE(v17, v13, v14, v15)
          && (!IS_USERCRIT_OWNED_AT_ALL(v23, v22, v24, v25)
           || !tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)
           && !tagDomLock::IsLockedShared(&gDomainHandleManagerLock)) )
        {
          __int2c();
        }
        if ( (*((_BYTE *)qword_1C028FE68 + dword_1C028FE70 * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + 25) & 1) != 0 )
          *(_DWORD *)(a1 + 320) &= ~0x10000000u;
        else
          ++*(_DWORD *)(a2 + 912);
      }
      if ( a1 == *(_QWORD *)(v2 + 784) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3725LL);
    }
    result = *(_QWORD *)(v2 + 424);
    if ( *(_QWORD *)(a2 + 424) != result )
    {
      if ( (int)IsGetClassPtrSupported() < 0
        || ((v18 = **(unsigned __int16 **)(*(_QWORD *)(a1 + 136) + 8LL), !qword_1C0295C30)
          ? (v19 = 0LL)
          : (v19 = (__int64 *)qword_1C0295C30(v18, *(_QWORD *)(a2 + 424), hModuleWin)),
            !v19) )
      {
        v26 = *(_QWORD *)(a1 + 24);
        if ( v26 )
        {
          v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 40) + 56LL) + 16LL) + 424LL);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
          v27 = CurrentProcessWin32Process;
          if ( CurrentProcessWin32Process )
            v27 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        }
        if ( (int)IsGetClassPtrSupported() >= 0 && qword_1C0295C30 )
          v19 = (__int64 *)qword_1C0295C30(*((unsigned __int16 *)gpsi + 455), v27, hModuleWin);
        else
          v19 = 0LL;
      }
      if ( qword_1C0295C38 && (int)qword_1C0295C38() >= 0 && qword_1C0295C40 )
        qword_1C0295C40(*(_QWORD *)(v2 + 424), a1);
      v20 = *v19;
      if ( *v19 )
        v21 = *(_QWORD *)(v20 + 16);
      else
        v21 = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL) = v21;
      *(_QWORD *)(a1 + 136) = v20;
      result = (LONG_PTR)qword_1C0295C48;
      if ( qword_1C0295C48 )
      {
        result = qword_1C0295C48();
        if ( (int)result >= 0 )
        {
          if ( !qword_1C0295C50 || (result = qword_1C0295C50(*(_QWORD *)(a1 + 136), a1), !(_DWORD)result) )
          {
            result = *(_QWORD *)(a1 + 136);
            ++*(_DWORD *)(result + 72);
          }
        }
      }
    }
  }
  else if ( v7[24] == 5 )
  {
    result = *(unsigned int *)(a1 + 64);
    if ( (result & 1) != 0 )
      return LockObjectAssignment((void **)(a1 + 80), *(void **)(v2 + 456));
  }
  return result;
}
