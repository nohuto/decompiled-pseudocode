/*
 * XREFs of NvmeControllerCheckOCPCompliance @ 0x1400EB71C
 * Callers:
 *     NvmeControllerInitPhase3 @ 0x1400F0108 (NvmeControllerInitPhase3.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1400BE764 (BuildGetLogPageCommand.c)
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeControllerCheckOCPCompliance(__int64 a1, char a2)
{
  __int64 *ExtendedCommand; // rdi
  __int64 v5; // r8
  int DmaBuffer; // esi
  unsigned int v8; // r8d
  __int64 v9; // rcx
  int v10; // r8d
  __int128 v11; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+60h] [rbp-20h]
  unsigned __int64 v13; // [rsp+68h] [rbp-18h]

  *(_QWORD *)(a1 + 136) &= ~0x100000uLL;
  v11 = 0LL;
  *(_BYTE *)(a1 + 945) = 0;
  v12 = 0xA4F2BFEA2810AFC5uLL;
  v13 = 0xAFD514C97C6F4F9CuLL;
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  DmaBuffer = NvmeAllocateDmaBuffer(a1, 0x200u, v5, (void **)&v11, (_QWORD *)&v11 + 1, 0);
  if ( DmaBuffer >= 0 )
  {
    LOBYTE(v8) = -64;
    *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
    *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
    *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
    *(_DWORD *)(*ExtendedCommand + 4256) ^= ((unsigned __int8)*(_DWORD *)(*ExtendedCommand + 4256) ^ (unsigned __int8)(a2 << 6)) & 0x40;
    *(_WORD *)(*ExtendedCommand + 4252) = 0;
    *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
    *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
    *(_OWORD *)(*ExtendedCommand + 4160) = v11;
    *(_DWORD *)(*ExtendedCommand + 4248) = 512;
    BuildGetLogPageCommand(
      a1,
      *ExtendedCommand + 4096,
      v8,
      0x200u,
      *((__int64 *)&v11 + 1),
      -1,
      0LL,
      0,
      *ExtendedCommand,
      ExtendedCommand[1]);
    DmaBuffer = NvmeControllerProcessCommandSync(a1, ExtendedCommand, a2);
    if ( DmaBuffer >= 0 )
    {
      v9 = v11;
      if ( (_QWORD)v11 )
      {
        if ( *(_QWORD *)(v11 + 496) == v12 && *(_QWORD *)(v11 + 504) == v13 )
        {
          *(_QWORD *)(a1 + 136) |= 0x100000uLL;
          *(_BYTE *)(a1 + 945) = *(_BYTE *)(v9 + 103);
        }
      }
    }
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer(a1, 512, v10, v11, *((__int64 *)&v11 + 1));
  return (unsigned int)DmaBuffer;
}
