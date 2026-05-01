/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0181179693446beb1d5841bdc72a572d___::CTaskWrapper__lambda_0181179693446beb1d5841bdc72a572d_____lambda_0181179693446beb1d5841bdc72a572d___ @ 0x180467508
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0181179693446beb1d5841bdc72a572d___ @ 0x1804691A8 (Windows--Internal--ComTaskPool--QueueTask__lambda_0181179693446beb1d5841bdc72a572d___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18018D000 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_18018D000.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0181179693446beb1d5841bdc72a572d___::CTaskWrapper__lambda_0181179693446beb1d5841bdc72a572d_____lambda_0181179693446beb1d5841bdc72a572d___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = (_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( a1 + 40 != a2 + 24 )
  {
    *(_QWORD *)(a1 + 40) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (_QWORD *)(a1 + 56),
    a2 + 40,
    0LL);
  *(_QWORD *)(a1 + 56) = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::`vftable';
  *(_QWORD *)a1 = &off_180742AE8;
  return a1;
}
