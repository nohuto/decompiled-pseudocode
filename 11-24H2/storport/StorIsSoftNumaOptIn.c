/*
 * XREFs of StorIsSoftNumaOptIn @ 0x140055A40
 * Callers:
 *     StorGetActiveGatewayCountRequired @ 0x140021F74 (StorGetActiveGatewayCountRequired.c)
 *     StorCreateIoGateways @ 0x1400A6300 (StorCreateIoGateways.c)
 * Callees:
 *     <none>
 */

bool __fastcall StorIsSoftNumaOptIn(__int64 a1)
{
  return (*(_BYTE *)(a1 + 4371) & 8) != 0 && (unsigned int)(g_ProcessorCountPerGateway - 4) <= 0xC;
}
