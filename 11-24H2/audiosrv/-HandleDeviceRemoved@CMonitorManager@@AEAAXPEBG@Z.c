/*
 * XREFs of ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x18000A78C
 * Callers:
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x18000A9BC (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA@XZ @ 0x180009B9C (--1-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A940 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800480B0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x180053800 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18011796C (-Add@-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@.c)
 *     ?IsConnectedTo@CaptureMonitor@CMonitorManager@@QEBA_NPEBG@Z @ 0x18011A45C (-IsConnectedTo@CaptureMonitor@CMonitorManager@@QEBA_NPEBG@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011B424 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18011BAF4 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x18011DCE0 (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CMonitorManager::HandleDeviceRemoved(CMonitorManager *this, unsigned __int16 *a2)
{
  __int64 v2; // rbx
  CMonitorManager::CaptureMonitor *v3; // r15
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *Next; // rax
  unsigned __int64 i; // r14
  CMonitorManager::CaptureMonitor *v9; // rbx
  __int64 v10; // kr00_8
  ATL::CAtlException *v11; // rbx
  __int64 v12; // [rsp+20h] [rbp-68h] BYREF
  ATL::CAtlException *v13; // [rsp+28h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-58h] BYREF
  char v15; // [rsp+38h] [rbp-50h]
  __int64 v16; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-40h]
  __int64 v18; // [rsp+50h] [rbp-38h]
  int v19; // [rsp+58h] [rbp-30h]
  CMonitorManager::CaptureMonitor *v20; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int16 *v21; // [rsp+98h] [rbp+10h]
  int v22; // [rsp+A0h] [rbp+18h]
  CMonitorManager::CaptureMonitor *v23; // [rsp+A8h] [rbp+20h] BYREF

  v21 = a2;
  v20 = this;
  v3 = this;
  v16 = 0LL;
  v4 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 72);
  v15 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v6 = *((_QWORD *)v3 + 14);
  v12 = v6;
  while ( v6 )
  {
    Next = (_QWORD *)ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v5, &v12);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v23, *Next);
    if ( !CMonitorManager::CaptureMonitor::IsConnectedTo(v23, v21) )
      goto LABEL_8;
    try
    {
      ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::Add(
        &v16,
        v23);
    }
    catch ( ATL::CAtlException *v13 )
    {
      v10 = v2;
      v11 = v13;
      if ( *(_DWORD *)v13 == -1073741571 )
        _o__resetstkoflw();
      v22 = *(_DWORD *)v11;
      v2 = v10;
      if ( v22 < 0 )
      {
        v3 = v20;
        v4 = v17;
        goto LABEL_8;
      }
      v3 = v20;
    }
    v4 = v17;
LABEL_8:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
    v6 = v12;
  }
  for ( i = 0LL; i < v4; ++i )
  {
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
      &v20,
      *(_QWORD *)(v16 + 8 * i));
    v9 = v20;
    if ( *((_BYTE *)v20 + 49) )
    {
      CMonitor::Stop(*((CMonitor **)v20 + 26));
      CMonitorManager::CaptureMonitor::UninitializeSynchronously(v9);
    }
    else
    {
      CMonitorManager::RemoveMonitor(v3, v20, 1);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::~CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>((__int64)&v16);
}
