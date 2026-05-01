/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089___::CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089_____lambda_825306615c33696f43f5a813d6c29089___ @ 0x180203C5C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_825306615c33696f43f5a813d6c29089___ @ 0x180205B70 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_825306615c33696f43f5a813d6c29089___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802DA3D0 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_1802DA3D0.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089___::CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089_____lambda_825306615c33696f43f5a813d6c29089___(
        _QWORD *a1,
        _QWORD *a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  a1[3] = a2[1];
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 4,
    a2 + 2);
  a1[4] = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  *a1 = off_1807C68A8;
  return a1;
}
