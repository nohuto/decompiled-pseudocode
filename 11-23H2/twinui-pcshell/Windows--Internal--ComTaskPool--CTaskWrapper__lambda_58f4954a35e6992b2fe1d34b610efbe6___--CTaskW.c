/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_58f4954a35e6992b2fe1d34b610efbe6___::CTaskWrapper__lambda_58f4954a35e6992b2fe1d34b610efbe6_____lambda_58f4954a35e6992b2fe1d34b610efbe6___ @ 0x180203AFC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_58f4954a35e6992b2fe1d34b610efbe6___ @ 0x180205780 (Windows--Internal--ComTaskPool--QueueTask__lambda_58f4954a35e6992b2fe1d34b610efbe6___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802DA3D0 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_1802DA3D0.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_58f4954a35e6992b2fe1d34b610efbe6___::CTaskWrapper__lambda_58f4954a35e6992b2fe1d34b610efbe6_____lambda_58f4954a35e6992b2fe1d34b610efbe6___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  a1[4] = a2[2];
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 5,
    a2 + 3);
  a1[5] = &TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::`vftable';
  *a1 = off_1807C6690;
  return a1;
}
