/*
 * XREFs of Endpoint_SM_SendStopEndpointCommand @ 0x140009F30
 * Callers:
 *     ESM_StoppingEndpoint @ 0x140009EB0 (ESM_StoppingEndpoint.c)
 * Callees:
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall Endpoint_SM_SendStopEndpointCommand(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  int v4; // edx
  unsigned int v5; // edx
  char v6; // cl

  v1 = a1 + 168;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  memset((void *)(a1 + 168), 0, 0x60uLL);
  v4 = *(_DWORD *)(v1 + 36);
  *(_QWORD *)(v1 + 40) = Endpoint_OnCancelStopCompletion;
  v5 = v4 & 0xFFFF03FF | 0x3C00;
  *(_QWORD *)(v1 + 48) = a1;
  *(_DWORD *)(v1 + 36) = v5;
  *(_DWORD *)(v1 + 36) = v5 ^ (v5 ^ (*(_DWORD *)(a1 + 152) << 16)) & 0x1F0000;
  v6 = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 143LL);
  *(_QWORD *)(v1 + 72) = 0LL;
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_QWORD *)(v1 + 88) = 0LL;
  *(_BYTE *)(v1 + 39) = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a1 + 80),
      v5,
      13,
      121,
      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
      v6,
      *(_BYTE *)(v1 + 38) & 0x1F);
  }
  return Command_SendCommand(v3, v1);
}
