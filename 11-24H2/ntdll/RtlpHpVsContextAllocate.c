/*
 * XREFs of RtlpHpVsContextAllocate @ 0x1800ED0DC
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x180010830 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x180094540 (RtlpHpReallocMove.c)
 *     RtlpHpTagAllocateHeap @ 0x180094EF0 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x1800A3160 (RtlpHpSegReAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1800ACEF0 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlTryAcquireSRWLockExclusive @ 0x18001B950 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsSlotAllocate @ 0x18011B120 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpVsContextAllocateFinalize @ 0x18011BB74 (RtlpHpVsContextAllocateFinalize.c)
 *     RtlpHpVsContextHandleContention @ 0x18011C474 (RtlpHpVsContextHandleContention.c)
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
  volatile signed __int32 **v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // rdi
  __int64 Finalize; // rdi
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+40h] [rbp-38h]

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
  v19 = 0LL;
  v20 = 0LL;
  if ( v13 )
  {
    *((_QWORD *)&v19 + 1) = v12 + 2;
    if ( !RtlTryAcquireSRWLockExclusive(v12 + 2) )
    {
      *((_QWORD *)&v19 + 1) = 0LL;
      v9 = 1;
      if ( (a1[5] & 1) == 0 )
      {
        *((_QWORD *)&v19 + 1) = v12 + 2;
        RtlAcquireSRWLockExclusive(v12 + 2, v14, v15);
      }
    }
  }
  v16 = RtlpHpVsSlotAllocate((_DWORD)a1, (_DWORD)v12, v10 + 1, (v10 + 1) << 16, (__int64)&v19);
  if ( v16 )
  {
    if ( (a1[5] & 1) == 0 )
      RtlReleaseSRWLockExclusive(*((volatile signed __int64 **)&v19 + 1));
    Finalize = RtlpHpVsContextAllocateFinalize(a1, v16, a2, a4);
  }
  else
  {
    Finalize = 0LL;
  }
  if ( v9 && (unsigned int)(unsigned __int8)a1[2] + 1 > 1 )
    RtlpHpVsContextHandleContention(a1, (unsigned int)v11);
  return Finalize;
}
