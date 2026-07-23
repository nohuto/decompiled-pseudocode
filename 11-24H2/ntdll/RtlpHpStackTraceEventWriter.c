/*
 * XREFs of RtlpHpStackTraceEventWriter @ 0x18014A230
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpStackDbLogStackDbEnd @ 0x180149D78 (RtlpHpStackDbLogStackDbEnd.c)
 *     RtlpHpStackDbLogStackDbSnapshot @ 0x180149E10 (RtlpHpStackDbLogStackDbSnapshot.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpStackTraceEventWriter(char *Src, size_t Size, int *a3)
{
  int *v3; // rsi
  unsigned int v7; // ebp
  __int64 v8; // rcx
  bool v9; // zf
  unsigned int v10; // eax
  __int64 v11; // rbx

  v3 = a3 + 2;
  v7 = Size;
  while ( v7 )
  {
    v8 = (unsigned int)*v3;
    v9 = (_DWORD)v8 == 0x4000;
    if ( (unsigned int)v8 < 0x4000 )
    {
      v10 = 0x4000 - v8;
      if ( 0x4000 - (int)v8 >= v7 )
        v10 = v7;
      v11 = v10;
      memmove((char *)a3 + v8 + 16, Src, v10);
      *v3 += v11;
      v7 -= v11;
      a3[3] += v11;
      Src += v11;
      v9 = *v3 == 0x4000;
    }
    if ( v9 )
    {
      RtlpHpStackDbLogStackDbSnapshot(*a3, a3[1]++, 0x4000, (__int64)(a3 + 4));
      *v3 = 0;
      memset_thunk_772440563353939046(a3 + 4, 0, 0x4000uLL);
    }
  }
  if ( !Size )
  {
    if ( *v3 )
    {
      RtlpHpStackDbLogStackDbSnapshot(*a3, a3[1]++, *v3, (__int64)(a3 + 4));
      *v3 = 0;
      memset_thunk_772440563353939046(a3 + 4, 0, 0x4000uLL);
    }
    RtlpHpStackDbLogStackDbEnd(*a3, a3[3]);
  }
  return 0LL;
}
