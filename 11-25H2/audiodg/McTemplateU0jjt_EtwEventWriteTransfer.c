/*
 * XREFs of McTemplateU0jjt_EtwEventWriteTransfer @ 0x14004A1AC
 * Callers:
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140033CF8 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1400213E0 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0jjt_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // [rsp+30h] [rbp-11h] BYREF
  _BYTE v6[16]; // [rsp+40h] [rbp-1h] BYREF
  __int64 v7; // [rsp+50h] [rbp+Fh]
  __int64 v8; // [rsp+58h] [rbp+17h]
  __int64 v9; // [rsp+60h] [rbp+1Fh]
  __int64 v10; // [rsp+68h] [rbp+27h]
  int *v11; // [rsp+70h] [rbp+2Fh]
  __int64 v12; // [rsp+78h] [rbp+37h]

  v9 = a4;
  v5 = 0;
  v11 = &v5;
  v7 = a3;
  v8 = 16LL;
  v12 = 4LL;
  v10 = 16LL;
  return McGenEventWrite_EtwEventWriteTransfer(0, (unsigned int)&EVT_SYSTEM_EFFECT_APO_INITIALIZED, a3, 4, (__int64)v6);
}
