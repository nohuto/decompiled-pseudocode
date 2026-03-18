/*
 * XREFs of EvictAllocationCallback @ 0x14009E390
 * Callers:
 *     ?IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6A_N11@Z@Z @ 0x140104064 (-IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6A_N11@Z@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

char __fastcall EvictAllocationCallback(_BYTE *a1, _QWORD *a2)
{
  char v2; // bl
  __int64 v4; // rdi
  struct _KTHREAD **v5; // rbp
  _QWORD **v6; // rdi
  _QWORD *v7; // rdx
  _QWORD *i; // r8
  _QWORD *v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // r9
  char result; // al

  v2 = 0;
  if ( !a2 )
    return 1;
  v4 = *a2;
  if ( *(_DWORD *)(*(_QWORD *)(*a2 + 392LL) + 16LL)
    || (**(_DWORD **)(v4 + 392) & 0x20000) != 0
    || (*(_DWORD *)(v4 + 24) & 0x100) != 0 )
  {
    if ( a2[8] )
    {
      WdLogSingleEntry1(3LL, *a2);
      result = 0;
      WdLogGlobalForLineNumber = 5333;
      a1[8] = 0;
      return result;
    }
    return 1;
  }
  if ( !a2[8] )
    return 1;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = v4;
    WdLogGlobalForLineNumber = 5291;
  }
  v5 = (struct _KTHREAD **)(v4 + 136);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v4 + 136));
  v6 = (_QWORD **)(v4 + 112);
  v7 = *v6;
LABEL_9:
  if ( v7 == v6 )
  {
    v2 = 1;
  }
  else
  {
    for ( i = (_QWORD *)*(v7 - 2); ; i = (_QWORD *)*i )
    {
      if ( i == v7 - 2 )
      {
        v7 = (_QWORD *)*v7;
        goto LABEL_9;
      }
      v9 = (_QWORD *)*(i - 4);
      if ( !v9[3] || (*(_DWORD *)(v9[1] + 96LL) & 2) != 0 )
        break;
      v10 = v9 + 23;
      if ( !v9[23] )
      {
        v11 = *(_QWORD *)a1;
        v12 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
        if ( *v12 != *(_QWORD *)a1 )
          __fastfail(3u);
        *v10 = v11;
        v10[1] = v12;
        *v12 = v10;
        *(_QWORD *)(v11 + 8) = v10;
      }
    }
    a1[8] = 0;
  }
  DXGFASTMUTEX::Release(v5);
  return v2;
}
