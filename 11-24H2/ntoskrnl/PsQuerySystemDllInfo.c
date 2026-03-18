/*
 * XREFs of PsQuerySystemDllInfo @ 0x1408FB0A8
 * Callers:
 *     PspWow64PickBestNtdll @ 0x140496368 (PspWow64PickBestNtdll.c)
 *     PsWow64IsMachineSupported @ 0x1408FB050 (PsWow64IsMachineSupported.c)
 *     DbgkCreateThread @ 0x1408FED24 (DbgkCreateThread.c)
 *     DbgkSendSystemDllMessages @ 0x140939F18 (DbgkSendSystemDllMessages.c)
 *     ExpSystemErrorHandler2 @ 0x140B61470 (ExpSystemErrorHandler2.c)
 *     MmInitSystemDll @ 0x140BDE990 (MmInitSystemDll.c)
 *     PspInitializeSystemDlls @ 0x140C35894 (PspInitializeSystemDlls.c)
 *     ?PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@@Z @ 0x140C36350 (-PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQuerySystemDllInfo(int a1)
{
  _UNKNOWN **v1; // rcx

  v1 = PspSystemDlls[a1];
  if ( v1 )
    return (unsigned __int64)(v1 + 1) & -(__int64)(v1[4] != 0LL);
  else
    return 0LL;
}
