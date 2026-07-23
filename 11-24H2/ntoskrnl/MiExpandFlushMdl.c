/*
 * XREFs of MiExpandFlushMdl @ 0x140272448
 * Callers:
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall MiExpandFlushMdl(unsigned int *Src, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  void *Pool; // rax
  __int64 v6; // rsi
  __int64 result; // rax

  v2 = Src[10];
  if ( (_DWORD)v2 == 0xFFFFF )
    return 0LL;
  v4 = (unsigned int)(2 * v2);
  if ( (unsigned int)v4 <= (unsigned int)v2 || (unsigned int)v4 > 0xFFFFF )
    return 0LL;
  if ( (unsigned int)v4 > a2 )
    v4 = a2;
  Pool = (void *)MiAllocatePool(0x40uLL, 8 * v4 + 48);
  v6 = (__int64)Pool;
  if ( !Pool )
    return 0LL;
  memmove(Pool, Src, 8 * v2 + 48);
  result = v6;
  *(_DWORD *)(v6 + 44) = v4;
  return result;
}
