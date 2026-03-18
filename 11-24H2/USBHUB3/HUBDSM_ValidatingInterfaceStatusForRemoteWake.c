/*
 * XREFs of HUBDSM_ValidatingInterfaceStatusForRemoteWake @ 0x140025590
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability @ 0x14002DF1C (HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability.c)
 */

__int64 __fastcall HUBDSM_ValidatingInterfaceStatusForRemoteWake(__int64 a1)
{
  return HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability(*(_QWORD *)(a1 + 960));
}
