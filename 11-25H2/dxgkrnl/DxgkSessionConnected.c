/*
 * XREFs of DxgkSessionConnected @ 0x14031F330
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
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1401D22E0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x14031F83C (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1403ED2BC (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DxgkSessionConnected(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // r9
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
  v3 = (unsigned __int8)a1;
  v14 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v15 = 1;
    v13 = 2196;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2196);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 2196);
  DxgkLogCodePointPacket(0x6Du, 4u, v3, 0, 0LL);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( (_BYTE)v3 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 118), 1u);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 76282) )
    {
      LOBYTE(v12[0]) = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor(v12, 0LL, 0x3Fu, 0);
      v6 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (const struct _GUID *)v12[1], 0x200000000uLL, v5);
      if ( v6 < 0 )
      {
        v7 = v6;
        WdLogSingleEntry1(2LL, v6);
        WdLogGlobalForLineNumber = 5077;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed DxgkRequestAsyncDisplaySwitchCallout for HDR power policy change(Status = 0x%I64x).",
          v7,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_DWORD *)DXGGLOBAL::GetGlobal() + 76282) = 0;
      CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v12);
    }
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
