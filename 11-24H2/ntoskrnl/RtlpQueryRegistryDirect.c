/*
 * XREFs of RtlpQueryRegistryDirect @ 0x1408353D4
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x140835044 (RtlpCallQueryRegistryRoutine.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpQueryRegistryDirect(unsigned int a1, unsigned int *a2, size_t a3, unsigned int *a4)
{
  unsigned __int16 v4; // bx
  void *v8; // rcx
  unsigned __int64 v10; // rax
  void *Pool2; // rax
  size_t v12; // rbp

  v4 = a3;
  if ( a1 - 1 > 1 && a1 != 7 )
  {
    if ( (unsigned int)a3 <= 4 )
    {
      if ( a4 == a2 || !(_DWORD)a3 )
        return 0LL;
      goto LABEL_6;
    }
    v10 = *a4;
    if ( (v10 & 0x80000000) == 0LL )
    {
      a3 = (unsigned int)a3;
      if ( v10 >= (unsigned __int64)(unsigned int)a3 + 8 )
      {
        *a4 = a3;
        v8 = a4 + 2;
        a4[1] = a1;
        goto LABEL_7;
      }
    }
    else if ( -(int)v10 >= (unsigned int)a3 )
    {
LABEL_6:
      a3 = (unsigned int)a3;
      v8 = a4;
LABEL_7:
      memmove(v8, a2, a3);
      return 0LL;
    }
    return 3221225507LL;
  }
  if ( (unsigned int)a3 > 0xFFFE )
    v4 = -2;
  Pool2 = (void *)*((_QWORD *)a4 + 1);
  if ( Pool2 )
  {
    if ( v4 > *((_WORD *)a4 + 1) )
      return 3221225507LL;
    v12 = v4;
LABEL_17:
    memmove(Pool2, a2, v12);
    *(_WORD *)a4 = v4 - 2;
    return 0LL;
  }
  v12 = v4;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v4, 0x67727453u);
  *((_QWORD *)a4 + 1) = Pool2;
  if ( Pool2 )
  {
    *((_WORD *)a4 + 1) = v4;
    goto LABEL_17;
  }
  return 3221225495LL;
}
