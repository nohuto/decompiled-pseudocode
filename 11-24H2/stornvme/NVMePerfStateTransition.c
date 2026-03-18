/*
 * XREFs of NVMePerfStateTransition @ 0x14000BFF0
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMePerfStateTransition(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1600) & 2) != 0
      && *(_BYTE *)(a1 + 1607) != *(_BYTE *)(a1 + 1608)
      && (unsigned int)StorPortExtendedFunction(66LL, a1, 0LL, 0LL) == 0;
}
