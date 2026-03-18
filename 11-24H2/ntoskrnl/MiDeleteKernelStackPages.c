/*
 * XREFs of MiDeleteKernelStackPages @ 0x14026A1A4
 * Callers:
 *     MiDeleteCachedKernelShadowStack @ 0x140269224 (MiDeleteCachedKernelShadowStack.c)
 *     MiDeleteCachedKernelStack @ 0x140269ADC (MiDeleteCachedKernelStack.c)
 *     MmDeleteKernelStack @ 0x14026A4B0 (MmDeleteKernelStack.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiVaToFlushVm @ 0x1402293EC (MiVaToFlushVm.c)
 *     MiDeleteShadowStackPtes @ 0x140269284 (MiDeleteShadowStackPtes.c)
 *     MiDecommitPages @ 0x140288300 (MiDecommitPages.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 */

ULONG *__fastcall MiDeleteKernelStackPages(ULONG *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  ULONG_PTR v5; // rsi
  void *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  ULONG *result; // rax
  __int128 v13; // [rsp+40h] [rbp-48h] BYREF
  __int128 v14; // [rsp+50h] [rbp-38h]
  __int128 v15; // [rsp+60h] [rbp-28h]
  __int64 v16; // [rsp+70h] [rbp-18h]

  v5 = a2 + 8;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v9 = MiVaToFlushVm(a2 + 8);
  if ( a4 == 5 )
  {
    v11 = 0LL;
    MiDecommitPages(v5, a3, 0, 0, 0LL, 0, 0LL, (__int64)&v13);
  }
  else
  {
    v11 = MiDeleteShadowStackPtes(v10, (__int64)v9, v5, a3, a5, &v13);
  }
  result = &MiSystemPartition;
  if ( a1 == &MiSystemPartition )
    _InterlockedAdd64(&qword_140E375E8, v11 - *((_QWORD *)&v14 + 1));
  if ( (_QWORD)v13 != v11 )
    result = (ULONG *)MiReturnResident((__int64)a1, v13 - v11);
  if ( *((_QWORD *)&v14 + 1) - *((_QWORD *)&v13 + 1) != v11 )
    return (ULONG *)MiReturnCommit(a1, *((_QWORD *)&v14 + 1) - *((_QWORD *)&v13 + 1) - v11, 0LL);
  return result;
}
