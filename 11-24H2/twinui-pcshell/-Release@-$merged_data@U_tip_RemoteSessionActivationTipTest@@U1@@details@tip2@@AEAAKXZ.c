/*
 * XREFs of ?Release@?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18065C040
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1806588B8 (--1-$com_ptr_t@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_retur.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180658D90 (--4-$com_ptr_t@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_retur.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18065DB04 (-reset@-$com_ptr_t@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_r.c)
 * Callees:
 *     ??1?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x1806589E4 (--1-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 102);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>::~merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
