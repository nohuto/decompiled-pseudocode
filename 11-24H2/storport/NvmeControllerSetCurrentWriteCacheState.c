/*
 * XREFs of NvmeControllerSetCurrentWriteCacheState @ 0x1400C95A0
 * Callers:
 *     ScsiModeSelectRequest @ 0x140115AE8 (ScsiModeSelectRequest.c)
 *     NvmeNamespaceDiskSetCacheInformationIoctl @ 0x1401A443C (NvmeNamespaceDiskSetCacheInformationIoctl.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     BuildSetFeaturesCacheCommand @ 0x1400C847C (BuildSetFeaturesCacheCommand.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerSetCurrentWriteCacheState(__int64 a1, char a2)
{
  _QWORD *v4; // rbx
  unsigned int v5; // esi
  __int64 ExtendedCommand; // rax

  v4 = 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 525LL) & 1) != 0 )
  {
    ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
    v4 = (_QWORD *)ExtendedCommand;
    if ( ExtendedCommand )
    {
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~0x40u;
      *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerSetCurrentWriteCacheStateCompletion;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
      BuildSetFeaturesCacheCommand(*(_QWORD *)ExtendedCommand + 4096LL, a2, (*(_BYTE *)(a1 + 1096) & 4) != 0);
      v5 = NvmeControllerProcessCommandSync(a1, v4, 0);
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
