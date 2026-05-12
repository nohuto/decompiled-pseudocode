/*
 * XREFs of NvmeGetNVMSetAttributeList @ 0x1400F8C74
 * Callers:
 *     NvmeControllerInitPhase1 @ 0x1400EF9D4 (NvmeControllerInitPhase1.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall NvmeGetNVMSetAttributeList(_QWORD *a1)
{
  __int64 v1; // rbp
  _QWORD *ExtendedCommand; // rsi
  __int64 v4; // r8
  int DmaBuffer; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int8 *v9; // r14
  __int64 Pool; // rax
  __int64 v11; // r8
  _OWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF

  v1 = a1[74];
  v12[0] = 0LL;
  if ( (*(_DWORD *)(v1 + 96) & 4) == 0 || !*(_WORD *)(v1 + 338) )
    return 3221225659LL;
  ExtendedCommand = (_QWORD *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer((__int64)a1, 0x1000u, v4, (void **)v12, (_QWORD *)v12 + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 2u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x40u;
    *(_WORD *)(*ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*ExtendedCommand + 4184LL) = 0LL;
    *(_OWORD *)(*ExtendedCommand + 4160LL) = v12[0];
    *(_DWORD *)(*ExtendedCommand + 4248LL) = 4096;
    *(_QWORD *)(*ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*ExtendedCommand + 4200LL) = ExtendedCommand;
    v7 = *ExtendedCommand;
    v8 = *((_QWORD *)&v12[0] + 1);
    v9 = *(unsigned __int8 **)&v12[0];
    *(_BYTE *)(v7 + 4096) = 6;
    *(_DWORD *)(v7 + 4100) = 0;
    *(_QWORD *)(v7 + 4120) = v8;
    *(_BYTE *)(v7 + 4136) = 4;
    *(_WORD *)(v7 + 4140) = 1;
    DmaBuffer = NvmeControllerProcessCommandSync((__int64)a1, ExtendedCommand, 1);
    if ( DmaBuffer >= 0 )
    {
      Pool = a1[133];
      if ( Pool
        || (Pool = RaidAllocatePool(
                     64LL,
                     (*(unsigned __int16 *)(v1 + 338) + 1LL) << 7,
                     1380147538LL,
                     *(_QWORD *)(a1[16] + 8LL)),
            (a1[133] = Pool) != 0LL) )
      {
        memmove((void *)(Pool + 128), v9 + 128, (unsigned __int64)*v9 << 7);
      }
      else
      {
        DmaBuffer = -1073741670;
      }
    }
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer((__int64)a1, 0x1000u, v11, *(__int64 *)&v12[0], *((__int64 *)&v12[0] + 1));
  return (unsigned int)DmaBuffer;
}
