/*
 * XREFs of MiCombineWorkingSet @ 0x140685248
 * Callers:
 *     MiCombineIdenticalPages @ 0x140A9C0E0 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiProcessSuitableForCombining @ 0x1402FB97C (MiProcessSuitableForCombining.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiProcessCrcList @ 0x1409F2910 (MiProcessCrcList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCombineWorkingSet(__int64 a1)
{
  __int64 v2; // r14
  unsigned int v3; // ebx
  int v4; // r12d
  void *v5; // rsi
  __int64 v6; // rdi
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  ULONG_PTR v10; // rdi
  __int64 Pool; // rax
  __int128 v13; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v14; // [rsp+38h] [rbp-D0h]
  __int64 v15; // [rsp+48h] [rbp-C0h]
  int v16; // [rsp+58h] [rbp-B0h] BYREF
  char v17; // [rsp+60h] [rbp-A8h]
  unsigned __int8 v18; // [rsp+61h] [rbp-A7h]
  __int64 v19; // [rsp+78h] [rbp-90h]
  __int64 v20; // [rsp+88h] [rbp-80h]
  __int64 (__fastcall *v21)(__int64, __int64 *, int); // [rsp+100h] [rbp-8h]
  __int64 (__fastcall *v22)(_QWORD); // [rsp+108h] [rbp+0h]
  __int128 *v23; // [rsp+110h] [rbp+8h]
  struct _KTHREAD *v24; // [rsp+148h] [rbp+40h]

  v15 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  memset_0(&v16, 0, 0xC0uLL);
  v2 = *(_QWORD *)(a1 + 112);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 140);
  v5 = 0LL;
  v6 = v2 - 1024;
  v7 = 4;
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(v2 + 184) & 0xF) != 0 )
    v6 = 0LL;
  v24 = CurrentThread;
  v18 = MiLockWorkingSetShared(v2);
  if ( !v6 || MiProcessSuitableForCombining(v6) )
  {
    v9 = *(_QWORD *)(v2 + 152);
    if ( v9 )
    {
      v10 = (40 * v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      while ( 1 )
      {
        Pool = MiAllocatePool(0x40uLL, v10, 1836405581);
        v5 = (void *)Pool;
        if ( Pool )
          break;
        v10 >>= 1;
        if ( v10 < 0x10000 )
          goto LABEL_11;
      }
      v20 = -1LL;
      *((_QWORD *)&v14 + 1) = a1;
      v15 = Pool;
      v23 = &v13;
      v21 = MiCombinePte;
      *(_QWORD *)&v14 = v10 / 0x28;
      LODWORD(v13) = v4;
      v19 = v2;
      v22 = MiCombineWorkingSetTail;
      v16 = 6;
      v17 = 7;
      v7 = MiWalkPageTables((__int64)&v16);
    }
  }
LABEL_11:
  MiUnlockWorkingSetShared(v2, v18);
  if ( v5 )
  {
    if ( *((_QWORD *)&v13 + 1) )
      MiProcessCrcList(
        *((_QWORD *)&v14 + 1),
        v5,
        *((_QWORD *)&v13 + 1),
        *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[v24->IdealProcessor] + 192) + 138LL));
    ExFreePoolWithTag(v5, 0);
  }
  if ( v7 == 5 )
    return (unsigned int)-1073741248;
  return v3;
}
