/*
 * XREFs of NVMeReservationReportCapabilitiesCompletion @ 0x140024040
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 */

char __fastcall NVMeReservationReportCapabilitiesCompletion(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 SrbDataBuffer; // r9
  char v8; // dl
  __int64 v9; // r8
  char v10; // cl
  char v11; // cl
  char v12; // dl
  char v13; // cl
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v17; // [rsp+40h] [rbp+18h] BYREF

  SrbExtension = GetSrbExtension(a2);
  if ( a3 )
  {
    SrbDataBuffer = GetSrbDataBuffer(v6, &v17);
    v8 = *(_BYTE *)(SrbDataBuffer + 2);
    *(_WORD *)SrbDataBuffer = 2048;
    v10 = *(_BYTE *)(SrbDataBuffer + 3) & 0xE;
    *(_BYTE *)(SrbDataBuffer + 2) = *(_BYTE *)(v9 + 112) & 1 ^ v8 & 0x62 | 4;
    LOBYTE(SrbExtension) = *(_BYTE *)(SrbDataBuffer + 4);
    *(_BYTE *)(SrbDataBuffer + 3) = *a3 & 1 ^ v10 | 0x80;
    v11 = SrbExtension ^ (*(_BYTE *)(v9 + 112) ^ SrbExtension) & 2;
    *(_BYTE *)(SrbDataBuffer + 4) = v11;
    LOBYTE(SrbExtension) = v11 ^ (v11 ^ (2 * *(_BYTE *)(v9 + 112))) & 8;
    *(_BYTE *)(SrbDataBuffer + 4) = SrbExtension;
    v12 = SrbExtension ^ (SrbExtension ^ (4 * *(_BYTE *)(v9 + 112))) & 0x20;
    *(_BYTE *)(SrbDataBuffer + 4) = v12;
    v13 = v12 ^ (v12 ^ (4 * *(_BYTE *)(v9 + 112))) & 0x40;
    *(_BYTE *)(SrbDataBuffer + 4) = v13;
    *(_BYTE *)(SrbDataBuffer + 4) = v13 & 0x7F | (4 * (*(_BYTE *)(v9 + 112) & 0xE0));
    LOBYTE(SrbExtension) = *(_BYTE *)(SrbDataBuffer + 5);
    *(_BYTE *)(SrbDataBuffer + 5) = SrbExtension ^ (SrbExtension ^ (*(_BYTE *)(v9 + 112) >> 6)) & 1;
    *(_BYTE *)(v14 + 3) = 1;
    *(_BYTE *)(v15 + 4225) |= 8u;
  }
  else
  {
    *(_BYTE *)(v5 + 3) = 4;
    *(_BYTE *)(SrbExtension + 4225) |= 8u;
  }
  return SrbExtension;
}
