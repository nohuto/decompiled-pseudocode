/*
 * XREFs of RIMUnRevokeConfigurationChange @ 0x1400A89A0
 * Callers:
 *     <none>
 * Callees:
 *     RIMDeliverConfigRequest @ 0x1400A90C8 (RIMDeliverConfigRequest.c)
 */

__int64 __fastcall RIMUnRevokeConfigurationChange(struct RIMDEV *a1)
{
  return RIMDeliverConfigRequest(a1);
}
