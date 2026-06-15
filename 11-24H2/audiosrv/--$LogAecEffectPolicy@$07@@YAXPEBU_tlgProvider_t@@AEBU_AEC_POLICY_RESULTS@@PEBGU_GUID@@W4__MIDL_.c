/*
 * XREFs of ??$LogAecEffectPolicy@$07@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800A15C8
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180035060 (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800A158C (-LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MI.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U2@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@66666666666466@Z @ 0x18004619C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVa.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 */

void __fastcall LogAecEffectPolicy<8>(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // ecx
  const WCHAR *v6; // r8
  __int64 v7; // r9
  int *v8; // r10
  int v9; // [rsp+B0h] [rbp-80h] BYREF
  int v10; // [rsp+B4h] [rbp-7Ch] BYREF
  int v11; // [rsp+B8h] [rbp-78h] BYREF
  int v12; // [rsp+BCh] [rbp-74h] BYREF
  int v13; // [rsp+C0h] [rbp-70h] BYREF
  int v14; // [rsp+C4h] [rbp-6Ch] BYREF
  int v15; // [rsp+C8h] [rbp-68h] BYREF
  int v16; // [rsp+CCh] [rbp-64h] BYREF
  int v17; // [rsp+D0h] [rbp-60h] BYREF
  int v18; // [rsp+D4h] [rbp-5Ch] BYREF
  int v19; // [rsp+D8h] [rbp-58h] BYREF
  int v20; // [rsp+DCh] [rbp-54h] BYREF
  int v21; // [rsp+E0h] [rbp-50h] BYREF
  int v22; // [rsp+E4h] [rbp-4Ch] BYREF
  _DWORD *v23; // [rsp+E8h] [rbp-48h] BYREF
  const WCHAR *v24; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v26; // [rsp+100h] [rbp-30h] BYREF

  if ( *a1 > 4u && tlgKeywordOn((__int64)a1, 8LL) )
  {
    v9 = v8[16];
    v10 = v8[15];
    v23 = v8 + 11;
    v11 = v8[10];
    v12 = v8[9];
    v13 = v8[6];
    v14 = v8[7];
    v15 = v8[8];
    v16 = v8[5];
    v17 = v8[4];
    v18 = v8[3];
    v19 = v8[2];
    v20 = v8[1];
    v21 = *v8;
    v22 = a5;
    v24 = v6;
    v25 = v7;
    v26 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      (int)&unk_1801AF450,
      (__int64)v6,
      v7,
      (__int64)&v26,
      &v25,
      &v24,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64 *)&v23,
      (__int64)&v10,
      (__int64)&v9);
  }
}
