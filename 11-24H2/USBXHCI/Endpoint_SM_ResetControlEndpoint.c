/*
 * XREFs of Endpoint_SM_ResetControlEndpoint @ 0x14002EE74
 * Callers:
 *     ESM_ResettingControlEndpoint @ 0x14002EE50 (ESM_ResettingControlEndpoint.c)
 * Callees:
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall Endpoint_SM_ResetControlEndpoint(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  int v4; // r8d
  unsigned int v5; // r8d

  v1 = a1 + 168;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  memset((void *)(a1 + 168), 0, 0x60uLL);
  v4 = *(_DWORD *)(v1 + 36);
  *(_QWORD *)(v1 + 40) = Endpoint_ControlEndpointResetCompletion;
  v5 = v4 & 0xFFFF01FF | 0x3800;
  *(_QWORD *)(v1 + 48) = a1;
  *(_DWORD *)(v1 + 36) = v5;
  *(_DWORD *)(v1 + 36) = v5 ^ (v5 ^ (*(_DWORD *)(a1 + 152) << 16)) & 0x1F0000;
  LOBYTE(v5) = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 143LL);
  *(_QWORD *)(v1 + 72) = 0LL;
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_QWORD *)(v1 + 88) = 0LL;
  *(_BYTE *)(v1 + 39) = v5;
  return Command_SendCommand(v3, v1);
}
