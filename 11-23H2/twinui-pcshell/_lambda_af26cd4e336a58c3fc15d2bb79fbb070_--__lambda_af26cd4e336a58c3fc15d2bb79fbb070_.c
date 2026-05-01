/*
 * XREFs of _lambda_af26cd4e336a58c3fc15d2bb79fbb070_::__lambda_af26cd4e336a58c3fc15d2bb79fbb070_ @ 0x1805E155C
 * Callers:
 *     _JointResize::OnArrangedWindowResizeStarted_::_1_::dtor$4 @ 0x1805E3F47 (_JointResize--OnArrangedWindowResizeStarted_--_1_--dtor$4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_af26cd4e336a58c3fc15d2bb79fbb070_::__lambda_af26cd4e336a58c3fc15d2bb79fbb070_(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(result + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
