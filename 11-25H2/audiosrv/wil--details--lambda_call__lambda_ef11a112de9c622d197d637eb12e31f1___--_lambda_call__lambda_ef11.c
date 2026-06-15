/*
 * XREFs of wil::details::lambda_call__lambda_ef11a112de9c622d197d637eb12e31f1___::_lambda_call__lambda_ef11a112de9c622d197d637eb12e31f1___ @ 0x180128788
 * Callers:
 *     _CEndpointCharacteristics::SetUserSelectedEffectPack_::_1_::dtor$1 @ 0x1801683B9 (_CEndpointCharacteristics--SetUserSelectedEffectPack_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_ef11a112de9c622d197d637eb12e31f1___::_lambda_call__lambda_ef11a112de9c622d197d637eb12e31f1___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 32LL))(
             g_policyConfigInternal,
             *(_QWORD *)(*(_QWORD *)a1 + 48LL));
  }
  return result;
}
