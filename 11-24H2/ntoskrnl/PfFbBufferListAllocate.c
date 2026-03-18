/*
 * XREFs of PfFbBufferListAllocate @ 0x1405CCB6C
 * Callers:
 *     PfTStart @ 0x140746B0C (PfTStart.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140477680 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PfFbBufferListAllocate(_SLIST_ENTRY *RunRef, signed int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 Pool2; // rax
  struct _SLIST_ENTRY *v9; // rsi
  unsigned __int64 v10; // r15
  struct _SLIST_ENTRY *v11; // rdi

  v3 = a2;
  if ( a2 + _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[7], a2) > *((_DWORD *)&RunRef[5].Next + 2) )
  {
    result = 3221225773LL;
LABEL_5:
    _InterlockedAdd((volatile signed __int32 *)&RunRef[7], -(int)v3);
    return result;
  }
  v7 = ((a2 - 32) / a3) & 0xFFFFFFF0;
  Pool2 = ExAllocatePool2(*((_QWORD *)&RunRef[4].Next + 1));
  v9 = (struct _SLIST_ENTRY *)Pool2;
  if ( !Pool2 )
  {
    result = 3221225626LL;
    goto LABEL_5;
  }
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_DWORD *)(Pool2 + 28) = 0;
  *(_DWORD *)(Pool2 + 16) = a3;
  v10 = Pool2 + v3;
  *(_DWORD *)(Pool2 + 24) = v3;
  v11 = (struct _SLIST_ENTRY *)(Pool2 + 32);
  *(_DWORD *)(Pool2 + 20) = v7;
  while ( (unsigned __int64)v11 + v7 <= v10 )
  {
    PfFbBufferListInsertInFree(RunRef, v11, v7, 0, 0);
    v11 = (struct _SLIST_ENTRY *)((char *)v11 + (unsigned int)v7);
  }
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)&RunRef[3], v9);
  return 0LL;
}
