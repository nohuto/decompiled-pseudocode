/*
 * XREFs of DxgkSessionReconnected @ 0x14031F680
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     OutputDuplRemoteSessionReconnected @ 0x140189018 (OutputDuplRemoteSessionReconnected.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1401D22E0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x14031F83C (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1403ED2BC (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DxgkSessionReconnected(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rbx
  DXGGLOBAL *v9; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v13[2]; // [rsp+50h] [rbp-30h] BYREF
  int v14; // [rsp+60h] [rbp-20h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h]
  char v16; // [rsp+70h] [rbp-10h]

  v14 = -1;
  v4 = (unsigned __int8)a1;
  v15 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v16 = 1;
    v14 = 2199;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2199);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 2199);
  DxgkLogCodePointPacket(0x6Du, 6u, v4, 0, 0LL);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( (_BYTE)v4 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 118), 1u);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 76282) )
    {
      LOBYTE(v13[0]) = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor(v13, 0LL, 0x3Fu, 0);
      v7 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (const struct _GUID *)v13[1], 0x200000000uLL, v6);
      if ( v7 < 0 )
      {
        v8 = v7;
        WdLogSingleEntry1(2LL, v7);
        WdLogGlobalForLineNumber = 5292;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed DxgkRequestAsyncDisplaySwitchCallout for HDR power policy change(Status = 0x%I64x).",
          v8,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_DWORD *)DXGGLOBAL::GetGlobal() + 76282) = 0;
      CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v13);
    }
  }
  else
  {
    OutputDuplRemoteSessionReconnected(a2);
  }
  v9 = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(v9);
  if ( SessionData )
    *((_BYTE *)SessionData + 18496) = 1;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v14);
  }
}
