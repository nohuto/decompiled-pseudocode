/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$03@@IEAA@XZ @ 0x180011880
 * Callers:
 *     ??1?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180011834 (--1-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBas.c)
 * Callees:
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x180011734 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$03@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800A95A0 (--$_tlgWriteActivityAutoStop@$0A@$03@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>,0,4>::~_TlgActivityBase<wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>,0,4>(
        _DWORD *a1)
{
  __int64 *v2; // rax

  if ( *a1 == 1 )
  {
    *a1 = 2;
    v2 = wil::details::static_lazy<AnimationClockLogging>::get(
           (__int64)a1,
           (void (__cdecl *)())_lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<0,4>(v2[1], a1 + 2);
  }
  *a1 = 3;
}
