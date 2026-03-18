/*
 * XREFs of DpiFdoHandleQueryDeviceRelations @ 0x1403DB600
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1402410D0 (DpiFdoHandleQueryPowerRelations.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     DpiFdoInvalidateChildRelations @ 0x14031DC40 (DpiFdoInvalidateChildRelations.c)
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
  unsigned int *Information; // r14
  int v12; // eax
  size_t v13; // rdx
  size_t v14; // r15
  _DWORD *Pool2; // rax
  _DWORD *v16; // rbp
  __int64 *v17; // r15
  unsigned int v18; // r12d
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  int v23; // [rsp+30h] [rbp-68h]
  unsigned __int8 v24[8]; // [rsp+38h] [rbp-60h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v25; // [rsp+40h] [rbp-58h] BYREF
  GUID ActivityId; // [rsp+48h] [rbp-50h] BYREF

  v24[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 6u, 0, &v25, v24);
  PowerRelations = 0;
  v5 = (__int128 *)v25;
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
    v12 = *(_DWORD *)(v7 + 3800);
    if ( v12 )
      v6 = v8 + v12 - 1;
    v13 = (unsigned int)(8 * v6 + 16);
    v14 = v13;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v13, 1953656900LL);
    v16 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, v14);
      v23 = *(_DWORD *)(v7 + 3800);
      *v16 = v8 + v23;
      if ( v8 )
        memmove(v16 + 2, Information + 2, 8LL * v8);
      v17 = *(__int64 **)(v7 + 3784);
      v18 = 0;
      if ( v23 )
      {
        do
        {
          if ( *v17 == *(_QWORD *)(v7 + 3784) )
            break;
          *(_QWORD *)&v16[2 * v18 + 2 + 2 * v8] = v17[3];
          ObfReferenceObject((PVOID)v17[3]);
          *((_BYTE *)v17 + 509) = 1;
          ++v18;
          v17 = (__int64 *)*v17;
        }
        while ( v18 < *(_DWORD *)(v7 + 3800) );
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      a2->IoStatus.Information = (ULONG_PTR)v16;
      v19 = (_QWORD *)(v7 + 3808);
      while ( 1 )
      {
        v20 = (_QWORD *)*v19;
        if ( (_QWORD *)*v19 == v19 )
          break;
        if ( (_QWORD *)v20[1] != v19 || (v21 = *v20, *(_QWORD **)(*v20 + 8LL) != v20) )
          __fastfail(3u);
        *v19 = v21;
        *(_QWORD *)(v21 + 8) = v19;
        *((_BYTE *)v20 + 509) = 0;
      }
    }
    else
    {
      PowerRelations = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 8818;
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
  if ( v24[0] )
    DisplayScenarioContextDissociate(&v25);
  return (unsigned int)PowerRelations;
}
