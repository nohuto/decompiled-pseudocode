/*
 * XREFs of _winrt::make_self_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f89255fbad3a15aa44999bedc____::_1_::dtor$2 @ 0x1802C571E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x1800875B8 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::make_self_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f89255fbad3a15aa44999bedc____::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return std::_Func_class<void,>::~_Func_class<void,>(a2 + 48);
  }
  return result;
}
