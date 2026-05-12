/*
 * XREFs of NvmeControllerGetTelemetryLog @ 0x1400EEEB0
 * Callers:
 *     NvmeControllerGetDeviceInternalLogIoctl @ 0x14019EAD8 (NvmeControllerGetDeviceInternalLogIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x1400DD520 (BuildGetLogPageCommandForTelemetryLog.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeControllerReuseExtendedCommand @ 0x140129C4C (NvmeControllerReuseExtendedCommand.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall NvmeControllerGetTelemetryLog(__int64 a1, char a2, char a3, unsigned int *a4, _QWORD *a5)
{
  __int64 v5; // rax
  __int64 v6; // r15
  char v8; // r12
  unsigned int v10; // r13d
  __int64 *ExtendedCommand; // rdi
  int v12; // ebx
  __int64 v13; // r8
  int DmaBuffer; // eax
  unsigned int v15; // r8d
  unsigned int v16; // r14d
  unsigned int v17; // r14d
  _OWORD *Pool; // rax
  _BYTE *v19; // r15
  _OWORD *v20; // rcx
  __int64 v21; // rdx
  __int128 v22; // xmm1
  unsigned int v23; // r8d
  unsigned int v24; // edx
  unsigned int v25; // r8d
  unsigned int v26; // r12d
  unsigned int v27; // r12d
  bool v28; // zf
  int v29; // r8d
  int v30; // r8d
  int v32; // [rsp+30h] [rbp-59h]
  int v33; // [rsp+30h] [rbp-59h]
  int v34; // [rsp+40h] [rbp-49h]
  int v35; // [rsp+40h] [rbp-49h]
  unsigned int v36; // [rsp+68h] [rbp-21h]
  __int64 v37; // [rsp+68h] [rbp-21h]
  __int128 v38; // [rsp+70h] [rbp-19h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-9h] BYREF
  int v40; // [rsp+E8h] [rbp+5Fh]

  v5 = *(_QWORD *)(a1 + 128);
  v6 = *(_QWORD *)(a1 + 592);
  *(_OWORD *)Src = 0LL;
  v8 = a2;
  v38 = 0LL;
  v28 = (*(_BYTE *)(v6 + 261) & 8) == 0;
  v10 = 0;
  v36 = *(_DWORD *)(v5 + 200);
  ExtendedCommand = 0LL;
  *a4 = 0;
  *a5 = 0LL;
  if ( v28 )
  {
    v12 = -1073741637;
    goto LABEL_36;
  }
  ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a1);
  if ( !ExtendedCommand )
  {
LABEL_4:
    v12 = -1073741670;
    goto LABEL_36;
  }
  DmaBuffer = NvmeAllocateDmaBuffer(a1, 0x200u, v13, (void **)&v38, (_QWORD *)&v38 + 1, 0);
  v15 = 0;
  v12 = DmaBuffer;
  if ( DmaBuffer >= 0 )
  {
    *(_DWORD *)(*ExtendedCommand + 4256) |= 1u;
    *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
    *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
    *(_DWORD *)(*ExtendedCommand + 4256) &= ~0x40u;
    *(_WORD *)(*ExtendedCommand + 4252) = 0;
    *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
    *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
    *(_OWORD *)(*ExtendedCommand + 4160) = v38;
    *(_DWORD *)(*ExtendedCommand + 4248) = 512;
    LOBYTE(v15) = v8;
    BuildGetLogPageCommandForTelemetryLog(
      a1,
      *ExtendedCommand + 4096,
      v15,
      0x200u,
      *((__int64 *)&v38 + 1),
      v32,
      0LL,
      v34,
      *ExtendedCommand,
      ExtendedCommand[1],
      1u);
    v12 = NvmeControllerProcessCommandSync(a1, ExtendedCommand, 0);
    if ( v12 >= 0 )
    {
      if ( a3 )
      {
        v16 = 512;
      }
      else
      {
        v17 = *(unsigned __int16 *)(v38 + 12);
        if ( (*(_BYTE *)(v6 + 261) & 0x40) != 0 && v17 <= *(_DWORD *)(v38 + 16) )
          v17 = *(_DWORD *)(v38 + 16);
        v16 = (v17 + 1) << 9;
      }
      Pool = (_OWORD *)RaidAllocatePool(64LL, v16, 1280205138LL, 0LL);
      v19 = Pool;
      if ( !Pool )
        goto LABEL_4;
      v20 = (_OWORD *)v38;
      v21 = 4LL;
      do
      {
        *Pool = *v20;
        Pool[1] = v20[1];
        Pool[2] = v20[2];
        Pool[3] = v20[3];
        Pool[4] = v20[4];
        Pool[5] = v20[5];
        Pool[6] = v20[6];
        Pool += 8;
        v22 = v20[7];
        v20 += 8;
        *(Pool - 1) = v22;
        --v21;
      }
      while ( v21 );
      if ( !a3 )
      {
        v10 = v36;
        v40 = 512;
        if ( v16 - 512 < v36 )
          v10 = v16 - 512;
        v12 = NvmeAllocateDmaBuffer(a1, v10, 128LL, Src, &Src[1], v21);
        if ( v12 < 0 )
          goto LABEL_34;
        if ( v16 > 0x200 )
        {
          v24 = 512;
          while ( 1 )
          {
            v25 = v24;
            v37 = v24;
            v26 = v10;
            if ( v16 - v24 < v10 )
              v26 = v16 - v24;
            *(void **)(*ExtendedCommand + 4160) = Src[0];
            v27 = v26 & 0xFFFFFE00;
            *(void **)(*ExtendedCommand + 4168) = Src[1];
            *(_DWORD *)(*ExtendedCommand + 4248) = v27;
            LOBYTE(v25) = a2;
            BuildGetLogPageCommandForTelemetryLog(
              a1,
              *ExtendedCommand + 4096,
              v25,
              v27,
              (__int64)Src[1],
              v33,
              v24,
              v35,
              *ExtendedCommand,
              ExtendedCommand[1],
              1u);
            v12 = NvmeControllerProcessCommandSync(a1, ExtendedCommand, 0);
            if ( v12 < 0 )
              goto LABEL_34;
            NvmeControllerReuseExtendedCommand(a1, ExtendedCommand);
            memmove(&v19[v37], Src[0], v27);
            v24 = v27 + v40;
            v40 = v24;
            if ( v24 >= v16 )
            {
              v8 = a2;
              break;
            }
          }
        }
        LOBYTE(v23) = v8;
        *(_OWORD *)(*ExtendedCommand + 4160) = v38;
        *(_DWORD *)(*ExtendedCommand + 4248) = 512;
        BuildGetLogPageCommandForTelemetryLog(
          a1,
          *ExtendedCommand + 4096,
          v23,
          0x200u,
          *((__int64 *)&v38 + 1),
          v33,
          0LL,
          v35,
          *ExtendedCommand,
          ExtendedCommand[1],
          0);
        v12 = NvmeControllerProcessCommandSync(a1, ExtendedCommand, 0);
        if ( v12 < 0 )
        {
LABEL_34:
          ExFreePoolWithTag(v19, 0x4C4E6152u);
          goto LABEL_36;
        }
        if ( !*(_BYTE *)(v38 + 382)
          || (!v8 ? (v28 = *(_BYTE *)(v38 + 383) == v19[383]) : (v28 = *(_BYTE *)(v38 + 381) == v19[381]), !v28) )
        {
          v12 = 304;
          goto LABEL_34;
        }
      }
      *a4 = v16;
      *a5 = v19;
    }
  }
LABEL_36:
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  NvmeFreeDmaBuffer(a1, 512, v29, v38, *((__int64 *)&v38 + 1));
  NvmeFreeDmaBuffer(a1, v10, v30, Src[0], (__int64)Src[1]);
  return (unsigned int)v12;
}
