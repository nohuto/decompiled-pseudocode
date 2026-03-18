/*
 * XREFs of DpiFdoInvalidateChildWorkItem @ 0x1403752D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     DpiFdoInvalidateChildRelations @ 0x140375560 (DpiFdoInvalidateChildRelations.c)
 */

void __fastcall DpiFdoInvalidateChildWorkItem(_QWORD *IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v5; // rbp
  __int64 v6; // rdi
  int v7; // ecx
  int v8; // edx
  unsigned __int8 v9[8]; // [rsp+30h] [rbp-48h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v10; // [rsp+38h] [rbp-40h] BYREF
  GUID ActivityId; // [rsp+40h] [rbp-38h] BYREF

  v9[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0xAu, 0, &v10, v9);
  v5 = v10;
  v6 = IoObject[8];
  IoFreeWorkItem(IoWorkItem);
  if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), DpiFdoInvalidateChildWorkItem, File, 1u, 0x20u) >= 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 64LL) + 4232LL));
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
    v7 = *(_DWORD *)(v6 + 236);
    if ( (v7 == 2 || *(_DWORD *)(v6 + 240) == 2 && ((v7 - 3) & 0xFFFFFFFC) == 0 && v7 != 4)
      && *(_DWORD *)(v6 + 4120) != 1
      && *(_DWORD *)(v6 + 284) == 1 )
    {
      if ( *(_BYTE *)(v6 + 484) )
        DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v6 + 484) )
        DpiCheckForOutstandingD3Requests(v6);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
      v8 = *(_DWORD *)(v6 + 236);
      if ( (v8 == 2 || *(_DWORD *)(v6 + 240) == 2 && ((v8 - 3) & 0xFFFFFFFC) == 0 && v8 != 4)
        && *(_DWORD *)(v6 + 4120) != 1
        && *(_DWORD *)(v6 + 284) == 1 )
      {
        DpiFdoInvalidateChildRelations(IoObject, 6LL, v5);
      }
    }
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), DpiFdoInvalidateChildWorkItem, 0x20u);
  }
  if ( v9[0] )
    DisplayScenarioContextDissociate(&v10);
}
