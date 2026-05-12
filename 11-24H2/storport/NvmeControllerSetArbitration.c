/*
 * XREFs of NvmeControllerSetArbitration @ 0x1400C941C
 * Callers:
 *     NvmeControllerInitPhase2 @ 0x1400EFCD4 (NvmeControllerInitPhase2.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerSetArbitration(__int64 a1, char a2)
{
  __int64 v4; // rcx
  char v5; // bl
  __int64 v6; // rax
  unsigned __int8 v7; // al
  __int64 ExtendedCommand; // rax
  _QWORD *v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // eax

  v4 = *(_QWORD *)(a1 + 592);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 1048);
  if ( !v6 || (v7 = *(_BYTE *)(v6 + 14), v7 == 0xFF) )
  {
    v5 = *(_BYTE *)(v4 + 72);
  }
  else
  {
    if ( v7 <= 1u )
      goto LABEL_9;
    do
    {
      v7 >>= 1;
      ++v5;
    }
    while ( v7 > 1u );
  }
  if ( (unsigned __int8)v5 >= 7u )
    v5 = 7;
LABEL_9:
  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  v9 = (_QWORD *)ExtendedCommand;
  if ( ExtendedCommand )
  {
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
    *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
    v11 = *(_QWORD *)ExtendedCommand;
    v12 = *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4140LL);
    *(_BYTE *)(v11 + 4096) = 9;
    *(_BYTE *)(v11 + 4136) = 1;
    *(_DWORD *)(v11 + 4140) = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)v5) & 7;
    v10 = NvmeControllerProcessCommandSync(a1, v9, a2);
  }
  else
  {
    v10 = -1073741670;
  }
  NvmeControllerReclaimExtendedCommand(a1, v9);
  return v10;
}
