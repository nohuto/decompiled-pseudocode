/*
 * XREFs of LdrpAppendUnicodeStringToFilenameBuffer @ 0x1800C72D0
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpPreprocessDllName @ 0x180070150 (LdrpPreprocessDllName.c)
 *     LdrpInitializeKernel32Functions @ 0x1800C6FD8 (LdrpInitializeKernel32Functions.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 *     NtdllpReallocateStringRoutine @ 0x18011CE08 (NtdllpReallocateStringRoutine.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall LdrpAppendUnicodeStringToFilenameBuffer(unsigned __int16 *a1, const void **a2)
{
  int v2; // eax
  unsigned int v5; // edx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v9; // esi
  unsigned __int16 *v10; // rdx
  unsigned int v11; // esi
  PVOID Atom; // rbp

  v2 = *(unsigned __int16 *)a2;
  if ( !(_WORD)v2 )
    return 0LL;
  v5 = v2 + 2 + *a1;
  if ( v5 > a1[1] )
  {
    if ( v5 > 0xFFFE )
      return 3221225734LL;
    v9 = v5 + 63;
    v10 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    v11 = v9 & 0xFFFFFFC0;
    if ( v11 > 0xFFFE )
      v11 = 65534;
    if ( v10 == a1 + 8 )
    {
      Atom = RtlpAllocateAtom(v11);
      if ( !Atom )
        return 3221225495LL;
      if ( *a1 )
        memmove(Atom, *((const void **)a1 + 1), *a1);
    }
    else
    {
      Atom = (PVOID)NtdllpReallocateStringRoutine(v11, v10);
      if ( !Atom )
        return 3221225495LL;
    }
    *((_QWORD *)a1 + 1) = Atom;
    a1[1] = v11;
  }
  memmove((void *)(*((_QWORD *)a1 + 1) + *a1), a2[1], *(unsigned __int16 *)a2);
  v6 = (unsigned __int16)(*(_WORD *)a2 + *a1);
  v7 = *((_QWORD *)a1 + 1);
  *a1 = v6;
  *(_WORD *)(v7 + 2 * (v6 >> 1)) = 0;
  return 0LL;
}
