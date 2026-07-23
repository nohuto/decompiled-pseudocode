/*
 * XREFs of RtlCreateAtomTableEx @ 0x18007B73C
 * Callers:
 *     RtlCreateAtomTable @ 0x18010C2D0 (RtlCreateAtomTable.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateAtomTableEx(unsigned int a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v5; // ebp
  unsigned __int64 v6; // rax
  size_t v7; // rsi
  _DWORD *Atom; // rax
  _DWORD *v10; // rdi

  v3 = 0;
  if ( !*a3 )
  {
    v5 = 37;
    if ( a1 > 1 )
      v5 = a1;
    v6 = 24LL * (unsigned int)(v5 - 1);
    if ( !is_mul_ok(0x18uLL, (unsigned int)(v5 - 1)) )
      return 3221225621LL;
    v7 = v6 + 80;
    if ( v6 + 80 < v6 )
      return 3221225621LL;
    Atom = RtlpAllocateAtom(v6 + 80);
    v10 = Atom;
    if ( Atom )
    {
      memset_thunk_772440563353939046(Atom, 0, v7);
      v10[16] = v5;
      *((_OWORD *)v10 + 1) = 0LL;
      *((_OWORD *)v10 + 2) = 0LL;
      *((_OWORD *)v10 + 3) = 0LL;
      v10[4] = 0x3FFF;
      v10[5] = 16;
      v10[6] = 1;
      *((_QWORD *)v10 + 1) = 0LL;
      *v10 = 1836020801;
      v10[1] = 1;
      *a3 = v10;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v3;
}
