/*
 * XREFs of _lambda_2d17c7b0a2fd240c2934c03e6d818fe2_::_lambda_2d17c7b0a2fd240c2934c03e6d818fe2_ @ 0x1801300F8
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005C46C (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_2d17c7b0a2fd240c2934c03e6d818fe2_::_lambda_2d17c7b0a2fd240c2934c03e6d818fe2_(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        _DWORD *a4)
{
  __int128 v4; // xmm0
  __int64 result; // rax

  v4 = *a3;
  *(_DWORD *)(a1 + 24) = *a4;
  result = a1;
  *(_QWORD *)a1 = a2;
  *(_OWORD *)(a1 + 8) = v4;
  return result;
}
