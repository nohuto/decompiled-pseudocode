/*
 * XREFs of ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@$$QEAPEBD@Z @ 0x18007A284
 * Callers:
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x18007C3DC (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004564 (--2@YAPEAX_K@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180029FC0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??4?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004CAF4 (--4-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVector.c)
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x180058F60 (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 *     ?_Reset0@?$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x18005BA8C (-_Reset0@-$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISetting.c)
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x18007DE88 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<ContentDeliveryManager::Background::CorrelationVectorWrapper,char const *>(
        _QWORD *a1,
        const char **a2)
{
  struct TraceLoggingCorrelationVector *v4; // rax
  bool v5; // dl
  __int64 v6; // rdi
  const char *v7; // rcx
  struct TraceLoggingCorrelationVector *v9; // [rsp+60h] [rbp+18h] BYREF

  v4 = (struct TraceLoggingCorrelationVector *)operator new(0xA0uLL);
  v6 = (__int64)v4;
  v9 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>::`vftable';
    v7 = *a2;
    *((_QWORD *)v4 + 2) = 0LL;
    v9 = TraceLoggingCorrelationVector::Set(v7, v5);
    std::unique_ptr<TraceLoggingCorrelationVector>::operator=((void **)(v6 + 16), (void **)&v9);
    Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>((void **)&v9);
    TraceLoggingCorrelationVector::ToStringImpl(
      *(TraceLoggingCorrelationVector **)(v6 + 16),
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v6 + 16) + 136LL), 0LL),
      (char *)(v6 + 24));
  }
  else
  {
    v6 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::_Ptr_base<CreativeFramework::CommonHelper::ISettingsContainer>::_Reset0(a1, v6 + 16, v6);
  return a1;
}
