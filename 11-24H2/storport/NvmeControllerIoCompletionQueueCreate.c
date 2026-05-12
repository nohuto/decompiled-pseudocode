/*
 * XREFs of NvmeControllerIoCompletionQueueCreate @ 0x1400F0D94
 * Callers:
 *     NvmeControllerIoQueuesCreation @ 0x1400F1200 (NvmeControllerIoQueuesCreation.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerSetStorMQProperty @ 0x1400F5048 (NvmeControllerSetStorMQProperty.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerIoCompletionQueueCreate(__int64 a1, char a2)
{
  _QWORD *ExtendedCommand; // rdi
  int v5; // r14d
  unsigned __int16 v6; // si
  __int64 v7; // r8
  unsigned __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx

  ExtendedCommand = (_QWORD *)NvmeControllerGetExtendedCommand(a1);
  if ( ExtendedCommand )
  {
    v6 = 1;
    if ( *(_WORD *)(a1 + 26) )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(a1 + 864);
        v8 = (unsigned __int64)v6 << 7;
        *(_DWORD *)(*ExtendedCommand + 4256LL) |= 1u;
        *(_DWORD *)(*ExtendedCommand + 4256LL) |= 0x20u;
        *(_DWORD *)(*ExtendedCommand + 4256LL) &= ~2u;
        *(_DWORD *)(*ExtendedCommand + 4256LL) ^= ((unsigned __int8)*(_DWORD *)(*ExtendedCommand + 4256LL) ^ (unsigned __int8)(a2 << 6)) & 0x40;
        *(_WORD *)(*ExtendedCommand + 4252LL) = 0;
        *(_QWORD *)(*ExtendedCommand + 4184LL) = 0LL;
        *(_QWORD *)(*ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
        *(_QWORD *)(*ExtendedCommand + 4200LL) = ExtendedCommand;
        *(_QWORD *)(*ExtendedCommand + 4160LL) = 0LL;
        *(_QWORD *)(*ExtendedCommand + 4168LL) = 0LL;
        *(_DWORD *)(*ExtendedCommand + 4248LL) = 0;
        v9 = *(_QWORD *)(a1 + 864);
        LOBYTE(v7) = *(_BYTE *)(v8 + v7 - 48);
        v10 = *ExtendedCommand + 4096LL;
        v11 = *(_DWORD *)(*ExtendedCommand + 4140LL) | 1;
        *(_BYTE *)v10 = 5;
        *(_QWORD *)(v10 + 24) = *(_QWORD *)(v8 + v9 - 120);
        *(_WORD *)(v10 + 40) = v6;
        *(_WORD *)(v10 + 42) = *(_WORD *)(a1 + 8) - 1;
        v12 = v11 | 2;
        v13 = v11 & 0xFFFFFFFD;
        if ( (_BYTE)v7 != 1 )
          v13 = v12;
        *(_DWORD *)(v10 + 44) = v13;
        *(_WORD *)(v10 + 46) = *(_WORD *)(v8 + v9 - 104);
        v5 = NvmeControllerProcessCommandSync(a1, ExtendedCommand, a2);
        if ( v5 < 0 )
          break;
        if ( *(_BYTE *)(a1 + 1728) == 1 )
          NvmeControllerSetStorMQProperty(a1, 0x80000000LL, 40LL);
        if ( ++v6 > *(_WORD *)(a1 + 26) )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v5 = 0;
    }
  }
  else
  {
    v5 = -1073741670;
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  return (unsigned int)v5;
}
