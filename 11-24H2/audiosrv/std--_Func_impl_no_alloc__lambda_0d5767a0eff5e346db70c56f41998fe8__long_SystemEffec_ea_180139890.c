/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0d5767a0eff5e346db70c56f41998fe8__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x180139890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_0d5767a0eff5e346db70c56f41998fe8__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call(
        __int64 a1,
        struct SystemEffectDescriptor **a2,
        struct SystemEffectChainDescriptor **a3)
{
  return EffectPack::DecideVssEffectUsage(*(CEndpointCharacteristics ***)(a1 + 8), *a2, *a3, 1u);
}
