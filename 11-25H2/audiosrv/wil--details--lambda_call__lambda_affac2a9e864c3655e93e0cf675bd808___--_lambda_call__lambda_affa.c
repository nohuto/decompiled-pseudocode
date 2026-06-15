/*
 * XREFs of wil::details::lambda_call__lambda_affac2a9e864c3655e93e0cf675bd808___::_lambda_call__lambda_affac2a9e864c3655e93e0cf675bd808___ @ 0x1800A0F38
 * Callers:
 *     _CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda____::_1_::dtor$0 @ 0x180161816 (_CEndpointCharacteristics--GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda____--_1_--d.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_affac2a9e864c3655e93e0cf675bd808___::_lambda_call__lambda_affac2a9e864c3655e93e0cf675bd808___(
        _BYTE *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = 0LL;
    v3 = 0LL;
    return (*(__int64 (__fastcall **)(_QWORD, void *, __int128 *))(**(_QWORD **)(*(_QWORD *)a1 + 72LL) + 48LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 72LL),
             &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
             &v2);
  }
  return result;
}
