/*
 * XREFs of ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1401F2E60
 * Callers:
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x140078CD8 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@Z @ 0x140050B28 (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005DA48 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??1DispBrokerClient@@QEAA@XZ @ 0x140078CB0 (--1DispBrokerClient@@QEAA@XZ.c)
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x140078D00 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x140078D98 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x140079F14 (-CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x14009F050 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DXGSESSIONDATA::~DXGSESSIONDATA(DXGSESSIONDATA *this)
{
  __int64 v2; // rcx
  OUTPUTDUPL_SESSION_MGR *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  struct DXGGLOBAL *Global; // rax
  void *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rdx
  int v13; // eax
  struct _KEVENT *v14; // rcx
  char *v15; // rcx
  void *v16; // rcx

  v2 = *((_QWORD *)this + 2344);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 2344) = 0LL;
  }
  v3 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline() )
  {
    v4 = (void *)*((_QWORD *)this + 2345);
    if ( v4 )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
      *((_QWORD *)this + 2345) = 0LL;
    }
  }
  *((_QWORD *)this + 2317) = 0LL;
  *((_QWORD *)this + 2318) = 0LL;
  if ( *((_DWORD *)this + 4742) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3594;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"0 == m_cVailGuestReference", 3594LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 2372) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3595;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"nullptr == m_pVailGuestObject", 3595LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGSESSIONDATA **)this + 2323) != (DXGSESSIONDATA *)((char *)this + 18584) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3600;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"IsListEmpty(&m_SessionAdapterListHead)",
      3600LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((DXGSESSIONDATA **)this + 2325) != (DXGSESSIONDATA *)((char *)this + 18600) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3601;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"IsListEmpty(&m_SessionViewListHead)",
      3601LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 4632) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *((_WORD *)this + 9321) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3608;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_NumDeviceInBatch == 0", 3608LL, 0LL, 0LL, 0LL, 0LL);
  }
  v5 = (void *)*((_QWORD *)this + 2331);
  if ( v5 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
    *((_WORD *)this + 9320) = 0;
    *((_QWORD *)this + 2331) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 2332);
  *((_QWORD *)this + 2333) = 0LL;
  ObfDereferenceObject(v6);
  if ( *((_QWORD *)this + 2340) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3619;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_DwmProcess == nullptr", 3619LL, 0LL, 0LL, 0LL, 0LL);
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGVALIDATION::CleanupForSession((struct DXGGLOBAL *)((char *)Global + 1620), this);
  v8 = (void *)*((_QWORD *)this + 2343);
  if ( v8 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
    *((_QWORD *)this + 2343) = 0LL;
    *((_DWORD *)this + 4684) = 0;
  }
  while ( 1 )
  {
    v13 = *((_DWORD *)this + 4694);
    if ( !v13 )
      break;
    v9 = (unsigned int)(v13 - 1);
    *((_DWORD *)this + 4694) = v9;
    v10 = (_QWORD *)(*((_QWORD *)this + 2348) + 32 * v9);
    if ( v10[1] )
    {
      v11 = v10[2];
      if ( *(_QWORD **)(v11 + 8) != v10 + 2 || (v12 = (_QWORD *)v10[3], (_QWORD *)*v12 != v10 + 2) )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      --*(_DWORD *)(v10[1] + 4LL);
    }
  }
  v14 = (struct _KEVENT *)*((_QWORD *)this + 2346);
  *((_DWORD *)this + 4694) = -1;
  if ( v14 )
  {
    KeSetEvent(v14, 0, 0);
    ObfDereferenceObject(*((PVOID *)this + 2346));
    *((_QWORD *)this + 2346) = 0LL;
  }
  v15 = (char *)*((_QWORD *)this + 2348);
  if ( v15 != (char *)this + 18792 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
  v16 = (void *)*((_QWORD *)this + 2398);
  if ( v16 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v16);
  if ( RtlNumberOfClearBits((PRTL_BITMAP)((char *)this + 19240)) != 2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3675;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"RtlNumberOfClearBits(&m_SessionAdapterOrdinalMap) == (MAX_SESSIONIZED_ADAPTERS_PER_SESSION)",
      3675LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 19192));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 19120));
  auto_rc<rc_buffer<DispBroker::AlpcRequest<7>>>::reset((ReferenceCounted **)this + 2387, 0LL);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 19040));
  DispBrokerClient::~DispBrokerClient((struct _KTHREAD **)this + 2373);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18920));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18672));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 16));
}
