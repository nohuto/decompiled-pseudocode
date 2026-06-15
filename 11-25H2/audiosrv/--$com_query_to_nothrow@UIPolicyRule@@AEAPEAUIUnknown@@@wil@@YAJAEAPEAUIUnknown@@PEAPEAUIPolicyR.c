/*
 * XREFs of ??$com_query_to_nothrow@UIPolicyRule@@AEAPEAUIUnknown@@@wil@@YAJAEAPEAUIUnknown@@PEAPEAUIPolicyRule@@@Z @ 0x18011CDA0
 * Callers:
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY05_N@Z @ 0x18011E8E0 (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY05_N@Z.c)
 *     ?RemoveRuleAndBuildRefreshList@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY05_N@Z @ 0x18011EBF8 (-RemoveRuleAndBuildRefreshList@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_query_to_nothrow<IPolicyRule,IUnknown * &>(_QWORD *a1, __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3, a2);
}
