/*
 * XREFs of RtlpPopulateListIndex @ 0x1405F0F44
 * Callers:
 *     RtlpCreateHeap @ 0x1404D0784 (RtlpCreateHeap.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405F025C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1405F056C (RtlpHeapHandleError.c)
 *     RtlpHeapAddListEntry @ 0x1405F0B88 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1405F0E50 (RtlpHeapRemoveListEntry.c)
 */

__int64 __fastcall RtlpPopulateListIndex(ULONG_PTR a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned int v6; // r8d
  __int64 v7; // rcx
  int v8; // ecx
  __int64 *i; // r14
  unsigned __int64 v10; // rsi
  __int64 j; // r15
  unsigned __int64 v12; // rcx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  *(_QWORD *)(a1 + 312) = a2;
  if ( *(_QWORD *)a2 )
  {
    v6 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24) - 1;
    v7 = 2 * v6;
    if ( !*(_DWORD *)(a2 + 12) )
      v7 = v6;
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v7) = 0LL;
    v8 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24);
    a3 = (unsigned __int64)(unsigned int)(v8 - 1) >> 5;
    result = (unsigned int)~(1 << ((v8 - 1) & 0x1F));
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + 4 * a3) &= result;
  }
  for ( i = *(__int64 **)(a1 + 344); (__int64 *)(a1 + 336) != i; i = (__int64 *)i[1] )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_DWORD *)i - 2) ^= *(_DWORD *)(a1 + 136);
      if ( *((_BYTE *)i - 5) != (*((_BYTE *)i - 8) ^ (unsigned __int8)(*((_BYTE *)i - 7) ^ *((_BYTE *)i - 6))) )
        RtlpAnalyzeHeapFailure(a1, (ULONG_PTR)(i - 2));
    }
    v10 = *((unsigned __int16 *)i - 4);
    for ( j = a2; ; j = *(_QWORD *)j )
    {
      v12 = *(unsigned int *)(j + 8);
      if ( v10 < v12 )
        break;
      if ( !*(_QWORD *)j )
      {
        LODWORD(v10) = v12 - 1;
        break;
      }
    }
    if ( *(_QWORD *)a2 )
    {
      v13 = *(_DWORD *)(a2 + 8);
      v14 = v13 - 1;
      if ( *((unsigned __int16 *)i - 4) < v13 )
        v14 = *((unsigned __int16 *)i - 4);
      RtlpHeapRemoveListEntry(a1, a2, a3, i, v14, *((unsigned __int16 *)i - 4));
    }
    result = RtlpHeapAddListEntry(a1, j, a3, (__int64)i, v10, *((unsigned __int16 *)i - 4));
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      result = *(unsigned int *)(*(_QWORD *)(j + 40)
                               + 4 * ((unsigned __int64)(unsigned int)(v10 - *(_DWORD *)(j + 24)) >> 5));
      if ( !_bittest((const int *)&result, ((_BYTE)v10 - *(_BYTE *)(j + 24)) & 0x1F) )
      {
        DbgPrint("RtlpGetBitState(LookupTable, (ULONG)(LookupIndex - LookupTable->BaseIndex))");
        RtlpHeapHandleError();
      }
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_BYTE *)i - 5) = *((_BYTE *)i - 8) ^ *((_BYTE *)i - 7) ^ *((_BYTE *)i - 6);
      *((_DWORD *)i - 2) ^= *(_DWORD *)(a1 + 136);
    }
  }
  return result;
}
