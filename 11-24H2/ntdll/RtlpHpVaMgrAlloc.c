/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x180092D78
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x1800929C4 (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x180051DA0 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x180090F84 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x18009103C (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18009122C (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpEnvFreeVA @ 0x180092B20 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeFind @ 0x180092FA4 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrRangeSplit @ 0x1800930DC (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrFree @ 0x180093150 (RtlpHpVaMgrFree.c)
 */

__int64 __fastcall RtlpHpVaMgrAlloc(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  volatile signed __int32 *v4; // r14
  unsigned __int64 v7; // r14
  unsigned __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  volatile signed __int32 **v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  char v19; // al
  __int128 v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h]
  unsigned __int64 v22; // [rsp+48h] [rbp-8h]
  volatile signed __int32 *v23; // [rsp+80h] [rbp+30h] BYREF
  __int64 v24; // [rsp+88h] [rbp+38h] BYREF
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF

  v25 = 0LL;
  v4 = *a2;
  if ( !*a2 )
    NT_ASSERT("*SizeInOut > 0");
  if ( (unsigned __int64)v4 <= *(unsigned __int16 *)(a1 + 40) << 20 )
  {
    v7 = (unsigned __int64)v4 >> 20;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1, a2, a3);
    v8 = (unsigned __int64 *)RtlpHpVaMgrRangeFind(a1, (unsigned __int16)v7, (unsigned __int16)(a3 >> 20), &v25);
    v9 = (__int64)v8;
    if ( v8 )
    {
      RtlRbRemoveNode(a1 + 8, v8);
      v10 = v25;
      if ( v25 != v9 )
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
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1, v15, v16);
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
      v24 = v11;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
      return v24;
    }
    return 0LL;
  }
  v17 = 0x200000LL;
  if ( a3 > 0x200000 )
    v17 = a3;
  v18 = (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 7];
  if ( v17 > v18 )
    v18 = v17;
  v23 = (volatile signed __int32 *)((char *)v4 + v18 - ((v18 - 1) & ((unsigned __int64)v4 + v18 - 1)) - 1);
  v24 = RtlpHpVaMgrAllocAligned(a1, (int)&v23, v18);
  v13 = v24;
  if ( v24 )
  {
    v21 = 0LL;
    v19 = *(_BYTE *)(a1 + 44);
    v20 = 0LL;
    BYTE1(v20) = v19;
    v22 = (unsigned __int64)v23 >> 20;
    LOBYTE(v20) = 5;
    if ( RtlpHpVaMgrRangeCreate(a1, v24, (__int64)&v20) )
    {
      *a2 = v23;
      return v24;
    }
    RtlpHpEnvFreeVA(
      (__int64)&v24,
      (__int64)&v23,
      0x8000,
      (*(unsigned __int8 *)(a1 + 46) >> 1) & 7,
      *(_QWORD *)(a1 + 32));
    return 0LL;
  }
  return v13;
}
