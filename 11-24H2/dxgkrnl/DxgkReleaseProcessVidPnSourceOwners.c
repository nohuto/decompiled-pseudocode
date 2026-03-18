/*
 * XREFs of DxgkReleaseProcessVidPnSourceOwners @ 0x1401EF060
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x140038420 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x140296CF8 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1402984DC (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x140298BC0 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403C5210 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DxgkReleaseProcessVidPnSourceOwners(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGPROCESS *Process; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v16; // [rsp+28h] [rbp-39h] BYREF
  __int64 v17; // [rsp+30h] [rbp-31h]
  char v18; // [rsp+38h] [rbp-29h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v19[3]; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v20[8]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v21; // [rsp+60h] [rbp-1h]
  __int64 v22; // [rsp+68h] [rbp+7h]
  int v23; // [rsp+70h] [rbp+Fh]
  __int16 v24; // [rsp+74h] [rbp+13h]
  char v25; // [rsp+76h] [rbp+15h]

  v1 = 0;
  LOBYTE(v19[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v19, 0LL, 0x2Au, 0);
  v16 = -1;
  v5 = v19[1];
  v17 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2033;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v3, (__int64)&EventProfilerEnter, v4, 2033);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2033);
  v21 = a1;
  v22 = 0LL;
  v23 = 512;
  v24 = 0;
  v25 = 0;
  if ( (int)DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v20, 1) >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v20);
    DXGPROCESS::ReleaseVidPnSourceOwners(Process, v5);
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v20);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v20);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v16);
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6, v8, v9) + 24) = a1;
    WdLogGlobalForLineNumber = 3510;
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v20);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v16);
    v1 = -1073741811;
  }
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v19);
  return v1;
}
