/*
 * XREFs of KiAdjustProcessCpuSetsAfterCpuPartitionChange @ 0x1405BD53C
 * Callers:
 *     KeAssignCpuPartitionsToProcess @ 0x1405BCA40 (KeAssignCpuPartitionsToProcess.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BCCE0 (KeCpuPartitionMoveCpus.c)
 * Callees:
 *     KeQueryCpuPartitionAffinity @ 0x1405BD154 (KeQueryCpuPartitionAffinity.c)
 *     KeSetCpuSetsProcess @ 0x1405BD334 (KeSetCpuSetsProcess.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiAdjustProcessCpuSetsAfterCpuPartitionChange(
        __int64 a1,
        unsigned __int16 *a2,
        void *a3,
        unsigned __int16 a4,
        __int64 a5)
{
  unsigned int v6; // ebp
  _QWORD *v8; // r14
  __int64 v9; // rdi
  _QWORD *v10; // r13
  _QWORD *v11; // rbx
  unsigned __int16 i; // dx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  unsigned __int16 v23; // [rsp+88h] [rbp+20h] BYREF

  v6 = a4;
  v23 = 0;
  memset_0(a3, 0, 8LL * a4);
  v8 = *(_QWORD **)(a1 + 432);
  if ( v8 != (_QWORD *)(a1 + 432) )
  {
    v9 = a5;
    do
    {
      v10 = v8;
      v11 = v8;
      v8 = (_QWORD *)*v8;
      KeQueryCpuPartitionAffinity((struct _KAFFINITY_EX **)*(v10 - 3), a2, v6, &v23);
      for ( i = 0; i < v23; ++i )
      {
        v13 = a2[8 * i + 4];
        v14 = *(_QWORD *)&a2[8 * i];
        if ( v9 && (v14 & *((_QWORD *)a3 + v13)) != 0 )
        {
          v15 = *v11;
          if ( *(_QWORD **)(*v11 + 8LL) != v11 )
            goto LABEL_16;
          v16 = (_QWORD *)v11[1];
          if ( (_QWORD *)*v16 != v11 )
            goto LABEL_16;
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          v17 = v10 - 2;
          v18 = *(v10 - 2);
          if ( *(_QWORD **)(v18 + 8) != v10 - 2
            || (v19 = (_QWORD *)v17[1], (_QWORD *)*v19 != v17)
            || (*v19 = v18, *(_QWORD *)(v18 + 8) = v19, v20 = *(_QWORD **)(v9 + 8), *v20 != v9) )
          {
LABEL_16:
            __fastfail(3u);
          }
          *v17 = v9;
          v17[1] = v20;
          *v20 = v17;
          *(_QWORD *)(v9 + 8) = v17;
          break;
        }
        *((_QWORD *)a3 + v13) |= v14;
      }
    }
    while ( v8 != (_QWORD *)(a1 + 432) );
  }
  return KeSetCpuSetsProcess(a1, v6, (__int64)a3, 1, 1);
}
