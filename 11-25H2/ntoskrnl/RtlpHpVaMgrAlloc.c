/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x1403CBCE4
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x1403CBC48 (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140212CB0 (RtlpHpAcquireLockExclusive.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     RtlpHpEnvFreeVA @ 0x1402FAA1C (RtlpHpEnvFreeVA.c)
 *     RtlpHpReleaseLockExclusive @ 0x14031FBD0 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpVaMgrRangeFind @ 0x1403CBEC8 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x1403CC01C (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x1403CC0A0 (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x1403CC128 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrRangeSplit @ 0x1403CC218 (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrFree @ 0x1403CC694 (RtlpHpVaMgrFree.c)
 */

__int64 __fastcall RtlpHpVaMgrAlloc(ULONG_PTR BugCheckParameter2, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rdi
  unsigned __int64 v8; // r14
  char v9; // r15
  _RTL_BALANCED_NODE *v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // r14
  __int64 v21; // rdx
  char v22; // al
  __int128 v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h]
  unsigned __int64 v25; // [rsp+48h] [rbp-8h]
  unsigned __int64 v26; // [rsp+80h] [rbp+30h] BYREF
  __int64 v27; // [rsp+88h] [rbp+38h] BYREF

  v3 = *a2;
  v4 = 0LL;
  v26 = 0LL;
  if ( !v3 )
    __int2c();
  if ( v3 > *(unsigned __int16 *)(BugCheckParameter2 + 40) << 20 )
  {
    v15 = *(unsigned __int8 *)(BugCheckParameter2 + 46);
    v16 = 0x200000LL;
    if ( a3 > 0x200000 )
      v16 = a3;
    v17 = (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[(v15 >> 1) & 7];
    if ( v16 > v17 )
      v17 = v16;
    v26 = v3 + v17 - ((v17 - 1) & (v17 + v3 - 1)) - 1;
    v18 = RtlpHpVaMgrAllocAligned(BugCheckParameter2, &v26);
    v27 = v18;
    v19 = v18;
    if ( v18 )
    {
      v20 = v26;
      v24 = 0LL;
      v21 = v18;
      v22 = *(_BYTE *)(BugCheckParameter2 + 44);
      v23 = 0LL;
      BYTE1(v23) = v22;
      v25 = v26 >> 20;
      LOBYTE(v23) = 5;
      if ( !RtlpHpVaMgrRangeCreate(BugCheckParameter2, v21, &v23) )
      {
        RtlpHpEnvFreeVA((unsigned __int64 *)&v27, &v26, 0x8000LL);
        return v4;
      }
      *a2 = v20;
    }
    return v19;
  }
  else
  {
    v8 = v3 >> 20;
    v9 = RtlpHpAcquireLockExclusive((int *)BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1);
    v10 = (_RTL_BALANCED_NODE *)RtlpHpVaMgrRangeFind(
                                  BugCheckParameter2,
                                  (unsigned __int16)v8,
                                  (unsigned __int16)(a3 >> 20),
                                  &v26);
    v11 = (__int64)v10;
    if ( v10 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(BugCheckParameter2 + 8), v10);
      v12 = v26;
      if ( v26 != v11 )
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
      v9 = RtlpHpAcquireLockExclusive((int *)BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1);
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
