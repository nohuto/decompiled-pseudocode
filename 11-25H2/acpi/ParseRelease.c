/*
 * XREFs of ParseRelease @ 0x140004C30
 * Callers:
 *     ParseCall @ 0x140004010 (ParseCall.c)
 *     ReleaseASLMutex @ 0x140005C88 (ReleaseASLMutex.c)
 * Callees:
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     DequeueAndReadyContext @ 0x140005CE4 (DequeueAndReadyContext.c)
 *     RtlStringCbPrintfA @ 0x14000AEFC (RtlStringCbPrintfA.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     ConvertNtStatusToAMLIStatus @ 0x14002FCFC (ConvertNtStatusToAMLIStatus.c)
 *     ReleaseGL @ 0x14003B438 (ReleaseGL.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ParseRelease(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  KSPIN_LOCK *v5; // rdi
  KSPIN_LOCK *v8; // r14
  KIRQL v9; // r15
  KSPIN_LOCK v10; // rax
  int *v11; // rsi
  __int64 v12; // rsi
  KIRQL v13; // al
  KIRQL v14; // r15
  _QWORD *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  _QWORD *v18; // r8
  int v19; // eax
  _QWORD *v20; // rcx
  int v22; // r8d
  int v23; // ecx
  int v24; // edx
  int v25; // r14d
  _QWORD v26[3]; // [rsp+40h] [rbp-178h] BYREF
  __int128 v27; // [rsp+58h] [rbp-160h]
  __int64 v28; // [rsp+68h] [rbp-150h]
  char pszDest[256]; // [rsp+70h] [rbp-148h] BYREF

  v3 = *(_DWORD *)(a2 + 16);
  v5 = *(KSPIN_LOCK **)(a2 + 32);
  if ( (v3 & 0xF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF) == 1 )
      goto LABEL_10;
    if ( (*(_DWORD *)(a2 + 16) & 0xF) == 2 )
      goto LABEL_14;
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 3 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0xF) != 4 )
        return a3;
      goto LABEL_21;
    }
LABEL_20:
    v19 = v3 + 1;
    *(_DWORD *)(a2 + 16) = v19;
    if ( (v19 & 0x10000) != 0 )
    {
      a3 = ReleaseGL(a1);
      if ( a3 )
      {
        LogError(3222536195LL);
        AcpiDiagTraceAmlError(a1, 3222536195LL);
        PrintDebugMessage(172, a3, 0, 0, 0LL);
        a3 = -1072431101;
      }
    }
LABEL_21:
    if ( (*(_DWORD *)(a2 + 16) & 0x40000) == 0 )
    {
      v20 = *(_QWORD **)(a1 + 416);
      *(_QWORD *)(a1 + 416) = v20[1];
      HeapFree(v20);
    }
    return a3;
  }
  v8 = v5 + 23;
  *(_DWORD *)(a2 + 16) = v3 + 1;
  a3 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc(v5 + 23);
  if ( !*((_DWORD *)v5 + 1) )
  {
    a3 = -1072431082;
    LogError(3222536214LL);
    AcpiDiagTraceAmlError(a1, 3222536214LL);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      DbgPrintEx(0x19u, 0, off_1400879B8, 0LL, 0LL, 0LL, 0LL);
      if ( (gDebugger & 0x40000) != 0 )
      {
        RtlStringCbPrintfA(pszDest, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", 137, 0LL, 0LL, 0LL, 0LL);
        DbgCommandString("ACPI", pszDest);
        *(_DWORD *)(a2 + 16) += 2;
        v11 = (int *)(v5 + 1);
        goto LABEL_8;
      }
    }
    else
    {
      RtlStringCbPrintfA(pszDest, 0x100uLL, "AMLIDBG: !amli err 0x%x %p %p %p %p", 137, 0LL, 0LL, 0LL, 0LL);
      DbgPrintEx(0x19u, 0, "%s\n", pszDest);
    }
LABEL_27:
    *(_DWORD *)(a2 + 16) += 2;
    v11 = (int *)(v5 + 1);
    goto LABEL_8;
  }
  v10 = v5[1];
  v11 = (int *)(v5 + 1);
  if ( !v10 || *(_QWORD *)(v10 + 8) != a1 )
  {
    a3 = -1072431081;
    LogError(3222536215LL);
    AcpiDiagTraceAmlError(a1, 3222536215LL);
    v22 = 0;
    v23 = 138;
    v24 = 0;
LABEL_30:
    PrintDebugMessage(v23, v24, v22, 0, 0LL);
    goto LABEL_27;
  }
  if ( *(_DWORD *)v5 > *(_DWORD *)(a1 + 112) )
  {
    a3 = -1072431083;
    LogError(3222536213LL);
    AcpiDiagTraceAmlError(a1, 3222536213LL);
    v22 = *(_DWORD *)(a1 + 112);
    v23 = 136;
    v24 = *(_DWORD *)v5;
    goto LABEL_30;
  }
  *(_DWORD *)(a1 + 112) = *(_DWORD *)v5;
  if ( *((_DWORD *)v5 + 1) == 1 )
    *(_DWORD *)(a2 + 16) |= 0x80000u;
LABEL_8:
  KeReleaseSpinLock(v5 + 23, v9);
  v3 = *(_DWORD *)(a2 + 16);
  if ( (*(_BYTE *)(a2 + 16) & 0xF) == 3 )
    goto LABEL_20;
  if ( (v3 & 0x80000) == 0 )
  {
    ++v3;
    goto LABEL_15;
  }
LABEL_10:
  v12 = a1;
  if ( (v3 & 0x20000) == 0 )
    v12 = 0LL;
  if ( *((_DWORD *)v5 + 8) != 3 )
    goto LABEL_13;
  if ( gDeviceLockMutexSupported && ghMutexObject )
  {
    v26[0] = 3LL;
    v26[1] = v5 + 10;
    v28 = 0LL;
    v26[2] = v12;
    v27 = 0LL;
    v25 = ((__int64 (__fastcall *)(_QWORD *))ghMutexObject)(v26);
    if ( v25 < 0 && v25 != -1073741643 && v25 != -1073741536 )
    {
      LogError(3222536195LL);
      AcpiDiagTraceAmlError(v12, 3222536195LL);
      PrintDebugMessage(145, v25, 0, 0, 0LL);
    }
  }
  else
  {
    v25 = 0;
  }
  a3 = ConvertNtStatusToAMLIStatus((unsigned int)v25);
  if ( a3 != 32772 )
  {
LABEL_13:
    v3 = *(_DWORD *)(a2 + 16) + 1;
LABEL_14:
    v8 = v5 + 23;
    v11 = (int *)(v5 + 1);
LABEL_15:
    *(_DWORD *)(a2 + 16) = v3 + 1;
    v13 = KeAcquireSpinLockRaiseToDpc(v8);
    --*((_DWORD *)v5 + 1);
    v14 = v13;
    if ( (*(_DWORD *)(a2 + 16) & 0x80000) != 0 )
    {
      v15 = *(_QWORD **)v11;
      v16 = *(_QWORD *)(*(_QWORD *)v11 + 24LL);
      v17 = *(_QWORD *)v11 + 24LL;
      if ( *(_QWORD *)(v16 + 8) != v17 || (v18 = *(_QWORD **)(*(_QWORD *)v11 + 32LL), *v18 != v17) )
        __fastfail(3u);
      *v18 = v16;
      *(_QWORD *)(v16 + 8) = v18;
      HeapFree(v15);
      *(_QWORD *)v11 = 0LL;
      DequeueAndReadyContext(v5 + 2);
    }
    KeReleaseSpinLock(v8, v14);
    v3 = *(_DWORD *)(a2 + 16);
    goto LABEL_20;
  }
  return a3;
}
