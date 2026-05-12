/*
 * XREFs of NvmeControllerSetHostMemoryBuffer @ 0x1400C9C40
 * Callers:
 *     NvmeControllerInitHostMemoryBuffer @ 0x1400EF734 (NvmeControllerInitHostMemoryBuffer.c)
 *     NvmeControllerPowerDown @ 0x1400F2358 (NvmeControllerPowerDown.c)
 *     NvmeFreeHostMemoryBuffer @ 0x1400F8BE0 (NvmeFreeHostMemoryBuffer.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall NvmeControllerSetHostMemoryBuffer(
        __int64 a1,
        char a2,
        unsigned __int8 a3,
        char a4,
        unsigned int a5,
        void *Src,
        size_t Size)
{
  int v8; // r13d
  _QWORD *ExtendedCommand; // rsi
  __int64 v13; // r8
  int DmaBuffer; // ebx
  __int64 v15; // r14
  int v16; // eax
  unsigned int v17; // r8d
  unsigned int v18; // eax
  int v19; // r8d
  void *v20[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = a3;
  *(_OWORD *)v20 = 0LL;
  if ( !a5 )
    return 3221225485LL;
  ExtendedCommand = (_QWORD *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer(a1, 4096LL, v13, v20, &v20[1], 0);
  if ( DmaBuffer >= 0 )
  {
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) |= 2u;
    *(_DWORD *)(*ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*ExtendedCommand + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
    *(_WORD *)(*ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*ExtendedCommand + 4184LL) = 0LL;
    *(_QWORD *)(*ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*ExtendedCommand + 4200LL) = ExtendedCommand;
    *(void **)(*ExtendedCommand + 4160LL) = v20[0];
    *(void **)(*ExtendedCommand + 4168LL) = v20[1];
    *(_DWORD *)(*ExtendedCommand + 4248LL) = 4096;
    v15 = *ExtendedCommand + 4096LL;
    v16 = *(_DWORD *)(*ExtendedCommand + 4140LL);
    *(_BYTE *)v15 = 9;
    *(_BYTE *)(v15 + 40) = 13;
    *(_DWORD *)(v15 + 44) = v16 ^ (v16 ^ v8) & 1 ^ ((unsigned __int8)(v16 ^ (v16 ^ v8) & 1) ^ (unsigned __int8)(2 * a4)) & 2;
    v17 = 1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 920) + 20LL) >> 7) & 0xF) + 12);
    if ( a5 % v17 )
    {
      DmaBuffer = -1073741811;
    }
    else
    {
      *(_DWORD *)(v15 + 48) = a5 / v17;
      memmove(v20[0], Src, (unsigned int)Size);
      v18 = (__int64)v20[1] & 0xFFFFFFF0;
      *(_DWORD *)(v15 + 56) = HIDWORD(v20[1]);
      *(_DWORD *)(v15 + 52) = v18;
      *(_DWORD *)(v15 + 60) = (unsigned int)Size >> 4;
      DmaBuffer = NvmeControllerProcessCommandSync(a1, ExtendedCommand, a2);
    }
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer(a1, 4096, v19, v20[0], (__int64)v20[1]);
  return (unsigned int)DmaBuffer;
}
