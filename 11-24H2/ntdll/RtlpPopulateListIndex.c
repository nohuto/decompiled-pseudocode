/*
 * XREFs of RtlpPopulateListIndex @ 0x18000C23C
 * Callers:
 *     RtlpExtendListLookup @ 0x18000C7B8 (RtlpExtendListLookup.c)
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x18000C420 (RtlpHeapAddListEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x18000F610 (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpHeapHandleError @ 0x180010460 (RtlpHeapHandleError.c)
 */

__int64 __fastcall RtlpPopulateListIndex(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 i; // rbp
  unsigned __int64 v9; // rsi
  __int64 *j; // r15
  unsigned __int64 v11; // rcx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  *(_QWORD *)(a1 + 312) = a2;
  if ( *a2 )
  {
    v5 = *((_DWORD *)a2 + 2) - *((_DWORD *)a2 + 6) - 1;
    v6 = 2 * v5;
    if ( !*((_DWORD *)a2 + 3) )
      v6 = v5;
    *(_QWORD *)(a2[6] + 8 * v6) = 0LL;
    v7 = (unsigned __int64)(unsigned int)(*((_DWORD *)a2 + 2) - *((_DWORD *)a2 + 6) - 1) >> 5;
    result = (unsigned int)~(1 << ((*((_BYTE *)a2 + 8) - *((_BYTE *)a2 + 24) - 1) & 0x1F));
    *(_DWORD *)(a2[5] + 4 * v7) &= result;
  }
  for ( i = *(_QWORD *)(a1 + 344); a1 + 336 != i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(i - 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(i - 5) != (*(_BYTE *)(i - 8) ^ (unsigned __int8)(*(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6))) )
        RtlpAnalyzeHeapFailure(a1, i - 16);
    }
    v9 = *(unsigned __int16 *)(i - 8);
    for ( j = a2; ; j = (__int64 *)*j )
    {
      v11 = *((unsigned int *)j + 2);
      if ( v9 < v11 )
        break;
      if ( !*j )
      {
        LODWORD(v9) = v11 - 1;
        break;
      }
    }
    if ( *a2 )
    {
      v12 = *((_DWORD *)a2 + 2);
      v13 = v12 - 1;
      if ( *(unsigned __int16 *)(i - 8) < v12 )
        v13 = *(unsigned __int16 *)(i - 8);
      RtlpHeapRemoveListEntry(a1, (_DWORD)a2, 1, i, v13, *(unsigned __int16 *)(i - 8));
    }
    result = RtlpHeapAddListEntry(a1, (_DWORD)j, 1, i, v9, *(unsigned __int16 *)(i - 8));
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      result = *(unsigned int *)(j[5] + 4 * ((unsigned __int64)(unsigned int)(v9 - *((_DWORD *)j + 6)) >> 5));
      if ( !_bittest((const int *)&result, ((_BYTE)v9 - *((_BYTE *)j + 24)) & 0x1F) )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("RtlpGetBitState(LookupTable, (ULONG)(LookupIndex - LookupTable->BaseIndex))");
        result = RtlpHeapHandleError(1LL);
      }
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(i - 5) = *(_BYTE *)(i - 8) ^ *(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6);
      result = *(unsigned int *)(a1 + 136);
      *(_DWORD *)(i - 8) ^= result;
    }
  }
  return result;
}
