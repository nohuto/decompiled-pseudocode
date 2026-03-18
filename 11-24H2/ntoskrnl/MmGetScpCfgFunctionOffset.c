/*
 * XREFs of MmGetScpCfgFunctionOffset @ 0x140A6C63C
 * Callers:
 *     ?PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@@Z @ 0x140C36350 (-PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetScpCfgFunctionOffset(int a1, int a2)
{
  return a1 + dword_140E2D7A0[0] + ((a2 + 4095) & 0xFFFFF000);
}
