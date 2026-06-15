/*
 * XREFs of wil::scope_exit__lambda_dacf159241f8e1fef226fb2cfac8af81___ @ 0x1800EE920
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003ED58 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18003FDC4 (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@H@Z @ 0x18006BF40 (-ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit__lambda_dacf159241f8e1fef226fb2cfac8af81___(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax
  __int64 v4; // xmm1_8

  v2 = *a2;
  result = a1;
  *(_BYTE *)(a1 + 24) = 1;
  v4 = *((_QWORD *)a2 + 2);
  *(_OWORD *)a1 = v2;
  *(_QWORD *)(a1 + 16) = v4;
  return result;
}
