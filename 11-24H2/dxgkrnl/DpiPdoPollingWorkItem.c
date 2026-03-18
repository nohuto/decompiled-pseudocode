/*
 * XREFs of DpiPdoPollingWorkItem @ 0x1402555B0
 * Callers:
 *     DpiCleanUpGlobalState @ 0x14023B6D8 (DpiCleanUpGlobalState.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x140028BA8 (DpiFdoGetChildDescriptor.c)
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DpiFdoInvalidateChildStatus @ 0x1402440D4 (DpiFdoInvalidateChildStatus.c)
 *     DpiFdoPendingCreatePdoCompletion @ 0x14024A3D0 (DpiFdoPendingCreatePdoCompletion.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 */

void __fastcall DpiPdoPollingWorkItem(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  PVOID v2; // rbx
  __int128 *v3; // rdi
  int v4; // r13d
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r15
  _QWORD *ChildDescriptor; // rbx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v9; // [rsp+40h] [rbp-38h] BYREF
  __int128 *v10; // [rsp+48h] [rbp-30h]
  __int128 *v12; // [rsp+90h] [rbp+18h]

  v2 = Context;
  LOBYTE(v9) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(&v9, 0LL, 0xEu, 0);
  v3 = v10;
  v12 = v10;
  v4 = 0;
  while ( 1 )
  {
    KeWaitForSingleObject(qword_140160FB0, Executive, 0, 0, 0LL);
    v5 = qword_140160FA0;
    if ( (__int64 *)qword_140160FA0 == &qword_140160FA0 )
    {
      v5 = 0LL;
      _InterlockedExchange(&dword_140160F98, 0);
    }
    else
    {
      if ( *(__int64 **)(qword_140160FA0 + 8) != &qword_140160FA0
        || (v6 = *(_QWORD *)qword_140160FA0, *(_QWORD *)(*(_QWORD *)qword_140160FA0 + 8LL) != qword_140160FA0) )
      {
        __fastfail(3u);
      }
      qword_140160FA0 = *(_QWORD *)qword_140160FA0;
      *(_QWORD *)(v6 + 8) = &qword_140160FA0;
    }
    KeReleaseMutex((PRKMUTEX)qword_140160FB0, 0);
    if ( !v5 )
      break;
    v7 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 64LL);
    if ( !v2 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v7 + 484) )
        DpiCheckForOutstandingD3Requests(v7);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v7 + 168), 1u);
      if ( *(_DWORD *)(v7 + 236) == 2 )
      {
        if ( *(_DWORD *)(v7 + 4120) != 1 && *(_DWORD *)(v7 + 284) == 1 )
        {
          v4 = DpiFdoInvalidateChildStatus(
                 *(_QWORD *)(v5 + 24),
                 *(_DWORD *)(v5 + 32),
                 *(_BYTE *)(v5 + 40),
                 *(_BYTE *)(v5 + 41),
                 *(_BYTE *)(v5 + 42),
                 1,
                 v3);
LABEL_18:
          if ( *(_BYTE *)(v7 + 484) )
            DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
          ExReleaseResourceLite(*(PERESOURCE *)(v7 + 168));
          KeLeaveCriticalRegion();
          goto LABEL_21;
        }
        v4 = -1073741661;
        WdLogSingleEntry1(3LL, *(int *)(v7 + 284));
        WdLogGlobalForLineNumber = 6497;
      }
      else
      {
        v4 = -1073741810;
        WdLogSingleEntry1(3LL, *(int *)(v7 + 236));
        WdLogGlobalForLineNumber = 6489;
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v7 + 3440), 1u);
      ChildDescriptor = DpiFdoGetChildDescriptor(v7, *(_DWORD *)(v5 + 32));
      KeWaitForSingleObject((PVOID)(v7 + 3544), Executive, 0, 0, 0LL);
      DpiFdoPendingCreatePdoCompletion(*(_QWORD *)(v5 + 24), (__int64)ChildDescriptor);
      KeReleaseMutex((PRKMUTEX)(v7 + 3544), 0);
      ExReleaseResourceLite((PERESOURCE)(v7 + 3440));
      KeLeaveCriticalRegion();
      v2 = Context;
      v3 = v12;
      goto LABEL_18;
    }
LABEL_21:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 64), (PVOID)v5, 0x20u);
    ExFreeToNPagedLookasideList(&stru_140160E00, (PVOID)v5);
    if ( v4 == 259 )
    {
      _InterlockedExchange(&dword_140160F98, 0);
      KeSetTimer(&stru_140160F10, (LARGE_INTEGER)-3000000LL, &stru_140160F50);
      break;
    }
  }
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v9);
}
