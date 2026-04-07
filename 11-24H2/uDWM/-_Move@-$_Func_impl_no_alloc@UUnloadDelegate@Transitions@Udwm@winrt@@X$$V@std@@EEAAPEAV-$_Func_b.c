/*
 * XREFs of ?_Move@?$_Func_impl_no_alloc@UUnloadDelegate@Transitions@Udwm@winrt@@X$$V@std@@EEAAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800EBD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc<winrt::Udwm::Transitions::UnloadDelegate,void,>::_Move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = &std::_Func_impl_no_alloc<winrt::Udwm::Transitions::UnloadDelegate,void,>::`vftable';
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  a2[1] = v2;
  return a2;
}
