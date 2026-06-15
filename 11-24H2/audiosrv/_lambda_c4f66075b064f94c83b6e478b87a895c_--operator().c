/*
 * XREFs of _lambda_c4f66075b064f94c83b6e478b87a895c_::operator() @ 0x18010BA98
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_c4f66075b064f94c83b6e478b87a895c__void_::_Do_call @ 0x18010F070 (std--_Func_impl_no_alloc__lambda_c4f66075b064f94c83b6e478b87a895c__void_--_Do_call.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180017248 (-_Tidy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180018198 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x1800274F0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180027E54 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800517D0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x180053800 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAAEAVWeakRef@WRL@Microsoft@@AEBV234@@Z @ 0x18005965C (--$_Emplace_back_with_unused_capacity@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsof.c)
 *     ?EnsureStreamStopped@CVADServer@@QEAAJXZ @ 0x18010C144 (-EnsureStreamStopped@CVADServer@@QEAAJXZ.c)
 *     ?RequiresDeferredPoNotificationHandling@CVADServer@@QEAA_NXZ @ 0x18010D9CC (-RequiresDeferredPoNotificationHandling@CVADServer@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_c4f66075b064f94c83b6e478b87a895c_::operator()(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  CVADServer *v3; // rdi
  __int128 v4; // kr00_16
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  __int64 v6; // r8
  __int128 v7; // [rsp+30h] [rbp-29h] BYREF
  __int64 v8; // [rsp+40h] [rbp-19h]
  _QWORD v9[3]; // [rsp+48h] [rbp-11h] BYREF
  __int64 (__fastcall **v10)(); // [rsp+60h] [rbp+7h] BYREF
  __int128 v11; // [rsp+68h] [rbp+Fh]
  __int64 v12; // [rsp+78h] [rbp+1Fh]
  __int64 (__fastcall ***v13)(); // [rsp+98h] [rbp+3Fh]
  _QWORD *v14; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v15; // [rsp+C8h] [rbp+6Fh] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+D0h] [rbp+77h] BYREF

  v14 = a1;
  _InterlockedExchange(&g_PoBlockAudioPlayback, 1);
  (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 424LL))(
    g_PolicyManager,
    0LL);
  v7 = 0LL;
  v1 = 0LL;
  v8 = 0LL;
  EnterCriticalSection(&g_csVadList);
  v16 = &g_csVadList;
  v14 = (_QWORD *)g_VADServerList;
  if ( g_VADServerList )
  {
    do
    {
      v3 = (CVADServer *)*ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v2, &v14);
      v15 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)v3 + 70, &v15) >= 0 && v15 )
      {
        if ( CVADServer::RequiresDeferredPoNotificationHandling(v3) )
        {
          if ( *((_QWORD *)&v7 + 1) == v1 )
            std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(
              (__int64 **)&v7,
              *((__int64 **)&v7 + 1),
              (__int64)v3 + 560);
          else
            std::vector<Microsoft::WRL::WeakRef>::_Emplace_back_with_unused_capacity<Microsoft::WRL::WeakRef const &>(
              (__int64)&v7,
              (__int64)v3 + 560);
          v1 = v8;
        }
        else
        {
          CVADServer::EnsureStreamStopped(v3);
        }
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v15);
    }
    while ( v14 );
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
  v4 = v7;
  if ( (_QWORD)v7 != *((_QWORD *)&v7 + 1) )
  {
    SerialWorkQueue = GetSerialWorkQueue();
    v8 = 0LL;
    v7 = 0uLL;
    v10 = off_18017D880;
    memset(v9, 0, sizeof(v9));
    v11 = v4;
    v12 = v1;
    v13 = &v10;
    CSerialWorkQueue::QueueRecurringItem((__int64)SerialWorkQueue, 0x3E8u, v6, &v10, &g_PoTimerCookie);
    std::vector<Microsoft::WRL::WeakRef>::_Tidy((__int64)v9);
  }
  std::vector<Microsoft::WRL::WeakRef>::_Tidy((__int64)&v7);
}
