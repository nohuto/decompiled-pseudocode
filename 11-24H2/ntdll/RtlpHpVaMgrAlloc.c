/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x18009D908
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x18009D554 (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x180067980 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x18009BB10 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x18009BBC8 (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18009BDB8 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpEnvFreeVA @ 0x18009D6B0 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeFind @ 0x18009DB34 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrRangeSplit @ 0x18009DC6C (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrFree @ 0x18009DCE0 (RtlpHpVaMgrFree.c)
 */

PVOID __fastcall RtlpHpVaMgrAlloc(PRTL_SRWLOCK SRWLock, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v7; // r14
  _RTL_BALANCED_NODE *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  void *v11; // rsi
  __int64 v12; // rax
  PVOID v13; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  char v17; // al
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  ULONG_PTR v20; // [rsp+48h] [rbp-8h]
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+30h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+38h] BYREF
  __int64 v23; // [rsp+98h] [rbp+48h] BYREF

  v23 = 0LL;
  v4 = *a2;
  if ( !*a2 )
    NT_ASSERT("*SizeInOut > 0");
  if ( v4 <= LOWORD(SRWLock[5].Value) << 20 )
  {
    v7 = v4 >> 20;
    RtlAcquireSRWLockExclusive(SRWLock);
    v8 = (_RTL_BALANCED_NODE *)RtlpHpVaMgrRangeFind(SRWLock, (unsigned __int16)v7, (unsigned __int16)(a3 >> 20), &v23);
    v9 = (__int64)v8;
    if ( v8 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)&SRWLock[1], v8);
      v10 = v23;
      if ( v23 != v9 )
      {
        *(_OWORD *)v9 = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_BYTE *)v9 = 1;
        *(_BYTE *)(v9 + 1) = BYTE4(SRWLock[5].Ptr);
        RtlpHpVaMgrRangeSplit(SRWLock, v9, (v10 - v9) >> 5);
        RtlpHpVaMgrFree(SRWLock, v9);
        v9 = v10;
      }
      goto LABEL_7;
    }
    RtlReleaseSRWLockExclusive(SRWLock);
    v9 = RtlpHpVaMgrRegionAllocate((__int64)SRWLock);
    if ( v9 )
    {
      RtlAcquireSRWLockExclusive(SRWLock);
LABEL_7:
      v11 = (void *)(*(_QWORD *)(SRWLock[3].Value + 8)
                   + ((unsigned __int64)(v9 - *(_QWORD *)(SRWLock[3].Value + 40)) >> *(_DWORD *)(SRWLock[3].Value + 24) << 20));
      *(_OWORD *)v9 = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
      *(_BYTE *)v9 = 1;
      *(_BYTE *)(v9 + 1) = BYTE4(SRWLock[5].Ptr);
      if ( *(_WORD *)(v9 + 24) > (unsigned __int16)v7 )
      {
        v12 = RtlpHpVaMgrRangeSplit(SRWLock, v9, (unsigned __int16)v7);
        RtlpHpVaMgrFree(SRWLock, v12);
      }
      BaseAddress = v11;
      RtlReleaseSRWLockExclusive(SRWLock);
      return BaseAddress;
    }
    return 0LL;
  }
  v15 = 0x200000LL;
  if ( a3 > 0x200000 )
    v15 = a3;
  v16 = (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[((unsigned __int64)BYTE6(SRWLock[5].Ptr) >> 1) & 7];
  if ( v15 > v16 )
    v16 = v15;
  RegionSize = v4 + v16 - ((v16 - 1) & (v16 + v4 - 1)) - 1;
  BaseAddress = RtlpHpVaMgrAllocAligned((__int64)SRWLock, &RegionSize);
  v13 = BaseAddress;
  if ( BaseAddress )
  {
    v19 = 0LL;
    v17 = BYTE4(SRWLock[5].Ptr);
    v18 = 0LL;
    BYTE1(v18) = v17;
    v20 = RegionSize >> 20;
    LOBYTE(v18) = 5;
    if ( RtlpHpVaMgrRangeCreate((__int64)SRWLock, (__int64)BaseAddress, (__int64)&v18) )
    {
      *a2 = RegionSize;
      return BaseAddress;
    }
    RtlpHpEnvFreeVA(&BaseAddress, &RegionSize, 0x8000, (BYTE6(SRWLock[5].Ptr) >> 1) & 7, SRWLock[4].Value);
    return 0LL;
  }
  return v13;
}
