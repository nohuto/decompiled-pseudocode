/*
 * XREFs of NvmeAdapterGetTemperatureProperty @ 0x14019A77C
 * Callers:
 *     NvmeAdapterStorageQueryProperty @ 0x14019D454 (NvmeAdapterStorageQueryProperty.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1400BE764 (BuildGetLogPageCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeAdapterGetTemperatureProperty(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  _DWORD *v8; // rcx
  int v10; // edx
  unsigned int v11; // eax
  PHYSICAL_ADDRESS *ExtendedCommand; // rdi
  __int64 v13; // r8
  int DmaBuffer; // r15d
  unsigned int v15; // r8d
  __int128 v16; // [rsp+50h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a2[23];
  v16 = 0LL;
  if ( a3 )
    *a3 = 1;
  v8 = (_DWORD *)a2[3];
  a2[7] = 0LL;
  if ( !v8 )
    return 3221225485LL;
  v10 = v8[1];
  if ( v10 )
  {
    if ( v10 == 1 )
      return 0LL;
    else
      return 3221225659LL;
  }
  v11 = *(_DWORD *)(v5 + 8);
  if ( v11 < 0x28 )
  {
    if ( v11 < 8 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      *v8 = 40;
      v8[1] = 40;
      a2[7] = 8LL;
    }
    return v4;
  }
  ExtendedCommand = NvmeControllerGetExtendedCommand(*(union _SLIST_HEADER **)(a1 + 1136));
  if ( !ExtendedCommand )
  {
    DmaBuffer = -1073741670;
LABEL_22:
    if ( (_QWORD)v16 )
      NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 1136), 0x200u, v13, v16, *((__int64 *)&v16 + 1));
    return (unsigned int)DmaBuffer;
  }
  DmaBuffer = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 1136), 0x200u, v13, (void **)&v16, (_QWORD *)&v16 + 1, 0);
  if ( DmaBuffer < 0 )
    goto LABEL_21;
  LOBYTE(v15) = 2;
  *(_DWORD *)(ExtendedCommand->QuadPart + 4256) |= 1u;
  *(_DWORD *)(ExtendedCommand->QuadPart + 4256) |= 0x20u;
  *(_DWORD *)(ExtendedCommand->QuadPart + 4256) |= 2u;
  *(_DWORD *)(ExtendedCommand->QuadPart + 4256) &= ~0x40u;
  *(_WORD *)(ExtendedCommand->QuadPart + 4252) = 0;
  *(_QWORD *)(ExtendedCommand->QuadPart + 4184) = a2;
  *(_QWORD *)(ExtendedCommand->QuadPart + 4224) = a1;
  *(_QWORD *)(ExtendedCommand->QuadPart + 4192) = NvmeGetStorageTemperaturePropertyComplete;
  *(_QWORD *)(ExtendedCommand->QuadPart + 4200) = ExtendedCommand;
  *(_OWORD *)(ExtendedCommand->QuadPart + 4160) = v16;
  *(_DWORD *)(ExtendedCommand->QuadPart + 4248) = 512;
  BuildGetLogPageCommand(
    *(_QWORD *)(a1 + 1136),
    ExtendedCommand->QuadPart + 4096,
    v15,
    0x200u,
    *((__int64 *)&v16 + 1),
    -1,
    0LL,
    0,
    ExtendedCommand->QuadPart,
    ExtendedCommand[1].QuadPart);
  DmaBuffer = NvmeControllerProcessCommand(*(_QWORD *)(a1 + 1136), ExtendedCommand);
  if ( DmaBuffer < 0 )
  {
LABEL_21:
    _interlockedbittestandreset((volatile signed __int32 *)(ExtendedCommand->QuadPart + 4256), 3u);
    NvmeControllerReclaimExtendedCommand(*(union _SLIST_HEADER **)(a1 + 1136), (__int64)ExtendedCommand);
    goto LABEL_22;
  }
  if ( a3 )
    *a3 = 0;
  return 259LL;
}
