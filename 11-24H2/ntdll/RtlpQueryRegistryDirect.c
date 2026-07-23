/*
 * XREFs of RtlpQueryRegistryDirect @ 0x180083784
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x1800832B4 (RtlpCallQueryRegistryRoutine.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlpQueryRegistryDirect(unsigned int a1, unsigned int *a2, size_t a3, unsigned int *a4)
{
  unsigned __int16 v4; // bx
  unsigned __int64 v8; // rax
  void *v10; // rcx
  PVOID Atom; // rax
  size_t v12; // rbp

  v4 = a3;
  if ( a1 - 1 > 1 && a1 != 7 )
  {
    if ( (unsigned int)a3 <= 4 )
    {
      if ( a4 == a2 || !(_DWORD)a3 )
        return 0LL;
    }
    else
    {
      v8 = *a4;
      if ( (v8 & 0x80000000) == 0LL )
      {
        a3 = (unsigned int)a3;
        if ( v8 < (unsigned __int64)(unsigned int)a3 + 8 )
          return 3221225507LL;
        *a4 = a3;
        v10 = a4 + 2;
        a4[1] = a1;
        goto LABEL_10;
      }
      if ( -(int)v8 < (unsigned int)a3 )
        return 3221225507LL;
    }
    a3 = (unsigned int)a3;
    v10 = a4;
LABEL_10:
    memmove(v10, a2, a3);
    return 0LL;
  }
  if ( (unsigned int)a3 > 0xFFFE )
    v4 = -2;
  Atom = (PVOID)*((_QWORD *)a4 + 1);
  if ( Atom )
  {
    if ( v4 > *((_WORD *)a4 + 1) )
      return 3221225507LL;
    v12 = v4;
    goto LABEL_20;
  }
  v12 = v4;
  Atom = RtlpAllocateAtom(v4);
  *((_QWORD *)a4 + 1) = Atom;
  if ( Atom )
  {
    *((_WORD *)a4 + 1) = v4;
LABEL_20:
    memmove(Atom, a2, v12);
    *(_WORD *)a4 = v4 - 2;
    return 0LL;
  }
  return 3221225495LL;
}
