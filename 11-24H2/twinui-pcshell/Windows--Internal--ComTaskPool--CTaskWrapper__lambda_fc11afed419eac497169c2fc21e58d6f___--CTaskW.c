/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc11afed419eac497169c2fc21e58d6f___::CTaskWrapper__lambda_fc11afed419eac497169c2fc21e58d6f_____lambda_fc11afed419eac497169c2fc21e58d6f___ @ 0x180467CC4
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_fc11afed419eac497169c2fc21e58d6f___ @ 0x180292428 (Windows--Internal--ComTaskPool--QueueTask__lambda_fc11afed419eac497169c2fc21e58d6f___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18018D000 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_18018D000.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc11afed419eac497169c2fc21e58d6f___::CTaskWrapper__lambda_fc11afed419eac497169c2fc21e58d6f_____lambda_fc11afed419eac497169c2fc21e58d6f___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8
  _QWORD *v5; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  v5 = (_QWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a2 + 4);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a1 + 24 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 24) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (_QWORD *)(a1 + 40),
    a2 + 24,
    v4);
  *(_QWORD *)(a1 + 40) = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::`vftable';
  *(_QWORD *)a1 = &off_180742B60;
  return a1;
}
