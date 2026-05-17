/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x1800BC0F8
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x1800BBD44 (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18000D9E0 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x1800BA304 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x1800BA3BC (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x1800BA5AC (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpEnvFreeVA @ 0x1800BBEA0 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeFind @ 0x1800BC324 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrRangeSplit @ 0x1800BC45C (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrFree @ 0x1800BC4D0 (RtlpHpVaMgrFree.c)
 */

__int64 __fastcall RtlpHpVaMgrAlloc(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v7; // r14
  unsigned __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  char v17; // al
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  unsigned __int64 v20; // [rsp+48h] [rbp-8h]
  unsigned __int64 v21; // [rsp+80h] [rbp+30h] BYREF
  __int64 v22; // [rsp+88h] [rbp+38h] BYREF
  __int64 v23; // [rsp+98h] [rbp+48h] BYREF

  v23 = 0LL;
  v4 = *a2;
  if ( !*a2 )
    NT_ASSERT("*SizeInOut > 0");
  if ( v4 <= *(unsigned __int16 *)(a1 + 40) << 20 )
  {
    v7 = v4 >> 20;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
    v8 = (unsigned __int64 *)RtlpHpVaMgrRangeFind(a1, (unsigned __int16)v7, (unsigned __int16)(a3 >> 20), &v23);
    v9 = (__int64)v8;
    if ( v8 )
    {
      RtlRbRemoveNode(a1 + 8, v8);
      v10 = v23;
      if ( v23 != v9 )
      {
        *(_OWORD *)v9 = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_BYTE *)v9 = 1;
        *(_BYTE *)(v9 + 1) = *(_BYTE *)(a1 + 44);
        RtlpHpVaMgrRangeSplit(a1, v9, (v10 - v9) >> 5);
        RtlpHpVaMgrFree(a1, v9);
        v9 = v10;
      }
      goto LABEL_7;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
    v9 = RtlpHpVaMgrRegionAllocate(a1);
    if ( v9 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
LABEL_7:
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
          + ((unsigned __int64)(v9 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) << 20);
      *(_OWORD *)v9 = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
      *(_BYTE *)v9 = 1;
      *(_BYTE *)(v9 + 1) = *(_BYTE *)(a1 + 44);
      if ( *(_WORD *)(v9 + 24) > (unsigned __int16)v7 )
      {
        v12 = RtlpHpVaMgrRangeSplit(a1, v9, (unsigned __int16)v7);
        RtlpHpVaMgrFree(a1, v12);
      }
      v22 = v11;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
      return v22;
    }
    return 0LL;
  }
  v15 = 0x200000LL;
  if ( a3 > 0x200000 )
    v15 = a3;
  v16 = (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 7];
  if ( v15 > v16 )
    v16 = v15;
  v21 = v4 + v16 - ((v16 - 1) & (v16 + v4 - 1)) - 1;
  v22 = RtlpHpVaMgrAllocAligned(a1, (int)&v21, v16);
  v13 = v22;
  if ( v22 )
  {
    v19 = 0LL;
    v17 = *(_BYTE *)(a1 + 44);
    v18 = 0LL;
    BYTE1(v18) = v17;
    v20 = v21 >> 20;
    LOBYTE(v18) = 5;
    if ( RtlpHpVaMgrRangeCreate(a1, v22, (__int64)&v18) )
    {
      *a2 = v21;
      return v22;
    }
    RtlpHpEnvFreeVA(
      (__int64)&v22,
      (__int64)&v21,
      0x8000,
      (*(unsigned __int8 *)(a1 + 46) >> 1) & 7,
      *(_QWORD *)(a1 + 32));
    return 0LL;
  }
  return v13;
}
