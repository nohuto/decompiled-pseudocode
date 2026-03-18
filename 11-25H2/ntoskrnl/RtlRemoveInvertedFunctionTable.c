/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x14040F6A0
 * Callers:
 *     MiRemoveLoaderEntry @ 0x140660574 (MiRemoveLoaderEntry.c)
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MmLockLoadedModuleListExclusive @ 0x14040F854 (MmLockLoadedModuleListExclusive.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x14040F898 (MmUnlockLoadedModuleListExclusive.c)
 *     RtlpRemoveInvertedFunctionTableEntry @ 0x1405E4C84 (RtlpRemoveInvertedFunctionTableEntry.c)
 */

__int64 __fastcall RtlRemoveInvertedFunctionTable(__int64 a1)
{
  _QWORD *v2; // rdx
  __int64 v3; // rcx
  char v4; // bl
  __int64 v5; // r8
  __int64 v6; // r9
  bool v8; // zf

  v4 = MmLockLoadedModuleListExclusive();
  v6 = (unsigned int)(PsInvertedFunctionTable - 1);
  if ( PsInvertedFunctionTable != 1 )
  {
    v5 = 3 * v6;
    v2 = (_QWORD *)&xmmword_141200030 + 3 * v6 + 1;
    while ( a1 != *v2 )
    {
      v2 -= 3;
      v8 = (_DWORD)v6 == 1;
      v6 = (unsigned int)(v6 - 1);
      if ( v8 )
        goto LABEL_2;
    }
    RtlpRemoveInvertedFunctionTableEntry(v3, (unsigned int)v6);
  }
LABEL_2:
  LOBYTE(v3) = v4;
  return MmUnlockLoadedModuleListExclusive(v3, v2, v5, v6);
}
