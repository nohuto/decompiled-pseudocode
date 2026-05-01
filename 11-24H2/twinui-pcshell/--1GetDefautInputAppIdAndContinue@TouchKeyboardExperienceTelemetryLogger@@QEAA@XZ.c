/*
 * XREFs of ??1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1800E289C
 * Callers:
 *     ?GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV?$function@$$A6AJPEBG@Z@std@@@Z @ 0x1800E1D0C (-GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV-$function@$$A6AJPEBG@Z@st.c)
 *     _lambda_75452c5cb5e77a67412b4cfed81632b0_::__lambda_75452c5cb5e77a67412b4cfed81632b0_ @ 0x18046C51C (_lambda_75452c5cb5e77a67412b4cfed81632b0_--__lambda_75452c5cb5e77a67412b4cfed81632b0_.c)
 *     _TouchKeyboardExperienceManager::GetDefautInputAppIdAndContinue_::_1_::dtor$1 @ 0x1806D15E8 (_TouchKeyboardExperienceManager--GetDefautInputAppIdAndContinue_--_1_--dtor$1.c)
 *     __lambda_75452c5cb5e77a67412b4cfed81632b0_::_lambda_75452c5cb5e77a67412b4cfed81632b0__::_1_::dtor$1 @ 0x1806ED1CC (__lambda_75452c5cb5e77a67412b4cfed81632b0_--_lambda_75452c5cb5e77a67412b4cfed81632b0__--_1_--dto.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E28F4 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::~GetDefautInputAppIdAndContinue(
        TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
