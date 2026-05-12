/*
 * XREFs of NvmeGetActiveNameSpaceIdList @ 0x1400BF674
 * Callers:
 *     NvmeNamespaceIdentify @ 0x1400BF954 (NvmeNamespaceIdentify.c)
 * Callees:
 *     BuildIdentifyCommandGeneric @ 0x1400BE880 (BuildIdentifyCommandGeneric.c)
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeGetActiveNameSpaceIdList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 ExtendedCommand; // rax
  _QWORD *v9; // rdi
  unsigned int v10; // ebx
  int v11; // [rsp+20h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 1048);
  if ( v3 && (*(_DWORD *)(v3 + 24) & 0x40000) != 0 )
    return 3221225473LL;
  if ( !a2 || !a3 )
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
  BuildIdentifyCommandGeneric(a1, *(_QWORD *)ExtendedCommand + 4096LL, 2, 4096LL, v11, 0, a3, 0, 0);
  v10 = NvmeControllerProcessCommandSync(a1, v9, 1);
  NvmeControllerReclaimExtendedCommand(a1, v9);
  return v10;
}
