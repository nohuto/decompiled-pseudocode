/*
 * XREFs of MmManagePartitionNodeInformation @ 0x1407FD8D0
 * Callers:
 *     NtManagePartition @ 0x1408F6B10 (NtManagePartition.c)
 * Callees:
 *     MiGetPartitionNodeInformation @ 0x1402636C4 (MiGetPartitionNodeInformation.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmManagePartitionNodeInformation(_QWORD *a1, unsigned int *a2, char a3)
{
  void *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  SIZE_T v9; // r14
  __int64 Pool; // rax
  unsigned __int64 *v11; // r15
  _QWORD *v12; // rax
  unsigned __int64 *v13; // r12
  unsigned int v14; // ebx
  _QWORD *v15; // r14
  __int64 v17; // [rsp+20h] [rbp-38h]

  v6 = 0LL;
  if ( a2[1] || (v8 = *a2, (_DWORD)v8 != (unsigned __int16)KeNumberNodes) )
  {
    v7 = -1073741811;
    goto LABEL_16;
  }
  v9 = 72 * v8;
  v17 = 72 * v8;
  if ( a3 )
  {
    Pool = MiAllocatePool(0x40uLL, 72 * v8, 1766746445);
    v6 = (void *)Pool;
    if ( !Pool )
    {
      v7 = -1073741670;
      goto LABEL_16;
    }
    v11 = (unsigned __int64 *)Pool;
  }
  else
  {
    v11 = (unsigned __int64 *)*((_QWORD *)a2 + 1);
  }
  v12 = (_QWORD *)*a1;
  v13 = v11;
  v14 = 0;
  if ( *a2 )
  {
    v15 = v12;
    do
    {
      MiGetPartitionNodeInformation(v15, v14, v13);
      v13 += 9;
      ++v14;
    }
    while ( v14 < *a2 );
    v9 = v17;
  }
  if ( a3 )
  {
    ProbeForWrite(*((volatile void **)a2 + 1), v9, 8u);
    memmove(*((void **)a2 + 1), v11, v9);
  }
  v7 = 0;
LABEL_16:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
