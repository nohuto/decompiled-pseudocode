/*
 * XREFs of xxxQueryInformationThread @ 0x14003E6F4
 * Callers:
 *     NtUserQueryInformationThread @ 0x14003E400 (NtUserQueryInformationThread.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     W32GetThreadWin32Thread @ 0x140105FF4 (W32GetThreadWin32Thread.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x140107100 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x140107460 (xxxSetCsrssThreadDesktop.c)
 *     ??0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z @ 0x140147740 (--0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x140154180 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ?IsProcessUserService@@YA_NPEAU_EPROCESS@@PEAX@Z @ 0x1401E7E2C (-IsProcessUserService@@YA_NPEAU_EPROCESS@@PEAX@Z.c)
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1401F5F5C (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetTaskName @ 0x1402882B8 (GetTaskName.c)
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1402ACE84 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 */

NTSTATUS __fastcall xxxQueryInformationThread(void *a1, int a2, unsigned int *a3, unsigned int a4)
{
  unsigned __int64 v4; // r13
  NTSTATUS result; // eax
  int v8; // edi
  int ProcessSessionId; // ebx
  NTSTATUS v10; // r14d
  PEPROCESS ThreadProcess; // rax
  int v12; // ebx
  __int64 ThreadWin32Thread; // rbx
  signed __int32 v14; // eax
  int v15; // r15d
  int v16; // r15d
  int v17; // r15d
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rdx
  PACCESS_TOKEN v23; // r14
  unsigned int v24; // r15d
  int v25; // eax
  unsigned __int64 v26; // rcx
  __int64 i; // rbx
  HANDLE ThreadId; // rax
  __int64 v29; // rcx
  struct _KTHREAD *v30; // rcx
  int v31; // r13d
  PEPROCESS v32; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v34; // rdi
  int v35; // eax
  __int64 v36; // rdx
  __int64 *v37; // rax
  __int64 v38; // rax
  struct tagTHREADINFO *v39; // r15
  unsigned int *v40; // rsi
  PEPROCESS Process; // [rsp+40h] [rbp-40h] BYREF
  PVOID Object; // [rsp+48h] [rbp-38h] BYREF
  __int64 v43; // [rsp+50h] [rbp-30h] BYREF
  __int64 v44; // [rsp+58h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter2[4]; // [rsp+60h] [rbp-20h] BYREF
  int v46; // [rsp+B8h] [rbp+38h] BYREF

  v4 = a4;
  Process = 0LL;
  Object = 0LL;
  if ( a2 == 11 )
  {
    result = ObReferenceObjectByHandleWithTag(
               a1,
               0x400u,
               (POBJECT_TYPE)PsProcessType,
               1,
               0x47727355u,
               (PVOID *)&Process,
               0LL);
    v8 = result;
    if ( result < 0 )
      return result;
    ProcessSessionId = PsGetProcessSessionIdEx(Process);
    if ( ProcessSessionId != (unsigned int)W32GetCurrentWin32kSessionId() )
    {
      v46 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4540LL);
    }
    goto LABEL_14;
  }
  result = ObReferenceObjectByHandleWithTag(a1, 0x40u, (POBJECT_TYPE)PsThreadType, 1, 0x47727355u, &Object, 0LL);
  v10 = result;
  if ( result < 0 )
    return result;
  ThreadProcess = PsGetThreadProcess((PETHREAD)Object);
  v12 = PsGetProcessSessionIdEx(ThreadProcess);
  if ( v12 != (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    v46 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4556LL);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(Object);
  v8 = v10;
  v14 = 0;
  if ( !a2 )
  {
    v30 = (struct _KTHREAD *)Object;
    v31 = a3[3] & 0x800;
    *(_OWORD *)a3 = 0LL;
    v32 = PsGetThreadProcess(v30);
    ProcessWin32Process = PsGetProcessWin32Process(v32);
    v34 = ProcessWin32Process;
    if ( ProcessWin32Process && *(_QWORD *)ProcessWin32Process )
    {
      if ( (*(_DWORD *)(ProcessWin32Process + 276) & 0xC0) == 0 )
      {
        v46 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4691LL);
      }
      v35 = *(_DWORD *)(v34 + 276) & 0xC0;
      if ( v35 == 192 || v35 == 128 && !v31 )
      {
        a3[2] = 1;
LABEL_66:
        v8 = v10;
        goto LABEL_67;
      }
      if ( ThreadWin32Thread )
      {
        v36 = *(_QWORD *)(ThreadWin32Thread + 496);
        if ( v36 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v36 + 40) + 64LL) & 4) == 0 )
          {
            v37 = *(__int64 **)(*(_QWORD *)(v36 + 8) + 24LL);
            if ( v37 )
              v38 = *v37;
            else
              v38 = 0LL;
            *(_QWORD *)a3 = v38;
          }
          v8 = v10;
          if ( *(_DWORD *)(ThreadWin32Thread + 944) )
          {
            a3[3] |= 1u;
            v39 = PtiCurrent();
            if ( *((_QWORD *)v39 + 62) != *(_QWORD *)(ThreadWin32Thread + 496) )
            {
              Win32RawLockedW32Thread::Win32RawLockedW32Thread(
                (Win32RawLockedW32Thread *)BugCheckParameter2,
                (struct _W32THREAD *)ThreadWin32Thread);
              v40 = a3 + 4;
              if ( !*((_QWORD *)v39 + 62) || (v8 = xxxRestoreCsrssThreadDesktop(v40, 0LL), v8 >= 0) )
                v8 = xxxSetCsrssThreadDesktop(*(PVOID *)(ThreadWin32Thread + 496));
              Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2);
            }
          }
          goto LABEL_67;
        }
      }
    }
    a3[2] = 2;
    goto LABEL_66;
  }
  v15 = a2 - 1;
  if ( !v15 )
  {
    if ( ThreadWin32Thread )
    {
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(ThreadWin32Thread + 528), 0, 0);
LABEL_43:
      *a3 = v14;
      goto LABEL_67;
    }
LABEL_39:
    v8 = -1073741816;
    goto LABEL_67;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( ThreadWin32Thread )
    {
      GetTaskName(ThreadWin32Thread, a3, (unsigned int)v4);
      goto LABEL_67;
    }
    goto LABEL_39;
  }
  v17 = v16 - 2;
  if ( !v17 )
  {
    if ( ThreadWin32Thread )
      v14 = IsThreadHungTimeCheck((const struct tagTHREADINFO *)ThreadWin32Thread, *a3);
    goto LABEL_43;
  }
  if ( v17 == 7 )
  {
LABEL_14:
    v18 = 0LL;
    v19 = PsGetProcessWin32Process(Process);
    v20 = v19;
    if ( v19 && *(_QWORD *)v19 )
    {
      v21 = *(_DWORD *)(v19 + 276);
      if ( (v21 & 0xC0) == 0 )
      {
        *(_DWORD *)(v20 + 276) = v21 & 0xFFFFFF3F | 0x40;
        v23 = PsReferencePrimaryToken(Process);
        if ( v23 )
        {
          v46 = 0;
          v43 = 0LL;
          v44 = 0LL;
          if ( (int)AppModelPolicy_GetPolicy_Internal(v23, v22, &v46, &v44, &v43) >= 0 && v46 == 65537 )
          {
            *(_DWORD *)(v20 + 276) = *(_DWORD *)(v20 + 276) & 0xFFFFFF3F | 0x80;
          }
          else if ( IsProcessUserService(Process, v23) )
          {
            *(_DWORD *)(v20 + 276) |= 0xC0u;
          }
          ObfDereferenceObject(v23);
        }
      }
      v18 = v20;
    }
    v24 = 0;
    if ( (unsigned int)v4 >= 8 )
    {
      if ( v18 && (v25 = *(_DWORD *)(v18 + 376)) != 0 )
      {
        v26 = 8LL * (unsigned int)(v25 + 1);
        if ( v26 <= v4 )
        {
          for ( i = *(_QWORD *)(v18 + 328); i; i = *(_QWORD *)(i + 704) )
          {
            ThreadId = PsGetThreadId(*(PETHREAD *)i);
            v29 = v24++;
            *(_QWORD *)&a3[2 * v29] = ThreadId;
          }
          *(_QWORD *)&a3[2 * v24] = 0LL;
        }
        else
        {
          *(_QWORD *)a3 = v26;
          v8 = -1073741801;
        }
      }
      else
      {
        *(_QWORD *)a3 = 0LL;
      }
    }
    else
    {
      v8 = -1073741811;
    }
    goto LABEL_67;
  }
  v8 = -1073741821;
LABEL_67:
  if ( Process )
    ObfDereferenceObjectWithTag(Process, 0x47727355u);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x47727355u);
  return v8;
}
