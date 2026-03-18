/*
 * XREFs of HMChangeOwnerThreadWorker @ 0x1401B6138
 * Callers:
 *     MarkThreadsObjects @ 0x14009E070 (MarkThreadsObjects.c)
 *     HMChangeOwnerThread @ 0x14013BFA0 (HMChangeOwnerThread.c)
 * Callees:
 *     _HMPheFromObject @ 0x140042A90 (_HMPheFromObject.c)
 *     EtwTraceUserUpdateHandleOwner @ 0x1400624B0 (EtwTraceUserUpdateHandleOwner.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x140062510 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     _HMPheFromObjectWorker @ 0x140062A10 (_HMPheFromObjectWorker.c)
 *     _HMPkheFromObjectWorker @ 0x1400E1208 (_HMPkheFromObjectWorker.c)
 *     LockObjectAssignment @ 0x1400EC2C0 (LockObjectAssignment.c)
 *     GetClassPtr @ 0x14013C9F0 (GetClassPtr.c)
 *     IsGetClassPtrSupported @ 0x1401435F4 (IsGetClassPtrSupported.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

LONG_PTR __fastcall HMChangeOwnerThreadWorker(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  LONG_PTR result; // rax
  __int64 v6; // rsi
  LONG_PTR v7; // r14
  HANDLE ThreadId; // rax
  unsigned __int8 v9; // cl
  int EtwUserHandleType; // eax
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rcx
  int (*v14)(void); // rax
  unsigned int (__fastcall *v15)(__int64); // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *ClassPtr; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 CurrentProcessWin32Process; // rax
  void *v23; // rbx
  __int64 UserSessionState; // rax
  int (*v25)(void); // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  void (__fastcall *v29)(__int64, __int64); // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 (__fastcall *v35)(__int64, __int64); // rax

  v4 = HMPheFromObjectWorker((int *)a1);
  result = HMPkheFromObjectWorker((int *)a1);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = result;
  if ( v6 != a2 )
  {
    --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 8) + 464LL) + 68LL);
    *(_QWORD *)(result + 8) = a2;
    ThreadId = PsGetThreadId(*(PETHREAD *)a2);
    v9 = *(_BYTE *)(v4 + 24);
    *(_QWORD *)(v4 + 8) = ThreadId;
    EtwUserHandleType = GetEtwUserHandleType(v9);
    EtwTraceUserUpdateHandleOwner(**(_QWORD **)v7, EtwUserHandleType, v11);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(v7 + 8);
    result = *(_QWORD *)(v7 + 8);
    ++*(_DWORD *)(*(_QWORD *)(result + 464) + 68LL);
    v13 = (unsigned int)*(unsigned __int8 *)(v4 + 24) - 1;
    if ( *(_BYTE *)(v4 + 24) == 1 )
    {
      ++*(_DWORD *)(a2 + 944);
      --*(_DWORD *)(v6 + 944);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
      {
        v13 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v13, v12) + 48);
        v14 = *(int (**)(void))(v13 + 2960);
        if ( v14 )
        {
          if ( v14() >= 0 )
          {
            v13 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v13, v12) + 48);
            v15 = *(unsigned int (__fastcall **)(__int64))(v13 + 2968);
            if ( v15 )
            {
              if ( v15(a1) )
              {
                ++*(_DWORD *)(a2 + 948);
                --*(_DWORD *)(v6 + 948);
              }
            }
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 380) & 0x10000000) != 0 )
      {
        --*(_DWORD *)(v6 + 952);
        if ( (*(_BYTE *)(HMPheFromObject((int *)a1) + 25) & 1) != 0 )
          *(_DWORD *)(a1 + 380) &= ~0x10000000u;
        else
          ++*(_DWORD *)(a2 + 952);
      }
      if ( a1 == *(_QWORD *)(v6 + 824) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4162);
      result = *(_QWORD *)(v6 + 464);
      if ( *(_QWORD *)(a2 + 464) != result )
      {
        if ( (int)IsGetClassPtrSupported(v13, v12) < 0
          || (ClassPtr = (__int64 *)GetClassPtr(
                                      **(unsigned __int16 **)(*(_QWORD *)(a1 + 136) + 8LL),
                                      *(_QWORD *)(a2 + 464),
                                      (__int64)hModuleWin)) == 0LL )
        {
          v19 = *(_QWORD *)(a1 + 24);
          if ( v19 )
          {
            v20 = *(_QWORD *)(*(_QWORD *)(v19 + 40) + 56LL);
            v21 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 464LL);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
            v21 = CurrentProcessWin32Process;
            if ( CurrentProcessWin32Process )
            {
              v20 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
              v21 = v20 & CurrentProcessWin32Process;
            }
          }
          if ( (int)IsGetClassPtrSupported(v20, v16) < 0 )
          {
            ClassPtr = 0LL;
          }
          else
          {
            v23 = hModuleWin;
            UserSessionState = W32GetUserSessionState(v17);
            ClassPtr = (__int64 *)GetClassPtr(
                                    *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19928) + 910LL),
                                    v21,
                                    (__int64)v23);
          }
        }
        v25 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17, v16) + 48) + 2992LL);
        if ( v25 )
        {
          if ( v25() >= 0 )
          {
            v28 = *(_QWORD *)(v6 + 464);
            v29 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v27, v26) + 48)
                                                          + 3000LL);
            if ( v29 )
              v29(v28, a1);
          }
        }
        v30 = *ClassPtr;
        if ( *ClassPtr )
          v31 = *(_QWORD *)(v30 + 16);
        else
          v31 = 0LL;
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL) = v31;
        *(_QWORD *)(a1 + 136) = v30;
        result = *(_QWORD *)(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v30, v31) + 48) + 3008LL);
        if ( result )
        {
          result = ((__int64 (*)(void))result)();
          if ( (int)result >= 0 )
          {
            v34 = *(_QWORD *)(a1 + 136);
            v35 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v33, v32) + 48)
                                                             + 3016LL);
            if ( !v35 || (result = v35(v34, a1), !(_DWORD)result) )
            {
              result = *(_QWORD *)(a1 + 136);
              ++*(_DWORD *)(result + 72);
            }
          }
        }
      }
    }
    else if ( *(_BYTE *)(v4 + 24) == 5 )
    {
      result = *(unsigned int *)(a1 + 64);
      if ( (result & 1) != 0 )
        return LockObjectAssignment((void **)(a1 + 80), *(void **)(v6 + 496));
    }
  }
  return result;
}
