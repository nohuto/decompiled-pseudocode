/*
 * XREFs of UsbDevice_SetResourceAssignment @ 0x14004DFC4
 * Callers:
 *     UsbDevice_HandleAssignPinsForEndpointsToOffloadState @ 0x140034EE4 (UsbDevice_HandleAssignPinsForEndpointsToOffloadState.c)
 *     UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x14004DA74 (UsbDevice_HandleUnassignPinsForOffloadedEndpointsState.c)
 * Callees:
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall UsbDevice_SetResourceAssignment(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbp
  __int64 v7; // r14
  int v8; // eax
  int v9; // r8d

  v3 = a2 + 168;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL);
  memset((void *)(a2 + 168), 0, 0x60uLL);
  *(_QWORD *)(v3 + 48) = a2;
  *(_QWORD *)(v3 + 40) = UsbDevice_SetResourceAssignmentCompletion;
  *(_DWORD *)(v3 + 36) = *(_DWORD *)(v3 + 36) & 0xFFF803FF | 0x16400;
  *(_BYTE *)(v3 + 39) = *(_BYTE *)(a1 + 143);
  v8 = *(_DWORD *)(v3 + 36);
  v9 = v8 ^ (*(_DWORD *)(a2 + 152) << 19);
  *(_BYTE *)(v3 + 34) = a3;
  *(_WORD *)(v3 + 32) = 1;
  *(_QWORD *)(v3 + 72) = 0LL;
  *(_QWORD *)(v3 + 80) = 0LL;
  *(_QWORD *)(v3 + 88) = 0LL;
  *(_DWORD *)(v3 + 36) = v8 ^ v9 & 0xF80000;
  return Command_SendCommand(v7, v3);
}
