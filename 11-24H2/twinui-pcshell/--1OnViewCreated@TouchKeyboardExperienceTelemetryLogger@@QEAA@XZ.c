/*
 * XREFs of ??1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18020E50C
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18009AC6C (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     _lambda_a469c2389bb8dc71f832d95fbc03d5e0_::__lambda_a469c2389bb8dc71f832d95fbc03d5e0_ @ 0x18046C580 (_lambda_a469c2389bb8dc71f832d95fbc03d5e0_--__lambda_a469c2389bb8dc71f832d95fbc03d5e0_.c)
 *     _TouchKeyboardExperienceManager::OnViewCreated_::_1_::dtor$0 @ 0x1806CEB5E (_TouchKeyboardExperienceManager--OnViewCreated_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180083D38 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnViewCreated::~OnViewCreated(
        TouchKeyboardExperienceTelemetryLogger::OnViewCreated *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnViewCreated::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
