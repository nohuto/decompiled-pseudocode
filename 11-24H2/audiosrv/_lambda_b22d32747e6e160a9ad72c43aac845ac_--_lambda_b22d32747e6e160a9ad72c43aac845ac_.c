/*
 * XREFs of _lambda_b22d32747e6e160a9ad72c43aac845ac_::_lambda_b22d32747e6e160a9ad72c43aac845ac_ @ 0x1801301C4
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180035060 (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_b22d32747e6e160a9ad72c43aac845ac_::_lambda_b22d32747e6e160a9ad72c43aac845ac_(
        __int64 a1,
        _DWORD *a2,
        __int128 *a3,
        __int64 a4)
{
  __int128 v4; // xmm0
  __int64 result; // rax

  v4 = *a3;
  *(_DWORD *)a1 = *a2;
  result = a1;
  *(_OWORD *)(a1 + 4) = v4;
  *(_QWORD *)(a1 + 24) = a4;
  return result;
}
