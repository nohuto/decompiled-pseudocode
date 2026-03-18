/*
 * XREFs of DpiFdoExcludeAdapterAccess @ 0x140240710
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1401D7590 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1401D7660 (DxgkRequestSyncDisplaySwitchCallout.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiRequestIoPowerState @ 0x14039F1A8 (DpiRequestIoPowerState.c)
 *     DpiDxgkDdiProtectedCallback @ 0x1403E5C54 (DpiDxgkDdiProtectedCallback.c)
 */

void __fastcall DpiFdoExcludeAdapterAccess(_QWORD *IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rbx
  bool v6; // r12
  __int64 v7; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  unsigned __int64 v18; // r8
  int v19; // eax
  char v20; // [rsp+30h] [rbp-D0h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v22; // [rsp+40h] [rbp-C0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v23; // [rsp+48h] [rbp-B8h]
  _QWORD v24[3]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h]
  _QWORD v26[3]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h]
  struct _DXGK_WIN32K_PARAM_DATA v28; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v29[5]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v30[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v31; // [rsp+108h] [rbp+8h]
  __int128 v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  int v35; // [rsp+130h] [rbp+30h]
  int v36; // [rsp+134h] [rbp+34h]
  __int64 v37; // [rsp+138h] [rbp+38h]
  __int64 v38; // [rsp+140h] [rbp+40h]

  v3 = IoObject[8];
  v20 = 0;
  LOBYTE(v22) = 0;
  v6 = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(&v22, 0LL, 0xDu, 0);
  v8 = v23;
  if ( *(_BYTE *)(v3 + 480) )
  {
    LODWORD(v9) = -1073741637;
    WdLogSingleEntry1(2LL, -1073741637LL);
    WdLogGlobalForLineNumber = 6302;
LABEL_15:
    DpiDxgkDdiProtectedCallback(*(_QWORD *)(v3 + 48), *Context, Context[1], (unsigned int)v9);
    goto LABEL_18;
  }
  if ( (Context[2] & 1) != 0 )
  {
    v10 = *(_QWORD *)(v3 + 5888);
    v31 = 0LL;
    LOBYTE(v7) = 1;
    v38 = *(_QWORD *)(v3 + 2696);
    v26[0] = 4LL;
    v27 = 0LL;
    v26[2] = 0LL;
    v26[1] = 0LL;
    v34 = 0LL;
    v30[0] = 30;
    v30[1] = 72;
    v33 = 0LL;
    v32 = 0LL;
    v35 = 43;
    v37 = 0LL;
    SMgrGdiCallout(v26, v10, v7, 0LL, 0LL, v23);
    v11 = *(_QWORD *)(v3 + 5888);
    v9 = (int)v27;
    v36 = v27;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v30, v11);
    if ( (int)v9 < 0 )
    {
      WdLogSingleEntry1(2LL, v9);
      WdLogGlobalForLineNumber = 6337;
      goto LABEL_15;
    }
  }
  if ( (Context[2] & 2) == 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 484) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
    KeWaitForSingleObject((PVOID)(v3 + 176), Executive, 0, 0, 0LL);
    v20 = 1;
    if ( *(_DWORD *)(v3 + 236) != 2 || *(_DWORD *)(v3 + 4120) == 1 || *(_DWORD *)(v3 + 284) != 1 )
    {
      LODWORD(v9) = -1073741661;
      WdLogSingleEntry1(2LL, -1073741661LL);
      WdLogGlobalForLineNumber = 6362;
      goto LABEL_15;
    }
  }
  v12 = DpiRequestIoPowerState(IoObject, 5LL, v7, *((unsigned int *)Context + 4));
  LODWORD(v9) = v12;
  if ( v12 < 0 )
  {
    v6 = v12 == -1071775482;
    goto LABEL_15;
  }
  DpiDxgkDdiProtectedCallback(*(_QWORD *)(v3 + 48), *Context, Context[1], (unsigned int)v12);
  LODWORD(v9) = DpiRequestIoPowerState(IoObject, 6LL, v13, *((unsigned int *)Context + 4));
  if ( (int)v9 < 0 )
  {
    LODWORD(v9) = 0;
    v6 = 1;
  }
LABEL_18:
  if ( v20 == 1 )
  {
    KeReleaseMutex((PRKMUTEX)(v3 + 176), 0);
    if ( *(_BYTE *)(v3 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
  }
  memset(v29, 0, 0x48uLL);
  if ( (Context[2] & 1) != 0 )
  {
    *((_QWORD *)&v29[0] + 1) = 0LL;
    memset(&v29[1], 0, 32);
    v15 = *(_QWORD *)(v3 + 2696);
    LOBYTE(v14) = 1;
    *((_QWORD *)&v29[3] + 1) = 0LL;
    *(_QWORD *)&v29[4] = v15;
    v29[0] = 0x480000001EuLL;
    v29[1] = 0LL;
    LODWORD(v29[3]) = 44;
    v16 = *(_QWORD *)(v3 + 5888);
    v24[0] = 4LL;
    v25 = 0LL;
    v24[2] = 1LL;
    v24[1] = 0LL;
    SMgrGdiCallout(v24, v16, v14, 0LL, 0LL, v8);
    DWORD1(v29[3]) = v25;
    v9 = (int)v25;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v29, *(_QWORD *)(v3 + 5888));
    if ( (int)v25 < 0 )
    {
      WdLogSingleEntry1(2LL, v9);
      WdLogGlobalForLineNumber = 6486;
    }
  }
  if ( v6 )
  {
    *(_OWORD *)&v28.NumPathArrayElements = 0LL;
    v28.SDCFlags = 143;
    *(_OWORD *)&v28.PathsArray = 0LL;
    memset(v29, 0, 0x48uLL);
    *(_QWORD *)&v29[4] = *(_QWORD *)(v3 + 2696);
    v17 = *((_DWORD *)Context + 4);
    v29[0] = 0x480000001EuLL;
    v29[3] = 0x2DuLL;
    memset(&v29[1], 0, 28);
    v18 = *(_QWORD *)(v3 + 5888);
    if ( (v17 & 2) != 0 )
    {
      DxgkRequestAsyncDisplaySwitchCallout(&v28, (const struct _GUID *)v8, v18);
    }
    else
    {
      v19 = DxgkRequestSyncDisplaySwitchCallout(&v28, (const struct _GUID *)v8, v18);
      LODWORD(v9) = v19;
      if ( v19 < 0 )
      {
        WdLogSingleEntry1(2LL, v19);
        WdLogGlobalForLineNumber = 6522;
      }
    }
    DWORD1(v29[3]) = v9;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v29, *(_QWORD *)(v3 + 5888));
  }
  if ( (Context[2] & 2) != 0 )
    KeSetEvent((PRKEVENT)Context[3], 0, 0);
  ExFreePoolWithTag(Context, 0);
  IoFreeWorkItem(IoWorkItem);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItem, 0x20u);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v22);
}
