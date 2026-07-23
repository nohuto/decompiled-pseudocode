/*
 * XREFs of PspExitLastThread @ 0x14091ECC8
 * Callers:
 *     PsTerminateMinimalProcess @ 0x140768FA8 (PsTerminateMinimalProcess.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     ObReferenceObjectSafeWithTag @ 0x140299100 (ObReferenceObjectSafeWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeQuerySystemTimePrecise @ 0x14031ABA0 (KeQuerySystemTimePrecise.c)
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     PspLockProcessExclusive @ 0x14045AFE0 (PspLockProcessExclusive.c)
 *     PsSessionGetWin32Callouts @ 0x14047422C (PsSessionGetWin32Callouts.c)
 *     KeQuerySystemTimeUnsafe @ 0x140478190 (KeQuerySystemTimeUnsafe.c)
 *     KeForceResumeProcess @ 0x1404A9118 (KeForceResumeProcess.c)
 *     PspUpdateCalloutParameters @ 0x1404EBC50 (PspUpdateCalloutParameters.c)
 *     PspCatchCriticalBreak @ 0x140769208 (PspCatchCriticalBreak.c)
 *     SeAuditProcessExit @ 0x140781A98 (SeAuditProcessExit.c)
 *     PspRundownSingleProcess @ 0x1408E0448 (PspRundownSingleProcess.c)
 *     LpcExitProcess @ 0x1408E109C (LpcExitProcess.c)
 *     ExpWnfDeleteProcessContext @ 0x1408E19F0 (ExpWnfDeleteProcessContext.c)
 *     ExCallCallBack @ 0x14091E61C (ExCallCallBack.c)
 *     PspExitProcess @ 0x14091EFA0 (PspExitProcess.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140936F00 (SeAuditingWithTokenForSubcategory.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PspExitLastThread(__int64 a1, char a2, ULONG_PTR a3, _QWORD *a4, int a5)
{
  _QWORD *v5; // rsi
  __int64 v7; // r8
  __int64 v8; // rax
  ULONG_PTR v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v11; // rcx
  void *v12; // rcx
  struct _KTHREAD *v13; // r12
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  __int64 ProcessServerSilo; // rax
  _RTL_RUN_ONCE *Win32Callouts; // rax
  int v18; // eax
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  int v20; // [rsp+38h] [rbp-28h]
  _QWORD v21[3]; // [rsp+40h] [rbp-20h] BYREF
  int v22; // [rsp+58h] [rbp-8h]

  v5 = 0LL;
  v7 = 0LL;
  v19 = 0LL;
  v21[0] = 0LL;
  v21[1] = 0LL;
  if ( (_DWORD)a1 )
  {
    switch ( (_DWORD)a1 )
    {
      case 1:
        if ( (*(_DWORD *)(a3 + 500) & 0x2000) != 0 )
        {
          ProcessServerSilo = PsGetProcessServerSilo(a3);
          PspCatchCriticalBreak(
            (__int64)"Critical process 0x%p (%s) exited\n",
            a3,
            (const char *)(a3 + 824),
            ProcessServerSilo,
            a5);
        }
        break;
      case 2:
        if ( *(_QWORD *)(a3 + 664) )
        {
          v21[2] = a3;
          v20 = 0;
          v19 = 0LL;
          v22 = 0;
          if ( (unsigned int)PspUpdateCalloutParameters(0, (__int64)v21, 0, 0LL) )
          {
            Win32Callouts = PsSessionGetWin32Callouts();
            ExCallCallBack((signed __int64 *)Win32Callouts);
          }
        }
        break;
      case 3:
        if ( a4 )
        {
          v8 = a4[153];
        }
        else if ( KeQuerySystemTimeUnsafe() )
        {
          KeQuerySystemTimePrecise(&v19);
          v8 = v19;
        }
        else
        {
          v8 = MEMORY[0xFFFFF78000000014];
        }
        *(_QWORD *)(a3 + 1472) = v8;
        LOBYTE(a1) = 1;
        PspExitProcess(a1, a3, v7);
        v9 = PsReferencePrimaryTokenWithTag(a3, 0x65547350u);
        if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(135LL, v9) )
          SeAuditProcessExit(a3, *(_DWORD *)(a3 + 1364));
        ObFastDereferenceObject((__int64 *)(a3 + 584), v9, 1700033360LL);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v11 = *(unsigned __int64 **)(a3 + 1512);
        if ( v11 )
          ExpWnfDeleteProcessContext(v11, 0);
        KeLeaveCriticalRegion();
        PspRundownSingleProcess((char *)a3, 1);
        LpcExitProcess(a3);
        v12 = *(void **)(a3 + 1480);
        if ( v12 )
        {
          ExFreePoolWithTag(v12, 0);
          *(_QWORD *)(a3 + 1480) = 0LL;
        }
        break;
    }
  }
  else
  {
    v13 = KeGetCurrentThread();
    if ( !a2 )
      PspLockProcessExclusive(a3, (__int64)v13);
    KeForceResumeProcess(a3);
    if ( *(_DWORD *)(a3 + 1364) == 259 )
    {
      v18 = a5;
      if ( a5 == -1073741749 )
        v18 = *(_DWORD *)(a3 + 908);
      *(_DWORD *)(a3 + 1364) = v18;
    }
    v14 = *(_QWORD **)(a3 + 880);
    if ( v14 != (_QWORD *)(a3 + 880) )
    {
      v15 = a4;
      do
      {
        if ( v14 - 175 != v15 && !*((_BYTE *)v14 - 1396) )
        {
          if ( ObReferenceObjectSafeWithTag((__int64)(v14 - 175), 0x65547350u) )
          {
            PspUnlockProcessExclusive(a3, (__int64)v13);
            KeWaitForSingleObject(v14 - 175, Executive, 0, 0, 0LL);
            if ( v5 )
              ObfDereferenceObjectWithTag(v5, 0x65547350u);
            v5 = v14 - 175;
            PspLockProcessExclusive(a3, (__int64)v13);
          }
          v15 = a4;
        }
        v14 = (_QWORD *)*v14;
      }
      while ( v14 != (_QWORD *)(a3 + 880) );
    }
    PspUnlockProcessExclusive(a3, (__int64)v13);
    if ( v5 )
      ObfDereferenceObjectWithTag(v5, 0x65547350u);
  }
}
