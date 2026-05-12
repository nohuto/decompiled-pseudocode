/*
 * XREFs of NvmeControllerGetHealthInfoLog @ 0x1400C7EF4
 * Callers:
 *     StorpTelemetrySendNvmeControllerHealthInfo @ 0x1400BA758 (StorpTelemetrySendNvmeControllerHealthInfo.c)
 *     NvmeControllerInitPhase3 @ 0x1400F0108 (NvmeControllerInitPhase3.c)
 *     ScsiModeSenseRequest @ 0x140115C18 (ScsiModeSenseRequest.c)
 *     NvmeNamespaceDiskIsWritableIoctl @ 0x1401A4090 (NvmeNamespaceDiskIsWritableIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     BuildGetLogPageCommand @ 0x1400BE764 (BuildGetLogPageCommand.c)
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerGetHealthInfoLog(_QWORD *a1, char a2)
{
  __int64 v4; // r8
  __int64 *ExtendedCommand; // r14
  int v7; // esi
  unsigned int v8; // r8d
  __int64 Pool; // rax
  _OWORD *v10; // rdi
  __int64 v11; // rcx
  _OWORD *v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm1
  int v15; // r8d
  __int128 Source2; // [rsp+50h] [rbp-28h] BYREF

  Source2 = 0LL;
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  v7 = NvmeAllocateDmaBuffer(a1, 512LL, v4, &Source2, (char *)&Source2 + 8, 0);
  if ( v7 >= 0 )
  {
    if ( a1[158]
      || (Pool = RaidAllocatePool(64LL, 512LL, 1380147538LL, *(_QWORD *)(a1[16] + 8LL)), (a1[158] = Pool) != 0LL) )
    {
      LOBYTE(v8) = 2;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
      *(_DWORD *)(*ExtendedCommand + 4256) ^= ((unsigned __int8)*(_DWORD *)(*ExtendedCommand + 4256) ^ (unsigned __int8)(a2 << 6)) & 0x40;
      *(_WORD *)(*ExtendedCommand + 4252) = 0;
      *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
      *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
      *(_OWORD *)(*ExtendedCommand + 4160) = Source2;
      *(_DWORD *)(*ExtendedCommand + 4248) = 512;
      BuildGetLogPageCommand(
        (__int64)a1,
        *ExtendedCommand + 4096,
        v8,
        0x200u,
        *((__int64 *)&Source2 + 1),
        -1,
        0LL,
        0,
        *ExtendedCommand,
        ExtendedCommand[1]);
      v7 = NvmeControllerProcessCommandSync((__int64)a1, ExtendedCommand, a2);
      if ( v7 >= 0 )
      {
        v10 = (_OWORD *)Source2;
        if ( (_QWORD)Source2 )
        {
          if ( RtlCompareMemory(&unk_140157020, (const void *)Source2, 0x200uLL) == 512 )
            a1[17] |= 0x400000uLL;
          v11 = *(unsigned __int8 *)v10;
          v10 = (_OWORD *)Source2;
          a1[17] = (v11 << 25) ^ (a1[17] ^ (v11 << 25)) & 0xFFFFFFFFEFFFFFFFuLL;
        }
        v12 = (_OWORD *)a1[158];
        v13 = 4LL;
        do
        {
          *v12 = *v10;
          v12[1] = v10[1];
          v12[2] = v10[2];
          v12[3] = v10[3];
          v12[4] = v10[4];
          v12[5] = v10[5];
          v12[6] = v10[6];
          v12 += 8;
          v14 = v10[7];
          v10 += 8;
          *(v12 - 1) = v14;
          --v13;
        }
        while ( v13 );
      }
    }
    else
    {
      v7 = -1073741670;
    }
  }
  a1[17] |= 0x200000uLL;
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer((_DWORD)a1, 512, v15, Source2, *((__int64 *)&Source2 + 1));
  return (unsigned int)v7;
}
