/*
 * XREFs of ValidateSegmentForAcquisitionOfResource @ 0x1400A8FF4
 * Callers:
 *     ?AcquireTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400A8C98 (-AcquireTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateSegmentForAcquisitionOfResource(__int64 a1, __int64 *a2, unsigned int a3, int a4, char a5)
{
  __int64 v5; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v10; // rbp
  int v11; // eax
  int v13; // edx
  __int64 v14; // rdi
  __int64 v15; // rcx
  _QWORD *v16; // rax

  v5 = *(_QWORD *)(a1 + 1648);
  v7 = *a2;
  v8 = 4097LL;
  v10 = *(_QWORD *)(v5 + 8LL * a3);
  if ( (*(_DWORD *)(v10 + 104) & 0x1001) != 0 )
  {
    if ( a4 == 1 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(4097LL);
        WdLogGlobalForLineNumber = 1645;
      }
      return 3221225473LL;
    }
  }
  else if ( (*(_DWORD *)(v7 + 28) & 0x20000) != 0 && *(_DWORD *)(v7 + 184) || (*(_DWORD *)(v7 + 28) & 0x10000) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(4097LL);
      WdLogGlobalForLineNumber = 1654;
    }
    return 3221225473LL;
  }
  if ( a4 != 2 || (*(_DWORD *)(v10 + 104) & 0x1001) != 0 )
  {
    if ( *(int *)(v7 + 184) > 0 )
    {
      v13 = *(_DWORD *)(v10 + 104);
      if ( (v13 & 0x1001) == 0 )
      {
        if ( *(_BYTE *)(v7 + 40) )
        {
          v14 = a1 + 48;
          v8 = **(unsigned int **)(v7 + 376);
          if ( (v8 & 4) != 0 && (v8 = *(_QWORD *)(*(_QWORD *)v14 + 24LL), (*(_DWORD *)(v8 + 444) & 8) == 0)
            || (v13 & 0x2004) == 0 )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(v8);
              WdLogGlobalForLineNumber = 1692;
              v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v15);
              v16[3] = (**(_DWORD **)(v7 + 376) >> 2) & 1;
              v16[4] = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 24LL) + 444LL) >> 3) & 1;
              v16[5] = (*(_DWORD *)(v10 + 104) >> 2) & 1;
              v16[6] = (*(_DWORD *)(v10 + 104) >> 13) & 1;
              WdLogGlobalForLineNumber = 1697;
            }
            return 3221225473LL;
          }
        }
        else if ( a4 != 1 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(4097LL);
            WdLogGlobalForLineNumber = 1705;
          }
          return 3221225473LL;
        }
      }
    }
    if ( a5 )
      v11 = *((_DWORD *)a2 + 9);
    else
      v11 = *((_DWORD *)a2 + 10);
    if ( _bittest(&v11, a3) )
      return 0LL;
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v8);
      WdLogGlobalForLineNumber = 1719;
    }
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(4097LL);
    WdLogGlobalForLineNumber = 1667;
  }
  return 3221225473LL;
}
