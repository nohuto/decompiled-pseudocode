/*
 * XREFs of NvmeControllerBuildIoPollingConfiguration @ 0x1400C84AC
 * Callers:
 *     NvmeControllerInitPhase1 @ 0x1400EF9D4 (NvmeControllerInitPhase1.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerBuildIoPollingConfiguration(__int64 a1)
{
  _QWORD *ExtendedCommand; // rdi
  __int64 v3; // r8
  int v4; // ebp
  __int64 *v5; // rbx
  int v6; // r8d
  __int64 result; // rax
  _BYTE *v8; // rcx
  unsigned __int8 v9; // dl
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // r8
  __int16 v15; // cx
  __int16 v16; // cx
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF

  v17 = 0LL;
  ExtendedCommand = (_QWORD *)NvmeControllerGetExtendedCommand(a1);
  if ( ExtendedCommand )
  {
    v4 = NvmeAllocateDmaBuffer(a1, 4096LL, v3, &v17, (char *)&v17 + 8, 0);
    if ( v4 >= 0 )
    {
      *(_DWORD *)(*ExtendedCommand + 4256LL) |= 1u;
      *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x20u;
      *(_DWORD *)(*ExtendedCommand + 4256LL) &= ~2u;
      *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x40u;
      *(_WORD *)(*ExtendedCommand + 4252LL) = 0;
      *(_QWORD *)(*ExtendedCommand + 4184LL) = 0LL;
      *(_OWORD *)(*ExtendedCommand + 4160LL) = v17;
      *(_DWORD *)(*ExtendedCommand + 4248LL) = 4096;
      *(_QWORD *)(*ExtendedCommand + 4192LL) = NvmeControllerBuildIoPollingConfigurationCompletion;
      *(_QWORD *)(*ExtendedCommand + 4200LL) = ExtendedCommand;
      v11 = *ExtendedCommand;
      v12 = *((_QWORD *)&v17 + 1);
      *(_BYTE *)(v11 + 4096) = 10;
      *(_QWORD *)(v11 + 4120) = v12;
      *(_BYTE *)(v11 + 4136) = -48;
      v4 = NvmeControllerProcessCommandSync(a1, ExtendedCommand, 1);
      if ( v4 >= 0 )
      {
        v5 = (__int64 *)(a1 + 1736);
        goto LABEL_4;
      }
    }
  }
  else
  {
    v4 = -1073741670;
  }
  v5 = (__int64 *)(a1 + 1736);
  **(_BYTE **)(a1 + 1736) = 0;
LABEL_4:
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  result = NvmeFreeDmaBuffer(a1, 4096, v6, v17, *((__int64 *)&v17 + 1));
  if ( !*(_BYTE *)*v5 )
  {
    result = *(_QWORD *)(a1 + 1048);
    if ( *(_BYTE *)(result + 32) )
      *(_BYTE *)*v5 = 1;
  }
  v8 = (_BYTE *)*v5;
  if ( *(_BYTE *)*v5 )
  {
    v9 = v8[24];
    if ( v9 )
    {
      v5 = (__int64 *)(a1 + 1736);
      v10 = v8[24];
      if ( v9 > 0x64u )
        v10 = 100;
    }
    else
    {
      v10 = *(_BYTE *)(*(_QWORD *)(a1 + 1048) + 32LL);
    }
    v8[4] = v10;
    v13 = *(_DWORD *)(*v5 + 28);
    if ( !v13 )
      v13 = *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 44LL);
    *(_DWORD *)(*v5 + 8) = v13;
    v14 = *v5;
    result = *(unsigned int *)(*v5 + 32);
    if ( (result & 1) != 0 )
    {
      *(_DWORD *)(v14 + 12) = result;
    }
    else
    {
      *(_DWORD *)(v14 + 12) ^= ((unsigned __int8)*(_DWORD *)(v14 + 12) ^ (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(a1 + 1048) + 76LL) >> 1)) & 2;
      *(_DWORD *)(*v5 + 12) ^= ((unsigned __int8)*(_DWORD *)(*v5 + 12) ^ (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(a1 + 1048) + 76LL) >> 1)) & 4;
      *(_DWORD *)(*v5 + 12) ^= ((unsigned __int8)*(_DWORD *)(*v5 + 12) ^ (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(a1 + 1048) + 76LL) >> 1)) & 8;
      *(_DWORD *)(*v5 + 12) ^= ((unsigned __int8)*(_DWORD *)(*v5 + 12) ^ (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(a1 + 1048) + 76LL) >> 1)) & 0x10;
      *(_DWORD *)(*v5 + 12) ^= ((unsigned __int8)*(_DWORD *)(*v5 + 12) ^ (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(a1 + 1048) + 76LL) >> 1)) & 0x20;
      *(_DWORD *)(*v5 + 12) ^= ((unsigned __int8)*(_DWORD *)(*v5 + 12) ^ (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(a1 + 1048) + 76LL) >> 1)) & 0x40;
      result = *(_QWORD *)(a1 + 1048);
      *(_DWORD *)(*v5 + 12) ^= ((unsigned __int8)*(_DWORD *)(*v5 + 12) ^ (unsigned __int8)(*(_DWORD *)(result + 76) >> 1)) & 0x80;
    }
  }
  if ( v4 >= 0 )
  {
    result = *v5;
    if ( *(_WORD *)(*v5 + 20) >= 0x101u )
    {
      v15 = *(_WORD *)(result + 36);
      if ( v15 )
      {
        *(_WORD *)(result + 16) = v15;
        *(_DWORD *)(*(_QWORD *)(a1 + 128) + 1092LL) = *(unsigned __int16 *)(*v5 + 16);
      }
      result = *v5;
      v16 = *(_WORD *)(*v5 + 38);
      if ( v16 )
        *(_WORD *)(result + 18) = v16;
    }
  }
  return result;
}
