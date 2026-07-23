/*
 * XREFs of LdrpAppendUnicodeStringToFilenameBuffer @ 0x1800CBB70
 * Callers:
 *     LdrpPreprocessDllName @ 0x1800161D0 (LdrpPreprocessDllName.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpInitializeKernel32Functions @ 0x1800CB874 (LdrpInitializeKernel32Functions.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     NtdllpReallocateStringRoutine @ 0x1801204A8 (NtdllpReallocateStringRoutine.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall LdrpAppendUnicodeStringToFilenameBuffer(const void **a1, const void **a2)
{
  int v2; // eax
  unsigned int v5; // edx
  unsigned __int64 v6; // rcx
  _WORD *v7; // rax
  unsigned int v9; // esi
  PVOID Atom; // rbp

  v2 = *(unsigned __int16 *)a2;
  if ( !(_WORD)v2 )
    return 0LL;
  v5 = v2 + 2 + *(unsigned __int16 *)a1;
  if ( v5 > *((unsigned __int16 *)a1 + 1) )
  {
    if ( v5 > 0xFFFE )
      return 3221225734LL;
    v9 = (v5 + 63) & 0xFFFFFFC0;
    if ( v9 > 0xFFFE )
      v9 = 65534;
    if ( a1[1] == a1 + 2 )
    {
      Atom = RtlpAllocateAtom(v9);
      if ( !Atom )
        return 3221225495LL;
      if ( *(_WORD *)a1 )
        memmove(Atom, a1[1], *(unsigned __int16 *)a1);
    }
    else
    {
      Atom = (PVOID)NtdllpReallocateStringRoutine(v9);
      if ( !Atom )
        return 3221225495LL;
    }
    a1[1] = Atom;
    *((_WORD *)a1 + 1) = v9;
  }
  memmove((char *)a1[1] + *(unsigned __int16 *)a1, a2[1], *(unsigned __int16 *)a2);
  v6 = (unsigned __int16)(*(_WORD *)a2 + *(_WORD *)a1);
  v7 = a1[1];
  *(_WORD *)a1 = v6;
  v7[v6 >> 1] = 0;
  return 0LL;
}
