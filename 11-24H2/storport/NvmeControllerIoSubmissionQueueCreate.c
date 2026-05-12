/*
 * XREFs of NvmeControllerIoSubmissionQueueCreate @ 0x1400F1EC8
 * Callers:
 *     NvmeControllerIoQueuesCreation @ 0x1400F1200 (NvmeControllerIoQueuesCreation.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerSetStorMQProperty @ 0x1400F5048 (NvmeControllerSetStorMQProperty.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerIoSubmissionQueueCreate(__int64 a1, char a2)
{
  int v3; // r15d
  _QWORD *ExtendedCommand; // rdi
  unsigned __int16 i; // si
  __int64 v7; // rdx
  __int64 v8; // r14

  v3 = 0;
  ExtendedCommand = (_QWORD *)NvmeControllerGetExtendedCommand(a1);
  if ( ExtendedCommand )
  {
    for ( i = 1; i <= *(_WORD *)(a1 + 22); ++i )
    {
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
      v7 = *ExtendedCommand + 4096LL;
      *(_BYTE *)v7 = 1;
      v8 = 192LL * i;
      *(_QWORD *)(v7 + 24) = *(_QWORD *)(v8 + *(_QWORD *)(a1 + 728) - 184);
      *(_WORD *)(v7 + 40) = i;
      *(_WORD *)(v7 + 42) = *(_WORD *)(a1 + 8) - 1;
      *(_DWORD *)(v7 + 44) = *(_DWORD *)(v7 + 44) & 0xFFFFFFF8 | 5;
      *(_WORD *)(v7 + 46) = *(_WORD *)(v8 + *(_QWORD *)(a1 + 728) - 54);
      v3 = NvmeControllerProcessCommandSync(a1, ExtendedCommand, a2);
      if ( v3 < 0 )
        break;
      if ( *(_BYTE *)(a1 + 1728) == 1 )
      {
        NvmeControllerSetStorMQProperty(a1, 0x80000000LL, 40LL);
        NvmeControllerSetStorMQProperty(a1, 2147483649LL, 40LL);
        if ( *(_QWORD *)(v8 + *(_QWORD *)(a1 + 728) - 152) )
          NvmeControllerSetStorMQProperty(a1, 2147483651LL, 40LL);
      }
    }
  }
  else
  {
    v3 = -1073741670;
  }
  NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  return (unsigned int)v3;
}
