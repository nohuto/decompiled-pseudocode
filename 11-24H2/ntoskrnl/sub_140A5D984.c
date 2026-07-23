/*
 * XREFs of sub_140A5D984 @ 0x140A5D984
 * Callers:
 *     sub_14091C0E8 @ 0x14091C0E8 (sub_14091C0E8.c)
 *     sub_14091DF30 @ 0x14091DF30 (sub_14091DF30.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A5D984(void *Src, size_t Size, unsigned int a3, _QWORD *a4)
{
  void *v4; // rbx
  unsigned int v5; // ebp
  __int64 Pool2; // rax
  int v7; // edi
  unsigned int v9; // r15d

  v4 = 0LL;
  v5 = a3;
  Pool2 = 0LL;
  v7 = 0;
  v9 = Size;
  if ( a3 && (Pool2 = ExAllocatePool2(0x100uLL, a3, 0x42524157u)) == 0 )
    v7 = -1073741801;
  else
    v4 = (void *)Pool2;
  SddlpFree(0LL);
  if ( v7 >= 0 )
  {
    if ( Src && v9 )
    {
      if ( v5 >= v9 )
        v5 = v9;
      memmove(v4, Src, v5);
    }
    SddlpFree(Src);
    if ( a4 )
    {
      *a4 = v4;
      v4 = 0LL;
    }
  }
  SddlpFree(v4);
  return (unsigned int)v7;
}
