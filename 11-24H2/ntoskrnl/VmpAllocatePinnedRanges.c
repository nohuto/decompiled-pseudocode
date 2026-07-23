/*
 * XREFs of VmpAllocatePinnedRanges @ 0x14079F23C
 * Callers:
 *     VmpPinMemoryRange @ 0x140649280 (VmpPinMemoryRange.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall VmpAllocatePinnedRanges(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  unsigned int v4; // ebx
  unsigned __int64 v5; // rsi
  _QWORD *Pool2; // rax
  _QWORD *v9; // rcx

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v5 = 0LL;
  while ( v5 < a3 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, v3 + 40, 0x67506D56u);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v9 = *(_QWORD **)(a2 + 8);
    if ( *v9 != a2 )
      __fastfail(3u);
    *Pool2 = a2;
    ++v5;
    Pool2[1] = v9;
    *v9 = Pool2;
    *(_QWORD *)(a2 + 8) = Pool2;
  }
  return v4;
}
