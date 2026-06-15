/*
 * XREFs of ?LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800A158C
 * Callers:
 *     _lambda_337836fad6503ddf3ac4b1bf88bbe274_::operator() @ 0x180130D5C (_lambda_337836fad6503ddf3ac4b1bf88bbe274_--operator().c)
 * Callees:
 *     ??$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180045F68 (--$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUI.c)
 *     ??$LogAecEffectPolicy@$07@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800A15C8 (--$LogAecEffectPolicy@$07@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL_.c)
 */

void __fastcall LogAecEffectPolicyInsertion(
        const struct _tlgProvider_t *a1,
        const struct _AEC_POLICY_RESULTS *a2,
        const unsigned __int16 *a3,
        struct _GUID *a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5)
{
  bool v5; // zf
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v5 = *((_DWORD *)a2 + 15) == 4;
  v6 = (__int128)*a4;
  if ( v5 )
    LogAecEffectPolicy<8>((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (unsigned int)&v6, a5);
  else
    LogAecEffectPolicy<70368744177672>((__int64)a1, (int *)a2, (__int64)a3, (__int64)&v6, a5);
}
