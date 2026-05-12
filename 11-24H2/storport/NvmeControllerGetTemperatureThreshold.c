/*
 * XREFs of NvmeControllerGetTemperatureThreshold @ 0x1400C8FE0
 * Callers:
 *     NvmeControllerInitPhase3 @ 0x1400F0108 (NvmeControllerInitPhase3.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1400C8438 (BuildGetFeaturesTemperatureThresholdCommand.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerGetTemperatureThreshold(__int64 a1, char a2)
{
  __int64 ExtendedCommand; // rax
  _QWORD *v5; // rdi
  unsigned int v7; // ebx

  *(_WORD *)(a1 + 56) = -1;
  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  v5 = (_QWORD *)ExtendedCommand;
  if ( !ExtendedCommand )
    return 3221225626LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
  *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerGetTemperatureThresholdCompletion;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
  BuildGetFeaturesTemperatureThresholdCommand(*(_QWORD *)ExtendedCommand + 4096LL, 0, 0);
  v7 = NvmeControllerProcessCommandSync(a1, v5, a2);
  NvmeControllerReclaimExtendedCommand(a1, v5);
  return v7;
}
