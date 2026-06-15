/*
 * XREFs of ??1?$lambda_call@V_lambda_0844bed45d04fee2db371e67ed993d11_@@@details@wil@@QEAA@XZ @ 0x1800CC1C0
 * Callers:
 *     _Windows::Internal::ServiceModuleBase::Initialize_Windows::Internal::ServiceModuleBase::SecurityPolicyEveryoneLocal_2_Windows::Internal::DefaultServerDescriptor__::_1_::dtor$0 @ 0x180164D04 (_Windows--Internal--ServiceModuleBase--Initialize_Windows--Internal--ServiceModuleBase--Security.c)
 * Callees:
 *     ?Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ @ 0x1800CECC0 (-Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call<_lambda_0844bed45d04fee2db371e67ed993d11_>::~lambda_call<_lambda_0844bed45d04fee2db371e67ed993d11_>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return Windows::Internal::ServiceModuleBase::Uninitialize(*(Windows::Internal::ServiceModuleBase **)a1);
  }
  return result;
}
