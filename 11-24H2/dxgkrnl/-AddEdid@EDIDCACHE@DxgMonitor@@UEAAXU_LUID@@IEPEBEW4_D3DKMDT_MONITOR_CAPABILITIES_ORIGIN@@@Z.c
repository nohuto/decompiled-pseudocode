/*
 * XREFs of ?AddEdid@EDIDCACHE@DxgMonitor@@UEAAXU_LUID@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x14026FD10
 * Callers:
 *     ?GetEdidForTarget@EDIDCACHE@DxgMonitor@@UEAAJU_LUID@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x14026FFF0 (-GetEdidForTarget@EDIDCACHE@DxgMonitor@@UEAAJU_LUID@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_OR.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x14003C384 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ?FindEdidInCache@EDIDCACHE@DxgMonitor@@AEAAHU_LUID@@IPEBE@Z @ 0x14026FF54 (-FindEdidInCache@EDIDCACHE@DxgMonitor@@AEAAHU_LUID@@IPEBE@Z.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@DxgMonitor@@UEAAXJJE@Z @ 0x140270640 (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@DxgMonitor@@UEAAXJJE@Z.c)
 *     ?WriteEdidToRegistry@EDIDCACHE@DxgMonitor@@CAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x140270754 (-WriteEdidToRegistry@EDIDCACHE@DxgMonitor@@CAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 */

void __fastcall DxgMonitor::EDIDCACHE::AddEdid(
        DxgMonitor::EDIDCACHE *this,
        struct _LUID a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *a5,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN a6)
{
  unsigned __int8 *v10; // rbp
  int EdidInCache; // eax
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v12; // r14d
  unsigned int v13; // esi
  unsigned int i; // edx
  unsigned int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned int v18; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v19[24]; // [rsp+58h] [rbp-30h] BYREF
  unsigned int v20; // [rsp+90h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (DxgMonitor::EDIDCACHE *)((char *)this + 616), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v10 = a5;
  EdidInCache = DxgMonitor::EDIDCACHE::FindEdidInCache(this, a2, a3, a5);
  if ( EdidInCache == -1 )
  {
    v12 = a6;
    if ( a4 )
    {
      if ( a6 == D3DKMDT_MCO_MONITORDESCRIPTOR )
      {
        DxgMonitor::EDIDCACHE::WriteEdidToRegistry(a3, v10, D3DKMDT_MCO_MONITORDESCRIPTOR);
        v18 = 0;
        v20 = 0;
        if ( (int)EDID_V1_GetPhysicalSize(0x80u, v10, &v18, &v20) >= 0 )
          DxgMonitor::EDIDCACHE::SetPhysicalDimensionOfInternalPanel(this, v18, v20, 0);
      }
    }
    v13 = 0;
    for ( i = 0; ; ++i )
    {
      v15 = i;
      if ( i >= 4 )
        break;
      v16 = *((_QWORD *)this + 19 * i + 1);
      if ( !v16 )
        goto LABEL_15;
      if ( v16 >= *((_QWORD *)this + 19 * v13 + 1) )
        v15 = v13;
      v13 = v15;
    }
    i = v13;
    if ( v13 >= 4 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 349;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"EarliestSysTimeIdx < NUM_EDIDS_TO_CACHE",
        349LL,
        0LL,
        0LL,
        0LL,
        0LL);
      i = v13;
    }
LABEL_15:
    v17 = 152LL * i;
    *(struct _LUID *)((char *)this + v17 + 16) = a2;
    *(_DWORD *)((char *)this + v17 + 24) = a3;
    *(_DWORD *)((char *)this + v17 + 28) = v12;
    *(_QWORD *)((char *)this + v17 + 8) = MEMORY[0xFFFFF78000000014];
    *(_OWORD *)((char *)this + v17 + 32) = *(_OWORD *)v10;
    *(_OWORD *)((char *)this + v17 + 48) = *((_OWORD *)v10 + 1);
    *(_OWORD *)((char *)this + v17 + 64) = *((_OWORD *)v10 + 2);
    *(_OWORD *)((char *)this + v17 + 80) = *((_OWORD *)v10 + 3);
    *(_OWORD *)((char *)this + v17 + 96) = *((_OWORD *)v10 + 4);
    *(_OWORD *)((char *)this + v17 + 112) = *((_OWORD *)v10 + 5);
    *(_OWORD *)((char *)this + v17 + 128) = *((_OWORD *)v10 + 6);
    *(_OWORD *)((char *)this + v17 + 144) = *((_OWORD *)v10 + 7);
  }
  else
  {
    *((_QWORD *)this + 19 * EdidInCache + 1) = MEMORY[0xFFFFF78000000014];
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
}
