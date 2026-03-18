/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x140421420
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x140421384 (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpEnvFreeVA @ 0x14024421C (RtlpHpEnvFreeVA.c)
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     RtlpHpVaMgrRangeFind @ 0x14042160C (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrRangeSplit @ 0x140421760 (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrFree @ 0x1404217D4 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x140421A48 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x140421ACC (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x140421B54 (RtlpHpVaMgrRangeCreate.c)
 */

__int64 __fastcall RtlpHpVaMgrAlloc(ULONG_PTR BugCheckParameter2, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rdi
  unsigned __int64 v8; // r14
  char v9; // r15
  unsigned __int64 *v10; // rax
  __int64 v11; // rsi
  ULONG_PTR v12; // rdi
  __int64 v13; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rsi
  ULONG_PTR v21; // r14
  __int64 v22; // rdx
  char v23; // al
  __int128 v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+40h] [rbp-10h]
  ULONG_PTR v26; // [rsp+48h] [rbp-8h]
  ULONG_PTR v27; // [rsp+80h] [rbp+30h] BYREF
  __int64 v28; // [rsp+88h] [rbp+38h] BYREF

  v3 = *a2;
  v4 = 0LL;
  v27 = 0LL;
  if ( !v3 )
    __int2c();
  if ( v3 > *(unsigned __int16 *)(BugCheckParameter2 + 40) << 20 )
  {
    v16 = *(unsigned __int8 *)(BugCheckParameter2 + 46);
    v17 = 0x200000LL;
    if ( a3 > 0x200000 )
      v17 = a3;
    v18 = (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[(v16 >> 1) & 7];
    if ( v17 > v18 )
      v18 = v17;
    v27 = v3 + v18 - ((v18 - 1) & (v18 + v3 - 1)) - 1;
    v19 = RtlpHpVaMgrAllocAligned(BugCheckParameter2, &v27);
    v28 = v19;
    v20 = v19;
    if ( v19 )
    {
      v21 = v27;
      v25 = 0LL;
      v22 = v19;
      v23 = *(_BYTE *)(BugCheckParameter2 + 44);
      v24 = 0LL;
      BYTE1(v24) = v23;
      v26 = v27 >> 20;
      LOBYTE(v24) = 5;
      if ( !RtlpHpVaMgrRangeCreate(BugCheckParameter2, v22, &v24) )
      {
        RtlpHpEnvFreeVA((ULONG_PTR *)&v28, &v27, 0x8000);
        return v4;
      }
      *a2 = v21;
    }
    return v20;
  }
  else
  {
    v8 = v3 >> 20;
    v9 = RtlpHpAcquireLockExclusive((int *)BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1, a3);
    v10 = (unsigned __int64 *)RtlpHpVaMgrRangeFind(
                                BugCheckParameter2,
                                (unsigned __int16)v8,
                                (unsigned __int16)(a3 >> 20),
                                &v27);
    v11 = (__int64)v10;
    if ( v10 )
    {
      RtlRbRemoveNode((unsigned __int64 *)(BugCheckParameter2 + 8), v10);
      v12 = v27;
      if ( v27 != v11 )
      {
        *(_OWORD *)v11 = 0LL;
        *(_QWORD *)(v11 + 16) = 0LL;
        *(_BYTE *)v11 = 1;
        *(_BYTE *)(v11 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
        RtlpHpVaMgrRangeSplit(BugCheckParameter2, v11, (__int64)(v12 - v11) >> 5);
        RtlpHpVaMgrFree(BugCheckParameter2, v11);
        v11 = v12;
      }
    }
    else
    {
      RtlpHpReleaseLockExclusive(BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1, v9);
      v11 = RtlpHpVaMgrRegionAllocate(BugCheckParameter2);
      if ( !v11 )
        return v4;
      v9 = RtlpHpAcquireLockExclusive((int *)BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1, v15);
    }
    v4 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 8LL)
       + ((unsigned __int64)(v11 - *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 24LL) << 20);
    *(_OWORD *)v11 = 0LL;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_BYTE *)v11 = 1;
    *(_BYTE *)(v11 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
    if ( *(_WORD *)(v11 + 24) > (unsigned __int16)v8 )
    {
      v13 = RtlpHpVaMgrRangeSplit(BugCheckParameter2, v11, (unsigned __int16)v8);
      RtlpHpVaMgrFree(BugCheckParameter2, v13);
    }
    RtlpHpReleaseLockExclusive(BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1, v9);
  }
  return v4;
}
