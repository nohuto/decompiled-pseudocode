/*
 * XREFs of sub_14091D9EC @ 0x14091D9EC
 * Callers:
 *     sub_14091EE7C @ 0x14091EE7C (sub_14091EE7C.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     sub_1409F876C @ 0x1409F876C (sub_1409F876C.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14091D9EC(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 Pool2; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // esi

  Pool2 = ExAllocatePool2(0x100uLL, 0x500uLL, 0x42524157u);
  v7 = 0LL;
  v8 = Pool2;
  if ( Pool2 )
    v7 = (_QWORD *)Pool2;
  v9 = Pool2 == 0 ? 0xC0000017 : 0;
  SddlpFree(0LL);
  if ( v8 )
  {
    memset_0(v7, 0, 0x500uLL);
    ++v7[1];
    *v7 = a2;
    *((_DWORD *)v7 + 4) = 0;
    *((_DWORD *)v7 + 5) = 0;
    v7[3] = 0LL;
    *((_DWORD *)v7 + 8) = 10;
    *a3 = v7;
    v7 = 0LL;
  }
  sub_1409F876C(a1, v7);
  return v9;
}
