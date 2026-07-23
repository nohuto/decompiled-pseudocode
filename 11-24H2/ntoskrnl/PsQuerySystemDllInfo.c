/*
 * XREFs of PsQuerySystemDllInfo @ 0x14091D988
 * Callers:
 *     PspWow64PickBestNtdll @ 0x140490CF8 (PspWow64PickBestNtdll.c)
 *     DbgkSendSystemDllMessages @ 0x1408F541C (DbgkSendSystemDllMessages.c)
 *     PsWow64IsMachineSupported @ 0x14091D930 (PsWow64IsMachineSupported.c)
 *     DbgkCreateThread @ 0x140921604 (DbgkCreateThread.c)
 *     ExpSystemErrorHandler2 @ 0x140B63540 (ExpSystemErrorHandler2.c)
 *     MmInitSystemDll @ 0x140BE0990 (MmInitSystemDll.c)
 *     PspInitializeSystemDlls @ 0x140C379D4 (PspInitializeSystemDlls.c)
 *     ?PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@@Z @ 0x140C38490 (-PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_.c)
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
