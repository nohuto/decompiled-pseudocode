/*
 * XREFs of MiDeleteKernelStackPages @ 0x1403B3258
 * Callers:
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MmDeleteKernelStack @ 0x140346FC0 (MmDeleteKernelStack.c)
 *     MiDeleteCachedKernelStack @ 0x1403B318C (MiDeleteCachedKernelStack.c)
 *     MiDeleteCachedKernelShadowStack @ 0x14048AFC4 (MiDeleteCachedKernelShadowStack.c)
 * Callees:
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiDecommitPages @ 0x140381AE0 (MiDecommitPages.c)
 *     MiDeleteShadowStackPtes @ 0x14049C92C (MiDeleteShadowStackPtes.c)
 */

void __fastcall MiDeleteKernelStackPages(ULONG *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rsi
  struct _LIST_ENTRY **v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int128 v12; // [rsp+40h] [rbp-48h] BYREF
  __int128 v13; // [rsp+50h] [rbp-38h]
  __int128 v14; // [rsp+60h] [rbp-28h]
  __int64 v15; // [rsp+70h] [rbp-18h]

  v5 = a2 + 8;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v9 = MiVaToFlushVm(a2 + 8);
  if ( a4 == 5 )
  {
    v11 = 0LL;
    MiDecommitPages(v5, a3, 0, 0LL, 0LL, 0, 0LL, (__int64)&v12);
  }
  else
  {
    v11 = MiDeleteShadowStackPtes(v10, v9, v5, a3, a5, &v12);
  }
  if ( a1 == &MiSystemPartition )
    _InterlockedAdd64(&qword_140E373A8, v11 - *((_QWORD *)&v13 + 1));
  if ( (_QWORD)v12 != v11 )
    MiReturnResident((__int64)a1, v12 - v11);
  if ( *((_QWORD *)&v13 + 1) - *((_QWORD *)&v12 + 1) != v11 )
    MiReturnCommit((__int64)a1, *((_QWORD *)&v13 + 1) - *((_QWORD *)&v12 + 1) - v11, 0);
}
