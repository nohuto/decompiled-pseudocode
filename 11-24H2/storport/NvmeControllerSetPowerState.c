/*
 * XREFs of NvmeControllerSetPowerState @ 0x1400CA468
 * Callers:
 *     NvmeControllerPowerSetFState @ 0x140132460 (NvmeControllerPowerSetFState.c)
 *     NvmeControllerPowerSetPState @ 0x140132578 (NvmeControllerPowerSetPState.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeControllerGetPowerState @ 0x140132250 (NvmeControllerGetPowerState.c)
 */

__int64 __fastcall NvmeControllerSetPowerState(__int64 a1, unsigned __int8 a2)
{
  __int64 ExtendedCommand; // rax
  _WORD *v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 PowerState; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // ebx

  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  v5 = (_WORD *)ExtendedCommand;
  if ( !ExtendedCommand )
    return 3221225626LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x40u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x800u;
  *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL);
  LOBYTE(v7) = *(_BYTE *)(v7 + 180);
  NvmeControllerGetPowerState(a1, v7);
  LOBYTE(v8) = a2;
  PowerState = NvmeControllerGetPowerState(v9, v8);
  if ( PowerState
    && v11
    && (v12 = *(unsigned int *)(PowerState + 4),
        v13 = *(unsigned int *)(v11 + 8),
        (unsigned __int64)(v12 + v13) <= 0xF4240)
    && (unsigned int)(v13 + v12) >= 0x1E8480 )
  {
    v14 = ((int)v13 + (int)v12) / 0xF4240u;
  }
  else
  {
    LOWORD(v14) = 1;
  }
  v5[26] = v14;
  v15 = *(_QWORD *)v5;
  v16 = *(_DWORD *)(*(_QWORD *)v5 + 4140LL);
  *(_BYTE *)(v15 + 4096) = 9;
  *(_BYTE *)(v15 + 4136) = 2;
  *(_DWORD *)(v15 + 4140) = v16 ^ ((unsigned __int8)v16 ^ a2) & 0x1F;
  v17 = NvmeControllerProcessCommandSync(a1, v5, 1);
  NvmeControllerReclaimExtendedCommand(a1, v5);
  return v17;
}
