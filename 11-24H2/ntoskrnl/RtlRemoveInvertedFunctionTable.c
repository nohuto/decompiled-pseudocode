/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x14042C87C
 * Callers:
 *     MiRemoveLoaderEntry @ 0x14066C0B4 (MiRemoveLoaderEntry.c)
 *     MiInitializeLoadedModuleList @ 0x140C5B318 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MmLockLoadedModuleListExclusive @ 0x14042CA30 (MmLockLoadedModuleListExclusive.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x14042CA74 (MmUnlockLoadedModuleListExclusive.c)
 *     RtlpRemoveInvertedFunctionTableEntry @ 0x1405F0FD8 (RtlpRemoveInvertedFunctionTableEntry.c)
 */

__int64 __fastcall RtlRemoveInvertedFunctionTable(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // r9
  _QWORD *v6; // rdx

  v3 = MmLockLoadedModuleListExclusive();
  v4 = (unsigned int)(PsInvertedFunctionTable - 1);
  if ( PsInvertedFunctionTable != 1 )
  {
    v6 = (_QWORD *)&xmmword_141200030 + 3 * v4 + 1;
    while ( a1 != *v6 )
    {
      v6 -= 3;
      LODWORD(v4) = v4 - 1;
      if ( !(_DWORD)v4 )
        goto LABEL_2;
    }
    RtlpRemoveInvertedFunctionTableEntry(v2, (unsigned int)v4);
  }
LABEL_2:
  LOBYTE(v2) = v3;
  return MmUnlockLoadedModuleListExclusive(v2);
}
