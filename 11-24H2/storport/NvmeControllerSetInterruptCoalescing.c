/*
 * XREFs of NvmeControllerSetInterruptCoalescing @ 0x1400C9E90
 * Callers:
 *     NvmeControllerInitPhase2 @ 0x1400EFCD4 (NvmeControllerInitPhase2.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerSetInterruptCoalescing(__int64 a1, char a2)
{
  __int64 v2; // rax
  char v5; // bl
  char v6; // bp
  __int64 ExtendedCommand; // rax
  __int64 v8; // rdi
  unsigned int v9; // ebx
  _QWORD *v10; // rdx
  _BYTE *v11; // rax

  v2 = *(_QWORD *)(a1 + 1048);
  v5 = 0;
  v6 = 0;
  if ( v2 )
  {
    v5 = *(_BYTE *)(v2 + 12);
    if ( !v5 )
      v5 = 0;
    if ( *(_BYTE *)(v2 + 13) )
      v6 = *(_BYTE *)(v2 + 13);
  }
  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  v8 = ExtendedCommand;
  if ( ExtendedCommand )
  {
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
    v10 = (_QWORD *)ExtendedCommand;
    *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
    v11 = *(_BYTE **)ExtendedCommand;
    v11[4096] = 9;
    v11[4136] = 8;
    v11[4140] = v6;
    v11[4141] = v5;
    v9 = NvmeControllerProcessCommandSync(a1, v10, a2);
  }
  else
  {
    v9 = -1073741670;
  }
  NvmeControllerReclaimExtendedCommand(a1, v8);
  return v9;
}
