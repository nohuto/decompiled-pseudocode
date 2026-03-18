/*
 * XREFs of IoctlSetTemperatureThresholdProcess @ 0x140021450
 * Callers:
 *     IoctlToNVMe @ 0x140003580 (IoctlToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 */

__int64 __fastcall IoctlSetTemperatureThresholdProcess(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 SrbExtension; // rdi
  __int64 v4; // r8
  __int64 SrbDataBuffer; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int16 v8; // ax
  __int16 v9; // bp
  __int16 v10; // bp
  char v11; // dl
  int v12; // ecx
  int v13; // r8d
  int v14; // r8d
  unsigned int v15; // r8d
  _DWORD *v17; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v17 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  SrbDataBuffer = GetSrbDataBuffer(v4, &v17);
  if ( *v17 < 0x2Cu )
  {
    *(_BYTE *)(v6 + 3) = 21;
    return (unsigned int)-1056964602;
  }
  if ( (*(_BYTE *)(SrbDataBuffer + 36) & 1) == 0
    || (v8 = *(_WORD *)(SrbDataBuffer + 38), v8 > 8u)
    || !v8 && !*(_BYTE *)(SrbDataBuffer + 42) && !*(_WORD *)(*(_QWORD *)(v7 + 1560) + 266LL)
    || (v9 = *(_WORD *)(SrbDataBuffer + 40), v9 < -273) )
  {
    *(_BYTE *)(v6 + 3) = 6;
    return (unsigned int)-1056964602;
  }
  v10 = v9 + 273;
  *(_BYTE *)(SrbExtension + 4225) = *(_BYTE *)(SrbExtension + 4225) & 0xFC | 1;
  SrbAssignQueueId(v7, v6);
  v11 = *(_BYTE *)(SrbDataBuffer + 42);
  v12 = *(_DWORD *)(SrbExtension + 4140);
  v13 = v12 ^ (*(unsigned __int8 *)(SrbDataBuffer + 38) << 16);
  *(_BYTE *)(SrbExtension + 4096) = 9;
  *(_BYTE *)(SrbExtension + 4136) = 4;
  v14 = v12 ^ v13 & 0xF0000;
  if ( v11 )
    v15 = v14 & 0xFFCFFFFF;
  else
    v15 = v14 & 0xFFCFFFFF | 0x100000;
  *(_DWORD *)(SrbExtension + 4140) = v15;
  *(_WORD *)(SrbExtension + 4140) = v10;
  *(_BYTE *)(SrbExtension + 4225) &= ~4u;
  return v2;
}
