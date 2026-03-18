/*
 * XREFs of ??1DXGGLOBAL@@EEAA@XZ @ 0x1401D29F4
 * Callers:
 *     ??_GDXGGLOBAL@@EEAAPEAXI@Z @ 0x140073200 (--_GDXGGLOBAL@@EEAAPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1?$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ @ 0x14004F630 (--1-$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005D990 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     McGenEventUnregister_EtwUnregister @ 0x140070DE0 (McGenEventUnregister_EtwUnregister.c)
 *     ??1CSERIALIZEDWORKQUEUE@@QEAA@XZ @ 0x140073054 (--1CSERIALIZEDWORKQUEUE@@QEAA@XZ.c)
 *     ??1DisplayDiagnostics@@QEAA@XZ @ 0x14007311C (--1DisplayDiagnostics@@QEAA@XZ.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1400731D0 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x140073260 (--_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z.c)
 *     ??1QDC_CACHE@@QEAA@XZ @ 0x1401C1CB0 (--1QDC_CACHE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSOURCEHASH@@QEAA@XZ @ 0x1401D29CC (--1DXGADAPTERSOURCEHASH@@QEAA@XZ.c)
 *     ?Release@DXGMMS_EXPORT@@QEAAJXZ @ 0x1401DDA8C (-Release@DXGMMS_EXPORT@@QEAAJXZ.c)
 *     ??1REMOTE_VSYNC@@QEAA@XZ @ 0x1401F3A18 (--1REMOTE_VSYNC@@QEAA@XZ.c)
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1401F3E94 (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1401F9B30 (--1DXGSESSIONMGR@@QEAA@XZ.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x1403369A0 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x14034D1D8 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ??1HMGRTABLE@@QEAA@XZ @ 0x1403CE174 (--1HMGRTABLE@@QEAA@XZ.c)
 */

void __fastcall DXGGLOBAL::~DXGGLOBAL(DXGGLOBAL *this)
{
  __int64 v1; // rbp
  DXGMMS_EXPORT **v3; // rbx
  DXGMMS_EXPORT *v4; // rsi
  void *v5; // rbx
  struct _ERESOURCE *v6; // rcx
  DXGDIAGNOSTICS *v7; // rcx
  DXGDIAGNOSTICS *v8; // rcx
  void *v9; // rbx
  struct DXGPROCESS *v10; // rcx
  void *v11; // rcx
  ULONG v12; // ebx
  ULONG v13; // ebx
  void *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  void *v17; // rcx
  void **v18; // rcx
  ReferenceCounted *v19; // rcx

  v1 = 2LL;
  *(_QWORD *)this = &DXGGLOBAL::`vftable';
  v3 = (DXGMMS_EXPORT **)&DXGGLOBAL::m_pDxgmmsExport;
  do
  {
    v4 = *v3;
    if ( *v3 )
    {
      DXGMMS_EXPORT::Release(*v3);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
    }
    *v3++ = 0LL;
    --v1;
  }
  while ( v1 );
  if ( *((_BYTE *)this + 1347) )
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 160));
  v5 = (void *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    HMGRTABLE::~HMGRTABLE(*((HMGRTABLE **)this + 4));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
  }
  v6 = (struct _ERESOURCE *)*((_QWORD *)this + 75);
  *((_QWORD *)this + 4) = 0LL;
  if ( v6 )
  {
    ExDeleteResourceLite(v6);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 75));
    *((_QWORD *)this + 75) = 0LL;
  }
  v7 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 120);
  if ( v7 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v7);
    *((_QWORD *)this + 120) = 0LL;
  }
  v8 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 121);
  if ( v8 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v8);
    *((_QWORD *)this + 121) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 122);
  if ( v9 )
  {
    DXGSESSIONMGR::~DXGSESSIONMGR(*((DXGSESSIONMGR **)this + 122));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
    *((_QWORD *)this + 122) = 0LL;
  }
  if ( *((_BYTE *)this + 1345) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 1136));
    *((_BYTE *)this + 1345) = 0;
  }
  if ( *((_BYTE *)this + 1346) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 1232));
    *((_BYTE *)this + 1346) = 0;
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)this + 171);
  if ( v10 )
  {
    DXGPROCESS::DestroyDxgProcess(v10);
    *((_QWORD *)this + 171) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 38119);
  if ( v11 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v11);
    *((_QWORD *)this + 38119) = 0LL;
  }
  if ( *((_QWORD *)this + 112) )
  {
    v12 = RtlNumberOfClearBits((PRTL_BITMAP)this + 54);
    if ( v12 != DXGGLOBAL::GetMaximumGlobalAdapterCount(this) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1669;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"RtlNumberOfClearBits(&m_GlobalAdapterOrdinalMap) == GetMaximumGlobalAdapterCount()",
        1669LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v13 = RtlNumberOfClearBits((PRTL_BITMAP)this + 55);
    if ( v13 != 1024 - DXGGLOBAL::GetMaximumGlobalAdapterCount(this) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1670;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"RtlNumberOfClearBits(&m_SessionizedAdapterOrdinalMap) == ((MAX_ADAPTERS_CEILING) - GetMaximumGlobalAdapterCount())",
        1670LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    RtlInitializeBitMap((PRTL_BITMAP)this + 54, 0LL, 0);
    RtlInitializeBitMap((PRTL_BITMAP)this + 55, 0LL, 0);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 112));
    *((_QWORD *)this + 112) = 0LL;
  }
  v14 = (void *)*((_QWORD *)this + 183);
  if ( v14 )
  {
    QDC_CACHE::~QDC_CACHE(*((QDC_CACHE **)this + 183));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
    *((_QWORD *)this + 183) = 0LL;
  }
  v15 = *((_QWORD *)this + 236);
  if ( v15 )
  {
    ExUnsubscribeWnfStateChange(v15);
    *((_QWORD *)this + 236) = 0LL;
  }
  v16 = *((_QWORD *)this + 259);
  if ( v16 )
  {
    ExUnsubscribeWnfStateChange(v16);
    *((_QWORD *)this + 259) = 0LL;
  }
  v17 = (void *)*((_QWORD *)this + 260);
  if ( v17 )
  {
    PoUnregisterPowerSettingCallback(v17);
    *((_QWORD *)this + 260) = 0LL;
  }
  if ( *((_DWORD *)this + 523) )
  {
    McGenEventUnregister_EtwUnregister(SLEEPSTUDY_ETW_PROVIDER_Context);
    *((_DWORD *)this + 523) = 0;
  }
  if ( !KeCancelTimer((PKTIMER)((char *)this + 1904)) )
    KeFlushQueuedDpcs();
  if ( !KeCancelTimer((PKTIMER)((char *)this + 305776)) )
    KeFlushQueuedDpcs();
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 38109));
  v18 = (void **)*((_QWORD *)this + 210);
  if ( v18 )
    DXG_GUEST_GLOBAL_VMBUS::`scalar deleting destructor'(v18);
  v19 = (ReferenceCounted *)*((_QWORD *)this + 38149);
  if ( v19 )
  {
    ReferenceCounted::Release(v19);
    *((_QWORD *)this + 38149) = 0LL;
  }
  if ( *((_BYTE *)this + 305424) )
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 305440));
  if ( *((_DWORD *)this + 89) != *((_DWORD *)this + 88) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1752;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_ShareHandleTable.IsEmpty()", 1752LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 73) != (DXGGLOBAL *)((char *)this + 584) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1753;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_SyncObjectList.IsEmpty()", 1753LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 82) != (DXGGLOBAL *)((char *)this + 656) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1754;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_KeyedMutexList.IsEmpty()", 1754LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 100) != (DXGGLOBAL *)((char *)this + 800) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1755;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_AdapterList.IsEmpty()", 1755LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 224) != (DXGGLOBAL *)((char *)this + 1792) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1756;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_SharedPowerList.IsEmpty()", 1756LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 185) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1757;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_UefiFrameData == NULL", 1757LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 305728));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 305536));
  CSERIALIZEDWORKQUEUE::~CSERIALIZEDWORKQUEUE((DXGGLOBAL *)((char *)this + 305352));
  REMOTEMONITORMAPPING::Clear((DXGGLOBAL *)((char *)this + 305256), 0LL);
  DisplayDiagnostics::~DisplayDiagnostics((DXGGLOBAL *)((char *)this + 305008));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304960));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304888));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304808));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 2096));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1808));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 224);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1600));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 196);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1520));
  DXGADAPTERSOURCEHASH::~DXGADAPTERSOURCEHASH((DXGGLOBAL *)((char *)this + 1384));
  REMOTE_VSYNC::~REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 1080));
  REMOTE_VSYNC::~REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 1024));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 816));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 100);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 752));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 672));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 82);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 608));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 73);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 536));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 52);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 368));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 42));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 288));
}
