/*
 * XREFs of MiCombineWorkingSet @ 0x140686378
 * Callers:
 *     MiCombineIdenticalPages @ 0x140A97650 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiProcessSuitableForCombining @ 0x1403435EC (MiProcessSuitableForCombining.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiProcessCrcList @ 0x1409E6C70 (MiProcessCrcList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCombineWorkingSet(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r14
  unsigned int v6; // ebx
  int v7; // r12d
  void *v8; // rsi
  __int64 v9; // rdi
  int v10; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  ULONG_PTR v16; // rdi
  __int64 Pool; // rax
  __int128 v19; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v20; // [rsp+38h] [rbp-D0h]
  __int64 v21; // [rsp+48h] [rbp-C0h]
  int v22; // [rsp+58h] [rbp-B0h] BYREF
  char v23; // [rsp+60h] [rbp-A8h]
  unsigned __int8 v24; // [rsp+61h] [rbp-A7h]
  __int64 v25; // [rsp+78h] [rbp-90h]
  __int64 v26; // [rsp+88h] [rbp-80h]
  __int64 (__fastcall *v27)(__int64, __int64, __int64); // [rsp+100h] [rbp-8h]
  __int64 (__fastcall *v28)(_QWORD); // [rsp+108h] [rbp+0h]
  __int128 *v29; // [rsp+110h] [rbp+8h]
  struct _KTHREAD *v30; // [rsp+148h] [rbp+40h]

  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  memset_0(&v22, 0, 0xC0uLL);
  v5 = *(_QWORD *)(a1 + 112);
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 140);
  v8 = 0LL;
  v9 = v5 - 1024;
  v10 = 4;
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 )
    v9 = 0LL;
  v30 = CurrentThread;
  v24 = MiLockWorkingSetShared(v5, v2, v3, v4);
  if ( !v9 || MiProcessSuitableForCombining(v9, v12, v13, v14) )
  {
    v15 = *(_QWORD *)(v5 + 152);
    if ( v15 )
    {
      v16 = (40 * v15 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      while ( 1 )
      {
        Pool = MiAllocatePool(0x40uLL, v16, 1836405581);
        v8 = (void *)Pool;
        if ( Pool )
          break;
        v16 >>= 1;
        if ( v16 < 0x10000 )
          goto LABEL_11;
      }
      v26 = -1LL;
      *((_QWORD *)&v20 + 1) = a1;
      v21 = Pool;
      v29 = &v19;
      v27 = MiCombinePte;
      *(_QWORD *)&v20 = v16 / 0x28;
      LODWORD(v19) = v7;
      v25 = v5;
      v28 = MiCombineWorkingSetTail;
      v22 = 6;
      v23 = 7;
      v10 = MiWalkPageTables(&v22);
    }
  }
LABEL_11:
  MiUnlockWorkingSetShared(v5, v24);
  if ( v8 )
  {
    if ( *((_QWORD *)&v19 + 1) )
      MiProcessCrcList(
        *((_QWORD *)&v20 + 1),
        v8,
        *((_QWORD *)&v19 + 1),
        *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[v30->IdealProcessor] + 192) + 138LL));
    ExFreePoolWithTag(v8, 0);
  }
  if ( v10 == 5 )
    return (unsigned int)-1073741248;
  return v6;
}
