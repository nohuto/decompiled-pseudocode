/*
 * XREFs of RtlAllocateMemoryBlockLookaside @ 0x180170010
 * Callers:
 *     RtlpRegisterStackTrace @ 0x1800F7CE0 (RtlpRegisterStackTrace.c)
 *     RtlpInitializeStackTraceLog @ 0x18011F3EC (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     RtlInitializeSListHead @ 0x1800E5EB0 (RtlInitializeSListHead.c)
 *     RtlpInterlockedPopEntrySList @ 0x180165A00 (RtlpInterlockedPopEntrySList.c)
 *     RtlAllocateMemoryZone @ 0x180170140 (RtlAllocateMemoryZone.c)
 */

__int64 __fastcall RtlAllocateMemoryBlockLookaside(__int64 a1, unsigned __int64 a2, PSLIST_ENTRY *a3)
{
  unsigned __int64 v6; // rax
  union _SLIST_HEADER *v7; // rbx
  PSLIST_ENTRY v8; // rax
  struct _SLIST_ENTRY *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  PSLIST_ENTRY v12; // rax
  unsigned __int64 v14; // rsi
  PSLIST_ENTRY v15; // rax
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 > *(_QWORD *)(a1 + 32) )
    return 3221225485LL;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = (union _SLIST_HEADER *)(a1 + 48);
  while ( v6 < a2 )
  {
    v7 += 2;
    v6 *= 2LL;
  }
  v8 = RtlpInterlockedPopEntrySList(v7);
  v9 = v8;
  if ( v8 )
  {
    if ( ((unsigned __int8)v8 & 7) == 0
      && (union _SLIST_HEADER *)v8[2].Next == v7
      && v8[1].Next == (_SLIST_ENTRY *)v7[1].Alignment )
    {
LABEL_12:
      *((_QWORD *)&v9[1].Next + 1) = a2;
      v12 = v9 + 3;
LABEL_13:
      *a3 = v12;
      return 0LL;
    }
    RtlInitializeSListHead(v7);
  }
  v10 = *(_QWORD *)(a1 + 16);
  v11 = v7[1].Alignment + 64;
  v16 = 0LL;
  if ( (int)RtlAllocateMemoryZone(v10, v11, &v16) >= 0 )
  {
    v9 = (struct _SLIST_ENTRY *)((v16 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v9[2].Next = (_SLIST_ENTRY *)v7;
    v9[1].Next = (_SLIST_ENTRY *)v7[1].Alignment;
    goto LABEL_12;
  }
  v14 = 32LL * *(unsigned int *)(a1 + 40) + a1 + 48;
  while ( (unsigned __int64)v7 < v14 )
  {
    v15 = RtlpInterlockedPopEntrySList(v7);
    if ( v15 )
    {
      if ( ((unsigned __int8)v15 & 7) == 0
        && (union _SLIST_HEADER *)v15[2].Next == v7
        && v15[1].Next == (_SLIST_ENTRY *)v7[1].Alignment )
      {
        *((_QWORD *)&v15[1].Next + 1) = a2;
        v12 = v15 + 3;
        goto LABEL_13;
      }
      RtlInitializeSListHead(v7);
    }
    v7 += 2;
  }
  return 3221225626LL;
}
