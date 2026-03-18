/*
 * XREFs of NVMeGetLogPageFirmwareSlotCompletion @ 0x14000CC80
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     GetControllerMaxTransferSize @ 0x1400065A0 (GetControllerMaxTransferSize.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     GetFirmwareGranularity @ 0x1400202E4 (GetFirmwareGranularity.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeGetLogPageFirmwareSlotCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 SrbExtension; // rbx
  __int64 v5; // rbp
  _BYTE *v6; // r12
  _DWORD *v7; // rdi
  _DWORD *v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // eax
  char v11; // al
  unsigned __int8 v12; // dl
  unsigned int v13; // r9d
  __int64 v14; // r8
  char v15; // al
  char v16; // al
  int FirmwareGranularity; // eax
  _DWORD *v18; // rcx
  unsigned int ControllerMaxTransferSize; // eax
  unsigned int v20; // r8d
  int v21; // eax
  int v22; // r8d
  int v23; // eax
  unsigned __int8 i; // dl
  __int64 v25; // r8
  _DWORD *v26; // r9
  char v27; // al
  __int64 result; // rax
  char v29; // [rsp+50h] [rbp+8h]

  SrbExtension = GetSrbExtension(a2);
  v5 = *(_QWORD *)(a1 + 1560);
  v6 = *(_BYTE **)(SrbExtension + 4160);
  if ( *(_BYTE *)(v3 + 2) == 40 )
    v7 = *(_DWORD **)(v3 + 64);
  else
    v7 = *(_DWORD **)(v3 + 24);
  v8 = (_DWORD *)((char *)v7 + (unsigned int)v7[11]);
  if ( *(_BYTE *)(v3 + 3) == 1 )
  {
    if ( *v8 != 2 || (v29 = 1, v8[1] < 0x18u) )
      v29 = 0;
    v9 = v7[12];
    if ( (v9 & 3) != 0 )
    {
      if ( v9 )
        memset(v8, 0, (unsigned int)v7[12]);
    }
    else
    {
      v10 = v9 >> 2;
      if ( v10 )
        memset(v8, 0, 4LL * v10);
    }
    if ( !v29 )
    {
      *v8 = 1;
      v8[1] = 16;
      *((_BYTE *)v8 + 8) = (*(_BYTE *)(v5 + 256) & 4) != 0;
      *((_BYTE *)v8 + 9) = (*(_BYTE *)(v5 + 260) >> 1) & 7;
      *((_BYTE *)v8 + 10) = *v6 & 7;
      v11 = -1;
      if ( ((*v6 >> 4) & 7) != 0 )
        v11 = (*v6 >> 4) & 7;
      v12 = 0;
      *((_BYTE *)v8 + 11) = v11;
      while ( 1 )
      {
        v13 = *(unsigned __int8 *)(v5 + 260);
        if ( v12 >= (unsigned __int8)(((unsigned __int8)v13 >> 1) & 7) )
          break;
        v14 = v12;
        if ( (unsigned int)v7[12] < 16 * ((unsigned __int64)v12 + 2) )
          goto LABEL_38;
        LOBYTE(v8[4 * v12 + 4]) = v12 + 1;
        if ( v12 )
          v15 = 0;
        else
          v15 = *(_BYTE *)(v5 + 260) & 1;
        BYTE1(v8[4 * v12++ + 4]) = v15;
        *(_QWORD *)&v8[4 * (unsigned int)v14 + 6] = *(_QWORD *)&v6[8 * v14 + 8];
      }
LABEL_39:
      v7[5] = 0;
      goto LABEL_40;
    }
    *v8 = 2;
    v8[1] = 24;
    *((_BYTE *)v8 + 8) = (*(_BYTE *)(v5 + 256) & 4) != 0;
    *((_BYTE *)v8 + 9) = (*(_BYTE *)(v5 + 260) >> 1) & 7;
    *((_BYTE *)v8 + 10) = *v6 & 7;
    v16 = -1;
    if ( ((*v6 >> 4) & 7) != 0 )
      v16 = (*v6 >> 4) & 7;
    *((_BYTE *)v8 + 11) = v16;
    *((_BYTE *)v8 + 12) = 1;
    FirmwareGranularity = GetFirmwareGranularity(a1);
    v18 = (_DWORD *)a1;
    if ( FirmwareGranularity )
    {
      v8[4] = FirmwareGranularity;
      ControllerMaxTransferSize = GetControllerMaxTransferSize((_DWORD *)a1);
      if ( ControllerMaxTransferSize % v20 )
      {
        v21 = GetControllerMaxTransferSize(v18);
        v23 = v21 - v22;
        goto LABEL_31;
      }
    }
    else
    {
      v8[4] = 4;
    }
    v23 = GetControllerMaxTransferSize(v18);
LABEL_31:
    v8[5] = v23;
    for ( i = 0; ; ++i )
    {
      v13 = *(unsigned __int8 *)(v5 + 260);
      if ( i >= (unsigned __int8)(((unsigned __int8)v13 >> 1) & 7) )
        break;
      v25 = i;
      if ( (unsigned int)v7[12] < 16 * ((unsigned __int64)i + 2) )
      {
LABEL_38:
        v7[12] = 16 * (((v13 >> 1) & 7) + 1);
        v7[5] = 5;
        goto LABEL_40;
      }
      v26 = &v8[6 * i];
      *((_BYTE *)v26 + 24) = i + 1;
      if ( i )
        v27 = 0;
      else
        v27 = *(_BYTE *)(v5 + 260) & 1;
      *((_BYTE *)v26 + 25) = v27;
      *((_QWORD *)v26 + 4) = *(_QWORD *)&v6[8 * v25 + 8];
    }
    goto LABEL_39;
  }
  v7[5] = 1;
LABEL_40:
  result = NVMeFreeDmaBuffer(
             a1,
             *(unsigned int *)(SrbExtension + 4208),
             SrbExtension + 4160,
             *(_QWORD *)(SrbExtension + 4168));
  *(_BYTE *)(SrbExtension + 4225) |= 8u;
  *(_DWORD *)(SrbExtension + 4208) = 0;
  return result;
}
