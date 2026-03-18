/*
 * XREFs of ??1DXGPROCESS@@MEAA@XZ @ 0x14038BE90
 * Callers:
 *     ??_GDXGPROCESS@@MEAAPEAXI@Z @ 0x140034A90 (--_GDXGPROCESS@@MEAAPEAXI@Z.c)
 *     ??1DXGPROCESSVM@@UEAA@XZ @ 0x140077004 (--1DXGPROCESSVM@@UEAA@XZ.c)
 *     ??1DXGPROCESSVMWP@@UEAA@XZ @ 0x140077038 (--1DXGPROCESSVMWP@@UEAA@XZ.c)
 * Callees:
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x140010000 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1?$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ @ 0x14004FBB0 (--1-$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ.c)
 *     ??1?$DXGNODELIST@VDXGPROCESS@@VDXGCOPYPROTECTION@@@@AEAA@XZ @ 0x140050A90 (--1-$DXGNODELIST@VDXGPROCESS@@VDXGCOPYPROTECTION@@@@AEAA@XZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005DA48 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ @ 0x140077220 (-ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402DE70C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

void __fastcall DXGPROCESS::~DXGPROCESS(DXGPROCESS *this)
{
  int v2; // eax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned int i; // edi
  struct DXGGLOBAL *v7; // rsi
  void *v8; // rcx
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  unsigned __int8 v11[8]; // [rsp+50h] [rbp-38h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v12; // [rsp+58h] [rbp-30h] BYREF
  GUID ActivityId; // [rsp+60h] [rbp-28h] BYREF

  *(_QWORD *)this = &DXGPROCESS::`vftable';
  if ( *((_QWORD *)this + 55) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1271;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_DecommittableBytes == 0", 1271LL, 0LL, 0LL, 0LL, 0LL);
  }
  v11[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x19u, 0, &v12, v11);
  v2 = *((_DWORD *)this + 102);
  v3 = v12;
  if ( (v2 & 4) != 0 && (v2 & 0x100) == 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    DXGSESSIONDATA::ReleaseDwmProcessReference(SessionData);
  }
  if ( !*((_DWORD *)this + 10) )
    DXGPROCESS::Destroy(this, v3, 0);
  if ( *((_DWORD *)this + 10) != 2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1288;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_ExecutionState == EXECUTION_STOPPED",
      1288LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 72) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1293;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"nullptr == m_pVailObjectRef", 1293LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(v4 + 96));
    v5 = *((_QWORD *)this + 8);
    if ( v5 )
    {
      DXGWORKQUEUE::FlushQueue((PLIST_ENTRY)(v5 + 104));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)v5);
    }
  }
  if ( *((_QWORD *)this + 6) )
  {
    for ( i = 0; ; ++i )
    {
      v7 = DXGGLOBAL::GetGlobal();
      if ( !*((_DWORD *)v7 + 333) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2915;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_MaximumGlobalAdapterCount > 0",
          2915LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( i >= *((_DWORD *)v7 + 333) )
        break;
    }
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 6));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 9));
  v8 = (void *)*((_QWORD *)this + 12);
  if ( v8 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
    *((_QWORD *)this + 12) = 0LL;
  }
  if ( v11[0] )
    DisplayScenarioContextDissociate(&v12);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGPROCESS *)((char *)this + 360));
  DXGNODELIST<DXGPROCESS,DXGCOPYPROTECTION>::~DXGNODELIST<DXGPROCESS,DXGCOPYPROTECTION>((_QWORD *)this + 43);
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 40);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 35));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGPROCESS *)((char *)this + 104));
  *((_QWORD *)this + 3) = 0LL;
}
