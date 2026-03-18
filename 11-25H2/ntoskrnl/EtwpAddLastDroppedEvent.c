/*
 * XREFs of EtwpAddLastDroppedEvent @ 0x1403E4470
 * Callers:
 *     EtwpFinalizeHeader @ 0x140992E74 (EtwpFinalizeHeader.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x1403E4578 (EtwpQueryUsedProcessorCount.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     EtwpAddEventToBuffer @ 0x1409934AC (EtwpAddEventToBuffer.c)
 */

__int64 __fastcall EtwpAddLastDroppedEvent(__int64 a1, __int64 a2, __int64 a3)
{
  int UsedProcessorCount; // eax
  __int64 v5; // rdx
  int v6; // r9d
  __int64 v7; // r10
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v12; // eax
  unsigned int *v13; // rdx
  char v14; // [rsp+50h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 1568) )
    return 3221225659LL;
  UsedProcessorCount = EtwpQueryUsedProcessorCount(a1, a2, a3, (unsigned int)(a3 - *(_DWORD *)(a2 + 48)));
  v8 = EtwpAddEventToBuffer(v7, 82LL, v5 + 88, *(_QWORD *)(a1 + 1568), 8 * UsedProcessorCount + 8, v6, &v14);
  if ( !v8 )
    return 3221225990LL;
  v12 = EtwpQueryUsedProcessorCount(a1, v8, v9, v10);
  *v13 = v12;
  memmove(v13 + 2, *(const void **)(a1 + 1568), 8LL * v12);
  return 0LL;
}
