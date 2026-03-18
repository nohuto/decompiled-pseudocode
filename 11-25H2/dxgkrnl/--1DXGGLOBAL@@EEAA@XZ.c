/*
 * XREFs of ??1DXGGLOBAL@@EEAA@XZ @ 0x1401CD6B4
 * Callers:
 *     ??_GDXGGLOBAL@@EEAAPEAXI@Z @ 0x140072870 (--_GDXGGLOBAL@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1?$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ @ 0x14004FBB0 (--1-$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005DA48 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     McGenEventUnregister_EtwUnregister @ 0x140070460 (McGenEventUnregister_EtwUnregister.c)
 *     ??1CSERIALIZEDWORKQUEUE@@QEAA@XZ @ 0x1400726D8 (--1CSERIALIZEDWORKQUEUE@@QEAA@XZ.c)
 *     ??1DisplayDiagnostics@@QEAA@XZ @ 0x140072788 (--1DisplayDiagnostics@@QEAA@XZ.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x14007283C (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x1400728D0 (--_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z.c)
 *     ??1QDC_CACHE@@QEAA@XZ @ 0x1401BF300 (--1QDC_CACHE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSOURCEHASH@@QEAA@XZ @ 0x1401CD68C (--1DXGADAPTERSOURCEHASH@@QEAA@XZ.c)
 *     ?Release@DXGMMS_EXPORT@@QEAAJXZ @ 0x1401D87FC (-Release@DXGMMS_EXPORT@@QEAAJXZ.c)
 *     ??1REMOTE_VSYNC@@QEAA@XZ @ 0x1401EE074 (--1REMOTE_VSYNC@@QEAA@XZ.c)
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1401EE4F0 (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1401F32E4 (--1DXGSESSIONMGR@@QEAA@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402DE404 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x140348EA0 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ??1HMGRTABLE@@QEAA@XZ @ 0x1403D60D8 (--1HMGRTABLE@@QEAA@XZ.c)
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
  if ( *((_BYTE *)this + 1315) )
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
  v7 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 116);
  if ( v7 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v7);
    *((_QWORD *)this + 116) = 0LL;
  }
  v8 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 117);
  if ( v8 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v8);
    *((_QWORD *)this + 117) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 118);
  if ( v9 )
  {
    DXGSESSIONMGR::~DXGSESSIONMGR(*((DXGSESSIONMGR **)this + 118));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
    *((_QWORD *)this + 118) = 0LL;
  }
  if ( *((_BYTE *)this + 1313) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 1104));
    *((_BYTE *)this + 1313) = 0;
  }
  if ( *((_BYTE *)this + 1314) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 1200));
    *((_BYTE *)this + 1314) = 0;
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)this + 167);
  if ( v10 )
  {
    DXGPROCESS::DestroyDxgProcess(v10);
    *((_QWORD *)this + 167) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 38109);
  if ( v11 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v11);
    *((_QWORD *)this + 38109) = 0LL;
  }
  if ( *((_QWORD *)this + 108) )
  {
    v12 = RtlNumberOfClearBits((PRTL_BITMAP)this + 52);
    if ( v12 != DXGGLOBAL::GetMaximumGlobalAdapterCount(this) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1668;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"RtlNumberOfClearBits(&m_GlobalAdapterOrdinalMap) == GetMaximumGlobalAdapterCount()",
        1668LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v13 = RtlNumberOfClearBits((PRTL_BITMAP)this + 53);
    if ( v13 != 1024 - DXGGLOBAL::GetMaximumGlobalAdapterCount(this) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1669;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"RtlNumberOfClearBits(&m_SessionizedAdapterOrdinalMap) == ((MAX_ADAPTERS_CEILING) - GetMaximumGlobalAdapterCount())",
        1669LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    RtlInitializeBitMap((PRTL_BITMAP)this + 52, 0LL, 0);
    RtlInitializeBitMap((PRTL_BITMAP)this + 53, 0LL, 0);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 108));
    *((_QWORD *)this + 108) = 0LL;
  }
  v14 = (void *)*((_QWORD *)this + 179);
  if ( v14 )
  {
    QDC_CACHE::~QDC_CACHE(*((QDC_CACHE **)this + 179));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
    *((_QWORD *)this + 179) = 0LL;
  }
  v15 = *((_QWORD *)this + 232);
  if ( v15 )
  {
    ExUnsubscribeWnfStateChange(v15);
    *((_QWORD *)this + 232) = 0LL;
  }
  v16 = *((_QWORD *)this + 255);
  if ( v16 )
  {
    ExUnsubscribeWnfStateChange(v16);
    *((_QWORD *)this + 255) = 0LL;
  }
  v17 = (void *)*((_QWORD *)this + 256);
  if ( v17 )
  {
    PoUnregisterPowerSettingCallback(v17);
    *((_QWORD *)this + 256) = 0LL;
  }
  if ( *((_DWORD *)this + 515) )
  {
    McGenEventUnregister_EtwUnregister(SLEEPSTUDY_ETW_PROVIDER_Context);
    *((_DWORD *)this + 515) = 0;
  }
  if ( !KeCancelTimer((PKTIMER)((char *)this + 1872)) )
    KeFlushQueuedDpcs();
  if ( !KeCancelTimer((PKTIMER)((char *)this + 305696)) )
    KeFlushQueuedDpcs();
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 38099));
  v18 = (void **)*((_QWORD *)this + 206);
  if ( v18 )
    DXG_GUEST_GLOBAL_VMBUS::`scalar deleting destructor'(v18);
  v19 = (ReferenceCounted *)*((_QWORD *)this + 38139);
  if ( v19 )
  {
    ReferenceCounted::Release(v19);
    *((_QWORD *)this + 38139) = 0LL;
  }
  if ( *((_BYTE *)this + 305344) )
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 305360));
  if ( *((_DWORD *)this + 89) != *((_DWORD *)this + 88) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1751;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_ShareHandleTable.IsEmpty()", 1751LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 73) != (DXGGLOBAL *)((char *)this + 584) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1752;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_SyncObjectList.IsEmpty()", 1752LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 82) != (DXGGLOBAL *)((char *)this + 656) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1753;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_KeyedMutexList.IsEmpty()", 1753LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 96) != (DXGGLOBAL *)((char *)this + 768) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1754;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_AdapterList.IsEmpty()", 1754LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 220) != (DXGGLOBAL *)((char *)this + 1760) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1755;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_SharedPowerList.IsEmpty()", 1755LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 181) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1756;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_UefiFrameData == NULL", 1756LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 305648));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 305456));
  CSERIALIZEDWORKQUEUE::~CSERIALIZEDWORKQUEUE((DXGGLOBAL *)((char *)this + 305272));
  REMOTEMONITORMAPPING::Clear((DXGGLOBAL *)((char *)this + 305176), 0LL);
  DisplayDiagnostics::~DisplayDiagnostics((DXGGLOBAL *)((char *)this + 304928));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304880));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304808));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 2064));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1776));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 220);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1568));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 192);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1488));
  DXGADAPTERSOURCEHASH::~DXGADAPTERSOURCEHASH((DXGGLOBAL *)((char *)this + 1352));
  REMOTE_VSYNC::~REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 1048));
  REMOTE_VSYNC::~REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 992));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 784));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 96);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 720));
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
