/*
 * XREFs of HalpMmAllocCtxAllocBuffer @ 0x14037DBE0
 * Callers:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 * Callees:
 *     HalpMmAllocCtxBufferCleanup @ 0x14037CDE4 (HalpMmAllocCtxBufferCleanup.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

_QWORD *__fastcall HalpMmAllocCtxAllocBuffer(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 Pool2; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx

  v2 = a2 >> 4;
  Pool2 = ExAllocatePool2(0x40uLL);
  v4 = 0LL;
  v5 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 32) = v2;
    *(_QWORD *)(Pool2 + 40) = (Pool2 + 51) & 0xFFFFFFFFFFFFFFFCuLL;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    v6 = ExAllocatePool2(0x40uLL);
    v5[2] = v6;
    if ( v6 )
      return v5;
    else
      HalpMmAllocCtxBufferCleanup(v7, v5);
  }
  return (_QWORD *)v4;
}
