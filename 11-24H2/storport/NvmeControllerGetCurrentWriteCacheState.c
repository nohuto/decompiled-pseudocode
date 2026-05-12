/*
 * XREFs of NvmeControllerGetCurrentWriteCacheState @ 0x1400C8B78
 * Callers:
 *     NvmeControllerInitPhase3 @ 0x1400F0108 (NvmeControllerInitPhase3.c)
 *     NvmeNamespaceDiskGetCacheInformationIoctl @ 0x1401A3CA0 (NvmeNamespaceDiskGetCacheInformationIoctl.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerGetCurrentWriteCacheState(__int64 a1, char a2)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 ExtendedCommand; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rax

  v4 = 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 525LL) & 1) != 0 )
  {
    ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
    v4 = ExtendedCommand;
    if ( ExtendedCommand )
    {
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)ExtendedCommand
                                                                                      + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
      v7 = (_QWORD *)ExtendedCommand;
      *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerGetCurrentWriteCacheStateCompletion;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
      v8 = *(_QWORD *)ExtendedCommand;
      *(_BYTE *)(v8 + 4136) = 6;
      *(_DWORD *)(v8 + 4136) &= 0xFFFFF8FF;
      *(_BYTE *)(v8 + 4096) = 10;
      v5 = NvmeControllerProcessCommandSync(a1, v7, a2);
    }
    else
    {
      v5 = -1073741670;
    }
  }
  else
  {
    v5 = -1073741637;
  }
  NvmeControllerReclaimExtendedCommand(a1, v4);
  return v5;
}
