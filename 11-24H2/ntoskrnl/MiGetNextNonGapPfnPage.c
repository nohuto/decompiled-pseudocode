/*
 * XREFs of MiGetNextNonGapPfnPage @ 0x14066E798
 * Callers:
 *     MiFreedUnusedPfnPagesDpc @ 0x14066E238 (MiFreedUnusedPfnPagesDpc.c)
 *     MiGetFileOnlyRanges @ 0x14066E544 (MiGetFileOnlyRanges.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14020FF30 (MiGetNextPageTable.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiSystemVaTypeToVm @ 0x1402FDE60 (MiSystemVaTypeToVm.c)
 */

__int64 __fastcall MiGetNextNonGapPfnPage(unsigned __int64 *a1, unsigned __int64 *a2, char a3, int a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r13
  struct _LIST_ENTRY **v8; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r15
  unsigned __int64 i; // r12
  unsigned __int64 NextPageTable; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 LeafVa; // r12
  __int64 v17; // rsi
  unsigned int v19; // [rsp+30h] [rbp-48h] BYREF
  int v20; // [rsp+34h] [rbp-44h]
  struct _LIST_ENTRY **v21; // [rsp+38h] [rbp-40h]

  v4 = *a1;
  v5 = 0LL;
  v19 = 0;
  if ( !v4 )
    v4 = (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( *a2 )
  {
    v6 = v4 + 8 * (*a2 >> 12);
    v7 = (__int64)(v6 << 25) >> 16;
LABEL_6:
    v6 -= 8LL;
    goto LABEL_7;
  }
  v7 = 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL;
  v6 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( ((v7 >> 9) & 0xFF8) == 0 )
    goto LABEL_6;
LABEL_7:
  v20 = a4 != 0 ? 7 : 3;
  v8 = MiSystemVaTypeToVm(3);
  v21 = v8;
  v9 = 0LL;
  v10 = 0LL;
  i = 0LL;
LABEL_8:
  if ( v4 <= v6 )
  {
    if ( v9 )
    {
      MiUnlockPageTableInternal((__int64)v8, v9);
      v9 = 0LL;
    }
    NextPageTable = MiGetNextPageTable(v4, v6, a3, v20, &v19);
    v4 = NextPageTable;
    if ( !NextPageTable )
    {
LABEL_28:
      v8 = v21;
      goto LABEL_29;
    }
    if ( !a4 )
      v9 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !v19 )
    {
      while ( (*(_QWORD *)NextPageTable & 1) == 0
           || qword_140E37480[0] != (PVOID)qword_140E37498
           && (PVOID)((*(_QWORD *)NextPageTable >> 12) & 0xFFFFFFFFFFLL) == qword_140E37480[0] )
      {
        NextPageTable += 8LL;
        if ( NextPageTable > v6 || (NextPageTable & 0xFFF) == 0 )
        {
          v4 = NextPageTable;
          v8 = v21;
          goto LABEL_8;
        }
      }
      v10 = NextPageTable;
      for ( i = 4096LL; ; i += 4096LL )
      {
        NextPageTable += 8LL;
        if ( NextPageTable > v6
          || (NextPageTable & 0xFFF) == 0
          || (*(_QWORD *)NextPageTable & 1) == 0
          || qword_140E37480[0] != (PVOID)qword_140E37498
          && (PVOID)((*(_QWORD *)NextPageTable >> 12) & 0xFFFFFFFFFFLL) == qword_140E37480[0] )
        {
          break;
        }
      }
      goto LABEL_28;
    }
    v10 = NextPageTable;
    v14 = NextPageTable;
    v15 = v19;
    do
    {
      if ( v9 )
        v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v15;
    }
    while ( v15 );
    LeafVa = MiGetLeafVa(v14 + 8);
    i = LeafVa - MiGetLeafVa(v4);
    v8 = v21;
    v17 = (__int64)(v6 - v4) >> 3;
    if ( i >> 12 > v17 + 1 )
      i = (v17 + 1) << 12;
  }
LABEL_29:
  if ( v9 )
    MiUnlockPageTableInternal((__int64)v8, v9);
  if ( v10 )
  {
    v4 = v10 + 8 * (i >> 12);
    v13 = (__int64)(v10 << 25) >> 16;
    v5 = v7 - v13;
    if ( i + v13 <= v7 )
      v5 = i;
  }
  else
  {
    v13 = 0LL;
  }
  *a2 = v5;
  *a1 = v4;
  return v13;
}
