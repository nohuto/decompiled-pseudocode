/*
 * XREFs of SdbpInitializeSearchDBContext @ 0x140805650
 * Callers:
 *     SdbpCheckMatchingDir @ 0x140803330 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x1408034C0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x140803EB0 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140804270 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SdbpGetProcessHistory @ 0x140806500 (SdbpGetProcessHistory.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1409431D4 (SdbpCreateSearchPathPartsFromPath.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpInitializeSearchDBContext(__int64 a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  __int64 ProcessHistory; // r15
  const char *v4; // r9
  int v5; // r8d
  __int64 v6; // rbx
  __int64 v7; // rdi
  void *v8; // rax
  __int64 v9; // rsi
  size_t v10; // rdi

  v1 = a1;
  if ( *(_QWORD *)(a1 + 72) )
    return 1LL;
  ProcessHistory = *(_QWORD *)(a1 + 64);
  if ( !ProcessHistory )
  {
    if ( (*(_DWORD *)a1 & 2) != 0 || (a1 = *(_QWORD *)(a1 + 56)) == 0 )
    {
      v6 = -1LL;
      v7 = -1LL;
      do
        ++v7;
      while ( *(_WORD *)(*(_QWORD *)(v1 + 32) + 2 * v7) );
      do
        ++v6;
      while ( *(_WORD *)(*(_QWORD *)(v1 + 40) + 2 * v6) );
      v8 = (void *)AslAlloc(a1, 2LL * (unsigned int)(v6 + v7 + 1));
      ProcessHistory = (__int64)v8;
      if ( !v8 )
      {
        v4 = "Failed to allocate process history buffer";
        v5 = 570;
        goto LABEL_13;
      }
      v9 = (unsigned int)v7;
      v10 = 2LL * (unsigned int)v7;
      memmove(v8, *(const void **)(v1 + 32), v10);
      memmove((void *)(v10 + ProcessHistory), *(const void **)(v1 + 40), 2LL * (unsigned int)v6);
      *(_WORD *)(ProcessHistory + 2 * ((unsigned int)v6 + v9)) = 0;
    }
    else
    {
      ProcessHistory = SdbpGetProcessHistory(a1, *(_QWORD *)(v1 + 32), *(_QWORD *)(v1 + 40));
      if ( !ProcessHistory )
      {
        v4 = "Failed to retrieve process history";
        v5 = 585;
LABEL_13:
        AslLogCallPrintf(1, (unsigned int)"SdbpInitializeSearchDBContext", v5, (_DWORD)v4);
        return 0LL;
      }
    }
  }
  *(_QWORD *)(v1 + 64) = ProcessHistory;
  result = SdbpCreateSearchPathPartsFromPath(ProcessHistory, v1 + 72);
  if ( (_DWORD)result )
    *(_DWORD *)v1 |= 1u;
  return result;
}
