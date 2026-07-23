/*
 * XREFs of HvWriteLogFile @ 0x140968C2C
 * Callers:
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpDoFileSetSizeEx @ 0x1409696C4 (CmpDoFileSetSizeEx.c)
 *     CmpFileFlushAndPurge @ 0x140969824 (CmpFileFlushAndPurge.c)
 *     CmpTraceHiveFlushWroteLogFile @ 0x1409699D4 (CmpTraceHiveFlushWroteLogFile.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140969A74 (HvpLogTypeToLogArrayIndex.c)
 */

__int64 __fastcall HvWriteLogFile(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // r10
  __int64 v7; // r12
  unsigned int v8; // ebp
  __int64 v9; // rsi
  _QWORD *v10; // rdx
  __int64 v11; // r8
  __int64 i; // rdi
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // eax
  _DWORD *v17; // r14

  if ( (*(_DWORD *)(a1 + 160) & 0x8001) != 0 )
    return 0LL;
  v6 = *(unsigned int *)(a1 + 168);
  if ( !(_DWORD)v6 || !*(_QWORD *)(a1 + 8 * v6 + 1544) )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 1712);
  v8 = *(_DWORD *)(a1 + 1720);
  v9 = *(unsigned int *)(a1 + 1724);
  if ( (_DWORD)v6 == 1 || (_DWORD)v6 == 4 )
  {
    v10 = (_QWORD *)(a1 + 1808);
  }
  else if ( (_DWORD)v6 == 5 )
  {
    v10 = (_QWORD *)(a1 + 1816);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = v9 + *(unsigned int *)(a1 + 180);
  if ( v11 > *v10 )
    CmpDoFileSetSizeEx(a1, (unsigned int)v6, v11, 1LL);
  for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
  {
    v17 = (_DWORD *)(v7 + 24 * i);
    *v17 = *(_DWORD *)(a1 + 180);
    result = guard_dispatch_icall_no_overrides(a1, *(unsigned int *)(a1 + 168));
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 180) += v17[4];
  }
  result = CmpFileFlushAndPurge(a1, *(unsigned int *)(a1 + 168));
  if ( (int)result >= 0 )
  {
    ++*(_DWORD *)(a1 + 172);
    v16 = HvpLogTypeToLogArrayIndex(*(unsigned int *)(a1 + 168), v14, v15);
    *(_BYTE *)(v16 + a1 + 192) = 1;
    CmpTraceHiveFlushWroteLogFile(v16, (unsigned int)v9);
    *a4 = v9;
    return 0LL;
  }
  return result;
}
