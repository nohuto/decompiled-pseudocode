/*
 * XREFs of MiDeleteCachedKernelStack @ 0x1403B318C
 * Callers:
 *     MiAdjustCachedStacks @ 0x1403B1C48 (MiAdjustCachedStacks.c)
 *     MiPruneCachedStackList @ 0x14048AF30 (MiPruneCachedStackList.c)
 * Callees:
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiDeleteKernelStackPages @ 0x1403B3258 (MiDeleteKernelStackPages.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall MiDeleteCachedKernelStack(int a1, __int64 a2)
{
  ULONG_PTR v2; // r9
  ULONG_PTR v3; // rdx
  unsigned __int64 v4; // rdi
  unsigned __int64 *v5; // rbx

  v2 = *(_QWORD *)(a2 - 16);
  v3 = a2 - 4080;
  if ( v2 != (qword_140E372C0 ^ v3) )
    KeBugCheckEx(0x1Au, 0x3470uLL, v3, v2, qword_140E372C0 ^ v3);
  if ( *(_DWORD *)(v3 + 4088) == 2 )
    v4 = (unsigned __int64)(unsigned int)KeXStateStackSize >> 12;
  else
    v4 = (unsigned __int8)byte_140E35C64;
  v5 = (unsigned __int64 *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - 8 * v4);
  MiDeleteKernelStackPages(a1, ((v3 >> 9) & 0xFFFFFFF8) - 8 * v4, v4, 5, 0LL);
  return MiReleasePtes((__int64)&unk_140E35BA0, v5, v4 + 1);
}
