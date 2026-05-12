/*
 * XREFs of NvmeControllerSetIoQueueCount @ 0x1400C9FFC
 * Callers:
 *     NvmeControllerInitPhase2 @ 0x1400EFCD4 (NvmeControllerInitPhase2.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetInterruptMessageCount @ 0x1400C8FB0 (NvmeControllerGetInterruptMessageCount.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerSetIoQueueCount(_WORD *a1, __int64 a2, char a3)
{
  __int64 v5; // rcx
  unsigned int InterruptMessageCount; // edi
  char v7; // dl
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // di
  __int64 v10; // rcx
  unsigned __int16 v11; // dx
  __int16 v12; // ax
  __int64 ExtendedCommand; // rax
  __int64 v14; // r14
  int v15; // ebx
  _QWORD *v16; // rdx
  __int64 v17; // rax

  InterruptMessageCount = NvmeControllerGetInterruptMessageCount((__int64)a1);
  if ( v7 )
  {
    v8 = *(_WORD *)(v5 + 22);
    v9 = *(_WORD *)(v5 + 26);
  }
  else
  {
    v8 = *((_WORD *)g_CpuInfo + 4);
    if ( InterruptMessageCount <= 1 )
      v9 = 1;
    else
      v9 = InterruptMessageCount - 1;
    v10 = *(_QWORD *)(v5 + 1048);
    if ( v10 )
    {
      if ( *(_WORD *)(v10 + 8) )
      {
        v8 = *(_WORD *)(v10 + 8);
      }
      else if ( (*(_DWORD *)(v10 + 24) & 0x400000) != 0 )
      {
        v8 *= 2;
      }
      v11 = *(_WORD *)(v10 + 10);
      if ( !v11 )
        v11 = v9;
      v9 = v11;
      if ( *(_DWORD *)(v10 + 92) )
      {
        v12 = *(_WORD *)(v10 + 92);
        v8 += v12;
        v9 = v11 + v12;
      }
    }
    if ( v8 <= v9 )
      v8 = v9;
  }
  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  v14 = ExtendedCommand;
  if ( !ExtendedCommand )
  {
    v15 = -1073741670;
LABEL_20:
    a1[11] = 0;
    a1[13] = 0;
    goto LABEL_21;
  }
  a1[14] = v8;
  a1[15] = v9;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^ (unsigned __int8)(a3 << 6)) & 0x40;
  v16 = (_QWORD *)ExtendedCommand;
  *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerSetIoQueueCountCompletion;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
  v17 = *(_QWORD *)ExtendedCommand;
  *(_BYTE *)(v17 + 4096) = 9;
  *(_BYTE *)(v17 + 4136) = 7;
  *(_WORD *)(v17 + 4140) = v8 - 1;
  *(_WORD *)(v17 + 4142) = v9 - 1;
  v15 = NvmeControllerProcessCommandSync((__int64)a1, v16, a3);
  if ( v15 < 0 )
    goto LABEL_20;
LABEL_21:
  NvmeControllerReclaimExtendedCommand(a1, v14);
  return (unsigned int)v15;
}
