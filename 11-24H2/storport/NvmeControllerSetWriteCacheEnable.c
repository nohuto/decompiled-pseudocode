/*
 * XREFs of NvmeControllerSetWriteCacheEnable @ 0x1400CA614
 * Callers:
 *     NvmeControllerInitPhase3 @ 0x1400F0108 (NvmeControllerInitPhase3.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerSetWriteCacheEnable(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  __int64 ExtendedCommand; // rax
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int v10; // eax

  v2 = 0;
  v5 = 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 525LL) & 1) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 1096);
    if ( (v6 & 2) != 0
      && (v6 & 4) == 0
      && (((unsigned __int8)v6 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(a1 + 136) >> 19)) & 1) != 0 )
    {
      ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
      v5 = (_QWORD *)ExtendedCommand;
      if ( ExtendedCommand )
      {
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)ExtendedCommand
                                                                                        + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
        *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerSetWriteCacheEnableCompletion;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
        v8 = *(_QWORD *)ExtendedCommand;
        v9 = *(_QWORD *)(a1 + 1096) & 1;
        v10 = *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4140LL) & 0xFFFFFFFE;
        *(_BYTE *)(v8 + 4096) = 9;
        *(_BYTE *)(v8 + 4136) = 6;
        *(_DWORD *)(v8 + 4140) = v9 | v10;
        v2 = NvmeControllerProcessCommandSync(a1, v5, a2);
      }
      else
      {
        v2 = -1073741670;
      }
    }
  }
  else
  {
    v2 = -1073741637;
  }
  NvmeControllerReclaimExtendedCommand(a1, v5);
  return v2;
}
