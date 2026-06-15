/*
 * XREFs of ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1400659C0
 * Callers:
 *     _lambda_d1a8b950306abda3aed68804ea97f7ae_::operator() @ 0x14001D70C (_lambda_d1a8b950306abda3aed68804ea97f7ae_--operator().c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400232F0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?GetEffectPackDevNodeRegistryRoot@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x140076C9C (-GetEffectPackDevNodeRegistryRoot@@YAJPEBGPEAPEAUHKEY__@@@Z.c)
 *     ?GetEffectPackFxPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z @ 0x140076D4C (-GetEffectPackFxPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ??$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z @ 0x1400650C4 (--$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v6) = (_DWORD)a4;
  return wil::details::ReportFailure_Win32<1>((__int64)this, a2, a3, (__int64)a4, v5, retaddr, v6);
}
