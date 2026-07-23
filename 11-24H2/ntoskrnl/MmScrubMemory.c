/*
 * XREFs of MmScrubMemory @ 0x1407FE3E0
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiDereferencePageRuns @ 0x1403F89A4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1403F8A50 (MiReferencePageRuns.c)
 *     KeInitializeGate @ 0x1404842C4 (KeInitializeGate.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x1407FDF38 (MiReferenceNonPagedMemoryProcessList.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmScrubMemory(__int64 a1, ULONG_PTR a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned int v5; // edi
  _DWORD *Pool; // rax
  _QWORD *v7; // rsi
  unsigned int v8; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _QWORD *v12; // r15
  _QWORD *v13; // r14
  int *v14; // r15
  unsigned __int64 v15; // rbx
  void *v16; // rcx
  __int64 v17; // rcx
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  *a3 = 0LL;
  Object = 0LL;
  result = ObpReferenceObjectByHandleWithTag(a2, 0x72506D4Du, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v5 = (unsigned __int16)KeNumberNodes;
    Pool = (_DWORD *)MiAllocatePool(0x40uLL, 200LL * (unsigned __int16)KeNumberNodes + 88, 1667450189);
    v7 = Pool;
    if ( Pool )
    {
      *Pool = v5;
      KeInitializeGate((__int64)(Pool + 2), 0);
      v7[6] = &MiSystemPartition;
      v7[4] = Object;
      MiReferenceNonPagedMemoryProcessList((__int64)v7);
      CurrentThread = KeGetCurrentThread();
      v10 = v7[6];
      v7[5] = 0LL;
      v7[7] = CurrentThread;
      v11 = 0;
      v7[10] = MiReferencePageRuns(v10, 1u);
      v12 = v7 + 11;
      if ( v5 )
      {
        v13 = v7 + 16;
        do
        {
          *v12 = v7;
          *((_DWORD *)v13 - 8) = v11;
          *(v13 - 3) = 0LL;
          *(v13 - 1) = MiScrubMemoryWorker;
          *v13 = v12;
          ExQueueWorkItemToPartition((ULONG_PTR)(v13 - 3), 4, v11++, qword_140E38DF8);
          v12 += 25;
          v13 += 25;
        }
        while ( v11 < v5 );
      }
      v8 = 0;
      KeWaitForGate((__int64)(v7 + 1), 0LL);
      v14 = (int *)v12 + 3;
      while ( 1 )
      {
        v14 -= 50;
        if ( *v14 < 0 )
          break;
        if ( !--v11 )
          goto LABEL_12;
      }
      v8 = *v14;
LABEL_12:
      v15 = 0LL;
      for ( *a3 = v7[5]; v15 < v7[8]; ++v15 )
        ObfDereferenceObjectWithTag(*(PVOID *)(v7[9] + 8 * v15), 0x72506D4Du);
      v16 = (void *)v7[9];
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
      v17 = v7[10];
      if ( v17 )
        MiDereferencePageRuns(v17);
      ExFreePoolWithTag(v7, 0);
      if ( *((_DWORD *)Object + 1) || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
        v8 = -1073741248;
      else
        _InterlockedIncrement(&dword_140E302E0);
    }
    else
    {
      v8 = -1073741670;
    }
    ObfDereferenceObjectWithTag(Object, 0x72506D4Du);
    return v8;
  }
  return result;
}
