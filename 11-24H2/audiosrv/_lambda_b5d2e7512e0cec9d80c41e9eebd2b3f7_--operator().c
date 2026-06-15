/*
 * XREFs of _lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_::operator() @ 0x180054644
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180035060 (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     _lambda_337836fad6503ddf3ac4b1bf88bbe274_::operator() @ 0x180130D5C (_lambda_337836fad6503ddf3ac4b1bf88bbe274_--operator().c)
 * Callees:
 *     ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x18005473C (-TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA-AU_GUID@@W4__MIDL___MIDL_.c)
 */

struct _GUID *__fastcall lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_::operator()(__int64 a1, struct _GUID *a2)
{
  unsigned __int64 v2; // rdi
  EffectPack *v4; // r11
  __int64 v6; // rsi
  int i; // ecx
  GUID *v8; // rax
  _QWORD *v9; // r10
  __int64 v10; // rdx
  int j; // eax
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  struct _GUID v16; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(int *)(a1 + 8);
  v4 = *(EffectPack **)a1;
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 1712LL) )
  {
    _o_terminate(a1, a2);
    __debugbreak();
    JUMPOUT(0x180054734LL);
  }
  v6 = *((_QWORD *)v4 + 215);
  for ( i = 0; i < *(_DWORD *)(v6 + 16 * v2 + 8); ++i )
  {
    v8 = (GUID *)(a1 + 12);
    v9 = (_QWORD *)(*(_QWORD *)(v6 + 16 * v2) + 16LL * i);
    v10 = *v9 - *(_QWORD *)(a1 + 12);
    if ( *v9 == *(_QWORD *)(a1 + 12) )
      v10 = v9[1] - *(_QWORD *)(a1 + 20);
    if ( !v10 )
    {
      if ( i != -1 )
        goto LABEL_17;
      break;
    }
  }
  for ( j = 0; j < *(_DWORD *)(v6 + 16 * v2 + 8); ++j )
  {
    v12 = (_QWORD *)(*(_QWORD *)(v6 + 16 * v2) + 16LL * j);
    v13 = *v12 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( *v12 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
      v13 = v12[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( !v13 )
    {
      v14 = j == -1;
      v8 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      if ( !v14 )
        goto LABEL_17;
      break;
    }
  }
  v8 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
LABEL_17:
  v16 = *v8;
  EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(
    v4,
    a2,
    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v2,
    &v16);
  return a2;
}
