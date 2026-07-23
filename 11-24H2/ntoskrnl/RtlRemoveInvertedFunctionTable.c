/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x1402EF4F4
 * Callers:
 *     MiRemoveLoaderEntry @ 0x14066D284 (MiRemoveLoaderEntry.c)
 *     MiInitializeLoadedModuleList @ 0x140C5D4A8 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MmLockLoadedModuleListExclusive @ 0x1402EE530 (MmLockLoadedModuleListExclusive.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x1402EE574 (MmUnlockLoadedModuleListExclusive.c)
 *     RtlpRemoveInvertedFunctionTableEntry @ 0x1405EE618 (RtlpRemoveInvertedFunctionTableEntry.c)
 */

void __fastcall RtlRemoveInvertedFunctionTable(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // bl
  __int64 v4; // r9
  _QWORD *v5; // rdx

  v3 = MmLockLoadedModuleListExclusive();
  v4 = (unsigned int)(PsInvertedFunctionTable[0] - 1);
  if ( PsInvertedFunctionTable[0] != 1 )
  {
    v5 = (_QWORD *)&xmmword_141200030 + 3 * v4 + 1;
    while ( a1 != *v5 )
    {
      v5 -= 3;
      LODWORD(v4) = v4 - 1;
      if ( !(_DWORD)v4 )
        goto LABEL_2;
    }
    RtlpRemoveInvertedFunctionTableEntry(v2, (unsigned int)v4);
  }
LABEL_2:
  MmUnlockLoadedModuleListExclusive(v3);
}
