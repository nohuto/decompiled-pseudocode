/*
 * XREFs of _lambda_e898a993ea4fc15fcb07a164ba497e93_::_lambda_e898a993ea4fc15fcb07a164ba497e93_ @ 0x180128100
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004CF24 (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_e898a993ea4fc15fcb07a164ba497e93_::_lambda_e898a993ea4fc15fcb07a164ba497e93_(
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
