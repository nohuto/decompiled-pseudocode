/*
 * XREFs of NvmeGetIdentifyNamespaceData @ 0x1400BF7F8
 * Callers:
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400BEE0C (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeNamespaceIdentify @ 0x1400BF954 (NvmeNamespaceIdentify.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeGetIdentifyNamespaceData(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 ExtendedCommand; // rax
  _QWORD *v9; // rdi
  __int64 v11; // rax
  unsigned int v12; // ebx

  if ( !a5 || !a2 || !a3 )
    return 3221225485LL;
  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  v9 = (_QWORD *)ExtendedCommand;
  if ( !ExtendedCommand )
    return 3221225626LL;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 2u;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x40u;
  *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = a2;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = a3;
  *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 4096;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeControllerCommandCompletion;
  *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
  v11 = *(_QWORD *)ExtendedCommand + 4096LL;
  *(_BYTE *)v11 = 6;
  *(_DWORD *)(v11 + 4) = a5;
  *(_QWORD *)(v11 + 24) = a3;
  *(_BYTE *)(v11 + 40) = 0;
  v12 = NvmeControllerProcessCommandSync(a1, v9, 1);
  NvmeControllerReclaimExtendedCommand(a1, v9);
  return v12;
}
