/*
 * XREFs of NvmeControllerGetCloudSSDErrorRecoveryLog @ 0x1400C74E4
 * Callers:
 *     NvmeControllerInitPhase3 @ 0x1400F0108 (NvmeControllerInitPhase3.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     BuildGetLogPageCommand @ 0x1400BE764 (BuildGetLogPageCommand.c)
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeControllerGetCloudSSDErrorRecoveryLog(__int64 a1, char a2)
{
  __int64 v4; // r8
  __int64 *ExtendedCommand; // r14
  int v7; // esi
  unsigned int v8; // r8d
  __int64 v9; // rdi
  __int64 Pool; // rax
  int v11; // r8d
  _OWORD *v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+68h] [rbp-18h]

  v15 = 0LL;
  v16 = 0xAE3430FE2131D944uLL;
  v17 = 0x5A1983BA3DFD4DABLL;
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  v7 = NvmeAllocateDmaBuffer(a1, 512LL, v4, &v15, (char *)&v15 + 8, 0);
  if ( v7 >= 0 )
  {
    v9 = v15;
    if ( *(_QWORD *)(a1 + 1240)
      || (Pool = RaidAllocatePool(64LL, 512LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL)),
          (*(_QWORD *)(a1 + 1240) = Pool) != 0LL) )
    {
      LOBYTE(v8) = -63;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
      *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
      *(_DWORD *)(*ExtendedCommand + 4256) ^= ((unsigned __int8)*(_DWORD *)(*ExtendedCommand + 4256) ^ (unsigned __int8)(a2 << 6)) & 0x40;
      *(_WORD *)(*ExtendedCommand + 4252) = 0;
      *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
      *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
      *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
      *(_OWORD *)(*ExtendedCommand + 4160) = v15;
      *(_DWORD *)(*ExtendedCommand + 4248) = 512;
      BuildGetLogPageCommand(
        a1,
        *ExtendedCommand + 4096,
        v8,
        0x200u,
        *((__int64 *)&v15 + 1),
        -1,
        0LL,
        0,
        *ExtendedCommand,
        ExtendedCommand[1]);
      v7 = NvmeControllerProcessCommandSync(a1, ExtendedCommand, a2);
      if ( v7 >= 0 && *(_QWORD *)(v9 + 496) == v16 && *(_QWORD *)(v9 + 504) == v17 )
      {
        v12 = *(_OWORD **)(a1 + 1240);
        v13 = 4LL;
        do
        {
          *v12 = *(_OWORD *)v9;
          v12[1] = *(_OWORD *)(v9 + 16);
          v12[2] = *(_OWORD *)(v9 + 32);
          v12[3] = *(_OWORD *)(v9 + 48);
          v12[4] = *(_OWORD *)(v9 + 64);
          v12[5] = *(_OWORD *)(v9 + 80);
          v12[6] = *(_OWORD *)(v9 + 96);
          v12 += 8;
          v14 = *(_OWORD *)(v9 + 112);
          v9 += 128LL;
          *(v12 - 1) = v14;
          --v13;
        }
        while ( v13 );
        goto LABEL_8;
      }
    }
    else
    {
      v7 = -1073741670;
    }
  }
  ExFreePoolWithTag(*(PVOID *)(a1 + 1240), 0x52436152u);
  *(_QWORD *)(a1 + 136) |= 0x1000000uLL;
  *(_QWORD *)(a1 + 1240) = 0LL;
LABEL_8:
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer(a1, 512, v11, v15, *((__int64 *)&v15 + 1));
  return (unsigned int)v7;
}
