/*
 * XREFs of ??$_Emplace_back_with_unused_capacity@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAAEAVWeakRef@WRL@Microsoft@@AEBV234@@Z @ 0x18005965C
 * Callers:
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x18001735C (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@.c)
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800C6790 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 *     _lambda_c4f66075b064f94c83b6e478b87a895c_::operator() @ 0x18010BA98 (_lambda_c4f66075b064f94c83b6e478b87a895c_--operator().c)
 * Callees:
 *     ??$_Construct_in_place@VWeakRef@WRL@Microsoft@@AEBV123@@std@@YAXAEAVWeakRef@WRL@Microsoft@@AEBV123@@Z @ 0x180059688 (--$_Construct_in_place@VWeakRef@WRL@Microsoft@@AEBV123@@std@@YAXAEAVWeakRef@WRL@Microsoft@@AEBV1.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::WeakRef>::_Emplace_back_with_unused_capacity<Microsoft::WRL::WeakRef const &>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  std::_Construct_in_place<Microsoft::WRL::WeakRef,Microsoft::WRL::WeakRef const &>(*(_QWORD *)(a1 + 8), a2);
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 8;
  return result;
}
