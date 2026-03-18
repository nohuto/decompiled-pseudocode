/*
 * XREFs of ?CommitSlot@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BA4
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1400B66D0 (-Allocate@-$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@QEAAPEAXXZ.c)
 * Callees:
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<237568,928>::CommitSlot(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v4; // edx
  void *v6; // rdi

  v2 = *(_DWORD *)(a1 + 36);
  v4 = a2 >> 2;
  if ( v4 < v2 || v2 >= 0x3A )
    return 1;
  v6 = (void *)((v4 << 12) + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
  if ( (int)MmCommitSessionMappedView(v6, 4096LL) >= 0 )
  {
    memset_0(v6, 0, 0x1000uLL);
    ++*(_DWORD *)(a1 + 36);
    return 1;
  }
  return 0;
}
