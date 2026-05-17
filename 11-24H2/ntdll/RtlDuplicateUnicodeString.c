/*
 * XREFs of RtlDuplicateUnicodeString @ 0x1800ED600
 * Callers:
 *     RtlpTpIoDllProcessUnloads @ 0x18010CF24 (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlDuplicateUnicodeString(int a1, __int16 *a2, __int64 a3)
{
  char v5; // r15
  unsigned __int16 v6; // di
  _WORD *v7; // rsi
  __int64 result; // rax
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // bx
  _WORD *Atom; // rax

  v5 = a1;
  v6 = 0;
  v7 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || !a3 || (a1 & 2) != 0 && (a1 & 1) == 0 )
    return 3221225485LL;
  result = 0LL;
  if ( a2 )
  {
    if ( (*(_BYTE *)a2 & 1) != 0
      || (v9 = a2[1], (v9 & 1) != 0)
      || (unsigned __int16)*a2 > v9
      || v9 == 0xFFFF
      || !*((_QWORD *)a2 + 1) && (*a2 || v9) )
    {
      result = 3221225485LL;
    }
  }
  if ( (int)result >= 0 )
  {
    if ( a2 )
      v6 = *a2;
    if ( (v5 & 1) == 0 || v6 != 0xFFFE )
    {
      if ( (v5 & 1) != 0 )
        v10 = v6 + 2;
      else
        v10 = v6;
      if ( (v5 & 2) == 0 && !v6 )
        v10 = 0;
      if ( v10 )
      {
        Atom = (_WORD *)RtlpAllocateAtom(v10);
        v7 = Atom;
        if ( !Atom )
          return 3221225495LL;
        if ( v6 )
          memmove(Atom, *((const void **)a2 + 1), v6);
        if ( (v5 & 1) != 0 )
          v7[(unsigned __int64)v6 >> 1] = 0;
      }
      *(_WORD *)(a3 + 2) = v10;
      *(_WORD *)a3 = v6;
      *(_QWORD *)(a3 + 8) = v7;
      return 0LL;
    }
    return 3221225734LL;
  }
  return result;
}
