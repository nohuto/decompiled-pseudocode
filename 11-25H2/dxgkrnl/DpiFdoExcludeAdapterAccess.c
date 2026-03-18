/*
 * XREFs of DpiFdoExcludeAdapterAccess @ 0x140239C00
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1401D22E0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1401D23B0 (DxgkRequestSyncDisplaySwitchCallout.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiRequestIoPowerState @ 0x1403AD44C (DpiRequestIoPowerState.c)
 *     DpiDxgkDdiProtectedCallback @ 0x1403EC344 (DpiDxgkDdiProtectedCallback.c)
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
  __int64 v17; // r9
  int v18; // eax
  unsigned __int64 v19; // r8
  int v20; // eax
  char v21; // [rsp+30h] [rbp-D0h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v23; // [rsp+40h] [rbp-C0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v24; // [rsp+48h] [rbp-B8h]
  _QWORD v25[3]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h]
  _QWORD v27[3]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28; // [rsp+88h] [rbp-78h]
  struct _DXGK_WIN32K_PARAM_DATA v29; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v30[5]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v31[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v32; // [rsp+108h] [rbp+8h]
  __int128 v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+120h] [rbp+20h]
  __int64 v35; // [rsp+128h] [rbp+28h]
  int v36; // [rsp+130h] [rbp+30h]
  int v37; // [rsp+134h] [rbp+34h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  __int64 v39; // [rsp+140h] [rbp+40h]

  v3 = IoObject[8];
  v21 = 0;
  LOBYTE(v23) = 0;
  v6 = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(&v23, 0LL, 0xDu, 0);
  v8 = v24;
  if ( *(_BYTE *)(v3 + 480) )
  {
    LODWORD(v9) = -1073741637;
    WdLogSingleEntry1(2LL, -1073741637LL);
    WdLogGlobalForLineNumber = 6170;
LABEL_15:
    DpiDxgkDdiProtectedCallback(*(_QWORD *)(v3 + 48), *Context, Context[1], (unsigned int)v9);
    goto LABEL_18;
  }
  if ( (Context[2] & 1) != 0 )
  {
    v10 = *(_QWORD *)(v3 + 5888);
    v32 = 0LL;
    LOBYTE(v7) = 1;
    v39 = *(_QWORD *)(v3 + 2696);
    v27[0] = 4LL;
    v28 = 0LL;
    v27[2] = 0LL;
    v27[1] = 0LL;
    v35 = 0LL;
    v31[0] = 30;
    v31[1] = 72;
    v34 = 0LL;
    v33 = 0LL;
    v36 = 43;
    v38 = 0LL;
    SMgrGdiCallout(v27, v10, v7, 0LL, 0LL, v24);
    v11 = *(_QWORD *)(v3 + 5888);
    v9 = (int)v28;
    v37 = v28;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v31, v11);
    if ( (int)v9 < 0 )
    {
      WdLogSingleEntry1(2LL, v9);
      WdLogGlobalForLineNumber = 6205;
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
    v21 = 1;
    if ( *(_DWORD *)(v3 + 236) != 2 || *(_DWORD *)(v3 + 4120) == 1 || *(_DWORD *)(v3 + 284) != 1 )
    {
      LODWORD(v9) = -1073741661;
      WdLogSingleEntry1(2LL, -1073741661LL);
      WdLogGlobalForLineNumber = 6230;
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
  if ( v21 == 1 )
  {
    KeReleaseMutex((PRKMUTEX)(v3 + 176), 0);
    if ( *(_BYTE *)(v3 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
  }
  memset(v30, 0, 0x48uLL);
  if ( (Context[2] & 1) != 0 )
  {
    *((_QWORD *)&v30[0] + 1) = 0LL;
    memset(&v30[1], 0, 32);
    v15 = *(_QWORD *)(v3 + 2696);
    LOBYTE(v14) = 1;
    *((_QWORD *)&v30[3] + 1) = 0LL;
    *(_QWORD *)&v30[4] = v15;
    v30[0] = 0x480000001EuLL;
    v30[1] = 0LL;
    LODWORD(v30[3]) = 44;
    v16 = *(_QWORD *)(v3 + 5888);
    v25[0] = 4LL;
    v26 = 0LL;
    v25[2] = 1LL;
    v25[1] = 0LL;
    SMgrGdiCallout(v25, v16, v14, 0LL, 0LL, v8);
    DWORD1(v30[3]) = v26;
    v9 = (int)v26;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v30, *(_QWORD *)(v3 + 5888));
    if ( (int)v26 < 0 )
    {
      WdLogSingleEntry1(2LL, v9);
      WdLogGlobalForLineNumber = 6354;
    }
  }
  if ( v6 )
  {
    *(_OWORD *)&v29.NumPathArrayElements = 0LL;
    v29.SDCFlags = 143;
    *(_OWORD *)&v29.PathsArray = 0LL;
    memset(v30, 0, 0x48uLL);
    *(_QWORD *)&v30[4] = *(_QWORD *)(v3 + 2696);
    v18 = *((_DWORD *)Context + 4);
    v30[0] = 0x480000001EuLL;
    v30[3] = 0x2DuLL;
    memset(&v30[1], 0, 28);
    v19 = *(_QWORD *)(v3 + 5888);
    if ( (v18 & 2) != 0 )
    {
      DxgkRequestAsyncDisplaySwitchCallout(&v29, (const struct _GUID *)v8, v19, v17);
    }
    else
    {
      v20 = DxgkRequestSyncDisplaySwitchCallout(&v29, (const struct _GUID *)v8, v19, v17);
      LODWORD(v9) = v20;
      if ( v20 < 0 )
      {
        WdLogSingleEntry1(2LL, v20);
        WdLogGlobalForLineNumber = 6390;
      }
    }
    DWORD1(v30[3]) = v9;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v30, *(_QWORD *)(v3 + 5888));
  }
  if ( (Context[2] & 2) != 0 )
    KeSetEvent((PRKEVENT)Context[3], 0, 0);
  ExFreePoolWithTag(Context, 0);
  IoFreeWorkItem(IoWorkItem);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItem, 0x20u);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v23);
}
