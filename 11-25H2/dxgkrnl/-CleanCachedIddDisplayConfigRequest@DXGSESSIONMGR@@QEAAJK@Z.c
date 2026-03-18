/*
 * XREFs of ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x1401F387C
 * Callers:
 *     ?OnMonitorConnectionChanged@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140197690 (-OnMonitorConnectionChanged@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x140198C50 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@Z @ 0x140050B28 (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 */

__int64 __fastcall DXGSESSIONMGR::CleanCachedIddDisplayConfigRequest(DXGSESSIONMGR *this, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbx
  _BYTE v6[16]; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v7[16]; // [rsp+60h] [rbp-18h] BYREF

  v2 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  if ( (unsigned int)v2 < *((_DWORD *)this + 20) && *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v2) )
  {
    _mm_lfence();
    v4 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v2);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (struct DXGFASTMUTEX *const)(v4 + 19040), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
    auto_rc<rc_buffer<DispBroker::AlpcRequest<7>>>::reset((ReferenceCounted **)(v4 + 19096), 0LL);
    *(_DWORD *)(v4 + 19092) = ++*(_DWORD *)(v4 + 19088);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v6);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, (unsigned int)v2, -1073741275LL);
    WdLogGlobalForLineNumber = 6270;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to get session data for session 0x%I64x, returning 0x%I64x.",
      (unsigned int)v2,
      -1073741275LL,
      0LL,
      0LL,
      0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v6);
    return 3221226021LL;
  }
}
