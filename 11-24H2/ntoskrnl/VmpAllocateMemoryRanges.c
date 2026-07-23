/*
 * XREFs of VmpAllocateMemoryRanges @ 0x140A55AE0
 * Callers:
 *     VmpSplitMemoryRange @ 0x140399CE8 (VmpSplitMemoryRange.c)
 *     VmCreateMemoryRange @ 0x14079EB10 (VmCreateMemoryRange.c)
 *     VmPreallocateForRangeCreate @ 0x140A55A60 (VmPreallocateForRangeCreate.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     VmpFreeMemoryRanges @ 0x140A55BC4 (VmpFreeMemoryRanges.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

_QWORD *__fastcall VmpAllocateMemoryRanges(unsigned __int64 a1)
{
  __int64 v1; // rbx
  _QWORD *Pool2; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // r14
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // rax

  v1 = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x50uLL, 0x72566D56u);
  v4 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0x50uLL);
    v5 = v4 + 5;
    v6 = 0LL;
    v4[6] = v4 + 5;
    v4[5] = v4 + 5;
    v4[2] = -1LL;
    while ( 1 )
    {
      if ( v6 >= a1 )
        return v4;
      v7 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x48uLL, 0x72476D56u);
      v8 = v7;
      if ( !v7 )
        break;
      memset_0(v7, 0, 0x48uLL);
      v8[5] = -1LL;
      v8[2] = v4;
      v9 = (_QWORD *)v4[6];
      if ( (_QWORD *)*v9 != v5 )
        __fastfail(3u);
      *v8 = v5;
      ++v6;
      v8[1] = v9;
      *v9 = v8;
      v4[6] = v8;
    }
    VmpFreeMemoryRanges(v4);
  }
  return (_QWORD *)v1;
}
