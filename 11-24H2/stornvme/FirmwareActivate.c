/*
 * XREFs of FirmwareActivate @ 0x14001F854
 * Callers:
 *     IoctlFirmwareProcess @ 0x14000CFC0 (IoctlFirmwareProcess.c)
 *     NVMeFirmwareActivateCompletion @ 0x140022470 (NVMeFirmwareActivateCompletion.c)
 * Callees:
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     IsFirmwareActivateWithoutResetEnabled @ 0x140021C34 (IsFirmwareActivateWithoutResetEnabled.c)
 */

__int64 __fastcall FirmwareActivate(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v3; // edi
  __int64 SrbExtension; // rsi
  __int64 v6; // r8
  _DWORD *SrbDataBuffer; // r9
  __int64 v8; // r11
  char *v9; // r14
  char v10; // si
  int v11; // eax
  int v12; // edx
  unsigned int v13; // ecx
  __int64 v15; // [rsp+F0h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  SrbExtension = GetSrbExtension(a2);
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v15);
  v9 = (char *)SrbDataBuffer + (unsigned int)SrbDataBuffer[11];
  if ( SrbDataBuffer[12] < 0xCu )
  {
    v10 = 21;
    goto LABEL_5;
  }
  if ( (unsigned __int8)v9[8] > (unsigned __int8)((*(_BYTE *)(v6 + 260) >> 1) & 7) )
  {
    v10 = 40;
LABEL_5:
    v3 = -1056964602;
    SrbDataBuffer[5] = 3;
    *(_BYTE *)(a2 + 3) = v10;
    if ( (*(_BYTE *)(v8 + 21) & 2) != 0 )
      StorPortExtendedFunction(87LL, v8, 0LL, 1LL);
    return v3;
  }
  v11 = SrbDataBuffer[10];
  if ( (v11 & 0x40000000) != 0 )
  {
    *(_DWORD *)(v8 + 24) |= 0x10000u;
  }
  else if ( v11 >= 0 )
  {
    if ( ((v11 & 0x10000000) == 0 || _bittest((const signed __int32 *)(v8 + 24), 0xAu))
      && (!(unsigned __int8)IsFirmwareActivateWithoutResetEnabled(v8)
       || _bittest((const signed __int32 *)(v8 + 24), 0xAu)) )
    {
      v2 = 8;
    }
    else
    {
      v2 = 24;
    }
  }
  else
  {
    v2 = 16;
  }
  *(_BYTE *)(SrbExtension + 4225) = *(_BYTE *)(SrbExtension + 4225) & 0xFC | 1;
  SrbAssignQueueId(v8, a2);
  v12 = v9[8] & 7;
  v13 = *(_DWORD *)(SrbExtension + 4136) & 0xFFFFFFF8;
  *(_BYTE *)(SrbExtension + 4096) = 16;
  *(_QWORD *)(SrbExtension + 4192) = NVMeFirmwareActivateCompletion;
  *(_DWORD *)(SrbExtension + 4136) = v2 | (v13 ^ v12) & 0xFFFFFFE7;
  return v3;
}
