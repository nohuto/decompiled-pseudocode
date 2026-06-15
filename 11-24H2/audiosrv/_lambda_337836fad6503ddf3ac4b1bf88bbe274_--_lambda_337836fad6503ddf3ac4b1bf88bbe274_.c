/*
 * XREFs of _lambda_337836fad6503ddf3ac4b1bf88bbe274_::_lambda_337836fad6503ddf3ac4b1bf88bbe274_ @ 0x180130118
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180035060 (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_337836fad6503ddf3ac4b1bf88bbe274_::_lambda_337836fad6503ddf3ac4b1bf88bbe274_(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        _OWORD *a5,
        _DWORD *a6,
        _OWORD *a7,
        _OWORD *a8)
{
  int v8; // eax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  int v11; // eax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int64 result; // rax

  v8 = *((_DWORD *)a3 + 4);
  v9 = *a3;
  *(_QWORD *)a1 = a2;
  v10 = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 8) = v9;
  *(_DWORD *)(a1 + 24) = v8;
  v11 = *(_DWORD *)(a4 + 64);
  *(_OWORD *)(a1 + 28) = *(_OWORD *)a4;
  v12 = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 44) = v10;
  v13 = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(a1 + 60) = v12;
  *(_OWORD *)(a1 + 76) = v13;
  *(_DWORD *)(a1 + 92) = v11;
  *(_OWORD *)(a1 + 96) = *a5;
  *(_DWORD *)(a1 + 112) = *a6;
  v14 = a7[1];
  *(_OWORD *)(a1 + 120) = *a7;
  *(_OWORD *)(a1 + 136) = v14;
  v15 = a8[1];
  result = a1;
  *(_OWORD *)(a1 + 152) = *a8;
  *(_OWORD *)(a1 + 168) = v15;
  return result;
}
