/*
 * XREFs of _lambda_3512d86930cf5e3297db3d8fbb4f9b41_::operator() @ 0x18010574C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_3512d86930cf5e3297db3d8fbb4f9b41__void_::_Do_call @ 0x1801088A0 (std--_Func_impl_no_alloc__lambda_3512d86930cf5e3297db3d8fbb4f9b41__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002307C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?reset@?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAAXPEAU_RecurringTask@@@Z @ 0x18002BAC4 (-reset@-$unique_ptr@U_RecurringTask@@U-$default_delete@U_RecurringTask@@@std@@@std@@QEAAXPEAU_Re.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x180061210 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?RestoreClientStartedStreams@CVADServer@@QEAAJXZ @ 0x180107400 (-RestoreClientStartedStreams@CVADServer@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_3512d86930cf5e3297db3d8fbb4f9b41_::operator()(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  CVADServer *v3; // rbx
  _QWORD *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  _InterlockedExchange(&g_PoBlockAudioPlayback, 0);
  std::unique_ptr<_RecurringTask>::reset(&g_PoTimerCookie, 0LL);
  EnterCriticalSection(&g_csVadList);
  v6 = &g_csVadList;
  v4 = (_QWORD *)g_VADServerList;
  if ( g_VADServerList )
  {
    do
    {
      v3 = (CVADServer *)*ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v2, &v4);
      v5 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)v3 + 70, &v5) >= 0 && v5 )
        CVADServer::RestoreClientStartedStreams(v3);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v5);
    }
    while ( v4 );
  }
  LOBYTE(v1) = 1;
  (*(void (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)g_PolicyManager + 424LL))(
    g_PolicyManager,
    v1);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v6);
}
