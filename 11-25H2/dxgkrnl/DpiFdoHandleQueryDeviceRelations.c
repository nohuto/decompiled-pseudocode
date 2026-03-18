/*
 * XREFs of DpiFdoHandleQueryDeviceRelations @ 0x1403E3C90
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x14023A5C0 (DpiFdoHandleQueryPowerRelations.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     DpiFdoInvalidateChildRelations @ 0x140375560 (DpiFdoInvalidateChildRelations.c)
 */

__int64 __fastcall DpiFdoHandleQueryDeviceRelations(__int64 a1, IRP *a2)
{
  int PowerRelations; // esi
  __int128 *v5; // r12
  int v6; // r15d
  __int64 v7; // rbx
  unsigned int v8; // r13d
  ULONG Length; // ecx
  char v10; // bp
  __int64 v11; // r9
  unsigned int *Information; // r14
  int v13; // eax
  size_t v14; // rdx
  size_t v15; // r15
  _DWORD *Pool2; // rax
  _DWORD *v17; // rbp
  __int64 *v18; // r15
  unsigned int v19; // r12d
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  int v24; // [rsp+30h] [rbp-68h]
  unsigned __int8 v25[8]; // [rsp+38h] [rbp-60h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v26; // [rsp+40h] [rbp-58h] BYREF
  GUID ActivityId; // [rsp+48h] [rbp-50h] BYREF

  v25[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 6u, 0, &v26, v25);
  PowerRelations = 0;
  v5 = (__int128 *)v26;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 64);
  v8 = 0;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( Length == 2 )
  {
    PowerRelations = DpiFdoHandleQueryPowerRelations(*(_QWORD *)(a1 + 64), (__int64)a2);
  }
  else
  {
    if ( Length )
      goto LABEL_40;
    _m_prefetchw((const void *)(v7 + 3780));
    v10 = _InterlockedOr((volatile signed __int32 *)(v7 + 3780), 1u);
    if ( (v10 & 2) == 0 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v7 + 484) )
        DpiCheckForOutstandingD3Requests(v7);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v7 + 168), 1u);
      if ( (v10 & 1) == 0 && *(_DWORD *)(v7 + 236) == 2 && *(_DWORD *)(v7 + 4120) != 1 && *(_DWORD *)(v7 + 284) == 1 )
        DpiFdoInvalidateChildRelations(a1, 6u, v5);
      if ( *(_BYTE *)(v7 + 484) )
        DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 168));
      KeLeaveCriticalRegion();
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v7 + 3440), 1u);
    Information = (unsigned int *)a2->IoStatus.Information;
    if ( Information && *Information )
    {
      v8 = *Information;
      v6 = *Information - 1;
    }
    v13 = *(_DWORD *)(v7 + 3800);
    if ( v13 )
      v6 = v8 + v13 - 1;
    v14 = (unsigned int)(8 * v6 + 16);
    v15 = v14;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v14, 1953656900LL, v11);
    v17 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, v15);
      v24 = *(_DWORD *)(v7 + 3800);
      *v17 = v8 + v24;
      if ( v8 )
        memmove(v17 + 2, Information + 2, 8LL * v8);
      v18 = *(__int64 **)(v7 + 3784);
      v19 = 0;
      if ( v24 )
      {
        do
        {
          if ( *v18 == *(_QWORD *)(v7 + 3784) )
            break;
          *(_QWORD *)&v17[2 * v19 + 2 + 2 * v8] = v18[3];
          ObfReferenceObject((PVOID)v18[3]);
          *((_BYTE *)v18 + 509) = 1;
          ++v19;
          v18 = (__int64 *)*v18;
        }
        while ( v19 < *(_DWORD *)(v7 + 3800) );
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      a2->IoStatus.Information = (ULONG_PTR)v17;
      v20 = (_QWORD *)(v7 + 3808);
      while ( 1 )
      {
        v21 = (_QWORD *)*v20;
        if ( (_QWORD *)*v20 == v20 )
          break;
        if ( (_QWORD *)v21[1] != v20 || (v22 = *v21, *(_QWORD **)(*v21 + 8LL) != v21) )
          __fastfail(3u);
        *v20 = v22;
        *(_QWORD *)(v22 + 8) = v20;
        *((_BYTE *)v21 + 509) = 0;
      }
    }
    else
    {
      PowerRelations = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 8686;
    }
    _InterlockedAnd((volatile signed __int32 *)(v7 + 3780), 0xFFFFFFFE);
    ExReleaseResourceLite((PERESOURCE)(v7 + 3440));
    KeLeaveCriticalRegion();
  }
  if ( PowerRelations >= 0 )
  {
    a2->IoStatus.Status = PowerRelations;
  }
  else if ( PowerRelations != -1073741637 )
  {
    a2->IoStatus.Status = PowerRelations;
    IofCompleteRequest(a2, 1);
    goto LABEL_41;
  }
LABEL_40:
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  PowerRelations = IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 160), a2);
LABEL_41:
  if ( v25[0] )
    DisplayScenarioContextDissociate(&v26);
  return (unsigned int)PowerRelations;
}
