/*
 * XREFs of NvmeControllerIoSubmissionQueueDelete @ 0x1400F21E4
 * Callers:
 *     NvmeControllerIoQueuesDeletion @ 0x1400F1250 (NvmeControllerIoQueuesDeletion.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerIoSubmissionQueueDelete(__int64 a1, __int16 a2)
{
  __int64 ExtendedCommand; // rax
  _QWORD *v5; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebx

  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  v5 = (_QWORD *)ExtendedCommand;
  if ( !ExtendedCommand )
    return 3221225626LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x40u;
  *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
  v7 = *(_QWORD *)ExtendedCommand;
  *(_BYTE *)(v7 + 4096) = 0;
  *(_WORD *)(v7 + 4136) = a2;
  v8 = NvmeControllerProcessCommandSync(a1, v5, 1);
  NvmeControllerReclaimExtendedCommand(a1, v5);
  return v8;
}
