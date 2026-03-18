/*
 * XREFs of ScsiModeSelectRequest @ 0x1400261F4
 * Callers:
 *     ScsiToNVMe @ 0x140002940 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002390 (NVMeSetSenseData.c)
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     BuildSetFeaturesCacheCommand @ 0x140019F00 (BuildSetFeaturesCacheCommand.c)
 */

__int64 __fastcall ScsiModeSelectRequest(__int64 a1, __int64 a2)
{
  unsigned __int8 *SrbDataBuffer; // rax
  _BYTE *v4; // r8
  __int64 v5; // r11
  unsigned __int8 *v6; // r9
  unsigned int v7; // r10d
  unsigned int v8; // ebx
  unsigned int v9; // edx
  int v11; // eax
  unsigned int v12; // eax
  unsigned __int8 *v13; // rdi
  __int64 SrbExtension; // rbx
  __int64 v15; // r11
  unsigned int *v16; // [rsp+50h] [rbp+18h] BYREF

  v16 = 0LL;
  SrbDataBuffer = (unsigned __int8 *)GetSrbDataBuffer(a2, &v16);
  v6 = SrbDataBuffer;
  v7 = 4;
  if ( *v4 != 21 )
    v7 = 8;
  if ( (v4[1] & 0x10) == 0 )
    goto LABEL_7;
  if ( !SrbDataBuffer )
  {
    v8 = -1056964605;
LABEL_8:
    NVMeSetSenseData(v5, 6, 5, 0x24u);
    return v8;
  }
  v9 = *v16;
  if ( *v16 < v7 )
  {
LABEL_7:
    v8 = -1056964601;
    goto LABEL_8;
  }
  if ( *v4 == 21 )
  {
    v11 = SrbDataBuffer[3];
  }
  else
  {
    BYTE1(v16) = SrbDataBuffer[6];
    LOBYTE(v16) = SrbDataBuffer[7];
    v11 = (unsigned __int16)v16;
  }
  v12 = v7 + v11;
  v13 = &v6[v12];
  if ( (v12 < v9 ? v9 - v12 : 0) >= 0xC
    && (*v13 & 0x3F) == 8
    && v13[1] == 10
    && (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 525LL) & 1) != 0 )
  {
    *(_BYTE *)(a1 + 3964) = *(_BYTE *)(a1 + 3964) ^ (*(_BYTE *)(a1 + 3964) ^ (v13[2] >> 2)) & 1 | 2;
    SrbExtension = GetSrbExtension(v5);
    *(_BYTE *)(SrbExtension + 4225) = *(_BYTE *)(SrbExtension + 4225) & 0xFC | 1;
    SrbAssignQueueId(a1, v15);
    BuildSetFeaturesCacheCommand(SrbExtension + 4096, (v13[2] & 4) != 0, (*(_BYTE *)(a1 + 3964) & 4) != 0);
    return 0LL;
  }
  else
  {
    NVMeSetSenseData(v5, 6, 5, 0x24u);
    return 3238002694LL;
  }
}
