/*
 * XREFs of EtwpAllocatePidFilter @ 0x1409E88C0
 * Callers:
 *     EtwpAllocateFilter @ 0x1409E773C (EtwpAllocateFilter.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocatePidFilter(__int64 a1, unsigned int **a2)
{
  unsigned int v4; // ebx
  unsigned int *Pool2; // rax
  unsigned int *v6; // rdi
  __int64 result; // rax
  const void *v8; // rdx

  if ( *a2 )
    return 3221225485LL;
  v4 = *(_DWORD *)(a1 + 8) >> 2;
  if ( v4 > 8 )
    return 3221225485LL;
  Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL, 0x24uLL, 0x46777445u);
  v6 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v8 = *(const void **)a1;
  *Pool2 = v4;
  memmove(Pool2 + 1, v8, 4LL * v4);
  result = 0LL;
  *a2 = v6;
  return result;
}
