/*
 * XREFs of NVMeWriteBufferFirmwareActivateCompletion @ 0x1400251A0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeWriteBufferFirmwareActivate @ 0x140002030 (NVMeWriteBufferFirmwareActivate.c)
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     GetSrbScsiData @ 0x14000B600 (GetSrbScsiData.c)
 *     NVMeControllerAsyncReset @ 0x140016880 (NVMeControllerAsyncReset.c)
 *     IsFirmwareActivateWithoutResetEnabled @ 0x140021C34 (IsFirmwareActivateWithoutResetEnabled.c)
 *     NVMeQueueWorkItem @ 0x14002393C (NVMeQueueWorkItem.c)
 */

char __fastcall NVMeWriteBufferFirmwareActivateCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r14
  char v8; // si
  unsigned int v9; // edx
  __int16 v10; // r9
  __int64 v11; // r9
  char v12; // dl
  unsigned int v13; // edx
  __int64 SrbScsiData; // rax
  __int64 v15; // r9
  int v17; // [rsp+90h] [rbp+8h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v7 = SrbExtension;
  v8 = 1;
  if ( !v6 )
  {
    *(_BYTE *)(v5 + 3) = 4;
    *(_BYTE *)(SrbExtension + 4225) |= 8u;
    return SrbExtension;
  }
  v9 = *(unsigned __int16 *)(v6 + 14);
  v10 = v9 & 0x1FE;
  if ( (v9 & 0x1FE) == 0 && (v9 & 0xE00) == 0 )
  {
    if ( IsFirmwareActivateWithoutResetEnabled(a1) && (*(_DWORD *)(a1 + 24) & 0x400) == 0 )
    {
      *(_BYTE *)(a2 + 3) = 1;
      if ( (unsigned int)NVMeQueueWorkItem(a1, (__int64)NVMeControllerIdentifyWorkItem, 0LL, v11) )
      {
        *(_DWORD *)(a1 + 24) |= 0x20u;
        if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
          StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
      }
      goto LABEL_22;
    }
    *(_DWORD *)(a1 + 24) |= 0x20u;
    *(_DWORD *)(a1 + 24) &= ~0x400u;
    v12 = 0;
LABEL_10:
    if ( NVMeControllerAsyncReset(a1, v12, (__int64)NVMeWriteBufferFirmwareActivateCompletionAfterReset, a2) )
    {
      v8 = 0;
      goto LABEL_22;
    }
    goto LABEL_12;
  }
  if ( (v9 & 0xE00) != 0x200 )
    goto LABEL_21;
  v13 = v9 >> 1;
  if ( (unsigned __int8)v13 == 7 )
    goto LABEL_21;
  if ( (unsigned __int8)v13 == 11 )
  {
LABEL_12:
    *(_BYTE *)(a2 + 3) = 1;
    goto LABEL_22;
  }
  if ( (unsigned int)(unsigned __int8)v13 - 16 < 2 )
  {
    *(_DWORD *)(a1 + 24) |= 0x20u;
    v12 = v10 == 32;
    goto LABEL_10;
  }
  if ( !IsFirmwareActivateWithoutResetEnabled(a1) || (*(_DWORD *)(a1 + 24) & 0x400) != 0 )
  {
LABEL_21:
    *(_BYTE *)(a2 + 3) = 4;
  }
  else
  {
    SrbScsiData = GetSrbScsiData(a2, &v17, 0LL, 0LL, 0LL);
    *(_DWORD *)(a1 + 24) |= 0x400u;
    v8 = 0;
    NVMeWriteBufferFirmwareActivate(a1, a2, SrbScsiData, v15);
    ProcessCommand(a1, a2);
  }
LABEL_22:
  LOBYTE(SrbExtension) = 8 * v8;
  *(_BYTE *)(v7 + 4225) = (8 * v8) | *(_BYTE *)(v7 + 4225) & 0xF7;
  if ( v8 )
    *(_DWORD *)(a1 + 24) &= ~0x800u;
  return SrbExtension;
}
