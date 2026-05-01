/*
 * XREFs of CrmRegisterToStateMonitor @ 0x18002DE70
 * Callers:
 *     CrmActivityStart @ 0x18002D920 (CrmActivityStart.c)
 *     CrmStateMonitorPostResumeSuspendCallback @ 0x18006A070 (CrmStateMonitorPostResumeSuspendCallback.c)
 *     CrmStateMonitorPostShellReadyTimeSinceLogonCallback @ 0x18006C1E0 (CrmStateMonitorPostShellReadyTimeSinceLogonCallback.c)
 *     CrmStateMonitorFanNoiseHysteresisStart @ 0x18006E7FC (CrmStateMonitorFanNoiseHysteresisStart.c)
 *     CrmStateMonitorAcDcDisplayStart @ 0x18006EA70 (CrmStateMonitorAcDcDisplayStart.c)
 *     CrmStateMonitorAcDcBatteryStart @ 0x18007968C (CrmStateMonitorAcDcBatteryStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x180079880 (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorCompositeTestStart @ 0x180079A00 (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x180079AA4 (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x180079B7C (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorDelayedCsStart @ 0x180079C64 (CrmStateMonitorDelayedCsStart.c)
 *     CrmStateMonitorDelayedInternetLossStart @ 0x180079E10 (CrmStateMonitorDelayedInternetLossStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x180079F0C (CrmStateMonitorDisconnectedStandbyStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x18007A208 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x18007A32C (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x18007A408 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorResourceUsageStart @ 0x18007A948 (CrmStateMonitorResourceUsageStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x18007ACE0 (CrmStateMonitorSystemDiskUsageStart.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800557F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmStateMonitorListenerAdd @ 0x1800598B0 (CrmStateMonitorListenerAdd.c)
 *     CrmStateMonitorCleanup @ 0x18006EC04 (CrmStateMonitorCleanup.c)
 *     CrmStateMonitorInitialize @ 0x18006EE30 (CrmStateMonitorInitialize.c)
 *     CrmStateMonitorSizeGet @ 0x18006F2AC (CrmStateMonitorSizeGet.c)
 *     CrmStateMonitorStart @ 0x18006F408 (CrmStateMonitorStart.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmRegisterToStateMonitor(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned int *v5; // rbx
  unsigned int *v6; // rcx
  unsigned int **v7; // rdx
  int v8; // edi
  unsigned int v10; // eax
  PVOID Heap; // rax
  void *v12; // rbx
  void *v13; // rcx
  int v14; // [rsp+30h] [rbp-78h] BYREF
  char v15[32]; // [rsp+40h] [rbp-68h] BYREF
  UUID *v16; // [rsp+60h] [rbp-48h]
  __int64 v17; // [rsp+68h] [rbp-40h]
  int *v18; // [rsp+70h] [rbp-38h]
  __int64 v19; // [rsp+78h] [rbp-30h]

  v3 = a2;
  RtlAcquireSRWLockShared(&CrmGlobals);
  v4 = 8 * v3;
  v5 = (unsigned int *)*((_QWORD *)&CrmGlobals + v3 + 2);
  if ( v5 )
  {
    RtlAcquireSRWLockExclusive(v5 + 2);
    v5[4] = GetCurrentThreadId();
    v6 = (unsigned int *)(a1 + 8);
    v7 = (unsigned int **)*((_QWORD *)v5 + 4);
    if ( *v7 != v5 + 6 )
      __fastfail(3u);
    *(_QWORD *)v6 = v5 + 6;
    *(_QWORD *)(a1 + 16) = v7;
    *v7 = v6;
    *((_QWORD *)v5 + 4) = v6;
    RtlReleaseSRWLockShared(&CrmGlobals);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))a1)(a1, *v5, *((_QWORD *)v5 + 5));
    v8 = 0;
    v5[4] = 0;
    RtlReleaseSRWLockExclusive(v5 + 2);
    if ( (unsigned int)dword_1800E72E8 > 5 && (qword_1800E72F8 & 8) != 0 && (qword_1800E7300 & 8) == qword_1800E7300 )
    {
      v17 = 16LL;
      v16 = &Uuid;
      v14 = *v5;
      v19 = 4LL;
      v18 = &v14;
      tlgWriteTransfer_EventWriteTransfer(&dword_1800E72E8, &unk_1800D1F02, 0LL, 0LL, 4, v15);
    }
  }
  else
  {
    RtlReleaseSRWLockShared(&CrmGlobals);
    v10 = CrmStateMonitorSizeGet((unsigned int)v3);
    Heap = HampAllocateHeap(v10);
    v12 = Heap;
    if ( Heap )
    {
      CrmStateMonitorInitialize(Heap, (unsigned int)v3);
      v8 = CrmStateMonitorStart(v12);
      if ( v8 < 0 )
        goto LABEL_14;
      RtlAcquireSRWLockExclusive(&CrmGlobals);
      dword_1800E98A8 = GetCurrentThreadId();
      v8 = 0;
      v13 = *(void **)((char *)&CrmGlobals + v4 + 16);
      if ( !v13 )
      {
        v13 = v12;
        *(_QWORD *)((char *)&CrmGlobals + v4 + 16) = v12;
        v12 = 0LL;
      }
      CrmStateMonitorListenerAdd(v13, a1, 1LL);
      if ( v12 )
      {
LABEL_14:
        CrmStateMonitorCleanup(v12);
        HampFreeHeap(v12);
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v8;
}
