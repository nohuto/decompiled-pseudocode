/*
 * XREFs of MxMapPfnRange @ 0x140C550D8
 * Callers:
 *     MiCreateSparsePfnDatabase @ 0x140C53498 (MiCreateSparsePfnDatabase.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x1403FC38C (MiRestrictRangeToNode.c)
 *     MxMapVa @ 0x140C552D4 (MxMapVa.c)
 */

unsigned __int64 __fastcall MxMapPfnRange(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3)
{
  ULONG_PTR v4; // rsi
  ULONG_PTR v5; // r14
  ULONG_PTR v6; // rbx
  unsigned __int64 result; // rax
  __int64 v8; // rbx
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // r15
  __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbp
  int v15; // eax
  unsigned __int64 i; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+28h] [rbp-40h]
  int v18; // [rsp+2Ch] [rbp-3Ch]
  __int64 v19; // [rsp+30h] [rbp-38h]
  ULONG_PTR v20; // [rsp+38h] [rbp-30h]

  v18 = 0;
  v4 = a2;
  v5 = BugCheckParameter2;
  v6 = 48 * BugCheckParameter2 - 0x220000000000LL;
  result = v6 & 0xFFFFFFFFFFE00000uLL;
  if ( v6 == (v6 & 0xFFFFFFFFFFE00000uLL) )
  {
    v8 = 0LL;
  }
  else
  {
    result = 0xFFFFF68000000000uLL;
    v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  if ( a2 == -1LL
    || (result = (48 * (BugCheckParameter2 + a2) - 0x220000000000LL) & 0xFFFFFFFFFFE00000uLL,
        48 * (BugCheckParameter2 + a2) - 0x220000000000LL == result) )
  {
    v9 = 0LL;
  }
  else
  {
    result = 0xFFFFF68000000000uLL;
    v9 = (((48 * (BugCheckParameter2 + a2) - 0x220000000001LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  v19 = v8;
  v20 = v9;
  if ( a2 )
  {
    do
    {
      v10 = v4;
      if ( v4 == -1LL )
      {
        v4 = 0LL;
        v11 = MmPfnDatabase + (MxPfnAllocation << 12);
      }
      else
      {
        v10 = MiRestrictRangeToNode(v5, v4);
        v4 -= v10;
        v11 = 48 * (v10 + v5) - 0x220000000000LL;
      }
      v17 = MiPageToNode(v5);
      v12 = ((48 * v5 - 0x220000000000LL) >> 9) & 0x7FFFFFFFF8LL;
      v5 += v10;
      v13 = v12 - 0x98000000000LL;
      v14 = (((unsigned __int64)(v11 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      result = (__int64)(v13 << 25) >> 16;
      for ( i = result; v13 <= v14; v13 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
        if ( v13 == v8 || (v15 = a3, v13 == v9) )
          v15 = 1;
        v18 = v15;
        MxMapVa(&i);
        result = 0xFFFFF68000000000uLL;
      }
    }
    while ( v4 );
  }
  return result;
}
