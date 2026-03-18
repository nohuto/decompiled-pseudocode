/*
 * XREFs of PsQuerySystemDllInfo @ 0x1409075D8
 * Callers:
 *     PspWow64PickBestNtdll @ 0x140496B38 (PspWow64PickBestNtdll.c)
 *     PsWow64IsMachineSupported @ 0x140907580 (PsWow64IsMachineSupported.c)
 *     DbgkCreateThread @ 0x14090B274 (DbgkCreateThread.c)
 *     DbgkSendSystemDllMessages @ 0x1409B9DBC (DbgkSendSystemDllMessages.c)
 *     ExpSystemErrorHandler2 @ 0x140B51340 (ExpSystemErrorHandler2.c)
 *     MmInitSystemDll @ 0x140BCD990 (MmInitSystemDll.c)
 *     PspInitializeSystemDlls @ 0x140C245C8 (PspInitializeSystemDlls.c)
 *     ?PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@@Z @ 0x140C25084 (-PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_.c)
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
