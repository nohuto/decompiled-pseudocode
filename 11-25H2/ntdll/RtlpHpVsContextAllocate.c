/*
 * XREFs of RtlpHpVsContextAllocate @ 0x18002DD2C
 * Callers:
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     RtlpHpTagAllocateHeap @ 0x18002E060 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockExclusive @ 0x180047570 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlpHpVsSlotAllocate @ 0x18011C9B8 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpVsContextAllocateFinalize @ 0x18011D40C (RtlpHpVsContextAllocateFinalize.c)
 *     RtlpHpVsContextHandleContention @ 0x18011DD0C (RtlpHpVsContextHandleContention.c)
 */

__int64 __fastcall RtlpHpVsContextAllocate(_BYTE *a1, unsigned int a2, int a3, unsigned int a4)
{
  char v4; // al
  int v5; // r12d
  __int64 v7; // rcx
  int v9; // ebp
  unsigned int v10; // r12d
  __int64 v11; // r14
  volatile signed __int32 *v12; // rsi
  bool v13; // zf
  __int64 v14; // rdi
  __int64 Finalize; // rdi
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h]

  v4 = a1[4];
  v5 = a3 + 2;
  v7 = *(unsigned __int16 *)a1;
  if ( a2 == a3 )
    v5 = a3;
  v9 = 0;
  v10 = (v4 & 1) + ((unsigned int)(v5 + 15) >> 4);
  v11 = (unsigned __int8)(a1[2] & BYTE1(NtCurrentTeb()->HeapData));
  v12 = (volatile signed __int32 *)&a1[64 * (unsigned __int64)*(unsigned __int16 *)&a1[64 * v7 + 4 * v11]];
  v13 = (a1[5] & 1) == 0;
  v17 = 0LL;
  v18 = 0LL;
  if ( v13 )
  {
    *((_QWORD *)&v17 + 1) = v12 + 2;
    if ( !(unsigned __int8)RtlTryAcquireSRWLockExclusive(v12 + 2) )
    {
      *((_QWORD *)&v17 + 1) = 0LL;
      v9 = 1;
      if ( (a1[5] & 1) == 0 )
      {
        *((_QWORD *)&v17 + 1) = v12 + 2;
        RtlAcquireSRWLockExclusive(v12 + 2);
      }
    }
  }
  v14 = RtlpHpVsSlotAllocate((_DWORD)a1, (_DWORD)v12, v10 + 1, (v10 + 1) << 16, (__int64)&v17);
  if ( v14 )
  {
    if ( (a1[5] & 1) == 0 )
      RtlReleaseSRWLockExclusive(*((volatile signed __int64 **)&v17 + 1));
    Finalize = RtlpHpVsContextAllocateFinalize(a1, v14, a2, a4);
  }
  else
  {
    Finalize = 0LL;
  }
  if ( v9 && (unsigned int)(unsigned __int8)a1[2] + 1 > 1 )
    RtlpHpVsContextHandleContention(a1, (unsigned int)v11);
  return Finalize;
}
