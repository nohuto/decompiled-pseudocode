/*
 * XREFs of MiDeleteCachedKernelStack @ 0x140269ADC
 * Callers:
 *     MiAdjustCachedStacks @ 0x140269740 (MiAdjustCachedStacks.c)
 *     MiPruneCachedStackList @ 0x14048CBC8 (MiPruneCachedStackList.c)
 * Callees:
 *     MiDeleteKernelStackPages @ 0x14026A1A4 (MiDeleteKernelStackPages.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteCachedKernelStack(int a1, __int64 a2)
{
  ULONG_PTR v2; // r9
  ULONG_PTR v3; // rdx
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx

  v2 = *(_QWORD *)(a2 - 16);
  v3 = a2 - 4080;
  if ( v2 != (qword_140E37500 ^ v3) )
    KeBugCheckEx(0x1Au, 0x3470uLL, v3, v2, qword_140E37500 ^ v3);
  if ( *(_DWORD *)(v3 + 4088) == 2 )
    v4 = (unsigned __int64)(unsigned int)KeXStateStackSize >> 12;
  else
    v4 = (unsigned __int8)byte_140E35EA4;
  v5 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - 8 * v4;
  MiDeleteKernelStackPages(a1, ((v3 >> 9) & 0xFFFFFFF8) - 8 * v4, v4, 5, 0LL);
  return MiReleasePtes(&unk_140E35DE0, v5, (unsigned int)(v4 + 1));
}
