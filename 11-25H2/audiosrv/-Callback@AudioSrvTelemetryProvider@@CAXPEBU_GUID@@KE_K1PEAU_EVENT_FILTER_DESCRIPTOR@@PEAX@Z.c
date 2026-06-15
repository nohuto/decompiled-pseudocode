/*
 * XREFs of ?Callback@AudioSrvTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x18008C3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x180061210 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?CaptureState@CVADServer@@QEAAXXZ @ 0x180067BD8 (-CaptureState@CVADServer@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioSrvTelemetryProvider::Callback(const struct _GUID *a1, int a2)
{
  __int64 v2; // rcx
  struct _RTL_CRITICAL_SECTION **Next; // rax
  _QWORD *v4; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+28h] [rbp-10h] BYREF

  if ( (unsigned int)(a2 - 1) <= 1 )
  {
    EnterCriticalSection(&g_csVadList);
    v5 = &g_csVadList;
    v4 = (_QWORD *)g_VADServerList;
    if ( g_VADServerList )
    {
      do
      {
        Next = (struct _RTL_CRITICAL_SECTION **)ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(
                                                  v2,
                                                  &v4);
        CVADServer::CaptureState(*Next);
      }
      while ( v4 );
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v5);
  }
}
