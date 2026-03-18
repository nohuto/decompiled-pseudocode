/*
 * XREFs of VmpAllocatePinnedRanges @ 0x14079F12C
 * Callers:
 *     VmpPinMemoryRange @ 0x14064ACC0 (VmpPinMemoryRange.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall VmpAllocatePinnedRanges(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi
  _QWORD *Pool2; // rax
  _QWORD *v8; // rcx

  v3 = 0;
  v4 = 0LL;
  while ( v4 < a3 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v8 = *(_QWORD **)(a2 + 8);
    if ( *v8 != a2 )
      __fastfail(3u);
    *Pool2 = a2;
    ++v4;
    Pool2[1] = v8;
    *v8 = Pool2;
    *(_QWORD *)(a2 + 8) = Pool2;
  }
  return v3;
}
