/*
 * XREFs of HalpMmAllocCtxAllocBuffer @ 0x14048E2EC
 * Callers:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 * Callees:
 *     HalpMmAllocCtxBufferCleanup @ 0x1402EA404 (HalpMmAllocCtxBufferCleanup.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

_QWORD *__fastcall HalpMmAllocCtxAllocBuffer(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // rsi
  __int64 Pool2; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx

  v3 = a2 >> 4;
  Pool2 = ExAllocatePool2(0x40uLL, (a2 >> 7) + 48, 0x626C6148u);
  v5 = 0LL;
  v6 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 32) = v3;
    *(_QWORD *)(Pool2 + 40) = (Pool2 + 51) & 0xFFFFFFFFFFFFFFFCuLL;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    v7 = ExAllocatePool2(0x40uLL, a2, 0x426C6148u);
    v6[2] = v7;
    if ( v7 )
      return v6;
    else
      HalpMmAllocCtxBufferCleanup(v8, v6);
  }
  return (_QWORD *)v5;
}
