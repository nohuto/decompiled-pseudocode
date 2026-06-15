/*
 * XREFs of wil::details::lambda_call__lambda_e396111eb4c478e6ba8d1be5074c3579___::_lambda_call__lambda_e396111eb4c478e6ba8d1be5074c3579___ @ 0x1800A2204
 * Callers:
 *     _EffectPack::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$1 @ 0x18016AA38 (_EffectPack--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$1.c)
 * Callees:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180037584 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_e396111eb4c478e6ba8d1be5074c3579___::_lambda_call__lambda_e396111eb4c478e6ba8d1be5074c3579___(
        __int64 a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // rax
  unsigned int v4; // edx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 1584LL);
    v3 = *(_DWORD **)(a1 + 8);
    v4 = 2;
    if ( *v3 != 3 )
      v4 = 0;
    return CEndpointCharacteristics::ClearMixFormatCache(v2, v4);
  }
  return result;
}
