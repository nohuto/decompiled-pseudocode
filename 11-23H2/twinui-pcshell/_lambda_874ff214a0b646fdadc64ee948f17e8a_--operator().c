/*
 * XREFs of _lambda_874ff214a0b646fdadc64ee948f17e8a_::operator() @ 0x18076A7E8
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_874ff214a0b646fdadc64ee948f17e8a__void_::Invoke @ 0x18076CED0 (Platform--Details--__abi_FunctorCapture__lambda_874ff214a0b646fdadc64ee948f17e8a__void_--Invoke.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180192FD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_874ff214a0b646fdadc64ee948f17e8a_::operator()(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 result; // rax
  _QWORD **v7; // rbx

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v5 = Platform::Details::ResolveWeakReference(&_uuidof__AVGuidedSnapAssistViewController__, a1);
  result = __abi_winrt_ptr_ctor(v5);
  v7 = (_QWORD **)result;
  if ( v5 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v7[7] + 40LL))(v7[7]);
    return ((__int64 (__fastcall *)(_QWORD **))(*v7)[2])(v7);
  }
  return result;
}
