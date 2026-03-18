/*
 * XREFs of DxgkSessionReconnected @ 0x1403984F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     OutputDuplRemoteSessionReconnected @ 0x14018B268 (OutputDuplRemoteSessionReconnected.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1401D7590 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1403986AC (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1403E6C8C (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DxgkSessionReconnected(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi
  struct DXGGLOBAL *Global; // rax
  int v6; // eax
  __int64 v7; // rbx
  DXGGLOBAL *v8; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v12[2]; // [rsp+50h] [rbp-30h] BYREF
  int v13; // [rsp+60h] [rbp-20h] BYREF
  __int64 v14; // [rsp+68h] [rbp-18h]
  char v15; // [rsp+70h] [rbp-10h]

  v13 = -1;
  v4 = (unsigned __int8)a1;
  v14 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v15 = 1;
    v13 = 2199;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2199);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 2199);
  DxgkLogCodePointPacket(0x6Du, 6u, v4, 0, 0LL);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( (_BYTE)v4 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 122), 1u);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 76302) )
    {
      LOBYTE(v12[0]) = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor(v12, 0LL, 0x3Fu, 0);
      v6 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (const struct _GUID *)v12[1], 0x200000000uLL);
      if ( v6 < 0 )
      {
        v7 = v6;
        WdLogSingleEntry1(2LL, v6);
        WdLogGlobalForLineNumber = 5292;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed DxgkRequestAsyncDisplaySwitchCallout for HDR power policy change(Status = 0x%I64x).",
          v7,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_DWORD *)DXGGLOBAL::GetGlobal() + 76302) = 0;
      CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v12);
    }
  }
  else
  {
    OutputDuplRemoteSessionReconnected(a2);
  }
  v8 = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(v8);
  if ( SessionData )
    *((_BYTE *)SessionData + 18496) = 1;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v13);
  }
}
