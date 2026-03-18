/*
 * XREFs of RIMRevokeConfigurationChange @ 0x14019EE50
 * Callers:
 *     <none>
 * Callees:
 *     RIMDeliverConfigRequest @ 0x1400A90C8 (RIMDeliverConfigRequest.c)
 */

__int64 __fastcall RIMRevokeConfigurationChange(__int64 a1, unsigned __int16 a2)
{
  return RIMDeliverConfigRequest((struct RIMDEV *)a1, *(_QWORD *)(a1 + 440), a2, 0);
}
