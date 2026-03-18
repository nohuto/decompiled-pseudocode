/*
 * XREFs of ScsiPersistentReserveOut @ 0x140026370
 * Callers:
 *     ScsiToNVMe @ 0x140002940 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002390 (NVMeSetSenseData.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     NVMeReservationAcquireCommand @ 0x1400239AC (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x140023B5C (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x140023CF8 (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x140023ED0 (NVMeReservationReleaseCommand.c)
 */

__int64 __fastcall ScsiPersistentReserveOut(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // r10
  char v5; // r8
  char v7; // cl
  unsigned int v8; // ebx
  unsigned __int8 v9; // al
  int v10; // ecx
  unsigned __int8 v11; // cl
  char v12; // al
  __int64 SrbDataBuffer; // rdx
  __int64 v14; // r11
  unsigned __int16 v17; // [rsp+50h] [rbp+18h]
  _DWORD *v18; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  v5 = a3[2];
  if ( (v5 & 0xF) != 1 && (v5 & 0xF) != 3 && (v5 & 0xF) != 5 && (v5 & 0xF) != 6 && (v5 & 0xFu) - 7 >= 2 )
  {
    v7 = a3[1] & 0x1F;
    if ( ((v7 - 1) & 0xFC) == 0 && v7 != 3 )
      goto LABEL_9;
    if ( v7 == 5 )
      goto LABEL_9;
  }
  if ( (v5 & 0xF0) != 0 )
  {
    v9 = a3[1] & 0x1F;
    if ( v9 > 7u )
      return (unsigned int)-1056964602;
    v10 = 201;
    if ( !_bittest(&v10, v9) )
      return (unsigned int)-1056964602;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 520LL) & 0x20) == 0
    || (*(_BYTE *)(a2 + 2) != 40 ? (v11 = *(_BYTE *)(a2 + 7)) : (v11 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10)),
        !*(_BYTE *)(*(_QWORD *)(a1 + 8LL * v11 + 1672) + 112LL)) )
  {
    v8 = -1056964602;
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return v8;
  }
  v12 = a3[7];
  v18 = 0LL;
  HIBYTE(v17) = v12;
  LOBYTE(v17) = a3[8];
  SrbDataBuffer = GetSrbDataBuffer(a2, &v18);
  if ( *v18 < (unsigned int)v17 )
  {
    v8 = -1056964604;
    goto LABEL_10;
  }
  if ( (*(_BYTE *)(SrbDataBuffer + 20) & 8) == 0 )
  {
    if ( (a3[1] & 0x1F) != 0 )
    {
      switch ( a3[1] & 0x1F )
      {
        case 1:
          return (unsigned int)NVMeReservationAcquireCommand(v14, v3);
        case 2:
        case 3:
          return (unsigned int)NVMeReservationReleaseCommand(v14, v3);
        case 4:
        case 5:
          return (unsigned int)NVMeReservationAcquireCommand(v14, v3);
      }
      if ( (a3[1] & 0x1F) != 6 )
      {
        if ( (a3[1] & 0x1F) != 7 )
        {
          NVMeSetSenseData(v3, 6, 5, 0x24u);
          return (unsigned int)-1056964602;
        }
        return (unsigned int)NVMeReservationRegisterAndMoveCommand(v14, v3);
      }
    }
    return (unsigned int)NVMeReservationRegisterCommand(v14, v3);
  }
LABEL_9:
  v8 = -1056964602;
LABEL_10:
  *(_BYTE *)(v3 + 3) = 6;
  return v8;
}
