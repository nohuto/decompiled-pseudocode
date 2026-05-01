/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long_::Invoke @ 0x1803AF990
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180021F68 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_180021F68.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801A0934 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x1803B5770 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long_::Invoke(
        __int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  signed int v4; // eax
  unsigned int v5; // ebx
  _QWORD v7[40]; // [rsp+30h] [rbp-148h] BYREF

  *(_BYTE *)(a1 + 688) = 0;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 696);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v7,
    a1 + 48);
  v7[0] = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  v4 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD *, __int64))CAppViewManager::_ContinueSwitchAsyncWorker)(
         v2,
         *(_QWORD *)(a1 + 24),
         *(_QWORD *)(a1 + 32),
         *(unsigned int *)(a1 + 40),
         v7,
         v3);
  v5 = v4;
  if ( v4 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v4);
  return v5;
}
