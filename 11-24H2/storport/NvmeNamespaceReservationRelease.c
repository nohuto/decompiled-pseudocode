/*
 * XREFs of NvmeNamespaceReservationRelease @ 0x14010CB20
 * Callers:
 *     NvmeNamespacePersistentReserveOutIoctl @ 0x14010575C (NvmeNamespacePersistentReserveOutIoctl.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeNamespaceReservationRelease(__int64 a1, _BYTE *a2, char a3, unsigned __int8 a4)
{
  __int64 v5; // rcx
  unsigned int v9; // ebp
  _QWORD *ExtendedCommand; // rsi
  __int64 v11; // r8
  int DmaBuffer; // edi
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+70h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 16);
  v18 = 0LL;
  v9 = 0;
  ExtendedCommand = (_QWORD *)NvmeControllerGetExtendedCommand(v5);
  if ( ExtendedCommand )
  {
    v9 = 8;
    DmaBuffer = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 16), 8u, v11, (void **)&v18, (_QWORD *)&v18 + 1, 0);
    if ( DmaBuffer >= 0 )
    {
      HIBYTE(v19) = *a2;
      BYTE6(v19) = a2[1];
      BYTE5(v19) = a2[2];
      BYTE4(v19) = a2[3];
      BYTE3(v19) = a2[4];
      BYTE2(v19) = a2[5];
      BYTE1(v19) = a2[6];
      LOBYTE(v19) = a2[7];
      *(_QWORD *)v18 = v19;
      *(_DWORD *)(*ExtendedCommand + 4256LL) &= ~1u;
      *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x20u;
      *(_DWORD *)(*ExtendedCommand + 4256LL) |= 2u;
      *(_QWORD *)(*ExtendedCommand + 4184LL) = 0LL;
      *(_QWORD *)(*ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*ExtendedCommand + 4200LL) = ExtendedCommand;
      *(_QWORD *)(*ExtendedCommand + 4216LL) = a1;
      *(_OWORD *)(*ExtendedCommand + 4160LL) = v18;
      *(_DWORD *)(*ExtendedCommand + 4248LL) = 8;
      v13 = *((_QWORD *)&v18 + 1);
      v14 = *ExtendedCommand + 4096LL;
      *(_DWORD *)(v14 + 4) = *(_DWORD *)(a1 + 56);
      *(_BYTE *)(v14 + 41) = a3;
      v15 = *(_DWORD *)(v14 + 40) & 0xFFFFFFF7;
      *(_QWORD *)(v14 + 24) = v13;
      *(_BYTE *)v14 = 21;
      *(_DWORD *)(v14 + 40) = v15 ^ (a4 ^ (unsigned __int8)v15) & 7;
      DmaBuffer = NvmeControllerProcessCommandSync(*(_QWORD *)(a1 + 16), ExtendedCommand, 0);
    }
  }
  else
  {
    DmaBuffer = -1073741670;
  }
  NvmeControllerReclaimExtendedCommand(*(_QWORD *)(a1 + 16), ExtendedCommand);
  if ( (_QWORD)v18 )
    NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), v9, v16, v18, *((__int64 *)&v18 + 1));
  return (unsigned int)DmaBuffer;
}
