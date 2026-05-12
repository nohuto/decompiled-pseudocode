/*
 * XREFs of NvmeNamespaceReservationRegister @ 0x14010C6BC
 * Callers:
 *     NvmeNamespacePersistentReserveOutIoctl @ 0x14010575C (NvmeNamespacePersistentReserveOutIoctl.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeNamespaceReservationRegister(__int64 a1, _BYTE *a2, char a3)
{
  __int64 v5; // rcx
  unsigned int v7; // r14d
  _QWORD *ExtendedCommand; // rbx
  __int64 v9; // r8
  int DmaBuffer; // esi
  _QWORD *v11; // rcx
  char v12; // r9
  int v13; // r9d
  int v14; // r8d
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // r8
  __int128 v22; // [rsp+30h] [rbp-10h] BYREF
  __int64 v23; // [rsp+70h] [rbp+30h]
  __int64 v24; // [rsp+88h] [rbp+48h]

  v5 = *(_QWORD *)(a1 + 16);
  v22 = 0LL;
  v7 = 0;
  ExtendedCommand = (_QWORD *)NvmeControllerGetExtendedCommand(v5);
  if ( ExtendedCommand )
  {
    v7 = 16;
    DmaBuffer = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 16), 0x10u, v9, (void **)&v22, (_QWORD *)&v22 + 1, 0);
    if ( DmaBuffer >= 0 )
    {
      v11 = (_QWORD *)v22;
      v12 = a2[20];
      HIBYTE(v23) = *a2;
      BYTE6(v23) = a2[1];
      BYTE5(v23) = a2[2];
      BYTE4(v23) = a2[3];
      BYTE3(v23) = a2[4];
      BYTE2(v23) = a2[5];
      BYTE1(v23) = a2[6];
      LOBYTE(v23) = a2[7];
      HIBYTE(v24) = a2[8];
      BYTE6(v24) = a2[9];
      BYTE5(v24) = a2[10];
      BYTE4(v24) = a2[11];
      BYTE3(v24) = a2[12];
      BYTE2(v24) = a2[13];
      BYTE1(v24) = a2[14];
      LOBYTE(v24) = a2[15];
      *(_QWORD *)(v22 + 8) = v24;
      *v11 = v23;
      v13 = ((v12 & 1) + 2) << 30;
      v14 = (8 * a3) & 8;
      *(_DWORD *)(*ExtendedCommand + 4256LL) &= ~1u;
      *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x20u;
      *(_DWORD *)(*ExtendedCommand + 4256LL) |= 2u;
      *(_QWORD *)(*ExtendedCommand + 4184LL) = 0LL;
      *(_QWORD *)(*ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*ExtendedCommand + 4200LL) = ExtendedCommand;
      *(_QWORD *)(*ExtendedCommand + 4216LL) = a1;
      *(_OWORD *)(*ExtendedCommand + 4160LL) = v22;
      *(_DWORD *)(*ExtendedCommand + 4248LL) = 16;
      v15 = *ExtendedCommand;
      v16 = *(_DWORD *)(a1 + 56);
      v17 = *((_QWORD *)&v22 + 1);
      *(_BYTE *)(v15 + 4096) = 13;
      *(_DWORD *)(v15 + 4100) = v16;
      v18 = *(_DWORD *)(v15 + 4136);
      *(_QWORD *)(v15 + 4120) = v17;
      if ( v24 )
        v19 = v14 ^ (v13 & 0xFFFFFFF0 | v18 & 0x3FFFFFF0);
      else
        v19 = v14 ^ (v13 & 0xFFFFFFF1 | v18 & 0x3FFFFFF1) | 1;
      *(_DWORD *)(v15 + 4136) = v19;
      DmaBuffer = NvmeControllerProcessCommandSync(*(_QWORD *)(a1 + 16), ExtendedCommand, 0);
    }
  }
  else
  {
    DmaBuffer = -1073741670;
  }
  NvmeControllerReclaimExtendedCommand(*(_QWORD *)(a1 + 16), ExtendedCommand);
  if ( (_QWORD)v22 )
    NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), v7, v20, v22, *((__int64 *)&v22 + 1));
  return (unsigned int)DmaBuffer;
}
