/*
 * XREFs of NvmeGetNamespaceIoCommandSetIdentify @ 0x1400F90FC
 * Callers:
 *     NvmeControllerInitPhase1 @ 0x1400EF9D4 (NvmeControllerInitPhase1.c)
 * Callees:
 *     BuildIdentifyCommandGeneric @ 0x1400BE880 (BuildIdentifyCommandGeneric.c)
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeControllerGetNamespace @ 0x1400EEC74 (NvmeControllerGetNamespace.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeGetNamespaceIoCommandSetIdentify(__int64 a1)
{
  _QWORD *ExtendedCommand; // rdi
  __int64 v3; // r8
  int DmaBuffer; // ebp
  unsigned int v6; // ecx
  unsigned int v7; // esi
  __int64 v8; // r14
  __int64 Namespace; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // [rsp+20h] [rbp-58h]
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF

  v13 = 0LL;
  ExtendedCommand = (_QWORD *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer(a1, 0x1000u, v3, (void **)&v13, (_QWORD *)&v13 + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    v6 = *(_DWORD *)(a1 + 656);
    if ( v6 )
    {
      v7 = 1;
      v8 = v6;
      do
      {
        Namespace = NvmeControllerGetNamespace(a1, v7);
        if ( Namespace )
        {
          if ( (*(_DWORD *)(Namespace + 208) & 0x100) != 0 )
          {
            *(_DWORD *)(*ExtendedCommand + 4256LL) |= 1u;
            *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x20u;
            *(_DWORD *)(*ExtendedCommand + 4256LL) |= 2u;
            *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x40u;
            *(_WORD *)(*ExtendedCommand + 4252LL) = 0;
            *(_QWORD *)(*ExtendedCommand + 4184LL) = 0LL;
            *(_OWORD *)(*ExtendedCommand + 4160LL) = v13;
            *(_DWORD *)(*ExtendedCommand + 4248LL) = 4096;
            *(_QWORD *)(*ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
            *(_QWORD *)(*ExtendedCommand + 4200LL) = ExtendedCommand;
            BuildIdentifyCommandGeneric(a1, *ExtendedCommand + 4096LL, 5, v10, v12, 2, *((__int64 *)&v13 + 1), v7, 0);
            memset_0((void *)v13, 0, 0x1000uLL);
            DmaBuffer = NvmeControllerProcessCommandSync(a1, ExtendedCommand, 1);
          }
        }
        ++v7;
        --v8;
      }
      while ( v8 );
    }
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer(a1, 0x1000u, v11, v13, *((__int64 *)&v13 + 1));
  return (unsigned int)DmaBuffer;
}
